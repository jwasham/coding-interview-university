<html>
<style>
    body {
        font-family: courier, fixed, sans-serif;
    }
    h1 {
        font-size: 1.25em;
    }
    table, td {
        border: 1px #cccccc solid;
    }
    table {
        border-collapse: collapse;
    }
    td, th {
        padding: 0.3em 1em;
        font-size: 0.85em;
    }
    tbody tr:nth-child(odd) {
        background-color: #f3f3f3; /* zebra stripes */
    }
</style>

<body>
<h1>Bits Cheat Sheet</h1>

<table>
    <thead>
        <tr>
            <th>&nbsp;</th>
            <th>2<sup>n</sup></th>
            <th>Bits</th>
            <th>Max unsigned int</th>
            <th>Min signed int</th>
            <th>Max signed int</th>
        </tr>
    </thead>
    <tbody>
        <? foreach(range(1, 32) as $b): ?>
            <tr>
                <td>2<sup><?=$b ?></sup></td>
                <td><?=number_format(pow(2, $b)) ?></td>
                <td><?=$b ?></td>
                <td><?=number_format(pow(2, $b) - 1) ?></td>
                <td><? $num = pow(2, $b) / 2 * -1 ?><?=number_format($num) ?></td>
                <td><? $num = pow(2, $b) / 2 - 1 ?><?=number_format($num) ?></td>
            </tr>
        <? endforeach; ?>
    </tbody>
</table>

</body>
</html>