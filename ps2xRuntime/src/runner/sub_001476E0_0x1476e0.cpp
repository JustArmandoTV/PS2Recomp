#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001476E0
// Address: 0x1476e0 - 0x148d70
void sub_001476E0_0x1476e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001476E0_0x1476e0");
#endif

    switch (ctx->pc) {
        case 0x14779cu: goto label_14779c;
        case 0x14785cu: goto label_14785c;
        case 0x1478b4u: goto label_1478b4;
        case 0x1478ecu: goto label_1478ec;
        case 0x14791cu: goto label_14791c;
        case 0x147968u: goto label_147968;
        case 0x147a28u: goto label_147a28;
        case 0x147cf0u: goto label_147cf0;
        case 0x147d80u: goto label_147d80;
        case 0x147f88u: goto label_147f88;
        case 0x148040u: goto label_148040;
        case 0x148140u: goto label_148140;
        case 0x148588u: goto label_148588;
        case 0x148688u: goto label_148688;
        case 0x148918u: goto label_148918;
        case 0x148c78u: goto label_148c78;
        default: break;
    }

    ctx->pc = 0x1476e0u;

    // 0x1476e0: 0x27bdfdf0  addiu       $sp, $sp, -0x210
    ctx->pc = 0x1476e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966768));
    // 0x1476e4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1476e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1476e8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1476e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1476ec: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1476ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1476f0: 0x6f0c0  sll         $fp, $a2, 3
    ctx->pc = 0x1476f0u;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x1476f4: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1476f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1476f8: 0x3c41821  addu        $v1, $fp, $a0
    ctx->pc = 0x1476f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 4)));
    // 0x1476fc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1476fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x147700: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x147700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x147704: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x147704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x147708: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x147708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x14770c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14770cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x147710: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x147710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x147714: 0x8c770004  lw          $s7, 0x4($v1)
    ctx->pc = 0x147714u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x147718: 0x8cb00000  lw          $s0, 0x0($a1)
    ctx->pc = 0x147718u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x14771c: 0xafa700e8  sw          $a3, 0xE8($sp)
    ctx->pc = 0x14771cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 7));
    // 0x147720: 0x8ee40000  lw          $a0, 0x0($s7)
    ctx->pc = 0x147720u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x147724: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x147724u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x147728: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x147728u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x14772c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x14772Cu;
    {
        const bool branch_taken_0x14772c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x147730u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14772Cu;
            // 0x147730: 0xafa500ec  sw          $a1, 0xEC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14772c) {
            ctx->pc = 0x147748u;
            goto label_147748;
        }
    }
    ctx->pc = 0x147734u;
    // 0x147734: 0x8ee40008  lw          $a0, 0x8($s7)
    ctx->pc = 0x147734u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x147738: 0x8ee30018  lw          $v1, 0x18($s7)
    ctx->pc = 0x147738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 24)));
    // 0x14773c: 0x24930004  addiu       $s3, $a0, 0x4
    ctx->pc = 0x14773cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x147740: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x147740u;
    {
        const bool branch_taken_0x147740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x147744u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147740u;
            // 0x147744: 0x24720004  addiu       $s2, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147740) {
            ctx->pc = 0x147750u;
            goto label_147750;
        }
    }
    ctx->pc = 0x147748u;
label_147748:
    // 0x147748: 0x8ef30008  lw          $s3, 0x8($s7)
    ctx->pc = 0x147748u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x14774c: 0x8ef20018  lw          $s2, 0x18($s7)
    ctx->pc = 0x14774cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 24)));
label_147750:
    // 0x147750: 0x1a00004d  blez        $s0, . + 4 + (0x4D << 2)
    ctx->pc = 0x147750u;
    {
        const bool branch_taken_0x147750 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x147754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147750u;
            // 0x147754: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147750) {
            ctx->pc = 0x147888u;
            goto label_147888;
        }
    }
    ctx->pc = 0x147758u;
    // 0x147758: 0x2a010009  slti        $at, $s0, 0x9
    ctx->pc = 0x147758u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x14775c: 0x14200036  bnez        $at, . + 4 + (0x36 << 2)
    ctx->pc = 0x14775Cu;
    {
        const bool branch_taken_0x14775c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x147760u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14775Cu;
            // 0x147760: 0x2604fff8  addiu       $a0, $s0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14775c) {
            ctx->pc = 0x147838u;
            goto label_147838;
        }
    }
    ctx->pc = 0x147764u;
    // 0x147764: 0x6000007  bltz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x147764u;
    {
        const bool branch_taken_0x147764 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x147768u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147764u;
            // 0x147768: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147764) {
            ctx->pc = 0x147784u;
            goto label_147784;
        }
    }
    ctx->pc = 0x14776Cu;
    // 0x14776c: 0x3c017fff  lui         $at, 0x7FFF
    ctx->pc = 0x14776cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)32767 << 16));
    // 0x147770: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x147770u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
    // 0x147774: 0x201082a  slt         $at, $s0, $at
    ctx->pc = 0x147774u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x147778: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x147778u;
    {
        const bool branch_taken_0x147778 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x147778) {
            ctx->pc = 0x147784u;
            goto label_147784;
        }
    }
    ctx->pc = 0x147780u;
    // 0x147780: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x147780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_147784:
    // 0x147784: 0x1060002c  beqz        $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x147784u;
    {
        const bool branch_taken_0x147784 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x147784) {
            ctx->pc = 0x147838u;
            goto label_147838;
        }
    }
    ctx->pc = 0x14778Cu;
    // 0x14778c: 0x27a901b0  addiu       $t1, $sp, 0x1B0
    ctx->pc = 0x14778cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x147790: 0x27a70170  addiu       $a3, $sp, 0x170
    ctx->pc = 0x147790u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x147794: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x147794u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x147798: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x147798u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_14779c:
    // 0x14779c: 0xad200000  sw          $zero, 0x0($t1)
    ctx->pc = 0x14779cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 0));
    // 0x1477a0: 0x254a0008  addiu       $t2, $t2, 0x8
    ctx->pc = 0x1477a0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 8));
    // 0x1477a4: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x1477a4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x1477a8: 0x144182a  slt         $v1, $t2, $a0
    ctx->pc = 0x1477a8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1477ac: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x1477acu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x1477b0: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x1477b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x1477b4: 0xad200004  sw          $zero, 0x4($t1)
    ctx->pc = 0x1477b4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 0));
    // 0x1477b8: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x1477b8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
    // 0x1477bc: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x1477bcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x1477c0: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x1477c0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x1477c4: 0xad200008  sw          $zero, 0x8($t1)
    ctx->pc = 0x1477c4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 0));
    // 0x1477c8: 0xace00008  sw          $zero, 0x8($a3)
    ctx->pc = 0x1477c8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 0));
    // 0x1477cc: 0xacc00008  sw          $zero, 0x8($a2)
    ctx->pc = 0x1477ccu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
    // 0x1477d0: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x1477d0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x1477d4: 0xad20000c  sw          $zero, 0xC($t1)
    ctx->pc = 0x1477d4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 0));
    // 0x1477d8: 0xace0000c  sw          $zero, 0xC($a3)
    ctx->pc = 0x1477d8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 0));
    // 0x1477dc: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x1477dcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
    // 0x1477e0: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x1477e0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x1477e4: 0xad200010  sw          $zero, 0x10($t1)
    ctx->pc = 0x1477e4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 16), GPR_U32(ctx, 0));
    // 0x1477e8: 0xace00010  sw          $zero, 0x10($a3)
    ctx->pc = 0x1477e8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 0));
    // 0x1477ec: 0xacc00010  sw          $zero, 0x10($a2)
    ctx->pc = 0x1477ecu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 0));
    // 0x1477f0: 0xaca00010  sw          $zero, 0x10($a1)
    ctx->pc = 0x1477f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 0));
    // 0x1477f4: 0xad200014  sw          $zero, 0x14($t1)
    ctx->pc = 0x1477f4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 20), GPR_U32(ctx, 0));
    // 0x1477f8: 0xace00014  sw          $zero, 0x14($a3)
    ctx->pc = 0x1477f8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 0));
    // 0x1477fc: 0xacc00014  sw          $zero, 0x14($a2)
    ctx->pc = 0x1477fcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 0));
    // 0x147800: 0xaca00014  sw          $zero, 0x14($a1)
    ctx->pc = 0x147800u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 0));
    // 0x147804: 0xad200018  sw          $zero, 0x18($t1)
    ctx->pc = 0x147804u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 24), GPR_U32(ctx, 0));
    // 0x147808: 0xace00018  sw          $zero, 0x18($a3)
    ctx->pc = 0x147808u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 0));
    // 0x14780c: 0xacc00018  sw          $zero, 0x18($a2)
    ctx->pc = 0x14780cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 0));
    // 0x147810: 0xaca00018  sw          $zero, 0x18($a1)
    ctx->pc = 0x147810u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 0));
    // 0x147814: 0xad20001c  sw          $zero, 0x1C($t1)
    ctx->pc = 0x147814u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 28), GPR_U32(ctx, 0));
    // 0x147818: 0xace0001c  sw          $zero, 0x1C($a3)
    ctx->pc = 0x147818u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 0));
    // 0x14781c: 0x25290020  addiu       $t1, $t1, 0x20
    ctx->pc = 0x14781cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 32));
    // 0x147820: 0xacc0001c  sw          $zero, 0x1C($a2)
    ctx->pc = 0x147820u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 0));
    // 0x147824: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x147824u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x147828: 0xaca0001c  sw          $zero, 0x1C($a1)
    ctx->pc = 0x147828u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 0));
    // 0x14782c: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x14782cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x147830: 0x1460ffda  bnez        $v1, . + 4 + (-0x26 << 2)
    ctx->pc = 0x147830u;
    {
        const bool branch_taken_0x147830 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x147834u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147830u;
            // 0x147834: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147830) {
            ctx->pc = 0x14779Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_14779c;
        }
    }
    ctx->pc = 0x147838u;
label_147838:
    // 0x147838: 0x150082a  slt         $at, $t2, $s0
    ctx->pc = 0x147838u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x14783c: 0x10200012  beqz        $at, . + 4 + (0x12 << 2)
    ctx->pc = 0x14783Cu;
    {
        const bool branch_taken_0x14783c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14783c) {
            ctx->pc = 0x147888u;
            goto label_147888;
        }
    }
    ctx->pc = 0x147844u;
    // 0x147844: 0xa1880  sll         $v1, $t2, 2
    ctx->pc = 0x147844u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x147848: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x147848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x14784c: 0x246701b0  addiu       $a3, $v1, 0x1B0
    ctx->pc = 0x14784cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 432));
    // 0x147850: 0x24660170  addiu       $a2, $v1, 0x170
    ctx->pc = 0x147850u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 368));
    // 0x147854: 0x246500f0  addiu       $a1, $v1, 0xF0
    ctx->pc = 0x147854u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 240));
    // 0x147858: 0x24640130  addiu       $a0, $v1, 0x130
    ctx->pc = 0x147858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 304));
label_14785c:
    // 0x14785c: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x14785cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x147860: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x147860u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x147864: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x147864u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x147868: 0x150182a  slt         $v1, $t2, $s0
    ctx->pc = 0x147868u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x14786c: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x14786cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x147870: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x147870u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x147874: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x147874u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x147878: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x147878u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x14787c: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x14787cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x147880: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x147880u;
    {
        const bool branch_taken_0x147880 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x147884u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147880u;
            // 0x147884: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147880) {
            ctx->pc = 0x14785Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_14785c;
        }
    }
    ctx->pc = 0x147888u;
label_147888:
    // 0x147888: 0x8ee3001c  lw          $v1, 0x1C($s7)
    ctx->pc = 0x147888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 28)));
    // 0x14788c: 0x1860052c  blez        $v1, . + 4 + (0x52C << 2)
    ctx->pc = 0x14788Cu;
    {
        const bool branch_taken_0x14788c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x147890u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14788Cu;
            // 0x147890: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14788c) {
            ctx->pc = 0x148D40u;
            goto label_148d40;
        }
    }
    ctx->pc = 0x147894u;
    // 0x147894: 0x31030001  andi        $v1, $t0, 0x1
    ctx->pc = 0x147894u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)1);
    // 0x147898: 0x7fa300d0  sq          $v1, 0xD0($sp)
    ctx->pc = 0x147898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 3));
    // 0x14789c: 0x31030002  andi        $v1, $t0, 0x2
    ctx->pc = 0x14789cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)2);
    // 0x1478a0: 0x7fa300c0  sq          $v1, 0xC0($sp)
    ctx->pc = 0x1478a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 3));
    // 0x1478a4: 0x31030010  andi        $v1, $t0, 0x10
    ctx->pc = 0x1478a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)16);
    // 0x1478a8: 0x7fa300b0  sq          $v1, 0xB0($sp)
    ctx->pc = 0x1478a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 3));
    // 0x1478ac: 0x31030040  andi        $v1, $t0, 0x40
    ctx->pc = 0x1478acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)64);
    // 0x1478b0: 0x7fa300a0  sq          $v1, 0xA0($sp)
    ctx->pc = 0x1478b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 3));
label_1478b4:
    // 0x1478b4: 0x8ee40000  lw          $a0, 0x0($s7)
    ctx->pc = 0x1478b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x1478b8: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x1478b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x1478bc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1478bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1478c0: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1478C0u;
    {
        const bool branch_taken_0x1478c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1478c0) {
            ctx->pc = 0x1478F8u;
            goto label_1478f8;
        }
    }
    ctx->pc = 0x1478C8u;
    // 0x1478c8: 0x92710004  lbu         $s1, 0x4($s3)
    ctx->pc = 0x1478c8u;
    SET_GPR_U32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1478cc: 0x27a6020c  addiu       $a2, $sp, 0x20C
    ctx->pc = 0x1478ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 524));
    // 0x1478d0: 0x27a70208  addiu       $a3, $sp, 0x208
    ctx->pc = 0x1478d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 520));
    // 0x1478d4: 0x27a80204  addiu       $t0, $sp, 0x204
    ctx->pc = 0x1478d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 516));
    // 0x1478d8: 0x27a90200  addiu       $t1, $sp, 0x200
    ctx->pc = 0x1478d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x1478dc: 0x27aa01fc  addiu       $t2, $sp, 0x1FC
    ctx->pc = 0x1478dcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 508));
    // 0x1478e0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1478e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1478e4: 0xc055a08  jal         func_156820
    ctx->pc = 0x1478E4u;
    SET_GPR_U32(ctx, 31, 0x1478ECu);
    ctx->pc = 0x1478E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1478E4u;
            // 0x1478e8: 0x27ab01f8  addiu       $t3, $sp, 0x1F8 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 504));
        ctx->in_delay_slot = false;
    ctx->pc = 0x156820u;
    if (runtime->hasFunction(0x156820u)) {
        auto targetFn = runtime->lookupFunction(0x156820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1478ECu; }
        if (ctx->pc != 0x1478ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00156820_0x156820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1478ECu; }
        if (ctx->pc != 0x1478ECu) { return; }
    }
    ctx->pc = 0x1478ECu;
label_1478ec:
    // 0x1478ec: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1478ECu;
    {
        const bool branch_taken_0x1478ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1478ec) {
            ctx->pc = 0x147920u;
            goto label_147920;
        }
    }
    ctx->pc = 0x1478F4u;
    // 0x1478f4: 0x0  nop
    ctx->pc = 0x1478f4u;
    // NOP
label_1478f8:
    // 0x1478f8: 0x92710008  lbu         $s1, 0x8($s3)
    ctx->pc = 0x1478f8u;
    SET_GPR_U32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1478fc: 0x27a6020c  addiu       $a2, $sp, 0x20C
    ctx->pc = 0x1478fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 524));
    // 0x147900: 0x27a70208  addiu       $a3, $sp, 0x208
    ctx->pc = 0x147900u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 520));
    // 0x147904: 0x27a80204  addiu       $t0, $sp, 0x204
    ctx->pc = 0x147904u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 516));
    // 0x147908: 0x27a90200  addiu       $t1, $sp, 0x200
    ctx->pc = 0x147908u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x14790c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x14790cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147910: 0x27aa01fc  addiu       $t2, $sp, 0x1FC
    ctx->pc = 0x147910u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 508));
    // 0x147914: 0xc051cf8  jal         func_1473E0
    ctx->pc = 0x147914u;
    SET_GPR_U32(ctx, 31, 0x14791Cu);
    ctx->pc = 0x147918u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x147914u;
            // 0x147918: 0x27ab01f8  addiu       $t3, $sp, 0x1F8 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 504));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1473E0u;
    if (runtime->hasFunction(0x1473E0u)) {
        auto targetFn = runtime->lookupFunction(0x1473E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14791Cu; }
        if (ctx->pc != 0x14791Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001473E0_0x1473e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14791Cu; }
        if (ctx->pc != 0x14791Cu) { return; }
    }
    ctx->pc = 0x14791Cu;
label_14791c:
    // 0x14791c: 0x0  nop
    ctx->pc = 0x14791cu;
    // NOP
label_147920:
    // 0x147920: 0x1a0004ff  blez        $s0, . + 4 + (0x4FF << 2)
    ctx->pc = 0x147920u;
    {
        const bool branch_taken_0x147920 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x147924u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147920u;
            // 0x147924: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147920) {
            ctx->pc = 0x148D20u;
            goto label_148d20;
        }
    }
    ctx->pc = 0x147928u;
    // 0x147928: 0x3c033980  lui         $v1, 0x3980
    ctx->pc = 0x147928u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14720 << 16));
    // 0x14792c: 0x8fae00e8  lw          $t6, 0xE8($sp)
    ctx->pc = 0x14792cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x147930: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x147930u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x147934: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x147934u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147938: 0x3c034580  lui         $v1, 0x4580
    ctx->pc = 0x147938u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17792 << 16));
    // 0x14793c: 0x27ac01b0  addiu       $t4, $sp, 0x1B0
    ctx->pc = 0x14793cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x147940: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x147940u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x147944: 0x27ab0170  addiu       $t3, $sp, 0x170
    ctx->pc = 0x147944u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x147948: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x147948u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x14794c: 0x27aa00f0  addiu       $t2, $sp, 0xF0
    ctx->pc = 0x14794cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x147950: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x147950u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x147954: 0x27a90130  addiu       $t1, $sp, 0x130
    ctx->pc = 0x147954u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x147958: 0x2628fff8  addiu       $t0, $s1, -0x8
    ctx->pc = 0x147958u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967288));
    // 0x14795c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x14795cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x147960: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x147960u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x147964: 0x0  nop
    ctx->pc = 0x147964u;
    // NOP
label_147968:
    // 0x147968: 0xc5c40000  lwc1        $f4, 0x0($t6)
    ctx->pc = 0x147968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x14796c: 0x46041832  c.eq.s      $f3, $f4
    ctx->pc = 0x14796cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[3], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x147970: 0x450104e1  bc1t        . + 4 + (0x4E1 << 2)
    ctx->pc = 0x147970u;
    {
        const bool branch_taken_0x147970 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x147970) {
            ctx->pc = 0x148CF8u;
            goto label_148cf8;
        }
    }
    ctx->pc = 0x147978u;
    // 0x147978: 0x8fa400ec  lw          $a0, 0xEC($sp)
    ctx->pc = 0x147978u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x14797c: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x14797cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x147980: 0x8d2021  addu        $a0, $a0, $t5
    ctx->pc = 0x147980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 13)));
    // 0x147984: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x147984u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x147988: 0x9e2821  addu        $a1, $a0, $fp
    ctx->pc = 0x147988u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 30)));
    // 0x14798c: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x14798cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x147990: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x147990u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x147994: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x147994u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x147998: 0x10c504d7  beq         $a2, $a1, . + 4 + (0x4D7 << 2)
    ctx->pc = 0x147998u;
    {
        const bool branch_taken_0x147998 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x147998) {
            ctx->pc = 0x148CF8u;
            goto label_148cf8;
        }
    }
    ctx->pc = 0x1479A0u;
    // 0x1479a0: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1479a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1479a4: 0x10c50004  beq         $a2, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1479A4u;
    {
        const bool branch_taken_0x1479a4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x1479a4) {
            ctx->pc = 0x1479B8u;
            goto label_1479b8;
        }
    }
    ctx->pc = 0x1479ACu;
    // 0x1479ac: 0x100004d2  b           . + 4 + (0x4D2 << 2)
    ctx->pc = 0x1479ACu;
    {
        const bool branch_taken_0x1479ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1479ac) {
            ctx->pc = 0x148CF8u;
            goto label_148cf8;
        }
    }
    ctx->pc = 0x1479B4u;
    // 0x1479b4: 0x0  nop
    ctx->pc = 0x1479b4u;
    // NOP
label_1479b8:
    // 0x1479b8: 0x7ba500d0  lq          $a1, 0xD0($sp)
    ctx->pc = 0x1479b8u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1479bc: 0x10a00188  beqz        $a1, . + 4 + (0x188 << 2)
    ctx->pc = 0x1479BCu;
    {
        const bool branch_taken_0x1479bc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1479bc) {
            ctx->pc = 0x147FE0u;
            goto label_147fe0;
        }
    }
    ctx->pc = 0x1479C4u;
    // 0x1479c4: 0x8d850000  lw          $a1, 0x0($t4)
    ctx->pc = 0x1479c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x1479c8: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1479C8u;
    {
        const bool branch_taken_0x1479c8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1479c8) {
            ctx->pc = 0x1479D8u;
            goto label_1479d8;
        }
    }
    ctx->pc = 0x1479D0u;
    // 0x1479d0: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x1479d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1479d4: 0xad850000  sw          $a1, 0x0($t4)
    ctx->pc = 0x1479d4u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 5));
label_1479d8:
    // 0x1479d8: 0x8faf0208  lw          $t7, 0x208($sp)
    ctx->pc = 0x1479d8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
    // 0x1479dc: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x1479dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1479e0: 0x24160002  addiu       $s6, $zero, 0x2
    ctx->pc = 0x1479e0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1479e4: 0x8d860000  lw          $a2, 0x0($t4)
    ctx->pc = 0x1479e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x1479e8: 0x26fa821  addu        $s5, $s3, $t7
    ctx->pc = 0x1479e8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 15)));
    // 0x1479ec: 0x10b600de  beq         $a1, $s6, . + 4 + (0xDE << 2)
    ctx->pc = 0x1479ECu;
    {
        const bool branch_taken_0x1479ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 22));
        ctx->pc = 0x1479F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1479ECu;
            // 0x1479f0: 0x24f7821  addu        $t7, $s2, $t7 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 15)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1479ec) {
            ctx->pc = 0x147D68u;
            goto label_147d68;
        }
    }
    ctx->pc = 0x1479F4u;
    // 0x1479f4: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x1479f4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1479f8: 0x10b60005  beq         $a1, $s6, . + 4 + (0x5 << 2)
    ctx->pc = 0x1479F8u;
    {
        const bool branch_taken_0x1479f8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 22));
        if (branch_taken_0x1479f8) {
            ctx->pc = 0x147A10u;
            goto label_147a10;
        }
    }
    ctx->pc = 0x147A00u;
    // 0x147a00: 0x10a00175  beqz        $a1, . + 4 + (0x175 << 2)
    ctx->pc = 0x147A00u;
    {
        const bool branch_taken_0x147a00 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x147a00) {
            ctx->pc = 0x147FD8u;
            goto label_147fd8;
        }
    }
    ctx->pc = 0x147A08u;
    // 0x147a08: 0x10000173  b           . + 4 + (0x173 << 2)
    ctx->pc = 0x147A08u;
    {
        const bool branch_taken_0x147a08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x147a08) {
            ctx->pc = 0x147FD8u;
            goto label_147fd8;
        }
    }
    ctx->pc = 0x147A10u;
label_147a10:
    // 0x147a10: 0x12200171  beqz        $s1, . + 4 + (0x171 << 2)
    ctx->pc = 0x147A10u;
    {
        const bool branch_taken_0x147a10 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x147A14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147A10u;
            // 0x147a14: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147a10) {
            ctx->pc = 0x147FD8u;
            goto label_147fd8;
        }
    }
    ctx->pc = 0x147A18u;
    // 0x147a18: 0x2e210009  sltiu       $at, $s1, 0x9
    ctx->pc = 0x147a18u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x147a1c: 0x142000b0  bnez        $at, . + 4 + (0xB0 << 2)
    ctx->pc = 0x147A1Cu;
    {
        const bool branch_taken_0x147a1c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x147a1c) {
            ctx->pc = 0x147CE0u;
            goto label_147ce0;
        }
    }
    ctx->pc = 0x147A24u;
    // 0x147a24: 0x0  nop
    ctx->pc = 0x147a24u;
    // NOP
label_147a28:
    // 0x147a28: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x147a28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x147a2c: 0xc4c70000  lwc1        $f7, 0x0($a2)
    ctx->pc = 0x147a2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x147a30: 0xa8b02b  sltu        $s6, $a1, $t0
    ctx->pc = 0x147a30u;
    SET_GPR_U64(ctx, 22, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x147a34: 0xc5e60000  lwc1        $f6, 0x0($t7)
    ctx->pc = 0x147a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x147a38: 0xc6a50000  lwc1        $f5, 0x0($s5)
    ctx->pc = 0x147a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x147a3c: 0x46063981  sub.s       $f6, $f7, $f6
    ctx->pc = 0x147a3cu;
    ctx->f[6] = FPU_SUB_S(ctx->f[7], ctx->f[6]);
    // 0x147a40: 0x46051818  adda.s      $f3, $f5
    ctx->pc = 0x147a40u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x147a44: 0x4606215c  madd.s      $f5, $f4, $f6
    ctx->pc = 0x147a44u;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[6]));
    // 0x147a48: 0xe6a50000  swc1        $f5, 0x0($s5)
    ctx->pc = 0x147a48u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
    // 0x147a4c: 0xc6a50004  lwc1        $f5, 0x4($s5)
    ctx->pc = 0x147a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x147a50: 0xc4c70004  lwc1        $f7, 0x4($a2)
    ctx->pc = 0x147a50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x147a54: 0xc5e60004  lwc1        $f6, 0x4($t7)
    ctx->pc = 0x147a54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x147a58: 0x46051818  adda.s      $f3, $f5
    ctx->pc = 0x147a58u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x147a5c: 0x46063981  sub.s       $f6, $f7, $f6
    ctx->pc = 0x147a5cu;
    ctx->f[6] = FPU_SUB_S(ctx->f[7], ctx->f[6]);
    // 0x147a60: 0x4606215c  madd.s      $f5, $f4, $f6
    ctx->pc = 0x147a60u;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[6]));
    // 0x147a64: 0xe6a50004  swc1        $f5, 0x4($s5)
    ctx->pc = 0x147a64u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 4), bits); }
    // 0x147a68: 0xc6a50008  lwc1        $f5, 0x8($s5)
    ctx->pc = 0x147a68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x147a6c: 0xc4c70008  lwc1        $f7, 0x8($a2)
    ctx->pc = 0x147a6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x147a70: 0xc5e60008  lwc1        $f6, 0x8($t7)
    ctx->pc = 0x147a70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x147a74: 0x46051818  adda.s      $f3, $f5
    ctx->pc = 0x147a74u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x147a78: 0x46063981  sub.s       $f6, $f7, $f6
    ctx->pc = 0x147a78u;
    ctx->f[6] = FPU_SUB_S(ctx->f[7], ctx->f[6]);
    // 0x147a7c: 0x4606215c  madd.s      $f5, $f4, $f6
    ctx->pc = 0x147a7cu;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[6]));
    // 0x147a80: 0xe6a50008  swc1        $f5, 0x8($s5)
    ctx->pc = 0x147a80u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 8), bits); }
    // 0x147a84: 0xc6a5000c  lwc1        $f5, 0xC($s5)
    ctx->pc = 0x147a84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x147a88: 0xc4c70010  lwc1        $f7, 0x10($a2)
    ctx->pc = 0x147a88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x147a8c: 0xc5e6000c  lwc1        $f6, 0xC($t7)
    ctx->pc = 0x147a8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x147a90: 0x46051818  adda.s      $f3, $f5
    ctx->pc = 0x147a90u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x147a94: 0x46063981  sub.s       $f6, $f7, $f6
    ctx->pc = 0x147a94u;
    ctx->f[6] = FPU_SUB_S(ctx->f[7], ctx->f[6]);
    // 0x147a98: 0x4606215c  madd.s      $f5, $f4, $f6
    ctx->pc = 0x147a98u;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[6]));
    // 0x147a9c: 0xe6a5000c  swc1        $f5, 0xC($s5)
    ctx->pc = 0x147a9cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 12), bits); }
    // 0x147aa0: 0xc6a50010  lwc1        $f5, 0x10($s5)
    ctx->pc = 0x147aa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x147aa4: 0xc4c70014  lwc1        $f7, 0x14($a2)
    ctx->pc = 0x147aa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x147aa8: 0xc5e60010  lwc1        $f6, 0x10($t7)
    ctx->pc = 0x147aa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x147aac: 0x46051818  adda.s      $f3, $f5
    ctx->pc = 0x147aacu;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x147ab0: 0x46063981  sub.s       $f6, $f7, $f6
    ctx->pc = 0x147ab0u;
    ctx->f[6] = FPU_SUB_S(ctx->f[7], ctx->f[6]);
    // 0x147ab4: 0x4606215c  madd.s      $f5, $f4, $f6
    ctx->pc = 0x147ab4u;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[6]));
    // 0x147ab8: 0xe6a50010  swc1        $f5, 0x10($s5)
    ctx->pc = 0x147ab8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 16), bits); }
    // 0x147abc: 0xc6a50014  lwc1        $f5, 0x14($s5)
    ctx->pc = 0x147abcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x147ac0: 0xc4c70018  lwc1        $f7, 0x18($a2)
    ctx->pc = 0x147ac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x147ac4: 0xc5e60014  lwc1        $f6, 0x14($t7)
    ctx->pc = 0x147ac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x147ac8: 0x46051818  adda.s      $f3, $f5
    ctx->pc = 0x147ac8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x147acc: 0x46063981  sub.s       $f6, $f7, $f6
    ctx->pc = 0x147accu;
    ctx->f[6] = FPU_SUB_S(ctx->f[7], ctx->f[6]);
    // 0x147ad0: 0x4606215c  madd.s      $f5, $f4, $f6
    ctx->pc = 0x147ad0u;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[6]));
    // 0x147ad4: 0xe6a50014  swc1        $f5, 0x14($s5)
    ctx->pc = 0x147ad4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 20), bits); }
    // 0x147ad8: 0xc6a50018  lwc1        $f5, 0x18($s5)
    ctx->pc = 0x147ad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x147adc: 0xc4c70020  lwc1        $f7, 0x20($a2)
    ctx->pc = 0x147adcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x147ae0: 0xc5e60018  lwc1        $f6, 0x18($t7)
    ctx->pc = 0x147ae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x147ae4: 0x46051818  adda.s      $f3, $f5
    ctx->pc = 0x147ae4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x147ae8: 0x46063981  sub.s       $f6, $f7, $f6
    ctx->pc = 0x147ae8u;
    ctx->f[6] = FPU_SUB_S(ctx->f[7], ctx->f[6]);
    // 0x147aec: 0x4606215c  madd.s      $f5, $f4, $f6
    ctx->pc = 0x147aecu;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[6]));
    // 0x147af0: 0xe6a50018  swc1        $f5, 0x18($s5)
    ctx->pc = 0x147af0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 24), bits); }
    // 0x147af4: 0xc6a5001c  lwc1        $f5, 0x1C($s5)
    ctx->pc = 0x147af4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x147af8: 0xc4c70024  lwc1        $f7, 0x24($a2)
    ctx->pc = 0x147af8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x147afc: 0xc5e6001c  lwc1        $f6, 0x1C($t7)
    ctx->pc = 0x147afcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x147b00: 0x46051818  adda.s      $f3, $f5
    ctx->pc = 0x147b00u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x147b04: 0x46063981  sub.s       $f6, $f7, $f6
    ctx->pc = 0x147b04u;
    ctx->f[6] = FPU_SUB_S(ctx->f[7], ctx->f[6]);
    // 0x147b08: 0x4606215c  madd.s      $f5, $f4, $f6
    ctx->pc = 0x147b08u;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[6]));
    // 0x147b0c: 0xe6a5001c  swc1        $f5, 0x1C($s5)
    ctx->pc = 0x147b0cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 28), bits); }
    // 0x147b10: 0xc6a50020  lwc1        $f5, 0x20($s5)
    ctx->pc = 0x147b10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x147b14: 0xc4c70028  lwc1        $f7, 0x28($a2)
    ctx->pc = 0x147b14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x147b18: 0xc5e60020  lwc1        $f6, 0x20($t7)
    ctx->pc = 0x147b18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x147b1c: 0x46051818  adda.s      $f3, $f5
    ctx->pc = 0x147b1cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x147b20: 0x46063981  sub.s       $f6, $f7, $f6
    ctx->pc = 0x147b20u;
    ctx->f[6] = FPU_SUB_S(ctx->f[7], ctx->f[6]);
    // 0x147b24: 0x4606215c  madd.s      $f5, $f4, $f6
    ctx->pc = 0x147b24u;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[6]));
    // 0x147b28: 0xe6a50020  swc1        $f5, 0x20($s5)
    ctx->pc = 0x147b28u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 32), bits); }
    // 0x147b2c: 0xc6a50024  lwc1        $f5, 0x24($s5)
    ctx->pc = 0x147b2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x147b30: 0xc4c70030  lwc1        $f7, 0x30($a2)
    ctx->pc = 0x147b30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x147b34: 0xc5e60024  lwc1        $f6, 0x24($t7)
    ctx->pc = 0x147b34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x147b38: 0x46051818  adda.s      $f3, $f5
    ctx->pc = 0x147b38u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x147b3c: 0x46063981  sub.s       $f6, $f7, $f6
    ctx->pc = 0x147b3cu;
    ctx->f[6] = FPU_SUB_S(ctx->f[7], ctx->f[6]);
    // 0x147b40: 0x4606215c  madd.s      $f5, $f4, $f6
    ctx->pc = 0x147b40u;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[6]));
    // 0x147b44: 0xe6a50024  swc1        $f5, 0x24($s5)
    ctx->pc = 0x147b44u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 36), bits); }
    // 0x147b48: 0xc6a50028  lwc1        $f5, 0x28($s5)
    ctx->pc = 0x147b48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x147b4c: 0xc4c70034  lwc1        $f7, 0x34($a2)
    ctx->pc = 0x147b4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x147b50: 0xc5e60028  lwc1        $f6, 0x28($t7)
    ctx->pc = 0x147b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x147b54: 0x46051818  adda.s      $f3, $f5
    ctx->pc = 0x147b54u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x147b58: 0x46063981  sub.s       $f6, $f7, $f6
    ctx->pc = 0x147b58u;
    ctx->f[6] = FPU_SUB_S(ctx->f[7], ctx->f[6]);
    // 0x147b5c: 0x4606215c  madd.s      $f5, $f4, $f6
    ctx->pc = 0x147b5cu;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[6]));
    // 0x147b60: 0xe6a50028  swc1        $f5, 0x28($s5)
    ctx->pc = 0x147b60u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 40), bits); }
    // 0x147b64: 0xc6a5002c  lwc1        $f5, 0x2C($s5)
    ctx->pc = 0x147b64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x147b68: 0xc4c70038  lwc1        $f7, 0x38($a2)
    ctx->pc = 0x147b68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x147b6c: 0xc5e6002c  lwc1        $f6, 0x2C($t7)
    ctx->pc = 0x147b6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x147b70: 0x46051818  adda.s      $f3, $f5
    ctx->pc = 0x147b70u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x147b74: 0x46063981  sub.s       $f6, $f7, $f6
    ctx->pc = 0x147b74u;
    ctx->f[6] = FPU_SUB_S(ctx->f[7], ctx->f[6]);
    // 0x147b78: 0x4606215c  madd.s      $f5, $f4, $f6
    ctx->pc = 0x147b78u;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[6]));
    // 0x147b7c: 0xe6a5002c  swc1        $f5, 0x2C($s5)
    ctx->pc = 0x147b7cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 44), bits); }
    // 0x147b80: 0xc6a50030  lwc1        $f5, 0x30($s5)
    ctx->pc = 0x147b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x147b84: 0xc4c70040  lwc1        $f7, 0x40($a2)
    ctx->pc = 0x147b84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x147b88: 0xc5e60030  lwc1        $f6, 0x30($t7)
    ctx->pc = 0x147b88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x147b8c: 0x46051818  adda.s      $f3, $f5
    ctx->pc = 0x147b8cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x147b90: 0x46063981  sub.s       $f6, $f7, $f6
    ctx->pc = 0x147b90u;
    ctx->f[6] = FPU_SUB_S(ctx->f[7], ctx->f[6]);
    // 0x147b94: 0x4606215c  madd.s      $f5, $f4, $f6
    ctx->pc = 0x147b94u;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[6]));
    // 0x147b98: 0xe6a50030  swc1        $f5, 0x30($s5)
    ctx->pc = 0x147b98u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 48), bits); }
    // 0x147b9c: 0xc6a50034  lwc1        $f5, 0x34($s5)
    ctx->pc = 0x147b9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x147ba0: 0xc4c70044  lwc1        $f7, 0x44($a2)
    ctx->pc = 0x147ba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x147ba4: 0xc5e60034  lwc1        $f6, 0x34($t7)
    ctx->pc = 0x147ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x147ba8: 0x46051818  adda.s      $f3, $f5
    ctx->pc = 0x147ba8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x147bac: 0x46063981  sub.s       $f6, $f7, $f6
    ctx->pc = 0x147bacu;
    ctx->f[6] = FPU_SUB_S(ctx->f[7], ctx->f[6]);
    // 0x147bb0: 0x4606215c  madd.s      $f5, $f4, $f6
    ctx->pc = 0x147bb0u;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[6]));
    // 0x147bb4: 0xe6a50034  swc1        $f5, 0x34($s5)
    ctx->pc = 0x147bb4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 52), bits); }
    // 0x147bb8: 0xc6a50038  lwc1        $f5, 0x38($s5)
    ctx->pc = 0x147bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x147bbc: 0xc4c70048  lwc1        $f7, 0x48($a2)
    ctx->pc = 0x147bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x147bc0: 0xc5e60038  lwc1        $f6, 0x38($t7)
    ctx->pc = 0x147bc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x147bc4: 0x46051818  adda.s      $f3, $f5
    ctx->pc = 0x147bc4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x147bc8: 0x46063981  sub.s       $f6, $f7, $f6
    ctx->pc = 0x147bc8u;
    ctx->f[6] = FPU_SUB_S(ctx->f[7], ctx->f[6]);
    // 0x147bcc: 0x4606215c  madd.s      $f5, $f4, $f6
    ctx->pc = 0x147bccu;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[6]));
    // 0x147bd0: 0xe6a50038  swc1        $f5, 0x38($s5)
    ctx->pc = 0x147bd0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 56), bits); }
    // 0x147bd4: 0xc6a5003c  lwc1        $f5, 0x3C($s5)
    ctx->pc = 0x147bd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x147bd8: 0xc4c70050  lwc1        $f7, 0x50($a2)
    ctx->pc = 0x147bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x147bdc: 0xc5e6003c  lwc1        $f6, 0x3C($t7)
    ctx->pc = 0x147bdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x147be0: 0x46051818  adda.s      $f3, $f5
    ctx->pc = 0x147be0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x147be4: 0x46063981  sub.s       $f6, $f7, $f6
    ctx->pc = 0x147be4u;
    ctx->f[6] = FPU_SUB_S(ctx->f[7], ctx->f[6]);
    // 0x147be8: 0x4606215c  madd.s      $f5, $f4, $f6
    ctx->pc = 0x147be8u;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[6]));
    // 0x147bec: 0xe6a5003c  swc1        $f5, 0x3C($s5)
    ctx->pc = 0x147becu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 60), bits); }
    // 0x147bf0: 0xc6a50040  lwc1        $f5, 0x40($s5)
    ctx->pc = 0x147bf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x147bf4: 0xc4c70054  lwc1        $f7, 0x54($a2)
    ctx->pc = 0x147bf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x147bf8: 0xc5e60040  lwc1        $f6, 0x40($t7)
    ctx->pc = 0x147bf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x147bfc: 0x46051818  adda.s      $f3, $f5
    ctx->pc = 0x147bfcu;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x147c00: 0x46063981  sub.s       $f6, $f7, $f6
    ctx->pc = 0x147c00u;
    ctx->f[6] = FPU_SUB_S(ctx->f[7], ctx->f[6]);
    // 0x147c04: 0x4606215c  madd.s      $f5, $f4, $f6
    ctx->pc = 0x147c04u;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[6]));
    // 0x147c08: 0xe6a50040  swc1        $f5, 0x40($s5)
    ctx->pc = 0x147c08u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 64), bits); }
    // 0x147c0c: 0xc6a50044  lwc1        $f5, 0x44($s5)
    ctx->pc = 0x147c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x147c10: 0xc4c70058  lwc1        $f7, 0x58($a2)
    ctx->pc = 0x147c10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x147c14: 0xc5e60044  lwc1        $f6, 0x44($t7)
    ctx->pc = 0x147c14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x147c18: 0x46051818  adda.s      $f3, $f5
    ctx->pc = 0x147c18u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x147c1c: 0x46063981  sub.s       $f6, $f7, $f6
    ctx->pc = 0x147c1cu;
    ctx->f[6] = FPU_SUB_S(ctx->f[7], ctx->f[6]);
    // 0x147c20: 0x4606215c  madd.s      $f5, $f4, $f6
    ctx->pc = 0x147c20u;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[6]));
    // 0x147c24: 0xe6a50044  swc1        $f5, 0x44($s5)
    ctx->pc = 0x147c24u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 68), bits); }
    // 0x147c28: 0xc6a50048  lwc1        $f5, 0x48($s5)
    ctx->pc = 0x147c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x147c2c: 0xc4c70060  lwc1        $f7, 0x60($a2)
    ctx->pc = 0x147c2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x147c30: 0xc5e60048  lwc1        $f6, 0x48($t7)
    ctx->pc = 0x147c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x147c34: 0x46051818  adda.s      $f3, $f5
    ctx->pc = 0x147c34u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x147c38: 0x46063981  sub.s       $f6, $f7, $f6
    ctx->pc = 0x147c38u;
    ctx->f[6] = FPU_SUB_S(ctx->f[7], ctx->f[6]);
    // 0x147c3c: 0x4606215c  madd.s      $f5, $f4, $f6
    ctx->pc = 0x147c3cu;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[6]));
    // 0x147c40: 0xe6a50048  swc1        $f5, 0x48($s5)
    ctx->pc = 0x147c40u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 72), bits); }
    // 0x147c44: 0xc6a5004c  lwc1        $f5, 0x4C($s5)
    ctx->pc = 0x147c44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x147c48: 0xc4c70064  lwc1        $f7, 0x64($a2)
    ctx->pc = 0x147c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x147c4c: 0xc5e6004c  lwc1        $f6, 0x4C($t7)
    ctx->pc = 0x147c4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x147c50: 0x46051818  adda.s      $f3, $f5
    ctx->pc = 0x147c50u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x147c54: 0x46063981  sub.s       $f6, $f7, $f6
    ctx->pc = 0x147c54u;
    ctx->f[6] = FPU_SUB_S(ctx->f[7], ctx->f[6]);
    // 0x147c58: 0x4606215c  madd.s      $f5, $f4, $f6
    ctx->pc = 0x147c58u;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[6]));
    // 0x147c5c: 0xe6a5004c  swc1        $f5, 0x4C($s5)
    ctx->pc = 0x147c5cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 76), bits); }
    // 0x147c60: 0xc6a50050  lwc1        $f5, 0x50($s5)
    ctx->pc = 0x147c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x147c64: 0xc4c70068  lwc1        $f7, 0x68($a2)
    ctx->pc = 0x147c64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x147c68: 0xc5e60050  lwc1        $f6, 0x50($t7)
    ctx->pc = 0x147c68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x147c6c: 0x46051818  adda.s      $f3, $f5
    ctx->pc = 0x147c6cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x147c70: 0x46063981  sub.s       $f6, $f7, $f6
    ctx->pc = 0x147c70u;
    ctx->f[6] = FPU_SUB_S(ctx->f[7], ctx->f[6]);
    // 0x147c74: 0x4606215c  madd.s      $f5, $f4, $f6
    ctx->pc = 0x147c74u;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[6]));
    // 0x147c78: 0xe6a50050  swc1        $f5, 0x50($s5)
    ctx->pc = 0x147c78u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 80), bits); }
    // 0x147c7c: 0xc6a50054  lwc1        $f5, 0x54($s5)
    ctx->pc = 0x147c7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x147c80: 0xc4c70070  lwc1        $f7, 0x70($a2)
    ctx->pc = 0x147c80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x147c84: 0xc5e60054  lwc1        $f6, 0x54($t7)
    ctx->pc = 0x147c84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x147c88: 0x46051818  adda.s      $f3, $f5
    ctx->pc = 0x147c88u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x147c8c: 0x46063981  sub.s       $f6, $f7, $f6
    ctx->pc = 0x147c8cu;
    ctx->f[6] = FPU_SUB_S(ctx->f[7], ctx->f[6]);
    // 0x147c90: 0x4606215c  madd.s      $f5, $f4, $f6
    ctx->pc = 0x147c90u;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[6]));
    // 0x147c94: 0xe6a50054  swc1        $f5, 0x54($s5)
    ctx->pc = 0x147c94u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 84), bits); }
    // 0x147c98: 0xc6a50058  lwc1        $f5, 0x58($s5)
    ctx->pc = 0x147c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x147c9c: 0xc4c70074  lwc1        $f7, 0x74($a2)
    ctx->pc = 0x147c9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x147ca0: 0xc5e60058  lwc1        $f6, 0x58($t7)
    ctx->pc = 0x147ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x147ca4: 0x46051818  adda.s      $f3, $f5
    ctx->pc = 0x147ca4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x147ca8: 0x46063981  sub.s       $f6, $f7, $f6
    ctx->pc = 0x147ca8u;
    ctx->f[6] = FPU_SUB_S(ctx->f[7], ctx->f[6]);
    // 0x147cac: 0x4606215c  madd.s      $f5, $f4, $f6
    ctx->pc = 0x147cacu;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[6]));
    // 0x147cb0: 0xe6a50058  swc1        $f5, 0x58($s5)
    ctx->pc = 0x147cb0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 88), bits); }
    // 0x147cb4: 0xc4c70078  lwc1        $f7, 0x78($a2)
    ctx->pc = 0x147cb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x147cb8: 0xc5e6005c  lwc1        $f6, 0x5C($t7)
    ctx->pc = 0x147cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x147cbc: 0xc6a5005c  lwc1        $f5, 0x5C($s5)
    ctx->pc = 0x147cbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x147cc0: 0x24c60080  addiu       $a2, $a2, 0x80
    ctx->pc = 0x147cc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x147cc4: 0x46063981  sub.s       $f6, $f7, $f6
    ctx->pc = 0x147cc4u;
    ctx->f[6] = FPU_SUB_S(ctx->f[7], ctx->f[6]);
    // 0x147cc8: 0x25ef0060  addiu       $t7, $t7, 0x60
    ctx->pc = 0x147cc8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 96));
    // 0x147ccc: 0x46051818  adda.s      $f3, $f5
    ctx->pc = 0x147cccu;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x147cd0: 0x4606215c  madd.s      $f5, $f4, $f6
    ctx->pc = 0x147cd0u;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[6]));
    // 0x147cd4: 0xe6a5005c  swc1        $f5, 0x5C($s5)
    ctx->pc = 0x147cd4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 92), bits); }
    // 0x147cd8: 0x16c0ff53  bnez        $s6, . + 4 + (-0xAD << 2)
    ctx->pc = 0x147CD8u;
    {
        const bool branch_taken_0x147cd8 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x147CDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147CD8u;
            // 0x147cdc: 0x26b50060  addiu       $s5, $s5, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147cd8) {
            ctx->pc = 0x147A28u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_147a28;
        }
    }
    ctx->pc = 0x147CE0u;
label_147ce0:
    // 0x147ce0: 0xb1082b  sltu        $at, $a1, $s1
    ctx->pc = 0x147ce0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x147ce4: 0x102000bc  beqz        $at, . + 4 + (0xBC << 2)
    ctx->pc = 0x147CE4u;
    {
        const bool branch_taken_0x147ce4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x147ce4) {
            ctx->pc = 0x147FD8u;
            goto label_147fd8;
        }
    }
    ctx->pc = 0x147CECu;
    // 0x147cec: 0x0  nop
    ctx->pc = 0x147cecu;
    // NOP
label_147cf0:
    // 0x147cf0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x147cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x147cf4: 0xc4c70000  lwc1        $f7, 0x0($a2)
    ctx->pc = 0x147cf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x147cf8: 0xb1b02b  sltu        $s6, $a1, $s1
    ctx->pc = 0x147cf8u;
    SET_GPR_U64(ctx, 22, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x147cfc: 0xc5e60000  lwc1        $f6, 0x0($t7)
    ctx->pc = 0x147cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x147d00: 0xc6a50000  lwc1        $f5, 0x0($s5)
    ctx->pc = 0x147d00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x147d04: 0x46063981  sub.s       $f6, $f7, $f6
    ctx->pc = 0x147d04u;
    ctx->f[6] = FPU_SUB_S(ctx->f[7], ctx->f[6]);
    // 0x147d08: 0x46051818  adda.s      $f3, $f5
    ctx->pc = 0x147d08u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x147d0c: 0x4606215c  madd.s      $f5, $f4, $f6
    ctx->pc = 0x147d0cu;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[6]));
    // 0x147d10: 0xe6a50000  swc1        $f5, 0x0($s5)
    ctx->pc = 0x147d10u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
    // 0x147d14: 0xc6a50004  lwc1        $f5, 0x4($s5)
    ctx->pc = 0x147d14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x147d18: 0xc4c70004  lwc1        $f7, 0x4($a2)
    ctx->pc = 0x147d18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x147d1c: 0xc5e60004  lwc1        $f6, 0x4($t7)
    ctx->pc = 0x147d1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x147d20: 0x46051818  adda.s      $f3, $f5
    ctx->pc = 0x147d20u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x147d24: 0x46063981  sub.s       $f6, $f7, $f6
    ctx->pc = 0x147d24u;
    ctx->f[6] = FPU_SUB_S(ctx->f[7], ctx->f[6]);
    // 0x147d28: 0x4606215c  madd.s      $f5, $f4, $f6
    ctx->pc = 0x147d28u;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[6]));
    // 0x147d2c: 0xe6a50004  swc1        $f5, 0x4($s5)
    ctx->pc = 0x147d2cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 4), bits); }
    // 0x147d30: 0xc4c70008  lwc1        $f7, 0x8($a2)
    ctx->pc = 0x147d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x147d34: 0xc5e60008  lwc1        $f6, 0x8($t7)
    ctx->pc = 0x147d34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x147d38: 0xc6a50008  lwc1        $f5, 0x8($s5)
    ctx->pc = 0x147d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x147d3c: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x147d3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x147d40: 0x46063981  sub.s       $f6, $f7, $f6
    ctx->pc = 0x147d40u;
    ctx->f[6] = FPU_SUB_S(ctx->f[7], ctx->f[6]);
    // 0x147d44: 0x25ef000c  addiu       $t7, $t7, 0xC
    ctx->pc = 0x147d44u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 12));
    // 0x147d48: 0x46051818  adda.s      $f3, $f5
    ctx->pc = 0x147d48u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x147d4c: 0x4606215c  madd.s      $f5, $f4, $f6
    ctx->pc = 0x147d4cu;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[6]));
    // 0x147d50: 0xe6a50008  swc1        $f5, 0x8($s5)
    ctx->pc = 0x147d50u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 8), bits); }
    // 0x147d54: 0x16c0ffe6  bnez        $s6, . + 4 + (-0x1A << 2)
    ctx->pc = 0x147D54u;
    {
        const bool branch_taken_0x147d54 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x147D58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147D54u;
            // 0x147d58: 0x26b5000c  addiu       $s5, $s5, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147d54) {
            ctx->pc = 0x147CF0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_147cf0;
        }
    }
    ctx->pc = 0x147D5Cu;
    // 0x147d5c: 0x1000009e  b           . + 4 + (0x9E << 2)
    ctx->pc = 0x147D5Cu;
    {
        const bool branch_taken_0x147d5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x147d5c) {
            ctx->pc = 0x147FD8u;
            goto label_147fd8;
        }
    }
    ctx->pc = 0x147D64u;
    // 0x147d64: 0x0  nop
    ctx->pc = 0x147d64u;
    // NOP
label_147d68:
    // 0x147d68: 0x1220009b  beqz        $s1, . + 4 + (0x9B << 2)
    ctx->pc = 0x147D68u;
    {
        const bool branch_taken_0x147d68 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x147D6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147D68u;
            // 0x147d6c: 0x782d  daddu       $t7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147d68) {
            ctx->pc = 0x147FD8u;
            goto label_147fd8;
        }
    }
    ctx->pc = 0x147D70u;
    // 0x147d70: 0x2e210009  sltiu       $at, $s1, 0x9
    ctx->pc = 0x147d70u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x147d74: 0x14200080  bnez        $at, . + 4 + (0x80 << 2)
    ctx->pc = 0x147D74u;
    {
        const bool branch_taken_0x147d74 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x147d74) {
            ctx->pc = 0x147F78u;
            goto label_147f78;
        }
    }
    ctx->pc = 0x147D7Cu;
    // 0x147d7c: 0x0  nop
    ctx->pc = 0x147d7cu;
    // NOP
label_147d80:
    // 0x147d80: 0x25ef0008  addiu       $t7, $t7, 0x8
    ctx->pc = 0x147d80u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 8));
    // 0x147d84: 0xc6a50000  lwc1        $f5, 0x0($s5)
    ctx->pc = 0x147d84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x147d88: 0x1e8282b  sltu        $a1, $t7, $t0
    ctx->pc = 0x147d88u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x147d8c: 0xc4c60000  lwc1        $f6, 0x0($a2)
    ctx->pc = 0x147d8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x147d90: 0x46051818  adda.s      $f3, $f5
    ctx->pc = 0x147d90u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x147d94: 0x4604315c  madd.s      $f5, $f6, $f4
    ctx->pc = 0x147d94u;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[4]));
    // 0x147d98: 0xe6a50000  swc1        $f5, 0x0($s5)
    ctx->pc = 0x147d98u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
    // 0x147d9c: 0xc6a50004  lwc1        $f5, 0x4($s5)
    ctx->pc = 0x147d9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x147da0: 0xc4c60004  lwc1        $f6, 0x4($a2)
    ctx->pc = 0x147da0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x147da4: 0x46051818  adda.s      $f3, $f5
    ctx->pc = 0x147da4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x147da8: 0x4604315c  madd.s      $f5, $f6, $f4
    ctx->pc = 0x147da8u;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[4]));
    // 0x147dac: 0xe6a50004  swc1        $f5, 0x4($s5)
    ctx->pc = 0x147dacu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 4), bits); }
    // 0x147db0: 0xc6a50008  lwc1        $f5, 0x8($s5)
    ctx->pc = 0x147db0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x147db4: 0xc4c60008  lwc1        $f6, 0x8($a2)
    ctx->pc = 0x147db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x147db8: 0x46051818  adda.s      $f3, $f5
    ctx->pc = 0x147db8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x147dbc: 0x4604315c  madd.s      $f5, $f6, $f4
    ctx->pc = 0x147dbcu;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[4]));
    // 0x147dc0: 0xe6a50008  swc1        $f5, 0x8($s5)
    ctx->pc = 0x147dc0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 8), bits); }
    // 0x147dc4: 0xc6a5000c  lwc1        $f5, 0xC($s5)
    ctx->pc = 0x147dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x147dc8: 0xc4c60010  lwc1        $f6, 0x10($a2)
    ctx->pc = 0x147dc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x147dcc: 0x46051818  adda.s      $f3, $f5
    ctx->pc = 0x147dccu;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x147dd0: 0x4604315c  madd.s      $f5, $f6, $f4
    ctx->pc = 0x147dd0u;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[4]));
    // 0x147dd4: 0xe6a5000c  swc1        $f5, 0xC($s5)
    ctx->pc = 0x147dd4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 12), bits); }
    // 0x147dd8: 0xc6a50010  lwc1        $f5, 0x10($s5)
    ctx->pc = 0x147dd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x147ddc: 0xc4c60014  lwc1        $f6, 0x14($a2)
    ctx->pc = 0x147ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x147de0: 0x46051818  adda.s      $f3, $f5
    ctx->pc = 0x147de0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x147de4: 0x4604315c  madd.s      $f5, $f6, $f4
    ctx->pc = 0x147de4u;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[4]));
    // 0x147de8: 0xe6a50010  swc1        $f5, 0x10($s5)
    ctx->pc = 0x147de8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 16), bits); }
    // 0x147dec: 0xc6a50014  lwc1        $f5, 0x14($s5)
    ctx->pc = 0x147decu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x147df0: 0xc4c60018  lwc1        $f6, 0x18($a2)
    ctx->pc = 0x147df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x147df4: 0x46051818  adda.s      $f3, $f5
    ctx->pc = 0x147df4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x147df8: 0x4604315c  madd.s      $f5, $f6, $f4
    ctx->pc = 0x147df8u;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[4]));
    // 0x147dfc: 0xe6a50014  swc1        $f5, 0x14($s5)
    ctx->pc = 0x147dfcu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 20), bits); }
    // 0x147e00: 0xc6a50018  lwc1        $f5, 0x18($s5)
    ctx->pc = 0x147e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x147e04: 0xc4c60020  lwc1        $f6, 0x20($a2)
    ctx->pc = 0x147e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x147e08: 0x46051818  adda.s      $f3, $f5
    ctx->pc = 0x147e08u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x147e0c: 0x4604315c  madd.s      $f5, $f6, $f4
    ctx->pc = 0x147e0cu;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[4]));
    // 0x147e10: 0xe6a50018  swc1        $f5, 0x18($s5)
    ctx->pc = 0x147e10u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 24), bits); }
    // 0x147e14: 0xc6a5001c  lwc1        $f5, 0x1C($s5)
    ctx->pc = 0x147e14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x147e18: 0xc4c60024  lwc1        $f6, 0x24($a2)
    ctx->pc = 0x147e18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x147e1c: 0x46051818  adda.s      $f3, $f5
    ctx->pc = 0x147e1cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x147e20: 0x4604315c  madd.s      $f5, $f6, $f4
    ctx->pc = 0x147e20u;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[4]));
    // 0x147e24: 0xe6a5001c  swc1        $f5, 0x1C($s5)
    ctx->pc = 0x147e24u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 28), bits); }
    // 0x147e28: 0xc6a50020  lwc1        $f5, 0x20($s5)
    ctx->pc = 0x147e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x147e2c: 0xc4c60028  lwc1        $f6, 0x28($a2)
    ctx->pc = 0x147e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x147e30: 0x46051818  adda.s      $f3, $f5
    ctx->pc = 0x147e30u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x147e34: 0x4604315c  madd.s      $f5, $f6, $f4
    ctx->pc = 0x147e34u;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[4]));
    // 0x147e38: 0xe6a50020  swc1        $f5, 0x20($s5)
    ctx->pc = 0x147e38u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 32), bits); }
    // 0x147e3c: 0xc6a50024  lwc1        $f5, 0x24($s5)
    ctx->pc = 0x147e3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x147e40: 0xc4c60030  lwc1        $f6, 0x30($a2)
    ctx->pc = 0x147e40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x147e44: 0x46051818  adda.s      $f3, $f5
    ctx->pc = 0x147e44u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x147e48: 0x4604315c  madd.s      $f5, $f6, $f4
    ctx->pc = 0x147e48u;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[4]));
    // 0x147e4c: 0xe6a50024  swc1        $f5, 0x24($s5)
    ctx->pc = 0x147e4cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 36), bits); }
    // 0x147e50: 0xc6a50028  lwc1        $f5, 0x28($s5)
    ctx->pc = 0x147e50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x147e54: 0xc4c60034  lwc1        $f6, 0x34($a2)
    ctx->pc = 0x147e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x147e58: 0x46051818  adda.s      $f3, $f5
    ctx->pc = 0x147e58u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x147e5c: 0x4604315c  madd.s      $f5, $f6, $f4
    ctx->pc = 0x147e5cu;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[4]));
    // 0x147e60: 0xe6a50028  swc1        $f5, 0x28($s5)
    ctx->pc = 0x147e60u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 40), bits); }
    // 0x147e64: 0xc6a5002c  lwc1        $f5, 0x2C($s5)
    ctx->pc = 0x147e64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x147e68: 0xc4c60038  lwc1        $f6, 0x38($a2)
    ctx->pc = 0x147e68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x147e6c: 0x46051818  adda.s      $f3, $f5
    ctx->pc = 0x147e6cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x147e70: 0x4604315c  madd.s      $f5, $f6, $f4
    ctx->pc = 0x147e70u;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[4]));
    // 0x147e74: 0xe6a5002c  swc1        $f5, 0x2C($s5)
    ctx->pc = 0x147e74u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 44), bits); }
    // 0x147e78: 0xc6a50030  lwc1        $f5, 0x30($s5)
    ctx->pc = 0x147e78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x147e7c: 0xc4c60040  lwc1        $f6, 0x40($a2)
    ctx->pc = 0x147e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x147e80: 0x46051818  adda.s      $f3, $f5
    ctx->pc = 0x147e80u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x147e84: 0x4604315c  madd.s      $f5, $f6, $f4
    ctx->pc = 0x147e84u;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[4]));
    // 0x147e88: 0xe6a50030  swc1        $f5, 0x30($s5)
    ctx->pc = 0x147e88u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 48), bits); }
    // 0x147e8c: 0xc6a50034  lwc1        $f5, 0x34($s5)
    ctx->pc = 0x147e8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x147e90: 0xc4c60044  lwc1        $f6, 0x44($a2)
    ctx->pc = 0x147e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x147e94: 0x46051818  adda.s      $f3, $f5
    ctx->pc = 0x147e94u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x147e98: 0x4604315c  madd.s      $f5, $f6, $f4
    ctx->pc = 0x147e98u;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[4]));
    // 0x147e9c: 0xe6a50034  swc1        $f5, 0x34($s5)
    ctx->pc = 0x147e9cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 52), bits); }
    // 0x147ea0: 0xc6a50038  lwc1        $f5, 0x38($s5)
    ctx->pc = 0x147ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x147ea4: 0xc4c60048  lwc1        $f6, 0x48($a2)
    ctx->pc = 0x147ea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x147ea8: 0x46051818  adda.s      $f3, $f5
    ctx->pc = 0x147ea8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x147eac: 0x4604315c  madd.s      $f5, $f6, $f4
    ctx->pc = 0x147eacu;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[4]));
    // 0x147eb0: 0xe6a50038  swc1        $f5, 0x38($s5)
    ctx->pc = 0x147eb0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 56), bits); }
    // 0x147eb4: 0xc6a5003c  lwc1        $f5, 0x3C($s5)
    ctx->pc = 0x147eb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x147eb8: 0xc4c60050  lwc1        $f6, 0x50($a2)
    ctx->pc = 0x147eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x147ebc: 0x46051818  adda.s      $f3, $f5
    ctx->pc = 0x147ebcu;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x147ec0: 0x4604315c  madd.s      $f5, $f6, $f4
    ctx->pc = 0x147ec0u;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[4]));
    // 0x147ec4: 0xe6a5003c  swc1        $f5, 0x3C($s5)
    ctx->pc = 0x147ec4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 60), bits); }
    // 0x147ec8: 0xc6a50040  lwc1        $f5, 0x40($s5)
    ctx->pc = 0x147ec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x147ecc: 0xc4c60054  lwc1        $f6, 0x54($a2)
    ctx->pc = 0x147eccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x147ed0: 0x46051818  adda.s      $f3, $f5
    ctx->pc = 0x147ed0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x147ed4: 0x4604315c  madd.s      $f5, $f6, $f4
    ctx->pc = 0x147ed4u;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[4]));
    // 0x147ed8: 0xe6a50040  swc1        $f5, 0x40($s5)
    ctx->pc = 0x147ed8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 64), bits); }
    // 0x147edc: 0xc6a50044  lwc1        $f5, 0x44($s5)
    ctx->pc = 0x147edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x147ee0: 0xc4c60058  lwc1        $f6, 0x58($a2)
    ctx->pc = 0x147ee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x147ee4: 0x46051818  adda.s      $f3, $f5
    ctx->pc = 0x147ee4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x147ee8: 0x4604315c  madd.s      $f5, $f6, $f4
    ctx->pc = 0x147ee8u;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[4]));
    // 0x147eec: 0xe6a50044  swc1        $f5, 0x44($s5)
    ctx->pc = 0x147eecu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 68), bits); }
    // 0x147ef0: 0xc6a50048  lwc1        $f5, 0x48($s5)
    ctx->pc = 0x147ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x147ef4: 0xc4c60060  lwc1        $f6, 0x60($a2)
    ctx->pc = 0x147ef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x147ef8: 0x46051818  adda.s      $f3, $f5
    ctx->pc = 0x147ef8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x147efc: 0x4604315c  madd.s      $f5, $f6, $f4
    ctx->pc = 0x147efcu;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[4]));
    // 0x147f00: 0xe6a50048  swc1        $f5, 0x48($s5)
    ctx->pc = 0x147f00u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 72), bits); }
    // 0x147f04: 0xc6a5004c  lwc1        $f5, 0x4C($s5)
    ctx->pc = 0x147f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x147f08: 0xc4c60064  lwc1        $f6, 0x64($a2)
    ctx->pc = 0x147f08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x147f0c: 0x46051818  adda.s      $f3, $f5
    ctx->pc = 0x147f0cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x147f10: 0x4604315c  madd.s      $f5, $f6, $f4
    ctx->pc = 0x147f10u;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[4]));
    // 0x147f14: 0xe6a5004c  swc1        $f5, 0x4C($s5)
    ctx->pc = 0x147f14u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 76), bits); }
    // 0x147f18: 0xc6a50050  lwc1        $f5, 0x50($s5)
    ctx->pc = 0x147f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x147f1c: 0xc4c60068  lwc1        $f6, 0x68($a2)
    ctx->pc = 0x147f1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x147f20: 0x46051818  adda.s      $f3, $f5
    ctx->pc = 0x147f20u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x147f24: 0x4604315c  madd.s      $f5, $f6, $f4
    ctx->pc = 0x147f24u;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[4]));
    // 0x147f28: 0xe6a50050  swc1        $f5, 0x50($s5)
    ctx->pc = 0x147f28u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 80), bits); }
    // 0x147f2c: 0xc6a50054  lwc1        $f5, 0x54($s5)
    ctx->pc = 0x147f2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x147f30: 0xc4c60070  lwc1        $f6, 0x70($a2)
    ctx->pc = 0x147f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x147f34: 0x46051818  adda.s      $f3, $f5
    ctx->pc = 0x147f34u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x147f38: 0x4604315c  madd.s      $f5, $f6, $f4
    ctx->pc = 0x147f38u;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[4]));
    // 0x147f3c: 0xe6a50054  swc1        $f5, 0x54($s5)
    ctx->pc = 0x147f3cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 84), bits); }
    // 0x147f40: 0xc6a50058  lwc1        $f5, 0x58($s5)
    ctx->pc = 0x147f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x147f44: 0xc4c60074  lwc1        $f6, 0x74($a2)
    ctx->pc = 0x147f44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x147f48: 0x46051818  adda.s      $f3, $f5
    ctx->pc = 0x147f48u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x147f4c: 0x4604315c  madd.s      $f5, $f6, $f4
    ctx->pc = 0x147f4cu;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[4]));
    // 0x147f50: 0xe6a50058  swc1        $f5, 0x58($s5)
    ctx->pc = 0x147f50u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 88), bits); }
    // 0x147f54: 0xc6a5005c  lwc1        $f5, 0x5C($s5)
    ctx->pc = 0x147f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x147f58: 0xc4c60078  lwc1        $f6, 0x78($a2)
    ctx->pc = 0x147f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x147f5c: 0x46051818  adda.s      $f3, $f5
    ctx->pc = 0x147f5cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x147f60: 0x4604315c  madd.s      $f5, $f6, $f4
    ctx->pc = 0x147f60u;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[4]));
    // 0x147f64: 0x24c60080  addiu       $a2, $a2, 0x80
    ctx->pc = 0x147f64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x147f68: 0xe6a5005c  swc1        $f5, 0x5C($s5)
    ctx->pc = 0x147f68u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 92), bits); }
    // 0x147f6c: 0x14a0ff84  bnez        $a1, . + 4 + (-0x7C << 2)
    ctx->pc = 0x147F6Cu;
    {
        const bool branch_taken_0x147f6c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x147F70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147F6Cu;
            // 0x147f70: 0x26b50060  addiu       $s5, $s5, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147f6c) {
            ctx->pc = 0x147D80u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_147d80;
        }
    }
    ctx->pc = 0x147F74u;
    // 0x147f74: 0x0  nop
    ctx->pc = 0x147f74u;
    // NOP
label_147f78:
    // 0x147f78: 0x1f1082b  sltu        $at, $t7, $s1
    ctx->pc = 0x147f78u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x147f7c: 0x10200016  beqz        $at, . + 4 + (0x16 << 2)
    ctx->pc = 0x147F7Cu;
    {
        const bool branch_taken_0x147f7c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x147f7c) {
            ctx->pc = 0x147FD8u;
            goto label_147fd8;
        }
    }
    ctx->pc = 0x147F84u;
    // 0x147f84: 0x0  nop
    ctx->pc = 0x147f84u;
    // NOP
label_147f88:
    // 0x147f88: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x147f88u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x147f8c: 0xc6a50000  lwc1        $f5, 0x0($s5)
    ctx->pc = 0x147f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x147f90: 0x1f1282b  sltu        $a1, $t7, $s1
    ctx->pc = 0x147f90u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x147f94: 0xc4c60000  lwc1        $f6, 0x0($a2)
    ctx->pc = 0x147f94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x147f98: 0x46051818  adda.s      $f3, $f5
    ctx->pc = 0x147f98u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x147f9c: 0x4604315c  madd.s      $f5, $f6, $f4
    ctx->pc = 0x147f9cu;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[4]));
    // 0x147fa0: 0xe6a50000  swc1        $f5, 0x0($s5)
    ctx->pc = 0x147fa0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
    // 0x147fa4: 0xc6a50004  lwc1        $f5, 0x4($s5)
    ctx->pc = 0x147fa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x147fa8: 0xc4c60004  lwc1        $f6, 0x4($a2)
    ctx->pc = 0x147fa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x147fac: 0x46051818  adda.s      $f3, $f5
    ctx->pc = 0x147facu;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x147fb0: 0x4604315c  madd.s      $f5, $f6, $f4
    ctx->pc = 0x147fb0u;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[4]));
    // 0x147fb4: 0xe6a50004  swc1        $f5, 0x4($s5)
    ctx->pc = 0x147fb4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 4), bits); }
    // 0x147fb8: 0xc6a50008  lwc1        $f5, 0x8($s5)
    ctx->pc = 0x147fb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x147fbc: 0xc4c60008  lwc1        $f6, 0x8($a2)
    ctx->pc = 0x147fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x147fc0: 0x46051818  adda.s      $f3, $f5
    ctx->pc = 0x147fc0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x147fc4: 0x4604315c  madd.s      $f5, $f6, $f4
    ctx->pc = 0x147fc4u;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[4]));
    // 0x147fc8: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x147fc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x147fcc: 0xe6a50008  swc1        $f5, 0x8($s5)
    ctx->pc = 0x147fccu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 8), bits); }
    // 0x147fd0: 0x14a0ffed  bnez        $a1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x147FD0u;
    {
        const bool branch_taken_0x147fd0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x147FD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147FD0u;
            // 0x147fd4: 0x26b5000c  addiu       $s5, $s5, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147fd0) {
            ctx->pc = 0x147F88u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_147f88;
        }
    }
    ctx->pc = 0x147FD8u;
label_147fd8:
    // 0x147fd8: 0xad860000  sw          $a2, 0x0($t4)
    ctx->pc = 0x147fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 6));
    // 0x147fdc: 0x0  nop
    ctx->pc = 0x147fdcu;
    // NOP
label_147fe0:
    // 0x147fe0: 0x7ba500c0  lq          $a1, 0xC0($sp)
    ctx->pc = 0x147fe0u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x147fe4: 0x10a00190  beqz        $a1, . + 4 + (0x190 << 2)
    ctx->pc = 0x147FE4u;
    {
        const bool branch_taken_0x147fe4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x147fe4) {
            ctx->pc = 0x148628u;
            goto label_148628;
        }
    }
    ctx->pc = 0x147FECu;
    // 0x147fec: 0x8d650000  lw          $a1, 0x0($t3)
    ctx->pc = 0x147fecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x147ff0: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x147FF0u;
    {
        const bool branch_taken_0x147ff0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x147ff0) {
            ctx->pc = 0x148000u;
            goto label_148000;
        }
    }
    ctx->pc = 0x147FF8u;
    // 0x147ff8: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x147ff8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x147ffc: 0xad650000  sw          $a1, 0x0($t3)
    ctx->pc = 0x147ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 5));
label_148000:
    // 0x148000: 0x8faf0204  lw          $t7, 0x204($sp)
    ctx->pc = 0x148000u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 516)));
    // 0x148004: 0x8c85000c  lw          $a1, 0xC($a0)
    ctx->pc = 0x148004u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x148008: 0x24150020  addiu       $s5, $zero, 0x20
    ctx->pc = 0x148008u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x14800c: 0x8d660000  lw          $a2, 0x0($t3)
    ctx->pc = 0x14800cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x148010: 0x26fc021  addu        $t8, $s3, $t7
    ctx->pc = 0x148010u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 15)));
    // 0x148014: 0x10b50044  beq         $a1, $s5, . + 4 + (0x44 << 2)
    ctx->pc = 0x148014u;
    {
        const bool branch_taken_0x148014 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 21));
        ctx->pc = 0x148018u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x148014u;
            // 0x148018: 0x24f7821  addu        $t7, $s2, $t7 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 15)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148014) {
            ctx->pc = 0x148128u;
            goto label_148128;
        }
    }
    ctx->pc = 0x14801Cu;
    // 0x14801c: 0x24150010  addiu       $s5, $zero, 0x10
    ctx->pc = 0x14801cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x148020: 0x10b50005  beq         $a1, $s5, . + 4 + (0x5 << 2)
    ctx->pc = 0x148020u;
    {
        const bool branch_taken_0x148020 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 21));
        if (branch_taken_0x148020) {
            ctx->pc = 0x148038u;
            goto label_148038;
        }
    }
    ctx->pc = 0x148028u;
    // 0x148028: 0x10a0017d  beqz        $a1, . + 4 + (0x17D << 2)
    ctx->pc = 0x148028u;
    {
        const bool branch_taken_0x148028 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x148028) {
            ctx->pc = 0x148620u;
            goto label_148620;
        }
    }
    ctx->pc = 0x148030u;
    // 0x148030: 0x1000017b  b           . + 4 + (0x17B << 2)
    ctx->pc = 0x148030u;
    {
        const bool branch_taken_0x148030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x148030) {
            ctx->pc = 0x148620u;
            goto label_148620;
        }
    }
    ctx->pc = 0x148038u;
label_148038:
    // 0x148038: 0x12200179  beqz        $s1, . + 4 + (0x179 << 2)
    ctx->pc = 0x148038u;
    {
        const bool branch_taken_0x148038 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x14803Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x148038u;
            // 0x14803c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148038) {
            ctx->pc = 0x148620u;
            goto label_148620;
        }
    }
    ctx->pc = 0x148040u;
label_148040:
    // 0x148040: 0x85f60000  lh          $s6, 0x0($t7)
    ctx->pc = 0x148040u;
    SET_GPR_S32(ctx, 22, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x148044: 0x87150000  lh          $s5, 0x0($t8)
    ctx->pc = 0x148044u;
    SET_GPR_S32(ctx, 21, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x148048: 0xc4c60000  lwc1        $f6, 0x0($a2)
    ctx->pc = 0x148048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x14804c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x14804cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x148050: 0x44962800  mtc1        $s6, $f5
    ctx->pc = 0x148050u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x148054: 0x0  nop
    ctx->pc = 0x148054u;
    // NOP
    // 0x148058: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x148058u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x14805c: 0x44953800  mtc1        $s5, $f7
    ctx->pc = 0x14805cu;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x148060: 0x0  nop
    ctx->pc = 0x148060u;
    // NOP
    // 0x148064: 0x46053141  sub.s       $f5, $f6, $f5
    ctx->pc = 0x148064u;
    ctx->f[5] = FPU_SUB_S(ctx->f[6], ctx->f[5]);
    // 0x148068: 0xb1a82b  sltu        $s5, $a1, $s1
    ctx->pc = 0x148068u;
    SET_GPR_U64(ctx, 21, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x14806c: 0x468039e0  cvt.s.w     $f7, $f7
    ctx->pc = 0x14806cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[7], sizeof(tmp)); ctx->f[7] = FPU_CVT_S_W(tmp); }
    // 0x148070: 0x4605201a  mula.s      $f4, $f5
    ctx->pc = 0x148070u;
    ctx->f[31] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x148074: 0x4607115c  madd.s      $f5, $f2, $f7
    ctx->pc = 0x148074u;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[7]));
    // 0x148078: 0x46050942  mul.s       $f5, $f1, $f5
    ctx->pc = 0x148078u;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x14807c: 0x46002964  .word       0x46002964                   # cvt.w.s     $f5, $f5 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14807cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[5]); std::memcpy(&ctx->f[5], &tmp, sizeof(tmp)); }
    // 0x148080: 0x44162800  mfc1        $s6, $f5
    ctx->pc = 0x148080u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 22, bits); }
    // 0x148084: 0x0  nop
    ctx->pc = 0x148084u;
    // NOP
    // 0x148088: 0xa7160000  sh          $s6, 0x0($t8)
    ctx->pc = 0x148088u;
    WRITE16(ADD32(GPR_U32(ctx, 24), 0), (uint16_t)GPR_U32(ctx, 22));
    // 0x14808c: 0x85f60002  lh          $s6, 0x2($t7)
    ctx->pc = 0x14808cu;
    SET_GPR_S32(ctx, 22, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 2)));
    // 0x148090: 0xc4c60004  lwc1        $f6, 0x4($a2)
    ctx->pc = 0x148090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x148094: 0x87190002  lh          $t9, 0x2($t8)
    ctx->pc = 0x148094u;
    SET_GPR_S32(ctx, 25, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 2)));
    // 0x148098: 0x44962800  mtc1        $s6, $f5
    ctx->pc = 0x148098u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x14809c: 0x0  nop
    ctx->pc = 0x14809cu;
    // NOP
    // 0x1480a0: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x1480a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x1480a4: 0x44993800  mtc1        $t9, $f7
    ctx->pc = 0x1480a4u;
    { uint32_t bits = GPR_U32(ctx, 25); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x1480a8: 0x0  nop
    ctx->pc = 0x1480a8u;
    // NOP
    // 0x1480ac: 0x46053141  sub.s       $f5, $f6, $f5
    ctx->pc = 0x1480acu;
    ctx->f[5] = FPU_SUB_S(ctx->f[6], ctx->f[5]);
    // 0x1480b0: 0x468039e0  cvt.s.w     $f7, $f7
    ctx->pc = 0x1480b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[7], sizeof(tmp)); ctx->f[7] = FPU_CVT_S_W(tmp); }
    // 0x1480b4: 0x4605201a  mula.s      $f4, $f5
    ctx->pc = 0x1480b4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x1480b8: 0x4607115c  madd.s      $f5, $f2, $f7
    ctx->pc = 0x1480b8u;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[7]));
    // 0x1480bc: 0x46050942  mul.s       $f5, $f1, $f5
    ctx->pc = 0x1480bcu;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x1480c0: 0x46002964  .word       0x46002964                   # cvt.w.s     $f5, $f5 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1480c0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[5]); std::memcpy(&ctx->f[5], &tmp, sizeof(tmp)); }
    // 0x1480c4: 0x44162800  mfc1        $s6, $f5
    ctx->pc = 0x1480c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 22, bits); }
    // 0x1480c8: 0x0  nop
    ctx->pc = 0x1480c8u;
    // NOP
    // 0x1480cc: 0xa7160002  sh          $s6, 0x2($t8)
    ctx->pc = 0x1480ccu;
    WRITE16(ADD32(GPR_U32(ctx, 24), 2), (uint16_t)GPR_U32(ctx, 22));
    // 0x1480d0: 0x85f60004  lh          $s6, 0x4($t7)
    ctx->pc = 0x1480d0u;
    SET_GPR_S32(ctx, 22, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 4)));
    // 0x1480d4: 0xc4c60008  lwc1        $f6, 0x8($a2)
    ctx->pc = 0x1480d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x1480d8: 0x87190004  lh          $t9, 0x4($t8)
    ctx->pc = 0x1480d8u;
    SET_GPR_S32(ctx, 25, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 4)));
    // 0x1480dc: 0x44962800  mtc1        $s6, $f5
    ctx->pc = 0x1480dcu;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x1480e0: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x1480e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x1480e4: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x1480e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x1480e8: 0x25ef0006  addiu       $t7, $t7, 0x6
    ctx->pc = 0x1480e8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 6));
    // 0x1480ec: 0x44993800  mtc1        $t9, $f7
    ctx->pc = 0x1480ecu;
    { uint32_t bits = GPR_U32(ctx, 25); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x1480f0: 0x0  nop
    ctx->pc = 0x1480f0u;
    // NOP
    // 0x1480f4: 0x46053141  sub.s       $f5, $f6, $f5
    ctx->pc = 0x1480f4u;
    ctx->f[5] = FPU_SUB_S(ctx->f[6], ctx->f[5]);
    // 0x1480f8: 0x468039e0  cvt.s.w     $f7, $f7
    ctx->pc = 0x1480f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[7], sizeof(tmp)); ctx->f[7] = FPU_CVT_S_W(tmp); }
    // 0x1480fc: 0x4605201a  mula.s      $f4, $f5
    ctx->pc = 0x1480fcu;
    ctx->f[31] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x148100: 0x4607115c  madd.s      $f5, $f2, $f7
    ctx->pc = 0x148100u;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[7]));
    // 0x148104: 0x46050942  mul.s       $f5, $f1, $f5
    ctx->pc = 0x148104u;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x148108: 0x46002964  .word       0x46002964                   # cvt.w.s     $f5, $f5 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x148108u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[5]); std::memcpy(&ctx->f[5], &tmp, sizeof(tmp)); }
    // 0x14810c: 0x44162800  mfc1        $s6, $f5
    ctx->pc = 0x14810cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 22, bits); }
    // 0x148110: 0x0  nop
    ctx->pc = 0x148110u;
    // NOP
    // 0x148114: 0xa7160004  sh          $s6, 0x4($t8)
    ctx->pc = 0x148114u;
    WRITE16(ADD32(GPR_U32(ctx, 24), 4), (uint16_t)GPR_U32(ctx, 22));
    // 0x148118: 0x16a0ffc9  bnez        $s5, . + 4 + (-0x37 << 2)
    ctx->pc = 0x148118u;
    {
        const bool branch_taken_0x148118 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x14811Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x148118u;
            // 0x14811c: 0x27180006  addiu       $t8, $t8, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148118) {
            ctx->pc = 0x148040u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_148040;
        }
    }
    ctx->pc = 0x148120u;
    // 0x148120: 0x1000013f  b           . + 4 + (0x13F << 2)
    ctx->pc = 0x148120u;
    {
        const bool branch_taken_0x148120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x148120) {
            ctx->pc = 0x148620u;
            goto label_148620;
        }
    }
    ctx->pc = 0x148128u;
label_148128:
    // 0x148128: 0x1220013d  beqz        $s1, . + 4 + (0x13D << 2)
    ctx->pc = 0x148128u;
    {
        const bool branch_taken_0x148128 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x14812Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x148128u;
            // 0x14812c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148128) {
            ctx->pc = 0x148620u;
            goto label_148620;
        }
    }
    ctx->pc = 0x148130u;
    // 0x148130: 0x2e210009  sltiu       $at, $s1, 0x9
    ctx->pc = 0x148130u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x148134: 0x14200110  bnez        $at, . + 4 + (0x110 << 2)
    ctx->pc = 0x148134u;
    {
        const bool branch_taken_0x148134 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x148134) {
            ctx->pc = 0x148578u;
            goto label_148578;
        }
    }
    ctx->pc = 0x14813Cu;
    // 0x14813c: 0x0  nop
    ctx->pc = 0x14813cu;
    // NOP
label_148140:
    // 0x148140: 0x87150000  lh          $s5, 0x0($t8)
    ctx->pc = 0x148140u;
    SET_GPR_S32(ctx, 21, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x148144: 0xc4c50000  lwc1        $f5, 0x0($a2)
    ctx->pc = 0x148144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x148148: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x148148u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x14814c: 0xa8782b  sltu        $t7, $a1, $t0
    ctx->pc = 0x14814cu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x148150: 0x44953000  mtc1        $s5, $f6
    ctx->pc = 0x148150u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x148154: 0x4604281a  mula.s      $f5, $f4
    ctx->pc = 0x148154u;
    ctx->f[31] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x148158: 0x46803160  cvt.s.w     $f5, $f6
    ctx->pc = 0x148158u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[6], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x14815c: 0x4605115c  madd.s      $f5, $f2, $f5
    ctx->pc = 0x14815cu;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[5]));
    // 0x148160: 0x46050942  mul.s       $f5, $f1, $f5
    ctx->pc = 0x148160u;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x148164: 0x46002964  .word       0x46002964                   # cvt.w.s     $f5, $f5 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x148164u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[5]); std::memcpy(&ctx->f[5], &tmp, sizeof(tmp)); }
    // 0x148168: 0x44152800  mfc1        $s5, $f5
    ctx->pc = 0x148168u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 21, bits); }
    // 0x14816c: 0x0  nop
    ctx->pc = 0x14816cu;
    // NOP
    // 0x148170: 0xa7150000  sh          $s5, 0x0($t8)
    ctx->pc = 0x148170u;
    WRITE16(ADD32(GPR_U32(ctx, 24), 0), (uint16_t)GPR_U32(ctx, 21));
    // 0x148174: 0xc4c50004  lwc1        $f5, 0x4($a2)
    ctx->pc = 0x148174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x148178: 0x87150002  lh          $s5, 0x2($t8)
    ctx->pc = 0x148178u;
    SET_GPR_S32(ctx, 21, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 2)));
    // 0x14817c: 0x44953000  mtc1        $s5, $f6
    ctx->pc = 0x14817cu;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x148180: 0x4604281a  mula.s      $f5, $f4
    ctx->pc = 0x148180u;
    ctx->f[31] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x148184: 0x46803160  cvt.s.w     $f5, $f6
    ctx->pc = 0x148184u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[6], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x148188: 0x4605115c  madd.s      $f5, $f2, $f5
    ctx->pc = 0x148188u;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[5]));
    // 0x14818c: 0x46050942  mul.s       $f5, $f1, $f5
    ctx->pc = 0x14818cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x148190: 0x46002964  .word       0x46002964                   # cvt.w.s     $f5, $f5 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x148190u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[5]); std::memcpy(&ctx->f[5], &tmp, sizeof(tmp)); }
    // 0x148194: 0x44152800  mfc1        $s5, $f5
    ctx->pc = 0x148194u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 21, bits); }
    // 0x148198: 0x0  nop
    ctx->pc = 0x148198u;
    // NOP
    // 0x14819c: 0xa7150002  sh          $s5, 0x2($t8)
    ctx->pc = 0x14819cu;
    WRITE16(ADD32(GPR_U32(ctx, 24), 2), (uint16_t)GPR_U32(ctx, 21));
    // 0x1481a0: 0xc4c50008  lwc1        $f5, 0x8($a2)
    ctx->pc = 0x1481a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1481a4: 0x87150004  lh          $s5, 0x4($t8)
    ctx->pc = 0x1481a4u;
    SET_GPR_S32(ctx, 21, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 4)));
    // 0x1481a8: 0x44953000  mtc1        $s5, $f6
    ctx->pc = 0x1481a8u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x1481ac: 0x4604281a  mula.s      $f5, $f4
    ctx->pc = 0x1481acu;
    ctx->f[31] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x1481b0: 0x46803160  cvt.s.w     $f5, $f6
    ctx->pc = 0x1481b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[6], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x1481b4: 0x4605115c  madd.s      $f5, $f2, $f5
    ctx->pc = 0x1481b4u;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[5]));
    // 0x1481b8: 0x46050942  mul.s       $f5, $f1, $f5
    ctx->pc = 0x1481b8u;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x1481bc: 0x46002964  .word       0x46002964                   # cvt.w.s     $f5, $f5 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1481bcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[5]); std::memcpy(&ctx->f[5], &tmp, sizeof(tmp)); }
    // 0x1481c0: 0x44152800  mfc1        $s5, $f5
    ctx->pc = 0x1481c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 21, bits); }
    // 0x1481c4: 0x0  nop
    ctx->pc = 0x1481c4u;
    // NOP
    // 0x1481c8: 0xa7150004  sh          $s5, 0x4($t8)
    ctx->pc = 0x1481c8u;
    WRITE16(ADD32(GPR_U32(ctx, 24), 4), (uint16_t)GPR_U32(ctx, 21));
    // 0x1481cc: 0xc4c50010  lwc1        $f5, 0x10($a2)
    ctx->pc = 0x1481ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1481d0: 0x87150006  lh          $s5, 0x6($t8)
    ctx->pc = 0x1481d0u;
    SET_GPR_S32(ctx, 21, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 6)));
    // 0x1481d4: 0x44953000  mtc1        $s5, $f6
    ctx->pc = 0x1481d4u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x1481d8: 0x4604281a  mula.s      $f5, $f4
    ctx->pc = 0x1481d8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x1481dc: 0x46803160  cvt.s.w     $f5, $f6
    ctx->pc = 0x1481dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[6], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x1481e0: 0x4605115c  madd.s      $f5, $f2, $f5
    ctx->pc = 0x1481e0u;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[5]));
    // 0x1481e4: 0x46050942  mul.s       $f5, $f1, $f5
    ctx->pc = 0x1481e4u;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x1481e8: 0x46002964  .word       0x46002964                   # cvt.w.s     $f5, $f5 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1481e8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[5]); std::memcpy(&ctx->f[5], &tmp, sizeof(tmp)); }
    // 0x1481ec: 0x44152800  mfc1        $s5, $f5
    ctx->pc = 0x1481ecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 21, bits); }
    // 0x1481f0: 0x0  nop
    ctx->pc = 0x1481f0u;
    // NOP
    // 0x1481f4: 0xa7150006  sh          $s5, 0x6($t8)
    ctx->pc = 0x1481f4u;
    WRITE16(ADD32(GPR_U32(ctx, 24), 6), (uint16_t)GPR_U32(ctx, 21));
    // 0x1481f8: 0xc4c50014  lwc1        $f5, 0x14($a2)
    ctx->pc = 0x1481f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1481fc: 0x87150008  lh          $s5, 0x8($t8)
    ctx->pc = 0x1481fcu;
    SET_GPR_S32(ctx, 21, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 8)));
    // 0x148200: 0x44953000  mtc1        $s5, $f6
    ctx->pc = 0x148200u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x148204: 0x4604281a  mula.s      $f5, $f4
    ctx->pc = 0x148204u;
    ctx->f[31] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x148208: 0x46803160  cvt.s.w     $f5, $f6
    ctx->pc = 0x148208u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[6], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x14820c: 0x4605115c  madd.s      $f5, $f2, $f5
    ctx->pc = 0x14820cu;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[5]));
    // 0x148210: 0x46050942  mul.s       $f5, $f1, $f5
    ctx->pc = 0x148210u;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x148214: 0x46002964  .word       0x46002964                   # cvt.w.s     $f5, $f5 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x148214u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[5]); std::memcpy(&ctx->f[5], &tmp, sizeof(tmp)); }
    // 0x148218: 0x44152800  mfc1        $s5, $f5
    ctx->pc = 0x148218u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 21, bits); }
    // 0x14821c: 0x0  nop
    ctx->pc = 0x14821cu;
    // NOP
    // 0x148220: 0xa7150008  sh          $s5, 0x8($t8)
    ctx->pc = 0x148220u;
    WRITE16(ADD32(GPR_U32(ctx, 24), 8), (uint16_t)GPR_U32(ctx, 21));
    // 0x148224: 0xc4c50018  lwc1        $f5, 0x18($a2)
    ctx->pc = 0x148224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x148228: 0x8715000a  lh          $s5, 0xA($t8)
    ctx->pc = 0x148228u;
    SET_GPR_S32(ctx, 21, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 10)));
    // 0x14822c: 0x44953000  mtc1        $s5, $f6
    ctx->pc = 0x14822cu;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x148230: 0x4604281a  mula.s      $f5, $f4
    ctx->pc = 0x148230u;
    ctx->f[31] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x148234: 0x46803160  cvt.s.w     $f5, $f6
    ctx->pc = 0x148234u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[6], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x148238: 0x4605115c  madd.s      $f5, $f2, $f5
    ctx->pc = 0x148238u;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[5]));
    // 0x14823c: 0x46050942  mul.s       $f5, $f1, $f5
    ctx->pc = 0x14823cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x148240: 0x46002964  .word       0x46002964                   # cvt.w.s     $f5, $f5 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x148240u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[5]); std::memcpy(&ctx->f[5], &tmp, sizeof(tmp)); }
    // 0x148244: 0x44152800  mfc1        $s5, $f5
    ctx->pc = 0x148244u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 21, bits); }
    // 0x148248: 0x0  nop
    ctx->pc = 0x148248u;
    // NOP
    // 0x14824c: 0xa715000a  sh          $s5, 0xA($t8)
    ctx->pc = 0x14824cu;
    WRITE16(ADD32(GPR_U32(ctx, 24), 10), (uint16_t)GPR_U32(ctx, 21));
    // 0x148250: 0xc4c50020  lwc1        $f5, 0x20($a2)
    ctx->pc = 0x148250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x148254: 0x8715000c  lh          $s5, 0xC($t8)
    ctx->pc = 0x148254u;
    SET_GPR_S32(ctx, 21, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 12)));
    // 0x148258: 0x44953000  mtc1        $s5, $f6
    ctx->pc = 0x148258u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x14825c: 0x4604281a  mula.s      $f5, $f4
    ctx->pc = 0x14825cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x148260: 0x46803160  cvt.s.w     $f5, $f6
    ctx->pc = 0x148260u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[6], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x148264: 0x4605115c  madd.s      $f5, $f2, $f5
    ctx->pc = 0x148264u;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[5]));
    // 0x148268: 0x46050942  mul.s       $f5, $f1, $f5
    ctx->pc = 0x148268u;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x14826c: 0x46002964  .word       0x46002964                   # cvt.w.s     $f5, $f5 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14826cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[5]); std::memcpy(&ctx->f[5], &tmp, sizeof(tmp)); }
    // 0x148270: 0x44152800  mfc1        $s5, $f5
    ctx->pc = 0x148270u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 21, bits); }
    // 0x148274: 0x0  nop
    ctx->pc = 0x148274u;
    // NOP
    // 0x148278: 0xa715000c  sh          $s5, 0xC($t8)
    ctx->pc = 0x148278u;
    WRITE16(ADD32(GPR_U32(ctx, 24), 12), (uint16_t)GPR_U32(ctx, 21));
    // 0x14827c: 0xc4c50024  lwc1        $f5, 0x24($a2)
    ctx->pc = 0x14827cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x148280: 0x8715000e  lh          $s5, 0xE($t8)
    ctx->pc = 0x148280u;
    SET_GPR_S32(ctx, 21, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 14)));
    // 0x148284: 0x44953000  mtc1        $s5, $f6
    ctx->pc = 0x148284u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x148288: 0x4604281a  mula.s      $f5, $f4
    ctx->pc = 0x148288u;
    ctx->f[31] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x14828c: 0x46803160  cvt.s.w     $f5, $f6
    ctx->pc = 0x14828cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[6], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x148290: 0x4605115c  madd.s      $f5, $f2, $f5
    ctx->pc = 0x148290u;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[5]));
    // 0x148294: 0x46050942  mul.s       $f5, $f1, $f5
    ctx->pc = 0x148294u;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x148298: 0x46002964  .word       0x46002964                   # cvt.w.s     $f5, $f5 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x148298u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[5]); std::memcpy(&ctx->f[5], &tmp, sizeof(tmp)); }
    // 0x14829c: 0x44152800  mfc1        $s5, $f5
    ctx->pc = 0x14829cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 21, bits); }
    // 0x1482a0: 0x0  nop
    ctx->pc = 0x1482a0u;
    // NOP
    // 0x1482a4: 0xa715000e  sh          $s5, 0xE($t8)
    ctx->pc = 0x1482a4u;
    WRITE16(ADD32(GPR_U32(ctx, 24), 14), (uint16_t)GPR_U32(ctx, 21));
    // 0x1482a8: 0xc4c50028  lwc1        $f5, 0x28($a2)
    ctx->pc = 0x1482a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1482ac: 0x87150010  lh          $s5, 0x10($t8)
    ctx->pc = 0x1482acu;
    SET_GPR_S32(ctx, 21, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 16)));
    // 0x1482b0: 0x44953000  mtc1        $s5, $f6
    ctx->pc = 0x1482b0u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x1482b4: 0x4604281a  mula.s      $f5, $f4
    ctx->pc = 0x1482b4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x1482b8: 0x46803160  cvt.s.w     $f5, $f6
    ctx->pc = 0x1482b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[6], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x1482bc: 0x4605115c  madd.s      $f5, $f2, $f5
    ctx->pc = 0x1482bcu;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[5]));
    // 0x1482c0: 0x46050942  mul.s       $f5, $f1, $f5
    ctx->pc = 0x1482c0u;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x1482c4: 0x46002964  .word       0x46002964                   # cvt.w.s     $f5, $f5 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1482c4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[5]); std::memcpy(&ctx->f[5], &tmp, sizeof(tmp)); }
    // 0x1482c8: 0x44152800  mfc1        $s5, $f5
    ctx->pc = 0x1482c8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 21, bits); }
    // 0x1482cc: 0x0  nop
    ctx->pc = 0x1482ccu;
    // NOP
    // 0x1482d0: 0xa7150010  sh          $s5, 0x10($t8)
    ctx->pc = 0x1482d0u;
    WRITE16(ADD32(GPR_U32(ctx, 24), 16), (uint16_t)GPR_U32(ctx, 21));
    // 0x1482d4: 0xc4c50030  lwc1        $f5, 0x30($a2)
    ctx->pc = 0x1482d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1482d8: 0x87150012  lh          $s5, 0x12($t8)
    ctx->pc = 0x1482d8u;
    SET_GPR_S32(ctx, 21, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 18)));
    // 0x1482dc: 0x44953000  mtc1        $s5, $f6
    ctx->pc = 0x1482dcu;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x1482e0: 0x4604281a  mula.s      $f5, $f4
    ctx->pc = 0x1482e0u;
    ctx->f[31] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x1482e4: 0x46803160  cvt.s.w     $f5, $f6
    ctx->pc = 0x1482e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[6], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x1482e8: 0x4605115c  madd.s      $f5, $f2, $f5
    ctx->pc = 0x1482e8u;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[5]));
    // 0x1482ec: 0x46050942  mul.s       $f5, $f1, $f5
    ctx->pc = 0x1482ecu;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x1482f0: 0x46002964  .word       0x46002964                   # cvt.w.s     $f5, $f5 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1482f0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[5]); std::memcpy(&ctx->f[5], &tmp, sizeof(tmp)); }
    // 0x1482f4: 0x44152800  mfc1        $s5, $f5
    ctx->pc = 0x1482f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 21, bits); }
    // 0x1482f8: 0x0  nop
    ctx->pc = 0x1482f8u;
    // NOP
    // 0x1482fc: 0xa7150012  sh          $s5, 0x12($t8)
    ctx->pc = 0x1482fcu;
    WRITE16(ADD32(GPR_U32(ctx, 24), 18), (uint16_t)GPR_U32(ctx, 21));
    // 0x148300: 0xc4c50034  lwc1        $f5, 0x34($a2)
    ctx->pc = 0x148300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x148304: 0x87150014  lh          $s5, 0x14($t8)
    ctx->pc = 0x148304u;
    SET_GPR_S32(ctx, 21, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 20)));
    // 0x148308: 0x44953000  mtc1        $s5, $f6
    ctx->pc = 0x148308u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x14830c: 0x4604281a  mula.s      $f5, $f4
    ctx->pc = 0x14830cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x148310: 0x46803160  cvt.s.w     $f5, $f6
    ctx->pc = 0x148310u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[6], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x148314: 0x4605115c  madd.s      $f5, $f2, $f5
    ctx->pc = 0x148314u;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[5]));
    // 0x148318: 0x46050942  mul.s       $f5, $f1, $f5
    ctx->pc = 0x148318u;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x14831c: 0x46002964  .word       0x46002964                   # cvt.w.s     $f5, $f5 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14831cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[5]); std::memcpy(&ctx->f[5], &tmp, sizeof(tmp)); }
    // 0x148320: 0x44152800  mfc1        $s5, $f5
    ctx->pc = 0x148320u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 21, bits); }
    // 0x148324: 0x0  nop
    ctx->pc = 0x148324u;
    // NOP
    // 0x148328: 0xa7150014  sh          $s5, 0x14($t8)
    ctx->pc = 0x148328u;
    WRITE16(ADD32(GPR_U32(ctx, 24), 20), (uint16_t)GPR_U32(ctx, 21));
    // 0x14832c: 0xc4c50038  lwc1        $f5, 0x38($a2)
    ctx->pc = 0x14832cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x148330: 0x87150016  lh          $s5, 0x16($t8)
    ctx->pc = 0x148330u;
    SET_GPR_S32(ctx, 21, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 22)));
    // 0x148334: 0x44953000  mtc1        $s5, $f6
    ctx->pc = 0x148334u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x148338: 0x4604281a  mula.s      $f5, $f4
    ctx->pc = 0x148338u;
    ctx->f[31] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x14833c: 0x46803160  cvt.s.w     $f5, $f6
    ctx->pc = 0x14833cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[6], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x148340: 0x4605115c  madd.s      $f5, $f2, $f5
    ctx->pc = 0x148340u;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[5]));
    // 0x148344: 0x46050942  mul.s       $f5, $f1, $f5
    ctx->pc = 0x148344u;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x148348: 0x46002964  .word       0x46002964                   # cvt.w.s     $f5, $f5 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x148348u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[5]); std::memcpy(&ctx->f[5], &tmp, sizeof(tmp)); }
    // 0x14834c: 0x44152800  mfc1        $s5, $f5
    ctx->pc = 0x14834cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 21, bits); }
    // 0x148350: 0x0  nop
    ctx->pc = 0x148350u;
    // NOP
    // 0x148354: 0xa7150016  sh          $s5, 0x16($t8)
    ctx->pc = 0x148354u;
    WRITE16(ADD32(GPR_U32(ctx, 24), 22), (uint16_t)GPR_U32(ctx, 21));
    // 0x148358: 0xc4c50040  lwc1        $f5, 0x40($a2)
    ctx->pc = 0x148358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x14835c: 0x87150018  lh          $s5, 0x18($t8)
    ctx->pc = 0x14835cu;
    SET_GPR_S32(ctx, 21, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 24)));
    // 0x148360: 0x44953000  mtc1        $s5, $f6
    ctx->pc = 0x148360u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x148364: 0x4604281a  mula.s      $f5, $f4
    ctx->pc = 0x148364u;
    ctx->f[31] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x148368: 0x46803160  cvt.s.w     $f5, $f6
    ctx->pc = 0x148368u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[6], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x14836c: 0x4605115c  madd.s      $f5, $f2, $f5
    ctx->pc = 0x14836cu;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[5]));
    // 0x148370: 0x46050942  mul.s       $f5, $f1, $f5
    ctx->pc = 0x148370u;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x148374: 0x46002964  .word       0x46002964                   # cvt.w.s     $f5, $f5 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x148374u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[5]); std::memcpy(&ctx->f[5], &tmp, sizeof(tmp)); }
    // 0x148378: 0x44152800  mfc1        $s5, $f5
    ctx->pc = 0x148378u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 21, bits); }
    // 0x14837c: 0x0  nop
    ctx->pc = 0x14837cu;
    // NOP
    // 0x148380: 0xa7150018  sh          $s5, 0x18($t8)
    ctx->pc = 0x148380u;
    WRITE16(ADD32(GPR_U32(ctx, 24), 24), (uint16_t)GPR_U32(ctx, 21));
    // 0x148384: 0xc4c50044  lwc1        $f5, 0x44($a2)
    ctx->pc = 0x148384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x148388: 0x8715001a  lh          $s5, 0x1A($t8)
    ctx->pc = 0x148388u;
    SET_GPR_S32(ctx, 21, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 26)));
    // 0x14838c: 0x44953000  mtc1        $s5, $f6
    ctx->pc = 0x14838cu;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x148390: 0x4604281a  mula.s      $f5, $f4
    ctx->pc = 0x148390u;
    ctx->f[31] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x148394: 0x46803160  cvt.s.w     $f5, $f6
    ctx->pc = 0x148394u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[6], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x148398: 0x4605115c  madd.s      $f5, $f2, $f5
    ctx->pc = 0x148398u;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[5]));
    // 0x14839c: 0x46050942  mul.s       $f5, $f1, $f5
    ctx->pc = 0x14839cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x1483a0: 0x46002964  .word       0x46002964                   # cvt.w.s     $f5, $f5 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1483a0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[5]); std::memcpy(&ctx->f[5], &tmp, sizeof(tmp)); }
    // 0x1483a4: 0x44152800  mfc1        $s5, $f5
    ctx->pc = 0x1483a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 21, bits); }
    // 0x1483a8: 0x0  nop
    ctx->pc = 0x1483a8u;
    // NOP
    // 0x1483ac: 0xa715001a  sh          $s5, 0x1A($t8)
    ctx->pc = 0x1483acu;
    WRITE16(ADD32(GPR_U32(ctx, 24), 26), (uint16_t)GPR_U32(ctx, 21));
    // 0x1483b0: 0xc4c50048  lwc1        $f5, 0x48($a2)
    ctx->pc = 0x1483b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1483b4: 0x8715001c  lh          $s5, 0x1C($t8)
    ctx->pc = 0x1483b4u;
    SET_GPR_S32(ctx, 21, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 28)));
    // 0x1483b8: 0x44953000  mtc1        $s5, $f6
    ctx->pc = 0x1483b8u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x1483bc: 0x4604281a  mula.s      $f5, $f4
    ctx->pc = 0x1483bcu;
    ctx->f[31] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x1483c0: 0x46803160  cvt.s.w     $f5, $f6
    ctx->pc = 0x1483c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[6], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x1483c4: 0x4605115c  madd.s      $f5, $f2, $f5
    ctx->pc = 0x1483c4u;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[5]));
    // 0x1483c8: 0x46050942  mul.s       $f5, $f1, $f5
    ctx->pc = 0x1483c8u;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x1483cc: 0x46002964  .word       0x46002964                   # cvt.w.s     $f5, $f5 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1483ccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[5]); std::memcpy(&ctx->f[5], &tmp, sizeof(tmp)); }
    // 0x1483d0: 0x44152800  mfc1        $s5, $f5
    ctx->pc = 0x1483d0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 21, bits); }
    // 0x1483d4: 0x0  nop
    ctx->pc = 0x1483d4u;
    // NOP
    // 0x1483d8: 0xa715001c  sh          $s5, 0x1C($t8)
    ctx->pc = 0x1483d8u;
    WRITE16(ADD32(GPR_U32(ctx, 24), 28), (uint16_t)GPR_U32(ctx, 21));
    // 0x1483dc: 0xc4c50050  lwc1        $f5, 0x50($a2)
    ctx->pc = 0x1483dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1483e0: 0x8715001e  lh          $s5, 0x1E($t8)
    ctx->pc = 0x1483e0u;
    SET_GPR_S32(ctx, 21, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 30)));
    // 0x1483e4: 0x44953000  mtc1        $s5, $f6
    ctx->pc = 0x1483e4u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x1483e8: 0x4604281a  mula.s      $f5, $f4
    ctx->pc = 0x1483e8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x1483ec: 0x46803160  cvt.s.w     $f5, $f6
    ctx->pc = 0x1483ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[6], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x1483f0: 0x4605115c  madd.s      $f5, $f2, $f5
    ctx->pc = 0x1483f0u;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[5]));
    // 0x1483f4: 0x46050942  mul.s       $f5, $f1, $f5
    ctx->pc = 0x1483f4u;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x1483f8: 0x46002964  .word       0x46002964                   # cvt.w.s     $f5, $f5 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1483f8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[5]); std::memcpy(&ctx->f[5], &tmp, sizeof(tmp)); }
    // 0x1483fc: 0x44152800  mfc1        $s5, $f5
    ctx->pc = 0x1483fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 21, bits); }
    // 0x148400: 0x0  nop
    ctx->pc = 0x148400u;
    // NOP
    // 0x148404: 0xa715001e  sh          $s5, 0x1E($t8)
    ctx->pc = 0x148404u;
    WRITE16(ADD32(GPR_U32(ctx, 24), 30), (uint16_t)GPR_U32(ctx, 21));
    // 0x148408: 0xc4c50054  lwc1        $f5, 0x54($a2)
    ctx->pc = 0x148408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x14840c: 0x87150020  lh          $s5, 0x20($t8)
    ctx->pc = 0x14840cu;
    SET_GPR_S32(ctx, 21, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 32)));
    // 0x148410: 0x44953000  mtc1        $s5, $f6
    ctx->pc = 0x148410u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x148414: 0x4604281a  mula.s      $f5, $f4
    ctx->pc = 0x148414u;
    ctx->f[31] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x148418: 0x46803160  cvt.s.w     $f5, $f6
    ctx->pc = 0x148418u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[6], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x14841c: 0x4605115c  madd.s      $f5, $f2, $f5
    ctx->pc = 0x14841cu;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[5]));
    // 0x148420: 0x46050942  mul.s       $f5, $f1, $f5
    ctx->pc = 0x148420u;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x148424: 0x46002964  .word       0x46002964                   # cvt.w.s     $f5, $f5 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x148424u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[5]); std::memcpy(&ctx->f[5], &tmp, sizeof(tmp)); }
    // 0x148428: 0x44152800  mfc1        $s5, $f5
    ctx->pc = 0x148428u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 21, bits); }
    // 0x14842c: 0x0  nop
    ctx->pc = 0x14842cu;
    // NOP
    // 0x148430: 0xa7150020  sh          $s5, 0x20($t8)
    ctx->pc = 0x148430u;
    WRITE16(ADD32(GPR_U32(ctx, 24), 32), (uint16_t)GPR_U32(ctx, 21));
    // 0x148434: 0xc4c50058  lwc1        $f5, 0x58($a2)
    ctx->pc = 0x148434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x148438: 0x87150022  lh          $s5, 0x22($t8)
    ctx->pc = 0x148438u;
    SET_GPR_S32(ctx, 21, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 34)));
    // 0x14843c: 0x44953000  mtc1        $s5, $f6
    ctx->pc = 0x14843cu;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x148440: 0x4604281a  mula.s      $f5, $f4
    ctx->pc = 0x148440u;
    ctx->f[31] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x148444: 0x46803160  cvt.s.w     $f5, $f6
    ctx->pc = 0x148444u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[6], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x148448: 0x4605115c  madd.s      $f5, $f2, $f5
    ctx->pc = 0x148448u;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[5]));
    // 0x14844c: 0x46050942  mul.s       $f5, $f1, $f5
    ctx->pc = 0x14844cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x148450: 0x46002964  .word       0x46002964                   # cvt.w.s     $f5, $f5 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x148450u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[5]); std::memcpy(&ctx->f[5], &tmp, sizeof(tmp)); }
    // 0x148454: 0x44152800  mfc1        $s5, $f5
    ctx->pc = 0x148454u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 21, bits); }
    // 0x148458: 0x0  nop
    ctx->pc = 0x148458u;
    // NOP
    // 0x14845c: 0xa7150022  sh          $s5, 0x22($t8)
    ctx->pc = 0x14845cu;
    WRITE16(ADD32(GPR_U32(ctx, 24), 34), (uint16_t)GPR_U32(ctx, 21));
    // 0x148460: 0xc4c50060  lwc1        $f5, 0x60($a2)
    ctx->pc = 0x148460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x148464: 0x87150024  lh          $s5, 0x24($t8)
    ctx->pc = 0x148464u;
    SET_GPR_S32(ctx, 21, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 36)));
    // 0x148468: 0x44953000  mtc1        $s5, $f6
    ctx->pc = 0x148468u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x14846c: 0x4604281a  mula.s      $f5, $f4
    ctx->pc = 0x14846cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x148470: 0x46803160  cvt.s.w     $f5, $f6
    ctx->pc = 0x148470u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[6], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x148474: 0x4605115c  madd.s      $f5, $f2, $f5
    ctx->pc = 0x148474u;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[5]));
    // 0x148478: 0x46050942  mul.s       $f5, $f1, $f5
    ctx->pc = 0x148478u;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x14847c: 0x46002964  .word       0x46002964                   # cvt.w.s     $f5, $f5 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14847cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[5]); std::memcpy(&ctx->f[5], &tmp, sizeof(tmp)); }
    // 0x148480: 0x44152800  mfc1        $s5, $f5
    ctx->pc = 0x148480u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 21, bits); }
    // 0x148484: 0x0  nop
    ctx->pc = 0x148484u;
    // NOP
    // 0x148488: 0xa7150024  sh          $s5, 0x24($t8)
    ctx->pc = 0x148488u;
    WRITE16(ADD32(GPR_U32(ctx, 24), 36), (uint16_t)GPR_U32(ctx, 21));
    // 0x14848c: 0xc4c50064  lwc1        $f5, 0x64($a2)
    ctx->pc = 0x14848cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x148490: 0x87150026  lh          $s5, 0x26($t8)
    ctx->pc = 0x148490u;
    SET_GPR_S32(ctx, 21, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 38)));
    // 0x148494: 0x44953000  mtc1        $s5, $f6
    ctx->pc = 0x148494u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x148498: 0x4604281a  mula.s      $f5, $f4
    ctx->pc = 0x148498u;
    ctx->f[31] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x14849c: 0x46803160  cvt.s.w     $f5, $f6
    ctx->pc = 0x14849cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[6], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x1484a0: 0x4605115c  madd.s      $f5, $f2, $f5
    ctx->pc = 0x1484a0u;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[5]));
    // 0x1484a4: 0x46050942  mul.s       $f5, $f1, $f5
    ctx->pc = 0x1484a4u;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x1484a8: 0x46002964  .word       0x46002964                   # cvt.w.s     $f5, $f5 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1484a8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[5]); std::memcpy(&ctx->f[5], &tmp, sizeof(tmp)); }
    // 0x1484ac: 0x44152800  mfc1        $s5, $f5
    ctx->pc = 0x1484acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 21, bits); }
    // 0x1484b0: 0x0  nop
    ctx->pc = 0x1484b0u;
    // NOP
    // 0x1484b4: 0xa7150026  sh          $s5, 0x26($t8)
    ctx->pc = 0x1484b4u;
    WRITE16(ADD32(GPR_U32(ctx, 24), 38), (uint16_t)GPR_U32(ctx, 21));
    // 0x1484b8: 0xc4c50068  lwc1        $f5, 0x68($a2)
    ctx->pc = 0x1484b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1484bc: 0x87150028  lh          $s5, 0x28($t8)
    ctx->pc = 0x1484bcu;
    SET_GPR_S32(ctx, 21, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 40)));
    // 0x1484c0: 0x44953000  mtc1        $s5, $f6
    ctx->pc = 0x1484c0u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x1484c4: 0x4604281a  mula.s      $f5, $f4
    ctx->pc = 0x1484c4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x1484c8: 0x46803160  cvt.s.w     $f5, $f6
    ctx->pc = 0x1484c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[6], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x1484cc: 0x4605115c  madd.s      $f5, $f2, $f5
    ctx->pc = 0x1484ccu;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[5]));
    // 0x1484d0: 0x46050942  mul.s       $f5, $f1, $f5
    ctx->pc = 0x1484d0u;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x1484d4: 0x46002964  .word       0x46002964                   # cvt.w.s     $f5, $f5 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1484d4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[5]); std::memcpy(&ctx->f[5], &tmp, sizeof(tmp)); }
    // 0x1484d8: 0x44152800  mfc1        $s5, $f5
    ctx->pc = 0x1484d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 21, bits); }
    // 0x1484dc: 0x0  nop
    ctx->pc = 0x1484dcu;
    // NOP
    // 0x1484e0: 0xa7150028  sh          $s5, 0x28($t8)
    ctx->pc = 0x1484e0u;
    WRITE16(ADD32(GPR_U32(ctx, 24), 40), (uint16_t)GPR_U32(ctx, 21));
    // 0x1484e4: 0xc4c50070  lwc1        $f5, 0x70($a2)
    ctx->pc = 0x1484e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1484e8: 0x8715002a  lh          $s5, 0x2A($t8)
    ctx->pc = 0x1484e8u;
    SET_GPR_S32(ctx, 21, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 42)));
    // 0x1484ec: 0x44953000  mtc1        $s5, $f6
    ctx->pc = 0x1484ecu;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x1484f0: 0x4604281a  mula.s      $f5, $f4
    ctx->pc = 0x1484f0u;
    ctx->f[31] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x1484f4: 0x46803160  cvt.s.w     $f5, $f6
    ctx->pc = 0x1484f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[6], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x1484f8: 0x4605115c  madd.s      $f5, $f2, $f5
    ctx->pc = 0x1484f8u;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[5]));
    // 0x1484fc: 0x46050942  mul.s       $f5, $f1, $f5
    ctx->pc = 0x1484fcu;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x148500: 0x46002964  .word       0x46002964                   # cvt.w.s     $f5, $f5 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x148500u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[5]); std::memcpy(&ctx->f[5], &tmp, sizeof(tmp)); }
    // 0x148504: 0x44152800  mfc1        $s5, $f5
    ctx->pc = 0x148504u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 21, bits); }
    // 0x148508: 0x0  nop
    ctx->pc = 0x148508u;
    // NOP
    // 0x14850c: 0xa715002a  sh          $s5, 0x2A($t8)
    ctx->pc = 0x14850cu;
    WRITE16(ADD32(GPR_U32(ctx, 24), 42), (uint16_t)GPR_U32(ctx, 21));
    // 0x148510: 0xc4c50074  lwc1        $f5, 0x74($a2)
    ctx->pc = 0x148510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x148514: 0x8715002c  lh          $s5, 0x2C($t8)
    ctx->pc = 0x148514u;
    SET_GPR_S32(ctx, 21, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 44)));
    // 0x148518: 0x44953000  mtc1        $s5, $f6
    ctx->pc = 0x148518u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x14851c: 0x4604281a  mula.s      $f5, $f4
    ctx->pc = 0x14851cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x148520: 0x46803160  cvt.s.w     $f5, $f6
    ctx->pc = 0x148520u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[6], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x148524: 0x4605115c  madd.s      $f5, $f2, $f5
    ctx->pc = 0x148524u;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[5]));
    // 0x148528: 0x46050942  mul.s       $f5, $f1, $f5
    ctx->pc = 0x148528u;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x14852c: 0x46002964  .word       0x46002964                   # cvt.w.s     $f5, $f5 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14852cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[5]); std::memcpy(&ctx->f[5], &tmp, sizeof(tmp)); }
    // 0x148530: 0x44152800  mfc1        $s5, $f5
    ctx->pc = 0x148530u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 21, bits); }
    // 0x148534: 0x0  nop
    ctx->pc = 0x148534u;
    // NOP
    // 0x148538: 0xa715002c  sh          $s5, 0x2C($t8)
    ctx->pc = 0x148538u;
    WRITE16(ADD32(GPR_U32(ctx, 24), 44), (uint16_t)GPR_U32(ctx, 21));
    // 0x14853c: 0xc4c50078  lwc1        $f5, 0x78($a2)
    ctx->pc = 0x14853cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x148540: 0x8715002e  lh          $s5, 0x2E($t8)
    ctx->pc = 0x148540u;
    SET_GPR_S32(ctx, 21, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 46)));
    // 0x148544: 0x44953000  mtc1        $s5, $f6
    ctx->pc = 0x148544u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x148548: 0x24c60080  addiu       $a2, $a2, 0x80
    ctx->pc = 0x148548u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x14854c: 0x4604281a  mula.s      $f5, $f4
    ctx->pc = 0x14854cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x148550: 0x46803160  cvt.s.w     $f5, $f6
    ctx->pc = 0x148550u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[6], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x148554: 0x4605115c  madd.s      $f5, $f2, $f5
    ctx->pc = 0x148554u;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[5]));
    // 0x148558: 0x46050942  mul.s       $f5, $f1, $f5
    ctx->pc = 0x148558u;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x14855c: 0x46002964  .word       0x46002964                   # cvt.w.s     $f5, $f5 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14855cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[5]); std::memcpy(&ctx->f[5], &tmp, sizeof(tmp)); }
    // 0x148560: 0x44152800  mfc1        $s5, $f5
    ctx->pc = 0x148560u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 21, bits); }
    // 0x148564: 0x0  nop
    ctx->pc = 0x148564u;
    // NOP
    // 0x148568: 0xa715002e  sh          $s5, 0x2E($t8)
    ctx->pc = 0x148568u;
    WRITE16(ADD32(GPR_U32(ctx, 24), 46), (uint16_t)GPR_U32(ctx, 21));
    // 0x14856c: 0x15e0fef4  bnez        $t7, . + 4 + (-0x10C << 2)
    ctx->pc = 0x14856Cu;
    {
        const bool branch_taken_0x14856c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x148570u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14856Cu;
            // 0x148570: 0x27180030  addiu       $t8, $t8, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14856c) {
            ctx->pc = 0x148140u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_148140;
        }
    }
    ctx->pc = 0x148574u;
    // 0x148574: 0x0  nop
    ctx->pc = 0x148574u;
    // NOP
label_148578:
    // 0x148578: 0xb1082b  sltu        $at, $a1, $s1
    ctx->pc = 0x148578u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x14857c: 0x10200028  beqz        $at, . + 4 + (0x28 << 2)
    ctx->pc = 0x14857Cu;
    {
        const bool branch_taken_0x14857c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14857c) {
            ctx->pc = 0x148620u;
            goto label_148620;
        }
    }
    ctx->pc = 0x148584u;
    // 0x148584: 0x0  nop
    ctx->pc = 0x148584u;
    // NOP
label_148588:
    // 0x148588: 0x87150000  lh          $s5, 0x0($t8)
    ctx->pc = 0x148588u;
    SET_GPR_S32(ctx, 21, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x14858c: 0xc4c50000  lwc1        $f5, 0x0($a2)
    ctx->pc = 0x14858cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x148590: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x148590u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x148594: 0xb1782b  sltu        $t7, $a1, $s1
    ctx->pc = 0x148594u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x148598: 0x44953000  mtc1        $s5, $f6
    ctx->pc = 0x148598u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x14859c: 0x4604281a  mula.s      $f5, $f4
    ctx->pc = 0x14859cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x1485a0: 0x46803160  cvt.s.w     $f5, $f6
    ctx->pc = 0x1485a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[6], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x1485a4: 0x4605115c  madd.s      $f5, $f2, $f5
    ctx->pc = 0x1485a4u;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[5]));
    // 0x1485a8: 0x46050942  mul.s       $f5, $f1, $f5
    ctx->pc = 0x1485a8u;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x1485ac: 0x46002964  .word       0x46002964                   # cvt.w.s     $f5, $f5 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1485acu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[5]); std::memcpy(&ctx->f[5], &tmp, sizeof(tmp)); }
    // 0x1485b0: 0x44152800  mfc1        $s5, $f5
    ctx->pc = 0x1485b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 21, bits); }
    // 0x1485b4: 0x0  nop
    ctx->pc = 0x1485b4u;
    // NOP
    // 0x1485b8: 0xa7150000  sh          $s5, 0x0($t8)
    ctx->pc = 0x1485b8u;
    WRITE16(ADD32(GPR_U32(ctx, 24), 0), (uint16_t)GPR_U32(ctx, 21));
    // 0x1485bc: 0xc4c50004  lwc1        $f5, 0x4($a2)
    ctx->pc = 0x1485bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1485c0: 0x87150002  lh          $s5, 0x2($t8)
    ctx->pc = 0x1485c0u;
    SET_GPR_S32(ctx, 21, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 2)));
    // 0x1485c4: 0x44953000  mtc1        $s5, $f6
    ctx->pc = 0x1485c4u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x1485c8: 0x4604281a  mula.s      $f5, $f4
    ctx->pc = 0x1485c8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x1485cc: 0x46803160  cvt.s.w     $f5, $f6
    ctx->pc = 0x1485ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[6], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x1485d0: 0x4605115c  madd.s      $f5, $f2, $f5
    ctx->pc = 0x1485d0u;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[5]));
    // 0x1485d4: 0x46050942  mul.s       $f5, $f1, $f5
    ctx->pc = 0x1485d4u;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x1485d8: 0x46002964  .word       0x46002964                   # cvt.w.s     $f5, $f5 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1485d8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[5]); std::memcpy(&ctx->f[5], &tmp, sizeof(tmp)); }
    // 0x1485dc: 0x44152800  mfc1        $s5, $f5
    ctx->pc = 0x1485dcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 21, bits); }
    // 0x1485e0: 0x0  nop
    ctx->pc = 0x1485e0u;
    // NOP
    // 0x1485e4: 0xa7150002  sh          $s5, 0x2($t8)
    ctx->pc = 0x1485e4u;
    WRITE16(ADD32(GPR_U32(ctx, 24), 2), (uint16_t)GPR_U32(ctx, 21));
    // 0x1485e8: 0xc4c50008  lwc1        $f5, 0x8($a2)
    ctx->pc = 0x1485e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1485ec: 0x87150004  lh          $s5, 0x4($t8)
    ctx->pc = 0x1485ecu;
    SET_GPR_S32(ctx, 21, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 4)));
    // 0x1485f0: 0x44953000  mtc1        $s5, $f6
    ctx->pc = 0x1485f0u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x1485f4: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x1485f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x1485f8: 0x4604281a  mula.s      $f5, $f4
    ctx->pc = 0x1485f8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x1485fc: 0x46803160  cvt.s.w     $f5, $f6
    ctx->pc = 0x1485fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[6], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x148600: 0x4605115c  madd.s      $f5, $f2, $f5
    ctx->pc = 0x148600u;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[5]));
    // 0x148604: 0x46050942  mul.s       $f5, $f1, $f5
    ctx->pc = 0x148604u;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x148608: 0x46002964  .word       0x46002964                   # cvt.w.s     $f5, $f5 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x148608u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[5]); std::memcpy(&ctx->f[5], &tmp, sizeof(tmp)); }
    // 0x14860c: 0x44152800  mfc1        $s5, $f5
    ctx->pc = 0x14860cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 21, bits); }
    // 0x148610: 0x0  nop
    ctx->pc = 0x148610u;
    // NOP
    // 0x148614: 0xa7150004  sh          $s5, 0x4($t8)
    ctx->pc = 0x148614u;
    WRITE16(ADD32(GPR_U32(ctx, 24), 4), (uint16_t)GPR_U32(ctx, 21));
    // 0x148618: 0x15e0ffdb  bnez        $t7, . + 4 + (-0x25 << 2)
    ctx->pc = 0x148618u;
    {
        const bool branch_taken_0x148618 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x14861Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x148618u;
            // 0x14861c: 0x27180006  addiu       $t8, $t8, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148618) {
            ctx->pc = 0x148588u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_148588;
        }
    }
    ctx->pc = 0x148620u;
label_148620:
    // 0x148620: 0xad660000  sw          $a2, 0x0($t3)
    ctx->pc = 0x148620u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 6));
    // 0x148624: 0x0  nop
    ctx->pc = 0x148624u;
    // NOP
label_148628:
    // 0x148628: 0x7ba500b0  lq          $a1, 0xB0($sp)
    ctx->pc = 0x148628u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x14862c: 0x10a0009e  beqz        $a1, . + 4 + (0x9E << 2)
    ctx->pc = 0x14862Cu;
    {
        const bool branch_taken_0x14862c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x14862c) {
            ctx->pc = 0x1488A8u;
            goto label_1488a8;
        }
    }
    ctx->pc = 0x148634u;
    // 0x148634: 0x8d450000  lw          $a1, 0x0($t2)
    ctx->pc = 0x148634u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x148638: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x148638u;
    {
        const bool branch_taken_0x148638 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x148638) {
            ctx->pc = 0x148648u;
            goto label_148648;
        }
    }
    ctx->pc = 0x148640u;
    // 0x148640: 0x8c850018  lw          $a1, 0x18($a0)
    ctx->pc = 0x148640u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x148644: 0xad450000  sw          $a1, 0x0($t2)
    ctx->pc = 0x148644u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 5));
label_148648:
    // 0x148648: 0x8faf0200  lw          $t7, 0x200($sp)
    ctx->pc = 0x148648u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x14864c: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x14864cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x148650: 0x24150200  addiu       $s5, $zero, 0x200
    ctx->pc = 0x148650u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x148654: 0x8d460000  lw          $a2, 0x0($t2)
    ctx->pc = 0x148654u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x148658: 0x26fc021  addu        $t8, $s3, $t7
    ctx->pc = 0x148658u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 15)));
    // 0x14865c: 0x10b50008  beq         $a1, $s5, . + 4 + (0x8 << 2)
    ctx->pc = 0x14865Cu;
    {
        const bool branch_taken_0x14865c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 21));
        ctx->pc = 0x148660u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14865Cu;
            // 0x148660: 0x24f7821  addu        $t7, $s2, $t7 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 15)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14865c) {
            ctx->pc = 0x148680u;
            goto label_148680;
        }
    }
    ctx->pc = 0x148664u;
    // 0x148664: 0x240f0100  addiu       $t7, $zero, 0x100
    ctx->pc = 0x148664u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x148668: 0x10af008d  beq         $a1, $t7, . + 4 + (0x8D << 2)
    ctx->pc = 0x148668u;
    {
        const bool branch_taken_0x148668 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 15));
        if (branch_taken_0x148668) {
            ctx->pc = 0x1488A0u;
            goto label_1488a0;
        }
    }
    ctx->pc = 0x148670u;
    // 0x148670: 0x10a0008b  beqz        $a1, . + 4 + (0x8B << 2)
    ctx->pc = 0x148670u;
    {
        const bool branch_taken_0x148670 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x148670) {
            ctx->pc = 0x1488A0u;
            goto label_1488a0;
        }
    }
    ctx->pc = 0x148678u;
    // 0x148678: 0x10000089  b           . + 4 + (0x89 << 2)
    ctx->pc = 0x148678u;
    {
        const bool branch_taken_0x148678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x148678) {
            ctx->pc = 0x1488A0u;
            goto label_1488a0;
        }
    }
    ctx->pc = 0x148680u;
label_148680:
    // 0x148680: 0x12200087  beqz        $s1, . + 4 + (0x87 << 2)
    ctx->pc = 0x148680u;
    {
        const bool branch_taken_0x148680 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x148684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x148680u;
            // 0x148684: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148680) {
            ctx->pc = 0x1488A0u;
            goto label_1488a0;
        }
    }
    ctx->pc = 0x148688u;
label_148688:
    // 0x148688: 0x90d90000  lbu         $t9, 0x0($a2)
    ctx->pc = 0x148688u;
    SET_GPR_U32(ctx, 25, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x14868c: 0x91f60000  lbu         $s6, 0x0($t7)
    ctx->pc = 0x14868cu;
    SET_GPR_U32(ctx, 22, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x148690: 0x93150000  lbu         $s5, 0x0($t8)
    ctx->pc = 0x148690u;
    SET_GPR_U32(ctx, 21, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x148694: 0x336b023  subu        $s6, $t9, $s6
    ctx->pc = 0x148694u;
    SET_GPR_S32(ctx, 22, (int32_t)SUB32(GPR_U32(ctx, 25), GPR_U32(ctx, 22)));
    // 0x148698: 0x44962800  mtc1        $s6, $f5
    ctx->pc = 0x148698u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x14869c: 0x6a00004  bltz        $s5, . + 4 + (0x4 << 2)
    ctx->pc = 0x14869Cu;
    {
        const bool branch_taken_0x14869c = (GPR_S32(ctx, 21) < 0);
        ctx->pc = 0x1486A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14869Cu;
            // 0x1486a0: 0x468029a0  cvt.s.w     $f6, $f5 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[6] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14869c) {
            ctx->pc = 0x1486B0u;
            goto label_1486b0;
        }
    }
    ctx->pc = 0x1486A4u;
    // 0x1486a4: 0x44952800  mtc1        $s5, $f5
    ctx->pc = 0x1486a4u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x1486a8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1486A8u;
    {
        const bool branch_taken_0x1486a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1486ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1486A8u;
            // 0x1486ac: 0x46802960  cvt.s.w     $f5, $f5 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1486a8) {
            ctx->pc = 0x1486CCu;
            goto label_1486cc;
        }
    }
    ctx->pc = 0x1486B0u;
label_1486b0:
    // 0x1486b0: 0x15b042  srl         $s6, $s5, 1
    ctx->pc = 0x1486b0u;
    SET_GPR_S32(ctx, 22, (int32_t)SRL32(GPR_U32(ctx, 21), 1));
    // 0x1486b4: 0x32b50001  andi        $s5, $s5, 0x1
    ctx->pc = 0x1486b4u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
    // 0x1486b8: 0x2d5b025  or          $s6, $s6, $s5
    ctx->pc = 0x1486b8u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | GPR_U64(ctx, 21));
    // 0x1486bc: 0x44962800  mtc1        $s6, $f5
    ctx->pc = 0x1486bcu;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x1486c0: 0x0  nop
    ctx->pc = 0x1486c0u;
    // NOP
    // 0x1486c4: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x1486c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x1486c8: 0x46052940  add.s       $f5, $f5, $f5
    ctx->pc = 0x1486c8u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[5]);
label_1486cc:
    // 0x1486cc: 0x46051818  adda.s      $f3, $f5
    ctx->pc = 0x1486ccu;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x1486d0: 0x4606215c  madd.s      $f5, $f4, $f6
    ctx->pc = 0x1486d0u;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[6]));
    // 0x1486d4: 0x46050036  c.le.s      $f0, $f5
    ctx->pc = 0x1486d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1486d8: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x1486D8u;
    {
        const bool branch_taken_0x1486d8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1486d8) {
            ctx->pc = 0x1486DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1486D8u;
            // 0x1486dc: 0x46002941  sub.s       $f5, $f5, $f0 (Delay Slot)
        ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1486F0u;
            goto label_1486f0;
        }
    }
    ctx->pc = 0x1486E0u;
    // 0x1486e0: 0x46002964  .word       0x46002964                   # cvt.w.s     $f5, $f5 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1486e0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[5]); std::memcpy(&ctx->f[5], &tmp, sizeof(tmp)); }
    // 0x1486e4: 0x44152800  mfc1        $s5, $f5
    ctx->pc = 0x1486e4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 21, bits); }
    // 0x1486e8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1486E8u;
    {
        const bool branch_taken_0x1486e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1486ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1486E8u;
            // 0x1486ec: 0x32b500ff  andi        $s5, $s5, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1486e8) {
            ctx->pc = 0x148704u;
            goto label_148704;
        }
    }
    ctx->pc = 0x1486F0u;
label_1486f0:
    // 0x1486f0: 0x46002964  .word       0x46002964                   # cvt.w.s     $f5, $f5 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1486f0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[5]); std::memcpy(&ctx->f[5], &tmp, sizeof(tmp)); }
    // 0x1486f4: 0x44152800  mfc1        $s5, $f5
    ctx->pc = 0x1486f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 21, bits); }
    // 0x1486f8: 0x0  nop
    ctx->pc = 0x1486f8u;
    // NOP
    // 0x1486fc: 0x2a3a825  or          $s5, $s5, $v1
    ctx->pc = 0x1486fcu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | GPR_U64(ctx, 3));
    // 0x148700: 0x32b500ff  andi        $s5, $s5, 0xFF
    ctx->pc = 0x148700u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
label_148704:
    // 0x148704: 0xa3150000  sb          $s5, 0x0($t8)
    ctx->pc = 0x148704u;
    WRITE8(ADD32(GPR_U32(ctx, 24), 0), (uint8_t)GPR_U32(ctx, 21));
    // 0x148708: 0x90d90001  lbu         $t9, 0x1($a2)
    ctx->pc = 0x148708u;
    SET_GPR_U32(ctx, 25, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x14870c: 0x91f60001  lbu         $s6, 0x1($t7)
    ctx->pc = 0x14870cu;
    SET_GPR_U32(ctx, 22, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 1)));
    // 0x148710: 0x93150001  lbu         $s5, 0x1($t8)
    ctx->pc = 0x148710u;
    SET_GPR_U32(ctx, 21, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 1)));
    // 0x148714: 0x336b023  subu        $s6, $t9, $s6
    ctx->pc = 0x148714u;
    SET_GPR_S32(ctx, 22, (int32_t)SUB32(GPR_U32(ctx, 25), GPR_U32(ctx, 22)));
    // 0x148718: 0x44962800  mtc1        $s6, $f5
    ctx->pc = 0x148718u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x14871c: 0x6a00004  bltz        $s5, . + 4 + (0x4 << 2)
    ctx->pc = 0x14871Cu;
    {
        const bool branch_taken_0x14871c = (GPR_S32(ctx, 21) < 0);
        ctx->pc = 0x148720u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14871Cu;
            // 0x148720: 0x468029a0  cvt.s.w     $f6, $f5 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[6] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14871c) {
            ctx->pc = 0x148730u;
            goto label_148730;
        }
    }
    ctx->pc = 0x148724u;
    // 0x148724: 0x44952800  mtc1        $s5, $f5
    ctx->pc = 0x148724u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x148728: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x148728u;
    {
        const bool branch_taken_0x148728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14872Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x148728u;
            // 0x14872c: 0x46802960  cvt.s.w     $f5, $f5 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x148728) {
            ctx->pc = 0x14874Cu;
            goto label_14874c;
        }
    }
    ctx->pc = 0x148730u;
label_148730:
    // 0x148730: 0x15b042  srl         $s6, $s5, 1
    ctx->pc = 0x148730u;
    SET_GPR_S32(ctx, 22, (int32_t)SRL32(GPR_U32(ctx, 21), 1));
    // 0x148734: 0x32b50001  andi        $s5, $s5, 0x1
    ctx->pc = 0x148734u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
    // 0x148738: 0x2d5b025  or          $s6, $s6, $s5
    ctx->pc = 0x148738u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | GPR_U64(ctx, 21));
    // 0x14873c: 0x44962800  mtc1        $s6, $f5
    ctx->pc = 0x14873cu;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x148740: 0x0  nop
    ctx->pc = 0x148740u;
    // NOP
    // 0x148744: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x148744u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x148748: 0x46052940  add.s       $f5, $f5, $f5
    ctx->pc = 0x148748u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[5]);
label_14874c:
    // 0x14874c: 0x46051818  adda.s      $f3, $f5
    ctx->pc = 0x14874cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x148750: 0x4606215c  madd.s      $f5, $f4, $f6
    ctx->pc = 0x148750u;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[6]));
    // 0x148754: 0x46050036  c.le.s      $f0, $f5
    ctx->pc = 0x148754u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x148758: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x148758u;
    {
        const bool branch_taken_0x148758 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x148758) {
            ctx->pc = 0x14875Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x148758u;
            // 0x14875c: 0x46002941  sub.s       $f5, $f5, $f0 (Delay Slot)
        ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x148770u;
            goto label_148770;
        }
    }
    ctx->pc = 0x148760u;
    // 0x148760: 0x46002964  .word       0x46002964                   # cvt.w.s     $f5, $f5 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x148760u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[5]); std::memcpy(&ctx->f[5], &tmp, sizeof(tmp)); }
    // 0x148764: 0x44152800  mfc1        $s5, $f5
    ctx->pc = 0x148764u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 21, bits); }
    // 0x148768: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x148768u;
    {
        const bool branch_taken_0x148768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14876Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x148768u;
            // 0x14876c: 0x32b500ff  andi        $s5, $s5, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x148768) {
            ctx->pc = 0x148784u;
            goto label_148784;
        }
    }
    ctx->pc = 0x148770u;
label_148770:
    // 0x148770: 0x46002964  .word       0x46002964                   # cvt.w.s     $f5, $f5 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x148770u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[5]); std::memcpy(&ctx->f[5], &tmp, sizeof(tmp)); }
    // 0x148774: 0x44152800  mfc1        $s5, $f5
    ctx->pc = 0x148774u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 21, bits); }
    // 0x148778: 0x0  nop
    ctx->pc = 0x148778u;
    // NOP
    // 0x14877c: 0x2a3a825  or          $s5, $s5, $v1
    ctx->pc = 0x14877cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | GPR_U64(ctx, 3));
    // 0x148780: 0x32b500ff  andi        $s5, $s5, 0xFF
    ctx->pc = 0x148780u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
label_148784:
    // 0x148784: 0xa3150001  sb          $s5, 0x1($t8)
    ctx->pc = 0x148784u;
    WRITE8(ADD32(GPR_U32(ctx, 24), 1), (uint8_t)GPR_U32(ctx, 21));
    // 0x148788: 0x90d90002  lbu         $t9, 0x2($a2)
    ctx->pc = 0x148788u;
    SET_GPR_U32(ctx, 25, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x14878c: 0x91f60002  lbu         $s6, 0x2($t7)
    ctx->pc = 0x14878cu;
    SET_GPR_U32(ctx, 22, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 2)));
    // 0x148790: 0x93150002  lbu         $s5, 0x2($t8)
    ctx->pc = 0x148790u;
    SET_GPR_U32(ctx, 21, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 2)));
    // 0x148794: 0x336b023  subu        $s6, $t9, $s6
    ctx->pc = 0x148794u;
    SET_GPR_S32(ctx, 22, (int32_t)SUB32(GPR_U32(ctx, 25), GPR_U32(ctx, 22)));
    // 0x148798: 0x44962800  mtc1        $s6, $f5
    ctx->pc = 0x148798u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x14879c: 0x6a00004  bltz        $s5, . + 4 + (0x4 << 2)
    ctx->pc = 0x14879Cu;
    {
        const bool branch_taken_0x14879c = (GPR_S32(ctx, 21) < 0);
        ctx->pc = 0x1487A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14879Cu;
            // 0x1487a0: 0x468029a0  cvt.s.w     $f6, $f5 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[6] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14879c) {
            ctx->pc = 0x1487B0u;
            goto label_1487b0;
        }
    }
    ctx->pc = 0x1487A4u;
    // 0x1487a4: 0x44952800  mtc1        $s5, $f5
    ctx->pc = 0x1487a4u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x1487a8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1487A8u;
    {
        const bool branch_taken_0x1487a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1487ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1487A8u;
            // 0x1487ac: 0x46802960  cvt.s.w     $f5, $f5 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1487a8) {
            ctx->pc = 0x1487CCu;
            goto label_1487cc;
        }
    }
    ctx->pc = 0x1487B0u;
label_1487b0:
    // 0x1487b0: 0x15b042  srl         $s6, $s5, 1
    ctx->pc = 0x1487b0u;
    SET_GPR_S32(ctx, 22, (int32_t)SRL32(GPR_U32(ctx, 21), 1));
    // 0x1487b4: 0x32b50001  andi        $s5, $s5, 0x1
    ctx->pc = 0x1487b4u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
    // 0x1487b8: 0x2d5b025  or          $s6, $s6, $s5
    ctx->pc = 0x1487b8u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | GPR_U64(ctx, 21));
    // 0x1487bc: 0x44962800  mtc1        $s6, $f5
    ctx->pc = 0x1487bcu;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x1487c0: 0x0  nop
    ctx->pc = 0x1487c0u;
    // NOP
    // 0x1487c4: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x1487c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x1487c8: 0x46052940  add.s       $f5, $f5, $f5
    ctx->pc = 0x1487c8u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[5]);
label_1487cc:
    // 0x1487cc: 0x46051818  adda.s      $f3, $f5
    ctx->pc = 0x1487ccu;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x1487d0: 0x4606215c  madd.s      $f5, $f4, $f6
    ctx->pc = 0x1487d0u;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[6]));
    // 0x1487d4: 0x46050036  c.le.s      $f0, $f5
    ctx->pc = 0x1487d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1487d8: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x1487D8u;
    {
        const bool branch_taken_0x1487d8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1487d8) {
            ctx->pc = 0x1487DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1487D8u;
            // 0x1487dc: 0x46002941  sub.s       $f5, $f5, $f0 (Delay Slot)
        ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1487F0u;
            goto label_1487f0;
        }
    }
    ctx->pc = 0x1487E0u;
    // 0x1487e0: 0x46002964  .word       0x46002964                   # cvt.w.s     $f5, $f5 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1487e0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[5]); std::memcpy(&ctx->f[5], &tmp, sizeof(tmp)); }
    // 0x1487e4: 0x44152800  mfc1        $s5, $f5
    ctx->pc = 0x1487e4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 21, bits); }
    // 0x1487e8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1487E8u;
    {
        const bool branch_taken_0x1487e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1487ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1487E8u;
            // 0x1487ec: 0x32b500ff  andi        $s5, $s5, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1487e8) {
            ctx->pc = 0x148804u;
            goto label_148804;
        }
    }
    ctx->pc = 0x1487F0u;
label_1487f0:
    // 0x1487f0: 0x46002964  .word       0x46002964                   # cvt.w.s     $f5, $f5 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1487f0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[5]); std::memcpy(&ctx->f[5], &tmp, sizeof(tmp)); }
    // 0x1487f4: 0x44152800  mfc1        $s5, $f5
    ctx->pc = 0x1487f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 21, bits); }
    // 0x1487f8: 0x0  nop
    ctx->pc = 0x1487f8u;
    // NOP
    // 0x1487fc: 0x2a3a825  or          $s5, $s5, $v1
    ctx->pc = 0x1487fcu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | GPR_U64(ctx, 3));
    // 0x148800: 0x32b500ff  andi        $s5, $s5, 0xFF
    ctx->pc = 0x148800u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
label_148804:
    // 0x148804: 0xa3150002  sb          $s5, 0x2($t8)
    ctx->pc = 0x148804u;
    WRITE8(ADD32(GPR_U32(ctx, 24), 2), (uint8_t)GPR_U32(ctx, 21));
    // 0x148808: 0x90d60003  lbu         $s6, 0x3($a2)
    ctx->pc = 0x148808u;
    SET_GPR_U32(ctx, 22, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
    // 0x14880c: 0x91f50003  lbu         $s5, 0x3($t7)
    ctx->pc = 0x14880cu;
    SET_GPR_U32(ctx, 21, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 3)));
    // 0x148810: 0x93190003  lbu         $t9, 0x3($t8)
    ctx->pc = 0x148810u;
    SET_GPR_U32(ctx, 25, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 3)));
    // 0x148814: 0x2d5a823  subu        $s5, $s6, $s5
    ctx->pc = 0x148814u;
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 21)));
    // 0x148818: 0x44952800  mtc1        $s5, $f5
    ctx->pc = 0x148818u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x14881c: 0x7200004  bltz        $t9, . + 4 + (0x4 << 2)
    ctx->pc = 0x14881Cu;
    {
        const bool branch_taken_0x14881c = (GPR_S32(ctx, 25) < 0);
        ctx->pc = 0x148820u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14881Cu;
            // 0x148820: 0x468029a0  cvt.s.w     $f6, $f5 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[6] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14881c) {
            ctx->pc = 0x148830u;
            goto label_148830;
        }
    }
    ctx->pc = 0x148824u;
    // 0x148824: 0x44992800  mtc1        $t9, $f5
    ctx->pc = 0x148824u;
    { uint32_t bits = GPR_U32(ctx, 25); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x148828: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x148828u;
    {
        const bool branch_taken_0x148828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14882Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x148828u;
            // 0x14882c: 0x46802960  cvt.s.w     $f5, $f5 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x148828) {
            ctx->pc = 0x14884Cu;
            goto label_14884c;
        }
    }
    ctx->pc = 0x148830u;
label_148830:
    // 0x148830: 0x19a842  srl         $s5, $t9, 1
    ctx->pc = 0x148830u;
    SET_GPR_S32(ctx, 21, (int32_t)SRL32(GPR_U32(ctx, 25), 1));
    // 0x148834: 0x33360001  andi        $s6, $t9, 0x1
    ctx->pc = 0x148834u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 25) & (uint64_t)(uint16_t)1);
    // 0x148838: 0x2b6a825  or          $s5, $s5, $s6
    ctx->pc = 0x148838u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | GPR_U64(ctx, 22));
    // 0x14883c: 0x44952800  mtc1        $s5, $f5
    ctx->pc = 0x14883cu;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x148840: 0x0  nop
    ctx->pc = 0x148840u;
    // NOP
    // 0x148844: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x148844u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x148848: 0x46052940  add.s       $f5, $f5, $f5
    ctx->pc = 0x148848u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[5]);
label_14884c:
    // 0x14884c: 0x46051818  adda.s      $f3, $f5
    ctx->pc = 0x14884cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x148850: 0x4606215c  madd.s      $f5, $f4, $f6
    ctx->pc = 0x148850u;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[6]));
    // 0x148854: 0x46050036  c.le.s      $f0, $f5
    ctx->pc = 0x148854u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x148858: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x148858u;
    {
        const bool branch_taken_0x148858 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x148858) {
            ctx->pc = 0x14885Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x148858u;
            // 0x14885c: 0x46002941  sub.s       $f5, $f5, $f0 (Delay Slot)
        ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x148870u;
            goto label_148870;
        }
    }
    ctx->pc = 0x148860u;
    // 0x148860: 0x46002964  .word       0x46002964                   # cvt.w.s     $f5, $f5 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x148860u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[5]); std::memcpy(&ctx->f[5], &tmp, sizeof(tmp)); }
    // 0x148864: 0x44152800  mfc1        $s5, $f5
    ctx->pc = 0x148864u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 21, bits); }
    // 0x148868: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x148868u;
    {
        const bool branch_taken_0x148868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14886Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x148868u;
            // 0x14886c: 0x32b500ff  andi        $s5, $s5, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x148868) {
            ctx->pc = 0x148884u;
            goto label_148884;
        }
    }
    ctx->pc = 0x148870u;
label_148870:
    // 0x148870: 0x46002964  .word       0x46002964                   # cvt.w.s     $f5, $f5 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x148870u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[5]); std::memcpy(&ctx->f[5], &tmp, sizeof(tmp)); }
    // 0x148874: 0x44152800  mfc1        $s5, $f5
    ctx->pc = 0x148874u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 21, bits); }
    // 0x148878: 0x0  nop
    ctx->pc = 0x148878u;
    // NOP
    // 0x14887c: 0x2a3a825  or          $s5, $s5, $v1
    ctx->pc = 0x14887cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | GPR_U64(ctx, 3));
    // 0x148880: 0x32b500ff  andi        $s5, $s5, 0xFF
    ctx->pc = 0x148880u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
label_148884:
    // 0x148884: 0xa3150003  sb          $s5, 0x3($t8)
    ctx->pc = 0x148884u;
    WRITE8(ADD32(GPR_U32(ctx, 24), 3), (uint8_t)GPR_U32(ctx, 21));
    // 0x148888: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x148888u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x14888c: 0xb1a82b  sltu        $s5, $a1, $s1
    ctx->pc = 0x14888cu;
    SET_GPR_U64(ctx, 21, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x148890: 0x25ef0004  addiu       $t7, $t7, 0x4
    ctx->pc = 0x148890u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4));
    // 0x148894: 0x27180004  addiu       $t8, $t8, 0x4
    ctx->pc = 0x148894u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 4));
    // 0x148898: 0x16a0ff7b  bnez        $s5, . + 4 + (-0x85 << 2)
    ctx->pc = 0x148898u;
    {
        const bool branch_taken_0x148898 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x14889Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x148898u;
            // 0x14889c: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148898) {
            ctx->pc = 0x148688u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_148688;
        }
    }
    ctx->pc = 0x1488A0u;
label_1488a0:
    // 0x1488a0: 0xad460000  sw          $a2, 0x0($t2)
    ctx->pc = 0x1488a0u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 6));
    // 0x1488a4: 0x0  nop
    ctx->pc = 0x1488a4u;
    // NOP
label_1488a8:
    // 0x1488a8: 0x7ba500a0  lq          $a1, 0xA0($sp)
    ctx->pc = 0x1488a8u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1488ac: 0x10a00112  beqz        $a1, . + 4 + (0x112 << 2)
    ctx->pc = 0x1488ACu;
    {
        const bool branch_taken_0x1488ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1488ac) {
            ctx->pc = 0x148CF8u;
            goto label_148cf8;
        }
    }
    ctx->pc = 0x1488B4u;
    // 0x1488b4: 0x8d250000  lw          $a1, 0x0($t1)
    ctx->pc = 0x1488b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1488b8: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1488B8u;
    {
        const bool branch_taken_0x1488b8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1488b8) {
            ctx->pc = 0x1488C8u;
            goto label_1488c8;
        }
    }
    ctx->pc = 0x1488C0u;
    // 0x1488c0: 0x8c850020  lw          $a1, 0x20($a0)
    ctx->pc = 0x1488c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1488c4: 0xad250000  sw          $a1, 0x0($t1)
    ctx->pc = 0x1488c4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 5));
label_1488c8:
    // 0x1488c8: 0x8c86001c  lw          $a2, 0x1C($a0)
    ctx->pc = 0x1488c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x1488cc: 0x8fa401fc  lw          $a0, 0x1FC($sp)
    ctx->pc = 0x1488ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
    // 0x1488d0: 0x2647821  addu        $t7, $s3, $a0
    ctx->pc = 0x1488d0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x1488d4: 0x24042000  addiu       $a0, $zero, 0x2000
    ctx->pc = 0x1488d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x1488d8: 0x10c40009  beq         $a2, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1488D8u;
    {
        const bool branch_taken_0x1488d8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        ctx->pc = 0x1488DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1488D8u;
            // 0x1488dc: 0x8d250000  lw          $a1, 0x0($t1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1488d8) {
            ctx->pc = 0x148900u;
            goto label_148900;
        }
    }
    ctx->pc = 0x1488E0u;
    // 0x1488e0: 0x24041000  addiu       $a0, $zero, 0x1000
    ctx->pc = 0x1488e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x1488e4: 0x10c40102  beq         $a2, $a0, . + 4 + (0x102 << 2)
    ctx->pc = 0x1488E4u;
    {
        const bool branch_taken_0x1488e4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        if (branch_taken_0x1488e4) {
            ctx->pc = 0x148CF0u;
            goto label_148cf0;
        }
    }
    ctx->pc = 0x1488ECu;
    // 0x1488ec: 0x10c00100  beqz        $a2, . + 4 + (0x100 << 2)
    ctx->pc = 0x1488ECu;
    {
        const bool branch_taken_0x1488ec = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1488ec) {
            ctx->pc = 0x148CF0u;
            goto label_148cf0;
        }
    }
    ctx->pc = 0x1488F4u;
    // 0x1488f4: 0x100000fe  b           . + 4 + (0xFE << 2)
    ctx->pc = 0x1488F4u;
    {
        const bool branch_taken_0x1488f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1488f4) {
            ctx->pc = 0x148CF0u;
            goto label_148cf0;
        }
    }
    ctx->pc = 0x1488FCu;
    // 0x1488fc: 0x0  nop
    ctx->pc = 0x1488fcu;
    // NOP
label_148900:
    // 0x148900: 0x122000fb  beqz        $s1, . + 4 + (0xFB << 2)
    ctx->pc = 0x148900u;
    {
        const bool branch_taken_0x148900 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x148904u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x148900u;
            // 0x148904: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148900) {
            ctx->pc = 0x148CF0u;
            goto label_148cf0;
        }
    }
    ctx->pc = 0x148908u;
    // 0x148908: 0x2e210009  sltiu       $at, $s1, 0x9
    ctx->pc = 0x148908u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x14890c: 0x142000d6  bnez        $at, . + 4 + (0xD6 << 2)
    ctx->pc = 0x14890Cu;
    {
        const bool branch_taken_0x14890c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x14890c) {
            ctx->pc = 0x148C68u;
            goto label_148c68;
        }
    }
    ctx->pc = 0x148914u;
    // 0x148914: 0x0  nop
    ctx->pc = 0x148914u;
    // NOP
label_148918:
    // 0x148918: 0x85f50000  lh          $s5, 0x0($t7)
    ctx->pc = 0x148918u;
    SET_GPR_S32(ctx, 21, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x14891c: 0xc4a50000  lwc1        $f5, 0x0($a1)
    ctx->pc = 0x14891cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x148920: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x148920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x148924: 0x88302b  sltu        $a2, $a0, $t0
    ctx->pc = 0x148924u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x148928: 0x44953000  mtc1        $s5, $f6
    ctx->pc = 0x148928u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x14892c: 0x4604281a  mula.s      $f5, $f4
    ctx->pc = 0x14892cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x148930: 0x46803160  cvt.s.w     $f5, $f6
    ctx->pc = 0x148930u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[6], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x148934: 0x4605115c  madd.s      $f5, $f2, $f5
    ctx->pc = 0x148934u;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[5]));
    // 0x148938: 0x46050942  mul.s       $f5, $f1, $f5
    ctx->pc = 0x148938u;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x14893c: 0x46002964  .word       0x46002964                   # cvt.w.s     $f5, $f5 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14893cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[5]); std::memcpy(&ctx->f[5], &tmp, sizeof(tmp)); }
    // 0x148940: 0x44152800  mfc1        $s5, $f5
    ctx->pc = 0x148940u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 21, bits); }
    // 0x148944: 0x0  nop
    ctx->pc = 0x148944u;
    // NOP
    // 0x148948: 0xa5f50000  sh          $s5, 0x0($t7)
    ctx->pc = 0x148948u;
    WRITE16(ADD32(GPR_U32(ctx, 15), 0), (uint16_t)GPR_U32(ctx, 21));
    // 0x14894c: 0xc4a50004  lwc1        $f5, 0x4($a1)
    ctx->pc = 0x14894cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x148950: 0x85f50002  lh          $s5, 0x2($t7)
    ctx->pc = 0x148950u;
    SET_GPR_S32(ctx, 21, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 2)));
    // 0x148954: 0x44953000  mtc1        $s5, $f6
    ctx->pc = 0x148954u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x148958: 0x4604281a  mula.s      $f5, $f4
    ctx->pc = 0x148958u;
    ctx->f[31] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x14895c: 0x46803160  cvt.s.w     $f5, $f6
    ctx->pc = 0x14895cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[6], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x148960: 0x4605115c  madd.s      $f5, $f2, $f5
    ctx->pc = 0x148960u;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[5]));
    // 0x148964: 0x46050942  mul.s       $f5, $f1, $f5
    ctx->pc = 0x148964u;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x148968: 0x46002964  .word       0x46002964                   # cvt.w.s     $f5, $f5 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x148968u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[5]); std::memcpy(&ctx->f[5], &tmp, sizeof(tmp)); }
    // 0x14896c: 0x44152800  mfc1        $s5, $f5
    ctx->pc = 0x14896cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 21, bits); }
    // 0x148970: 0x0  nop
    ctx->pc = 0x148970u;
    // NOP
    // 0x148974: 0xa5f50002  sh          $s5, 0x2($t7)
    ctx->pc = 0x148974u;
    WRITE16(ADD32(GPR_U32(ctx, 15), 2), (uint16_t)GPR_U32(ctx, 21));
    // 0x148978: 0x8fb501f8  lw          $s5, 0x1F8($sp)
    ctx->pc = 0x148978u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x14897c: 0xc4a50008  lwc1        $f5, 0x8($a1)
    ctx->pc = 0x14897cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x148980: 0x15a880  sll         $s5, $s5, 2
    ctx->pc = 0x148980u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x148984: 0x1f57821  addu        $t7, $t7, $s5
    ctx->pc = 0x148984u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 21)));
    // 0x148988: 0x85f50000  lh          $s5, 0x0($t7)
    ctx->pc = 0x148988u;
    SET_GPR_S32(ctx, 21, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x14898c: 0x4604281a  mula.s      $f5, $f4
    ctx->pc = 0x14898cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x148990: 0x44952800  mtc1        $s5, $f5
    ctx->pc = 0x148990u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x148994: 0x0  nop
    ctx->pc = 0x148994u;
    // NOP
    // 0x148998: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x148998u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x14899c: 0x4605115c  madd.s      $f5, $f2, $f5
    ctx->pc = 0x14899cu;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[5]));
    // 0x1489a0: 0x46050942  mul.s       $f5, $f1, $f5
    ctx->pc = 0x1489a0u;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x1489a4: 0x46002964  .word       0x46002964                   # cvt.w.s     $f5, $f5 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1489a4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[5]); std::memcpy(&ctx->f[5], &tmp, sizeof(tmp)); }
    // 0x1489a8: 0x44152800  mfc1        $s5, $f5
    ctx->pc = 0x1489a8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 21, bits); }
    // 0x1489ac: 0x0  nop
    ctx->pc = 0x1489acu;
    // NOP
    // 0x1489b0: 0xa5f50000  sh          $s5, 0x0($t7)
    ctx->pc = 0x1489b0u;
    WRITE16(ADD32(GPR_U32(ctx, 15), 0), (uint16_t)GPR_U32(ctx, 21));
    // 0x1489b4: 0xc4a5000c  lwc1        $f5, 0xC($a1)
    ctx->pc = 0x1489b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1489b8: 0x85f50002  lh          $s5, 0x2($t7)
    ctx->pc = 0x1489b8u;
    SET_GPR_S32(ctx, 21, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 2)));
    // 0x1489bc: 0x44953000  mtc1        $s5, $f6
    ctx->pc = 0x1489bcu;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x1489c0: 0x4604281a  mula.s      $f5, $f4
    ctx->pc = 0x1489c0u;
    ctx->f[31] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x1489c4: 0x46803160  cvt.s.w     $f5, $f6
    ctx->pc = 0x1489c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[6], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x1489c8: 0x4605115c  madd.s      $f5, $f2, $f5
    ctx->pc = 0x1489c8u;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[5]));
    // 0x1489cc: 0x46050942  mul.s       $f5, $f1, $f5
    ctx->pc = 0x1489ccu;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x1489d0: 0x46002964  .word       0x46002964                   # cvt.w.s     $f5, $f5 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1489d0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[5]); std::memcpy(&ctx->f[5], &tmp, sizeof(tmp)); }
    // 0x1489d4: 0x44152800  mfc1        $s5, $f5
    ctx->pc = 0x1489d4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 21, bits); }
    // 0x1489d8: 0x0  nop
    ctx->pc = 0x1489d8u;
    // NOP
    // 0x1489dc: 0xa5f50002  sh          $s5, 0x2($t7)
    ctx->pc = 0x1489dcu;
    WRITE16(ADD32(GPR_U32(ctx, 15), 2), (uint16_t)GPR_U32(ctx, 21));
    // 0x1489e0: 0x8fb501f8  lw          $s5, 0x1F8($sp)
    ctx->pc = 0x1489e0u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x1489e4: 0xc4a50010  lwc1        $f5, 0x10($a1)
    ctx->pc = 0x1489e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1489e8: 0x15a880  sll         $s5, $s5, 2
    ctx->pc = 0x1489e8u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x1489ec: 0x1f57821  addu        $t7, $t7, $s5
    ctx->pc = 0x1489ecu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 21)));
    // 0x1489f0: 0x85f50000  lh          $s5, 0x0($t7)
    ctx->pc = 0x1489f0u;
    SET_GPR_S32(ctx, 21, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1489f4: 0x4604281a  mula.s      $f5, $f4
    ctx->pc = 0x1489f4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x1489f8: 0x44952800  mtc1        $s5, $f5
    ctx->pc = 0x1489f8u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x1489fc: 0x0  nop
    ctx->pc = 0x1489fcu;
    // NOP
    // 0x148a00: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x148a00u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x148a04: 0x4605115c  madd.s      $f5, $f2, $f5
    ctx->pc = 0x148a04u;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[5]));
    // 0x148a08: 0x46050942  mul.s       $f5, $f1, $f5
    ctx->pc = 0x148a08u;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x148a0c: 0x46002964  .word       0x46002964                   # cvt.w.s     $f5, $f5 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x148a0cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[5]); std::memcpy(&ctx->f[5], &tmp, sizeof(tmp)); }
    // 0x148a10: 0x44152800  mfc1        $s5, $f5
    ctx->pc = 0x148a10u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 21, bits); }
    // 0x148a14: 0x0  nop
    ctx->pc = 0x148a14u;
    // NOP
    // 0x148a18: 0xa5f50000  sh          $s5, 0x0($t7)
    ctx->pc = 0x148a18u;
    WRITE16(ADD32(GPR_U32(ctx, 15), 0), (uint16_t)GPR_U32(ctx, 21));
    // 0x148a1c: 0xc4a50014  lwc1        $f5, 0x14($a1)
    ctx->pc = 0x148a1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x148a20: 0x85f50002  lh          $s5, 0x2($t7)
    ctx->pc = 0x148a20u;
    SET_GPR_S32(ctx, 21, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 2)));
    // 0x148a24: 0x44953000  mtc1        $s5, $f6
    ctx->pc = 0x148a24u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x148a28: 0x4604281a  mula.s      $f5, $f4
    ctx->pc = 0x148a28u;
    ctx->f[31] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x148a2c: 0x46803160  cvt.s.w     $f5, $f6
    ctx->pc = 0x148a2cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[6], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x148a30: 0x4605115c  madd.s      $f5, $f2, $f5
    ctx->pc = 0x148a30u;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[5]));
    // 0x148a34: 0x46050942  mul.s       $f5, $f1, $f5
    ctx->pc = 0x148a34u;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x148a38: 0x46002964  .word       0x46002964                   # cvt.w.s     $f5, $f5 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x148a38u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[5]); std::memcpy(&ctx->f[5], &tmp, sizeof(tmp)); }
    // 0x148a3c: 0x44152800  mfc1        $s5, $f5
    ctx->pc = 0x148a3cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 21, bits); }
    // 0x148a40: 0x0  nop
    ctx->pc = 0x148a40u;
    // NOP
    // 0x148a44: 0xa5f50002  sh          $s5, 0x2($t7)
    ctx->pc = 0x148a44u;
    WRITE16(ADD32(GPR_U32(ctx, 15), 2), (uint16_t)GPR_U32(ctx, 21));
    // 0x148a48: 0x8fb501f8  lw          $s5, 0x1F8($sp)
    ctx->pc = 0x148a48u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x148a4c: 0xc4a50018  lwc1        $f5, 0x18($a1)
    ctx->pc = 0x148a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x148a50: 0x15a880  sll         $s5, $s5, 2
    ctx->pc = 0x148a50u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x148a54: 0x1f57821  addu        $t7, $t7, $s5
    ctx->pc = 0x148a54u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 21)));
    // 0x148a58: 0x85f50000  lh          $s5, 0x0($t7)
    ctx->pc = 0x148a58u;
    SET_GPR_S32(ctx, 21, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x148a5c: 0x4604281a  mula.s      $f5, $f4
    ctx->pc = 0x148a5cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x148a60: 0x44952800  mtc1        $s5, $f5
    ctx->pc = 0x148a60u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x148a64: 0x0  nop
    ctx->pc = 0x148a64u;
    // NOP
    // 0x148a68: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x148a68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x148a6c: 0x4605115c  madd.s      $f5, $f2, $f5
    ctx->pc = 0x148a6cu;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[5]));
    // 0x148a70: 0x46050942  mul.s       $f5, $f1, $f5
    ctx->pc = 0x148a70u;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x148a74: 0x46002964  .word       0x46002964                   # cvt.w.s     $f5, $f5 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x148a74u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[5]); std::memcpy(&ctx->f[5], &tmp, sizeof(tmp)); }
    // 0x148a78: 0x44152800  mfc1        $s5, $f5
    ctx->pc = 0x148a78u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 21, bits); }
    // 0x148a7c: 0x0  nop
    ctx->pc = 0x148a7cu;
    // NOP
    // 0x148a80: 0xa5f50000  sh          $s5, 0x0($t7)
    ctx->pc = 0x148a80u;
    WRITE16(ADD32(GPR_U32(ctx, 15), 0), (uint16_t)GPR_U32(ctx, 21));
    // 0x148a84: 0xc4a5001c  lwc1        $f5, 0x1C($a1)
    ctx->pc = 0x148a84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x148a88: 0x85f50002  lh          $s5, 0x2($t7)
    ctx->pc = 0x148a88u;
    SET_GPR_S32(ctx, 21, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 2)));
    // 0x148a8c: 0x44953000  mtc1        $s5, $f6
    ctx->pc = 0x148a8cu;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x148a90: 0x4604281a  mula.s      $f5, $f4
    ctx->pc = 0x148a90u;
    ctx->f[31] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x148a94: 0x46803160  cvt.s.w     $f5, $f6
    ctx->pc = 0x148a94u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[6], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x148a98: 0x4605115c  madd.s      $f5, $f2, $f5
    ctx->pc = 0x148a98u;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[5]));
    // 0x148a9c: 0x46050942  mul.s       $f5, $f1, $f5
    ctx->pc = 0x148a9cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x148aa0: 0x46002964  .word       0x46002964                   # cvt.w.s     $f5, $f5 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x148aa0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[5]); std::memcpy(&ctx->f[5], &tmp, sizeof(tmp)); }
    // 0x148aa4: 0x44152800  mfc1        $s5, $f5
    ctx->pc = 0x148aa4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 21, bits); }
    // 0x148aa8: 0x0  nop
    ctx->pc = 0x148aa8u;
    // NOP
    // 0x148aac: 0xa5f50002  sh          $s5, 0x2($t7)
    ctx->pc = 0x148aacu;
    WRITE16(ADD32(GPR_U32(ctx, 15), 2), (uint16_t)GPR_U32(ctx, 21));
    // 0x148ab0: 0x8fb501f8  lw          $s5, 0x1F8($sp)
    ctx->pc = 0x148ab0u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x148ab4: 0xc4a50020  lwc1        $f5, 0x20($a1)
    ctx->pc = 0x148ab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x148ab8: 0x15a880  sll         $s5, $s5, 2
    ctx->pc = 0x148ab8u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x148abc: 0x1f57821  addu        $t7, $t7, $s5
    ctx->pc = 0x148abcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 21)));
    // 0x148ac0: 0x85f50000  lh          $s5, 0x0($t7)
    ctx->pc = 0x148ac0u;
    SET_GPR_S32(ctx, 21, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x148ac4: 0x4604281a  mula.s      $f5, $f4
    ctx->pc = 0x148ac4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x148ac8: 0x44952800  mtc1        $s5, $f5
    ctx->pc = 0x148ac8u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x148acc: 0x0  nop
    ctx->pc = 0x148accu;
    // NOP
    // 0x148ad0: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x148ad0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x148ad4: 0x4605115c  madd.s      $f5, $f2, $f5
    ctx->pc = 0x148ad4u;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[5]));
    // 0x148ad8: 0x46050942  mul.s       $f5, $f1, $f5
    ctx->pc = 0x148ad8u;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x148adc: 0x46002964  .word       0x46002964                   # cvt.w.s     $f5, $f5 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x148adcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[5]); std::memcpy(&ctx->f[5], &tmp, sizeof(tmp)); }
    // 0x148ae0: 0x44152800  mfc1        $s5, $f5
    ctx->pc = 0x148ae0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 21, bits); }
    // 0x148ae4: 0x0  nop
    ctx->pc = 0x148ae4u;
    // NOP
    // 0x148ae8: 0xa5f50000  sh          $s5, 0x0($t7)
    ctx->pc = 0x148ae8u;
    WRITE16(ADD32(GPR_U32(ctx, 15), 0), (uint16_t)GPR_U32(ctx, 21));
    // 0x148aec: 0xc4a50024  lwc1        $f5, 0x24($a1)
    ctx->pc = 0x148aecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x148af0: 0x85f50002  lh          $s5, 0x2($t7)
    ctx->pc = 0x148af0u;
    SET_GPR_S32(ctx, 21, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 2)));
    // 0x148af4: 0x44953000  mtc1        $s5, $f6
    ctx->pc = 0x148af4u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x148af8: 0x4604281a  mula.s      $f5, $f4
    ctx->pc = 0x148af8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x148afc: 0x46803160  cvt.s.w     $f5, $f6
    ctx->pc = 0x148afcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[6], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x148b00: 0x4605115c  madd.s      $f5, $f2, $f5
    ctx->pc = 0x148b00u;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[5]));
    // 0x148b04: 0x46050942  mul.s       $f5, $f1, $f5
    ctx->pc = 0x148b04u;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x148b08: 0x46002964  .word       0x46002964                   # cvt.w.s     $f5, $f5 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x148b08u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[5]); std::memcpy(&ctx->f[5], &tmp, sizeof(tmp)); }
    // 0x148b0c: 0x44152800  mfc1        $s5, $f5
    ctx->pc = 0x148b0cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 21, bits); }
    // 0x148b10: 0x0  nop
    ctx->pc = 0x148b10u;
    // NOP
    // 0x148b14: 0xa5f50002  sh          $s5, 0x2($t7)
    ctx->pc = 0x148b14u;
    WRITE16(ADD32(GPR_U32(ctx, 15), 2), (uint16_t)GPR_U32(ctx, 21));
    // 0x148b18: 0x8fb501f8  lw          $s5, 0x1F8($sp)
    ctx->pc = 0x148b18u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x148b1c: 0xc4a50028  lwc1        $f5, 0x28($a1)
    ctx->pc = 0x148b1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x148b20: 0x15a880  sll         $s5, $s5, 2
    ctx->pc = 0x148b20u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x148b24: 0x1f57821  addu        $t7, $t7, $s5
    ctx->pc = 0x148b24u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 21)));
    // 0x148b28: 0x85f50000  lh          $s5, 0x0($t7)
    ctx->pc = 0x148b28u;
    SET_GPR_S32(ctx, 21, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x148b2c: 0x4604281a  mula.s      $f5, $f4
    ctx->pc = 0x148b2cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x148b30: 0x44952800  mtc1        $s5, $f5
    ctx->pc = 0x148b30u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x148b34: 0x0  nop
    ctx->pc = 0x148b34u;
    // NOP
    // 0x148b38: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x148b38u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x148b3c: 0x4605115c  madd.s      $f5, $f2, $f5
    ctx->pc = 0x148b3cu;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[5]));
    // 0x148b40: 0x46050942  mul.s       $f5, $f1, $f5
    ctx->pc = 0x148b40u;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x148b44: 0x46002964  .word       0x46002964                   # cvt.w.s     $f5, $f5 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x148b44u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[5]); std::memcpy(&ctx->f[5], &tmp, sizeof(tmp)); }
    // 0x148b48: 0x44152800  mfc1        $s5, $f5
    ctx->pc = 0x148b48u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 21, bits); }
    // 0x148b4c: 0x0  nop
    ctx->pc = 0x148b4cu;
    // NOP
    // 0x148b50: 0xa5f50000  sh          $s5, 0x0($t7)
    ctx->pc = 0x148b50u;
    WRITE16(ADD32(GPR_U32(ctx, 15), 0), (uint16_t)GPR_U32(ctx, 21));
    // 0x148b54: 0xc4a5002c  lwc1        $f5, 0x2C($a1)
    ctx->pc = 0x148b54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x148b58: 0x85f50002  lh          $s5, 0x2($t7)
    ctx->pc = 0x148b58u;
    SET_GPR_S32(ctx, 21, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 2)));
    // 0x148b5c: 0x44953000  mtc1        $s5, $f6
    ctx->pc = 0x148b5cu;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x148b60: 0x4604281a  mula.s      $f5, $f4
    ctx->pc = 0x148b60u;
    ctx->f[31] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x148b64: 0x46803160  cvt.s.w     $f5, $f6
    ctx->pc = 0x148b64u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[6], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x148b68: 0x4605115c  madd.s      $f5, $f2, $f5
    ctx->pc = 0x148b68u;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[5]));
    // 0x148b6c: 0x46050942  mul.s       $f5, $f1, $f5
    ctx->pc = 0x148b6cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x148b70: 0x46002964  .word       0x46002964                   # cvt.w.s     $f5, $f5 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x148b70u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[5]); std::memcpy(&ctx->f[5], &tmp, sizeof(tmp)); }
    // 0x148b74: 0x44152800  mfc1        $s5, $f5
    ctx->pc = 0x148b74u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 21, bits); }
    // 0x148b78: 0x0  nop
    ctx->pc = 0x148b78u;
    // NOP
    // 0x148b7c: 0xa5f50002  sh          $s5, 0x2($t7)
    ctx->pc = 0x148b7cu;
    WRITE16(ADD32(GPR_U32(ctx, 15), 2), (uint16_t)GPR_U32(ctx, 21));
    // 0x148b80: 0x8fb501f8  lw          $s5, 0x1F8($sp)
    ctx->pc = 0x148b80u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x148b84: 0xc4a50030  lwc1        $f5, 0x30($a1)
    ctx->pc = 0x148b84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x148b88: 0x15a880  sll         $s5, $s5, 2
    ctx->pc = 0x148b88u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x148b8c: 0x1f57821  addu        $t7, $t7, $s5
    ctx->pc = 0x148b8cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 21)));
    // 0x148b90: 0x85f50000  lh          $s5, 0x0($t7)
    ctx->pc = 0x148b90u;
    SET_GPR_S32(ctx, 21, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x148b94: 0x4604281a  mula.s      $f5, $f4
    ctx->pc = 0x148b94u;
    ctx->f[31] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x148b98: 0x44952800  mtc1        $s5, $f5
    ctx->pc = 0x148b98u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x148b9c: 0x0  nop
    ctx->pc = 0x148b9cu;
    // NOP
    // 0x148ba0: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x148ba0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x148ba4: 0x4605115c  madd.s      $f5, $f2, $f5
    ctx->pc = 0x148ba4u;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[5]));
    // 0x148ba8: 0x46050942  mul.s       $f5, $f1, $f5
    ctx->pc = 0x148ba8u;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x148bac: 0x46002964  .word       0x46002964                   # cvt.w.s     $f5, $f5 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x148bacu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[5]); std::memcpy(&ctx->f[5], &tmp, sizeof(tmp)); }
    // 0x148bb0: 0x44152800  mfc1        $s5, $f5
    ctx->pc = 0x148bb0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 21, bits); }
    // 0x148bb4: 0x0  nop
    ctx->pc = 0x148bb4u;
    // NOP
    // 0x148bb8: 0xa5f50000  sh          $s5, 0x0($t7)
    ctx->pc = 0x148bb8u;
    WRITE16(ADD32(GPR_U32(ctx, 15), 0), (uint16_t)GPR_U32(ctx, 21));
    // 0x148bbc: 0xc4a50034  lwc1        $f5, 0x34($a1)
    ctx->pc = 0x148bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x148bc0: 0x85f50002  lh          $s5, 0x2($t7)
    ctx->pc = 0x148bc0u;
    SET_GPR_S32(ctx, 21, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 2)));
    // 0x148bc4: 0x44953000  mtc1        $s5, $f6
    ctx->pc = 0x148bc4u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x148bc8: 0x4604281a  mula.s      $f5, $f4
    ctx->pc = 0x148bc8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x148bcc: 0x46803160  cvt.s.w     $f5, $f6
    ctx->pc = 0x148bccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[6], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x148bd0: 0x4605115c  madd.s      $f5, $f2, $f5
    ctx->pc = 0x148bd0u;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[5]));
    // 0x148bd4: 0x46050942  mul.s       $f5, $f1, $f5
    ctx->pc = 0x148bd4u;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x148bd8: 0x46002964  .word       0x46002964                   # cvt.w.s     $f5, $f5 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x148bd8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[5]); std::memcpy(&ctx->f[5], &tmp, sizeof(tmp)); }
    // 0x148bdc: 0x44152800  mfc1        $s5, $f5
    ctx->pc = 0x148bdcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 21, bits); }
    // 0x148be0: 0x0  nop
    ctx->pc = 0x148be0u;
    // NOP
    // 0x148be4: 0xa5f50002  sh          $s5, 0x2($t7)
    ctx->pc = 0x148be4u;
    WRITE16(ADD32(GPR_U32(ctx, 15), 2), (uint16_t)GPR_U32(ctx, 21));
    // 0x148be8: 0x8fb501f8  lw          $s5, 0x1F8($sp)
    ctx->pc = 0x148be8u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x148bec: 0xc4a50038  lwc1        $f5, 0x38($a1)
    ctx->pc = 0x148becu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x148bf0: 0x15a880  sll         $s5, $s5, 2
    ctx->pc = 0x148bf0u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x148bf4: 0x1f57821  addu        $t7, $t7, $s5
    ctx->pc = 0x148bf4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 21)));
    // 0x148bf8: 0x85f50000  lh          $s5, 0x0($t7)
    ctx->pc = 0x148bf8u;
    SET_GPR_S32(ctx, 21, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x148bfc: 0x4604281a  mula.s      $f5, $f4
    ctx->pc = 0x148bfcu;
    ctx->f[31] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x148c00: 0x44952800  mtc1        $s5, $f5
    ctx->pc = 0x148c00u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x148c04: 0x0  nop
    ctx->pc = 0x148c04u;
    // NOP
    // 0x148c08: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x148c08u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x148c0c: 0x4605115c  madd.s      $f5, $f2, $f5
    ctx->pc = 0x148c0cu;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[5]));
    // 0x148c10: 0x46050942  mul.s       $f5, $f1, $f5
    ctx->pc = 0x148c10u;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x148c14: 0x46002964  .word       0x46002964                   # cvt.w.s     $f5, $f5 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x148c14u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[5]); std::memcpy(&ctx->f[5], &tmp, sizeof(tmp)); }
    // 0x148c18: 0x44152800  mfc1        $s5, $f5
    ctx->pc = 0x148c18u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 21, bits); }
    // 0x148c1c: 0x0  nop
    ctx->pc = 0x148c1cu;
    // NOP
    // 0x148c20: 0xa5f50000  sh          $s5, 0x0($t7)
    ctx->pc = 0x148c20u;
    WRITE16(ADD32(GPR_U32(ctx, 15), 0), (uint16_t)GPR_U32(ctx, 21));
    // 0x148c24: 0xc4a5003c  lwc1        $f5, 0x3C($a1)
    ctx->pc = 0x148c24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x148c28: 0x85f50002  lh          $s5, 0x2($t7)
    ctx->pc = 0x148c28u;
    SET_GPR_S32(ctx, 21, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 2)));
    // 0x148c2c: 0x44953000  mtc1        $s5, $f6
    ctx->pc = 0x148c2cu;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x148c30: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x148c30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x148c34: 0x4604281a  mula.s      $f5, $f4
    ctx->pc = 0x148c34u;
    ctx->f[31] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x148c38: 0x46803160  cvt.s.w     $f5, $f6
    ctx->pc = 0x148c38u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[6], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x148c3c: 0x4605115c  madd.s      $f5, $f2, $f5
    ctx->pc = 0x148c3cu;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[5]));
    // 0x148c40: 0x46050942  mul.s       $f5, $f1, $f5
    ctx->pc = 0x148c40u;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x148c44: 0x46002964  .word       0x46002964                   # cvt.w.s     $f5, $f5 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x148c44u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[5]); std::memcpy(&ctx->f[5], &tmp, sizeof(tmp)); }
    // 0x148c48: 0x44152800  mfc1        $s5, $f5
    ctx->pc = 0x148c48u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 21, bits); }
    // 0x148c4c: 0x0  nop
    ctx->pc = 0x148c4cu;
    // NOP
    // 0x148c50: 0xa5f50002  sh          $s5, 0x2($t7)
    ctx->pc = 0x148c50u;
    WRITE16(ADD32(GPR_U32(ctx, 15), 2), (uint16_t)GPR_U32(ctx, 21));
    // 0x148c54: 0x8fb501f8  lw          $s5, 0x1F8($sp)
    ctx->pc = 0x148c54u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x148c58: 0x15a880  sll         $s5, $s5, 2
    ctx->pc = 0x148c58u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x148c5c: 0x14c0ff2e  bnez        $a2, . + 4 + (-0xD2 << 2)
    ctx->pc = 0x148C5Cu;
    {
        const bool branch_taken_0x148c5c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x148C60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x148C5Cu;
            // 0x148c60: 0x1f57821  addu        $t7, $t7, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148c5c) {
            ctx->pc = 0x148918u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_148918;
        }
    }
    ctx->pc = 0x148C64u;
    // 0x148c64: 0x0  nop
    ctx->pc = 0x148c64u;
    // NOP
label_148c68:
    // 0x148c68: 0x91082b  sltu        $at, $a0, $s1
    ctx->pc = 0x148c68u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x148c6c: 0x10200020  beqz        $at, . + 4 + (0x20 << 2)
    ctx->pc = 0x148C6Cu;
    {
        const bool branch_taken_0x148c6c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x148c6c) {
            ctx->pc = 0x148CF0u;
            goto label_148cf0;
        }
    }
    ctx->pc = 0x148C74u;
    // 0x148c74: 0x0  nop
    ctx->pc = 0x148c74u;
    // NOP
label_148c78:
    // 0x148c78: 0x85f50000  lh          $s5, 0x0($t7)
    ctx->pc = 0x148c78u;
    SET_GPR_S32(ctx, 21, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x148c7c: 0xc4a50000  lwc1        $f5, 0x0($a1)
    ctx->pc = 0x148c7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x148c80: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x148c80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x148c84: 0x91302b  sltu        $a2, $a0, $s1
    ctx->pc = 0x148c84u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x148c88: 0x44953000  mtc1        $s5, $f6
    ctx->pc = 0x148c88u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x148c8c: 0x4604281a  mula.s      $f5, $f4
    ctx->pc = 0x148c8cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x148c90: 0x46803160  cvt.s.w     $f5, $f6
    ctx->pc = 0x148c90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[6], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x148c94: 0x4605115c  madd.s      $f5, $f2, $f5
    ctx->pc = 0x148c94u;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[5]));
    // 0x148c98: 0x46050942  mul.s       $f5, $f1, $f5
    ctx->pc = 0x148c98u;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x148c9c: 0x46002964  .word       0x46002964                   # cvt.w.s     $f5, $f5 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x148c9cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[5]); std::memcpy(&ctx->f[5], &tmp, sizeof(tmp)); }
    // 0x148ca0: 0x44152800  mfc1        $s5, $f5
    ctx->pc = 0x148ca0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 21, bits); }
    // 0x148ca4: 0x0  nop
    ctx->pc = 0x148ca4u;
    // NOP
    // 0x148ca8: 0xa5f50000  sh          $s5, 0x0($t7)
    ctx->pc = 0x148ca8u;
    WRITE16(ADD32(GPR_U32(ctx, 15), 0), (uint16_t)GPR_U32(ctx, 21));
    // 0x148cac: 0xc4a50004  lwc1        $f5, 0x4($a1)
    ctx->pc = 0x148cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x148cb0: 0x85f50002  lh          $s5, 0x2($t7)
    ctx->pc = 0x148cb0u;
    SET_GPR_S32(ctx, 21, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 2)));
    // 0x148cb4: 0x44953000  mtc1        $s5, $f6
    ctx->pc = 0x148cb4u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x148cb8: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x148cb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x148cbc: 0x4604281a  mula.s      $f5, $f4
    ctx->pc = 0x148cbcu;
    ctx->f[31] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x148cc0: 0x46803160  cvt.s.w     $f5, $f6
    ctx->pc = 0x148cc0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[6], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x148cc4: 0x4605115c  madd.s      $f5, $f2, $f5
    ctx->pc = 0x148cc4u;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[5]));
    // 0x148cc8: 0x46050942  mul.s       $f5, $f1, $f5
    ctx->pc = 0x148cc8u;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x148ccc: 0x46002964  .word       0x46002964                   # cvt.w.s     $f5, $f5 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x148cccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[5]); std::memcpy(&ctx->f[5], &tmp, sizeof(tmp)); }
    // 0x148cd0: 0x44152800  mfc1        $s5, $f5
    ctx->pc = 0x148cd0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 21, bits); }
    // 0x148cd4: 0x0  nop
    ctx->pc = 0x148cd4u;
    // NOP
    // 0x148cd8: 0xa5f50002  sh          $s5, 0x2($t7)
    ctx->pc = 0x148cd8u;
    WRITE16(ADD32(GPR_U32(ctx, 15), 2), (uint16_t)GPR_U32(ctx, 21));
    // 0x148cdc: 0x8fb501f8  lw          $s5, 0x1F8($sp)
    ctx->pc = 0x148cdcu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x148ce0: 0x15a880  sll         $s5, $s5, 2
    ctx->pc = 0x148ce0u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x148ce4: 0x14c0ffe4  bnez        $a2, . + 4 + (-0x1C << 2)
    ctx->pc = 0x148CE4u;
    {
        const bool branch_taken_0x148ce4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x148CE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x148CE4u;
            // 0x148ce8: 0x1f57821  addu        $t7, $t7, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148ce4) {
            ctx->pc = 0x148C78u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_148c78;
        }
    }
    ctx->pc = 0x148CECu;
    // 0x148cec: 0x0  nop
    ctx->pc = 0x148cecu;
    // NOP
label_148cf0:
    // 0x148cf0: 0xad250000  sw          $a1, 0x0($t1)
    ctx->pc = 0x148cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 5));
    // 0x148cf4: 0x0  nop
    ctx->pc = 0x148cf4u;
    // NOP
label_148cf8:
    // 0x148cf8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x148cf8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x148cfc: 0xf0202a  slt         $a0, $a3, $s0
    ctx->pc = 0x148cfcu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x148d00: 0x25ce0004  addiu       $t6, $t6, 0x4
    ctx->pc = 0x148d00u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4));
    // 0x148d04: 0x25ad0008  addiu       $t5, $t5, 0x8
    ctx->pc = 0x148d04u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 8));
    // 0x148d08: 0x258c0004  addiu       $t4, $t4, 0x4
    ctx->pc = 0x148d08u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x148d0c: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x148d0cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x148d10: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x148d10u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x148d14: 0x1480fb14  bnez        $a0, . + 4 + (-0x4EC << 2)
    ctx->pc = 0x148D14u;
    {
        const bool branch_taken_0x148d14 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x148D18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x148D14u;
            // 0x148d18: 0x25290004  addiu       $t1, $t1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148d14) {
            ctx->pc = 0x147968u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_147968;
        }
    }
    ctx->pc = 0x148D1Cu;
    // 0x148d1c: 0x0  nop
    ctx->pc = 0x148d1cu;
    // NOP
label_148d20:
    // 0x148d20: 0x8ee3001c  lw          $v1, 0x1C($s7)
    ctx->pc = 0x148d20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 28)));
    // 0x148d24: 0x8fa4020c  lw          $a0, 0x20C($sp)
    ctx->pc = 0x148d24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 524)));
    // 0x148d28: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x148d28u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x148d2c: 0x283182a  slt         $v1, $s4, $v1
    ctx->pc = 0x148d2cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x148d30: 0x2649821  addu        $s3, $s3, $a0
    ctx->pc = 0x148d30u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x148d34: 0x1460fadf  bnez        $v1, . + 4 + (-0x521 << 2)
    ctx->pc = 0x148D34u;
    {
        const bool branch_taken_0x148d34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x148D38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x148D34u;
            // 0x148d38: 0x2449021  addu        $s2, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148d34) {
            ctx->pc = 0x1478B4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1478b4;
        }
    }
    ctx->pc = 0x148D3Cu;
    // 0x148d3c: 0x0  nop
    ctx->pc = 0x148d3cu;
    // NOP
label_148d40:
    // 0x148d40: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x148d40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x148d44: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x148d44u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x148d48: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x148d48u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x148d4c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x148d4cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x148d50: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x148d50u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x148d54: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x148d54u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x148d58: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x148d58u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x148d5c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x148d5cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x148d60: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x148d60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x148d64: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x148d64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x148d68: 0x3e00008  jr          $ra
    ctx->pc = 0x148D68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x148D6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x148D68u;
            // 0x148d6c: 0x27bd0210  addiu       $sp, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x148D70u;
}
