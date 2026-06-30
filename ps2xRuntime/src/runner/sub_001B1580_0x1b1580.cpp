#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B1580
// Address: 0x1b1580 - 0x1b1798
void sub_001B1580_0x1b1580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B1580_0x1b1580");
#endif

    switch (ctx->pc) {
        case 0x1b1670u: goto label_1b1670;
        case 0x1b1688u: goto label_1b1688;
        case 0x1b16a0u: goto label_1b16a0;
        case 0x1b16b8u: goto label_1b16b8;
        case 0x1b16d0u: goto label_1b16d0;
        case 0x1b16e8u: goto label_1b16e8;
        case 0x1b16f8u: goto label_1b16f8;
        case 0x1b1718u: goto label_1b1718;
        case 0x1b1720u: goto label_1b1720;
        case 0x1b1728u: goto label_1b1728;
        default: break;
    }

    ctx->pc = 0x1b1580u;

    // 0x1b1580: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1b1580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1b1584: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1b1584u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1b1588: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b1588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b158c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1b158cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1b1590: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1b1590u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1594: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1b1594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1b1598: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x1b1598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x1b159c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b159cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b15a0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1b15a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1b15a4: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1b15a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1b15a8: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1b15a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x1b15ac: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x1b15acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x1b15b0: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x1b15b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x1b15b4: 0x8c439bc0  lw          $v1, -0x6440($v0)
    ctx->pc = 0x1b15b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941632)));
    // 0x1b15b8: 0x8e452030  lw          $a1, 0x2030($s2)
    ctx->pc = 0x1b15b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8240)));
    // 0x1b15bc: 0x24a60004  addiu       $a2, $a1, 0x4
    ctx->pc = 0x1b15bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1b15c0: 0x24b11128  addiu       $s1, $a1, 0x1128
    ctx->pc = 0x1b15c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 4392));
    // 0x1b15c4: 0x24b31150  addiu       $s3, $a1, 0x1150
    ctx->pc = 0x1b15c4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 5), 4432));
    // 0x1b15c8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B15C8u;
    {
        const bool branch_taken_0x1b15c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B15CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B15C8u;
            // 0x1b15cc: 0x24be11f8  addiu       $fp, $a1, 0x11F8 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 5), 4600));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b15c8) {
            ctx->pc = 0x1B15D8u;
            goto label_1b15d8;
        }
    }
    ctx->pc = 0x1B15D0u;
    // 0x1b15d0: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x1B15D0u;
    {
        const bool branch_taken_0x1b15d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B15D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B15D0u;
            // 0x1b15d4: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b15d0) {
            ctx->pc = 0x1B1764u;
            goto label_1b1764;
        }
    }
    ctx->pc = 0x1B15D8u;
label_1b15d8:
    // 0x1b15d8: 0x8cc4000c  lw          $a0, 0xC($a2)
    ctx->pc = 0x1b15d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x1b15dc: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x1b15dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1b15e0: 0x8ca70028  lw          $a3, 0x28($a1)
    ctx->pc = 0x1b15e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x1b15e4: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x1b15e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1b15e8: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1b15e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1b15ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b15ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b15f0: 0x227c2  srl         $a0, $v0, 31
    ctx->pc = 0x1b15f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x1b15f4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1b15f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1b15f8: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1b15f8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x1b15fc: 0x14e0000a  bnez        $a3, . + 4 + (0xA << 2)
    ctx->pc = 0x1B15FCu;
    {
        const bool branch_taken_0x1b15fc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B1600u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B15FCu;
            // 0x1b1600: 0x24542800  addiu       $s4, $v0, 0x2800 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 10240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b15fc) {
            ctx->pc = 0x1B1628u;
            goto label_1b1628;
        }
    }
    ctx->pc = 0x1B1604u;
    // 0x1b1604: 0x8cc20010  lw          $v0, 0x10($a2)
    ctx->pc = 0x1b1604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x1b1608: 0x2404ffc0  addiu       $a0, $zero, -0x40
    ctx->pc = 0x1b1608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x1b160c: 0x2442003f  addiu       $v0, $v0, 0x3F
    ctx->pc = 0x1b160cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 63));
    // 0x1b1610: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x1b1610u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x1b1614: 0x541821  addu        $v1, $v0, $s4
    ctx->pc = 0x1b1614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x1b1618: 0xaca20028  sw          $v0, 0x28($a1)
    ctx->pc = 0x1b1618u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 2));
    // 0x1b161c: 0x2463003f  addiu       $v1, $v1, 0x3F
    ctx->pc = 0x1b161cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
    // 0x1b1620: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1B1620u;
    {
        const bool branch_taken_0x1b1620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1620u;
            // 0x1b1624: 0x641024  and         $v0, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1620) {
            ctx->pc = 0x1B1644u;
            goto label_1b1644;
        }
    }
    ctx->pc = 0x1B1628u;
label_1b1628:
    // 0x1b1628: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x1b1628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x1b162c: 0x2404ffc0  addiu       $a0, $zero, -0x40
    ctx->pc = 0x1b162cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x1b1630: 0x24e3003f  addiu       $v1, $a3, 0x3F
    ctx->pc = 0x1b1630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 63));
    // 0x1b1634: 0x2442003f  addiu       $v0, $v0, 0x3F
    ctx->pc = 0x1b1634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 63));
    // 0x1b1638: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1b1638u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1b163c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x1b163cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x1b1640: 0xaca30028  sw          $v1, 0x28($a1)
    ctx->pc = 0x1b1640u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 3));
label_1b1644:
    // 0x1b1644: 0xaca2002c  sw          $v0, 0x2C($a1)
    ctx->pc = 0x1b1644u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 2));
    // 0x1b1648: 0x8cb6002c  lw          $s6, 0x2C($a1)
    ctx->pc = 0x1b1648u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x1b164c: 0x2404ffc0  addiu       $a0, $zero, -0x40
    ctx->pc = 0x1b164cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x1b1650: 0x8cb00028  lw          $s0, 0x28($a1)
    ctx->pc = 0x1b1650u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x1b1654: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1b1654u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1b1658: 0x3442003f  ori         $v0, $v0, 0x3F
    ctx->pc = 0x1b1658u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63);
    // 0x1b165c: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x1b165cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x1b1660: 0x44a824  and         $s5, $v0, $a0
    ctx->pc = 0x1b1660u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x1b1664: 0x26a3104f  addiu       $v1, $s5, 0x104F
    ctx->pc = 0x1b1664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4175));
    // 0x1b1668: 0xc06cf70  jal         func_1B3DC0
    ctx->pc = 0x1B1668u;
    SET_GPR_U32(ctx, 31, 0x1B1670u);
    ctx->pc = 0x1B166Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1668u;
            // 0x1b166c: 0x64b824  and         $s7, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 23, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3DC0u;
    if (runtime->hasFunction(0x1B3DC0u)) {
        auto targetFn = runtime->lookupFunction(0x1B3DC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1670u; }
        if (ctx->pc != 0x1B1670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B3DC0_0x1b3dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1670u; }
        if (ctx->pc != 0x1B1670u) { return; }
    }
    ctx->pc = 0x1B1670u;
label_1b1670:
    // 0x1b1670: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b1670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b1674: 0x1043001e  beq         $v0, $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x1B1674u;
    {
        const bool branch_taken_0x1b1674 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1B1678u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1674u;
            // 0x1b1678: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1674) {
            ctx->pc = 0x1B16F0u;
            goto label_1b16f0;
        }
    }
    ctx->pc = 0x1B167Cu;
    // 0x1b167c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1b167cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1680: 0xc04241a  jal         func_109068
    ctx->pc = 0x1B1680u;
    SET_GPR_U32(ctx, 31, 0x1B1688u);
    ctx->pc = 0x1B1684u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1680u;
            // 0x1b1684: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x109068u;
    if (runtime->hasFunction(0x109068u)) {
        auto targetFn = runtime->lookupFunction(0x109068u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1688u; }
        if (ctx->pc != 0x1B1688u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00109068_0x109068(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1688u; }
        if (ctx->pc != 0x1B1688u) { return; }
    }
    ctx->pc = 0x1B1688u;
label_1b1688:
    // 0x1b1688: 0x3c06001b  lui         $a2, 0x1B
    ctx->pc = 0x1b1688u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)27 << 16));
    // 0x1b168c: 0x24c617a8  addiu       $a2, $a2, 0x17A8
    ctx->pc = 0x1b168cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 6056));
    // 0x1b1690: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1b1690u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1694: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b1694u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1698: 0xc0427a0  jal         func_109E80
    ctx->pc = 0x1B1698u;
    SET_GPR_U32(ctx, 31, 0x1B16A0u);
    ctx->pc = 0x1B169Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1698u;
            // 0x1b169c: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x109E80u;
    if (runtime->hasFunction(0x109E80u)) {
        auto targetFn = runtime->lookupFunction(0x109E80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B16A0u; }
        if (ctx->pc != 0x1B16A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00109E80_0x109e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B16A0u; }
        if (ctx->pc != 0x1B16A0u) { return; }
    }
    ctx->pc = 0x1B16A0u;
label_1b16a0:
    // 0x1b16a0: 0x3c06001b  lui         $a2, 0x1B
    ctx->pc = 0x1b16a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)27 << 16));
    // 0x1b16a4: 0x24c618b0  addiu       $a2, $a2, 0x18B0
    ctx->pc = 0x1b16a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 6320));
    // 0x1b16a8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1b16a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b16ac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b16acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b16b0: 0xc0427a0  jal         func_109E80
    ctx->pc = 0x1B16B0u;
    SET_GPR_U32(ctx, 31, 0x1B16B8u);
    ctx->pc = 0x1B16B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B16B0u;
            // 0x1b16b4: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x109E80u;
    if (runtime->hasFunction(0x109E80u)) {
        auto targetFn = runtime->lookupFunction(0x109E80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B16B8u; }
        if (ctx->pc != 0x1B16B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00109E80_0x109e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B16B8u; }
        if (ctx->pc != 0x1B16B8u) { return; }
    }
    ctx->pc = 0x1B16B8u;
label_1b16b8:
    // 0x1b16b8: 0x3c06001b  lui         $a2, 0x1B
    ctx->pc = 0x1b16b8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)27 << 16));
    // 0x1b16bc: 0x24c61958  addiu       $a2, $a2, 0x1958
    ctx->pc = 0x1b16bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 6488));
    // 0x1b16c0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1b16c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b16c4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1b16c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b16c8: 0xc0427a0  jal         func_109E80
    ctx->pc = 0x1B16C8u;
    SET_GPR_U32(ctx, 31, 0x1B16D0u);
    ctx->pc = 0x1B16CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B16C8u;
            // 0x1b16cc: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x109E80u;
    if (runtime->hasFunction(0x109E80u)) {
        auto targetFn = runtime->lookupFunction(0x109E80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B16D0u; }
        if (ctx->pc != 0x1B16D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00109E80_0x109e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B16D0u; }
        if (ctx->pc != 0x1B16D0u) { return; }
    }
    ctx->pc = 0x1B16D0u;
label_1b16d0:
    // 0x1b16d0: 0x3c06001b  lui         $a2, 0x1B
    ctx->pc = 0x1b16d0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)27 << 16));
    // 0x1b16d4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1b16d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b16d8: 0x24c61980  addiu       $a2, $a2, 0x1980
    ctx->pc = 0x1b16d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 6528));
    // 0x1b16dc: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1b16dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b16e0: 0xc0427a0  jal         func_109E80
    ctx->pc = 0x1B16E0u;
    SET_GPR_U32(ctx, 31, 0x1B16E8u);
    ctx->pc = 0x1B16E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B16E0u;
            // 0x1b16e4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x109E80u;
    if (runtime->hasFunction(0x109E80u)) {
        auto targetFn = runtime->lookupFunction(0x109E80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B16E8u; }
        if (ctx->pc != 0x1B16E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00109E80_0x109e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B16E8u; }
        if (ctx->pc != 0x1B16E8u) { return; }
    }
    ctx->pc = 0x1B16E8u;
label_1b16e8:
    // 0x1b16e8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1B16E8u;
    {
        const bool branch_taken_0x1b16e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B16ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B16E8u;
            // 0x1b16ec: 0x26300070  addiu       $s0, $s1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b16e8) {
            ctx->pc = 0x1B16FCu;
            goto label_1b16fc;
        }
    }
    ctx->pc = 0x1B16F0u;
label_1b16f0:
    // 0x1b16f0: 0xc06c696  jal         func_1B1A58
    ctx->pc = 0x1B16F0u;
    SET_GPR_U32(ctx, 31, 0x1B16F8u);
    ctx->pc = 0x1B16F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B16F0u;
            // 0x1b16f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B1A58u;
    if (runtime->hasFunction(0x1B1A58u)) {
        auto targetFn = runtime->lookupFunction(0x1B1A58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B16F8u; }
        if (ctx->pc != 0x1B16F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B1A58_0x1b1a58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B16F8u; }
        if (ctx->pc != 0x1B16F8u) { return; }
    }
    ctx->pc = 0x1B16F8u;
label_1b16f8:
    // 0x1b16f8: 0x26300070  addiu       $s0, $s1, 0x70
    ctx->pc = 0x1b16f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
label_1b16fc:
    // 0x1b16fc: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1b16fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1700: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x1b1700u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1704: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x1b1704u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1708: 0x24070100  addiu       $a3, $zero, 0x100
    ctx->pc = 0x1b1708u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1b170c: 0x24090200  addiu       $t1, $zero, 0x200
    ctx->pc = 0x1b170cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1b1710: 0xc06c29e  jal         func_1B0A78
    ctx->pc = 0x1B1710u;
    SET_GPR_U32(ctx, 31, 0x1B1718u);
    ctx->pc = 0x1B1714u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1710u;
            // 0x1b1714: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0A78u;
    if (runtime->hasFunction(0x1B0A78u)) {
        auto targetFn = runtime->lookupFunction(0x1B0A78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1718u; }
        if (ctx->pc != 0x1B1718u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0A78_0x1b0a78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1718u; }
        if (ctx->pc != 0x1B1718u) { return; }
    }
    ctx->pc = 0x1B1718u;
label_1b1718:
    // 0x1b1718: 0xc06c37c  jal         func_1B0DF0
    ctx->pc = 0x1B1718u;
    SET_GPR_U32(ctx, 31, 0x1B1720u);
    ctx->pc = 0x1B171Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1718u;
            // 0x1b171c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0DF0u;
    if (runtime->hasFunction(0x1B0DF0u)) {
        auto targetFn = runtime->lookupFunction(0x1B0DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1720u; }
        if (ctx->pc != 0x1B1720u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0DF0_0x1b0df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1720u; }
        if (ctx->pc != 0x1B1720u) { return; }
    }
    ctx->pc = 0x1B1720u;
label_1b1720:
    // 0x1b1720: 0xc06c3fc  jal         func_1B0FF0
    ctx->pc = 0x1B1720u;
    SET_GPR_U32(ctx, 31, 0x1B1728u);
    ctx->pc = 0x1B1724u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1720u;
            // 0x1b1724: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0FF0u;
    if (runtime->hasFunction(0x1B0FF0u)) {
        auto targetFn = runtime->lookupFunction(0x1B0FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1728u; }
        if (ctx->pc != 0x1B1728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0FF0_0x1b0ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1728u; }
        if (ctx->pc != 0x1B1728u) { return; }
    }
    ctx->pc = 0x1B1728u;
label_1b1728:
    // 0x1b1728: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b1728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b172c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1b172cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b1730: 0xa2200010  sb          $zero, 0x10($s1)
    ctx->pc = 0x1b1730u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 16), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b1734: 0xa2200011  sb          $zero, 0x11($s1)
    ctx->pc = 0x1b1734u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 17), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b1738: 0xa2200012  sb          $zero, 0x12($s1)
    ctx->pc = 0x1b1738u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 18), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b173c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x1b173cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x1b1740: 0xae200020  sw          $zero, 0x20($s1)
    ctx->pc = 0x1b1740u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
    // 0x1b1744: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x1b1744u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    // 0x1b1748: 0xafc00004  sw          $zero, 0x4($fp)
    ctx->pc = 0x1b1748u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 0));
    // 0x1b174c: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x1b174cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x1b1750: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x1b1750u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x1b1754: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x1b1754u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x1b1758: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x1b1758u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x1b175c: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x1b175cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
    // 0x1b1760: 0xae20001c  sw          $zero, 0x1C($s1)
    ctx->pc = 0x1b1760u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
label_1b1764:
    // 0x1b1764: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b1764u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b1768: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b1768u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b176c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b176cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b1770: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1b1770u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b1774: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1b1774u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b1778: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1b1778u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b177c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1b177cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b1780: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x1b1780u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1b1784: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x1b1784u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b1788: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x1b1788u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1b178c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B178Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B1790u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B178Cu;
            // 0x1b1790: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B1794u;
    // 0x1b1794: 0x0  nop
    ctx->pc = 0x1b1794u;
    // NOP
}
