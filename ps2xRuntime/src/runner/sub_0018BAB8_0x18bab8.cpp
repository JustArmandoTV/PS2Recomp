#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0018BAB8
// Address: 0x18bab8 - 0x18bcd0
void sub_0018BAB8_0x18bab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018BAB8_0x18bab8");
#endif

    switch (ctx->pc) {
        case 0x18bc08u: goto label_18bc08;
        case 0x18bc94u: goto label_18bc94;
        default: break;
    }

    ctx->pc = 0x18bab8u;

    // 0x18bab8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18bab8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18babc: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x18babcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bac0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x18bac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x18bac4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x18bac4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bac8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x18bac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x18bacc: 0x25490180  addiu       $t1, $t2, 0x180
    ctx->pc = 0x18baccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), 384));
    // 0x18bad0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x18bad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x18bad4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x18bad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x18bad8: 0x8d220434  lw          $v0, 0x434($t1)
    ctx->pc = 0x18bad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 1076)));
    // 0x18badc: 0x8d230308  lw          $v1, 0x308($t1)
    ctx->pc = 0x18badcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 776)));
    // 0x18bae0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x18bae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x18bae4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x18BAE4u;
    {
        const bool branch_taken_0x18bae4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18BAE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18BAE4u;
            // 0x18bae8: 0xad220434  sw          $v0, 0x434($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 1076), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bae4) {
            ctx->pc = 0x18BAF8u;
            goto label_18baf8;
        }
    }
    ctx->pc = 0x18BAECu;
    // 0x18baec: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x18baecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x18baf0: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18BAF0u;
    {
        const bool branch_taken_0x18baf0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x18baf0) {
            ctx->pc = 0x18BAF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18BAF0u;
            // 0x18baf4: 0x8d220494  lw          $v0, 0x494($t1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 1172)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18BB08u;
            goto label_18bb08;
        }
    }
    ctx->pc = 0x18BAF8u;
label_18baf8:
    // 0x18baf8: 0x8d22030c  lw          $v0, 0x30C($t1)
    ctx->pc = 0x18baf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 780)));
    // 0x18bafc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18BAFCu;
    {
        const bool branch_taken_0x18bafc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18BB00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18BAFCu;
            // 0x18bb00: 0x2402fffc  addiu       $v0, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bafc) {
            ctx->pc = 0x18BB14u;
            goto label_18bb14;
        }
    }
    ctx->pc = 0x18BB04u;
    // 0x18bb04: 0x8d220494  lw          $v0, 0x494($t1)
    ctx->pc = 0x18bb04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 1172)));
label_18bb08:
    // 0x18bb08: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x18bb08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x18bb0c: 0xad220494  sw          $v0, 0x494($t1)
    ctx->pc = 0x18bb0cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 1172), GPR_U32(ctx, 2));
    // 0x18bb10: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x18bb10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_18bb14:
    // 0x18bb14: 0x2428024  and         $s0, $s2, $v0
    ctx->pc = 0x18bb14u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
    // 0x18bb18: 0x2501823  subu        $v1, $s2, $s0
    ctx->pc = 0x18bb18u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x18bb1c: 0x82080000  lb          $t0, 0x0($s0)
    ctx->pc = 0x18bb1cu;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18bb20: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x18bb20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x18bb24: 0x388c0  sll         $s1, $v1, 3
    ctx->pc = 0x18bb24u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x18bb28: 0x92040000  lbu         $a0, 0x0($s0)
    ctx->pc = 0x18bb28u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18bb2c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x18bb2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x18bb30: 0x92050000  lbu         $a1, 0x0($s0)
    ctx->pc = 0x18bb30u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18bb34: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x18bb34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x18bb38: 0x92060000  lbu         $a2, 0x0($s0)
    ctx->pc = 0x18bb38u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18bb3c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x18bb3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x18bb40: 0x82070000  lb          $a3, 0x0($s0)
    ctx->pc = 0x18bb40u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18bb44: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x18bb44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x18bb48: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x18bb48u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18bb4c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x18bb4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x18bb50: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x18bb50u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x18bb54: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x18bb54u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x18bb58: 0x1044025  or          $t0, $t0, $a0
    ctx->pc = 0x18bb58u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 4));
    // 0x18bb5c: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x18bb5cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x18bb60: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x18bb60u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18bb64: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x18bb64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x18bb68: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x18bb68u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x18bb6c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x18bb6cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x18bb70: 0x1054025  or          $t0, $t0, $a1
    ctx->pc = 0x18bb70u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 5));
    // 0x18bb74: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x18bb74u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18bb78: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x18bb78u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x18bb7c: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x18bb7cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x18bb80: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x18bb80u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x18bb84: 0x1064025  or          $t0, $t0, $a2
    ctx->pc = 0x18bb84u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 6));
    // 0x18bb88: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x18bb88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x18bb8c: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x18bb8cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x18bb90: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x18BB90u;
    {
        const bool branch_taken_0x18bb90 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x18BB94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18BB90u;
            // 0x18bb94: 0x2284004  sllv        $t0, $t0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 17) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bb90) {
            ctx->pc = 0x18BBB0u;
            goto label_18bbb0;
        }
    }
    ctx->pc = 0x18BB98u;
    // 0x18bb98: 0x111023  negu        $v0, $s1
    ctx->pc = 0x18bb98u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 17)));
    // 0x18bb9c: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x18bb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x18bba0: 0x1021025  or          $v0, $t0, $v0
    ctx->pc = 0x18bba0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x18bba4: 0x2274004  sllv        $t0, $a3, $s1
    ctx->pc = 0x18bba4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 17) & 0x1F));
    // 0x18bba8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x18BBA8u;
    {
        const bool branch_taken_0x18bba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18BBACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18BBA8u;
            // 0x18bbac: 0xad220030  sw          $v0, 0x30($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bba8) {
            ctx->pc = 0x18BBB8u;
            goto label_18bbb8;
        }
    }
    ctx->pc = 0x18BBB0u;
label_18bbb0:
    // 0x18bbb0: 0xad280030  sw          $t0, 0x30($t1)
    ctx->pc = 0x18bbb0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 48), GPR_U32(ctx, 8));
    // 0x18bbb4: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x18bbb4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_18bbb8:
    // 0x18bbb8: 0x82070000  lb          $a3, 0x0($s0)
    ctx->pc = 0x18bbb8u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18bbbc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x18bbbcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x18bbc0: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x18bbc0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18bbc4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x18bbc4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x18bbc8: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x18bbc8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x18bbcc: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x18bbccu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18bbd0: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x18bbd0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x18bbd4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x18bbd4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x18bbd8: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x18bbd8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x18bbdc: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x18bbdcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18bbe0: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x18bbe0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x18bbe4: 0x3c04000f  lui         $a0, 0xF
    ctx->pc = 0x18bbe4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15 << 16));
    // 0x18bbe8: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x18bbe8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x18bbec: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x18bbecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x18bbf0: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x18bbf0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x18bbf4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18bbf4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bbf8: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x18bbf8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x18bbfc: 0x24090028  addiu       $t1, $zero, 0x28
    ctx->pc = 0x18bbfcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x18bc00: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x18BC00u;
    {
        const bool branch_taken_0x18bc00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18BC04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18BC00u;
            // 0x18bc04: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bc00) {
            ctx->pc = 0x18BC54u;
            goto label_18bc54;
        }
    }
    ctx->pc = 0x18BC08u;
label_18bc08:
    // 0x18bc08: 0x2a220020  slti        $v0, $s1, 0x20
    ctx->pc = 0x18bc08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x18bc0c: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x18BC0Cu;
    {
        const bool branch_taken_0x18bc0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18BC10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18BC0Cu;
            // 0x18bc10: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bc0c) {
            ctx->pc = 0x18BC54u;
            goto label_18bc54;
        }
    }
    ctx->pc = 0x18BC14u;
    // 0x18bc14: 0x2631ffe0  addiu       $s1, $s1, -0x20
    ctx->pc = 0x18bc14u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967264));
    // 0x18bc18: 0x2274004  sllv        $t0, $a3, $s1
    ctx->pc = 0x18bc18u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 17) & 0x1F));
    // 0x18bc1c: 0x82070000  lb          $a3, 0x0($s0)
    ctx->pc = 0x18bc1cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18bc20: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x18bc20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x18bc24: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x18bc24u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18bc28: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x18bc28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x18bc2c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x18bc2cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x18bc30: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x18bc30u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18bc34: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x18bc34u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x18bc38: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x18bc38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x18bc3c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x18bc3cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x18bc40: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x18bc40u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18bc44: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x18bc44u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x18bc48: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x18bc48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x18bc4c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x18bc4cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x18bc50: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x18bc50u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_18bc54:
    // 0x18bc54: 0x86102a  slt         $v0, $a0, $a2
    ctx->pc = 0x18bc54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x18bc58: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x18BC58u;
    {
        const bool branch_taken_0x18bc58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18bc58) {
            ctx->pc = 0x18BC5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18BC58u;
            // 0x18bc5c: 0x140202d  daddu       $a0, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18BC88u;
            goto label_18bc88;
        }
    }
    ctx->pc = 0x18BC60u;
    // 0x18bc60: 0x2a220009  slti        $v0, $s1, 0x9
    ctx->pc = 0x18bc60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x18bc64: 0x81a02  srl         $v1, $t0, 8
    ctx->pc = 0x18bc64u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 8));
    // 0x18bc68: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18BC68u;
    {
        const bool branch_taken_0x18bc68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18BC6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18BC68u;
            // 0x18bc6c: 0x84200  sll         $t0, $t0, 8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bc68) {
            ctx->pc = 0x18BC7Cu;
            goto label_18bc7c;
        }
    }
    ctx->pc = 0x18BC70u;
    // 0x18bc70: 0x1311023  subu        $v0, $t1, $s1
    ctx->pc = 0x18bc70u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 17)));
    // 0x18bc74: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x18bc74u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x18bc78: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x18bc78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_18bc7c:
    // 0x18bc7c: 0x5465ffe2  bnel        $v1, $a1, . + 4 + (-0x1E << 2)
    ctx->pc = 0x18BC7Cu;
    {
        const bool branch_taken_0x18bc7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x18bc7c) {
            ctx->pc = 0x18BC80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18BC7Cu;
            // 0x18bc80: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18BC08u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_18bc08;
        }
    }
    ctx->pc = 0x18BC84u;
    // 0x18bc84: 0x140202d  daddu       $a0, $t2, $zero
    ctx->pc = 0x18bc84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_18bc88:
    // 0x18bc88: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x18bc88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bc8c: 0xc062f34  jal         func_18BCD0
    ctx->pc = 0x18BC8Cu;
    SET_GPR_U32(ctx, 31, 0x18BC94u);
    ctx->pc = 0x18BC90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18BC8Cu;
            // 0x18bc90: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18BCD0u;
    if (runtime->hasFunction(0x18BCD0u)) {
        auto targetFn = runtime->lookupFunction(0x18BCD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BC94u; }
        if (ctx->pc != 0x18BC94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018BCD0_0x18bcd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BC94u; }
        if (ctx->pc != 0x18BC94u) { return; }
    }
    ctx->pc = 0x18BC94u;
label_18bc94:
    // 0x18bc94: 0x2121823  subu        $v1, $s0, $s2
    ctx->pc = 0x18bc94u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x18bc98: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x18bc98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x18bc9c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x18bc9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18bca0: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x18bca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x18bca4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x18bca4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x18bca8: 0x2462ffc7  addiu       $v0, $v1, -0x39
    ctx->pc = 0x18bca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967239));
    // 0x18bcac: 0x2463ffce  addiu       $v1, $v1, -0x32
    ctx->pc = 0x18bcacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967246));
    // 0x18bcb0: 0x28440000  slti        $a0, $v0, 0x0
    ctx->pc = 0x18bcb0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x18bcb4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x18bcb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18bcb8: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x18bcb8u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x18bcbc: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x18bcbcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x18bcc0: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x18bcc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x18bcc4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x18bcc4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18bcc8: 0x3e00008  jr          $ra
    ctx->pc = 0x18BCC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18BCCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18BCC8u;
            // 0x18bccc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18BCD0u;
}
