#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00106D08
// Address: 0x106d08 - 0x107b78
void sub_00106D08_0x106d08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00106D08_0x106d08");
#endif

    switch (ctx->pc) {
        case 0x106d78u: goto label_106d78;
        case 0x106e04u: goto label_106e04;
        case 0x106eacu: goto label_106eac;
        case 0x106f20u: goto label_106f20;
        case 0x106f28u: goto label_106f28;
        case 0x106fdcu: goto label_106fdc;
        case 0x107078u: goto label_107078;
        case 0x107098u: goto label_107098;
        case 0x10714cu: goto label_10714c;
        case 0x1071f8u: goto label_1071f8;
        case 0x107200u: goto label_107200;
        case 0x1072ecu: goto label_1072ec;
        case 0x1073a8u: goto label_1073a8;
        case 0x1073e0u: goto label_1073e0;
        case 0x1074a4u: goto label_1074a4;
        case 0x107540u: goto label_107540;
        case 0x107548u: goto label_107548;
        case 0x107614u: goto label_107614;
        case 0x1076d8u: goto label_1076d8;
        case 0x1076f8u: goto label_1076f8;
        case 0x1077c4u: goto label_1077c4;
        case 0x107898u: goto label_107898;
        case 0x1078a0u: goto label_1078a0;
        case 0x1079a4u: goto label_1079a4;
        case 0x107a88u: goto label_107a88;
        case 0x107ac0u: goto label_107ac0;
        default: break;
    }

    ctx->pc = 0x106d08u;

    // 0x106d08: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x106d08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x106d0c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x106d0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x106d10: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x106d10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x106d14: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x106d14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106d18: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x106d18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x106d1c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x106d1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x106d20: 0x8e02087c  lw          $v0, 0x87C($s0)
    ctx->pc = 0x106d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2172)));
    // 0x106d24: 0x14400052  bnez        $v0, . + 4 + (0x52 << 2)
    ctx->pc = 0x106D24u;
    {
        const bool branch_taken_0x106d24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x106D28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106D24u;
            // 0x106d28: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106d24) {
            ctx->pc = 0x106E70u;
            goto label_106e70;
        }
    }
    ctx->pc = 0x106D2Cu;
    // 0x106d2c: 0x8e180820  lw          $t8, 0x820($s0)
    ctx->pc = 0x106d2cu;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2080)));
    // 0x106d30: 0x24040140  addiu       $a0, $zero, 0x140
    ctx->pc = 0x106d30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x106d34: 0x3c12006c  lui         $s2, 0x6C
    ctx->pc = 0x106d34u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)108 << 16));
    // 0x106d38: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x106d38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x106d3c: 0x3041818  mult        $v1, $t8, $a0
    ctx->pc = 0x106d3cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 24) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x106d40: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x106d40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x106d44: 0x3c052000  lui         $a1, 0x2000
    ctx->pc = 0x106d44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    // 0x106d48: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x106d48u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106d4c: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x106d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x106d50: 0x26438a40  addiu       $v1, $s2, -0x75C0
    ctx->pc = 0x106d50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294937152));
    // 0x106d54: 0x8c8c06cc  lw          $t4, 0x6CC($a0)
    ctx->pc = 0x106d54u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1740)));
    // 0x106d58: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x106d58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x106d5c: 0x19800026  blez        $t4, . + 4 + (0x26 << 2)
    ctx->pc = 0x106D5Cu;
    {
        const bool branch_taken_0x106d5c = (GPR_S32(ctx, 12) <= 0);
        ctx->pc = 0x106D60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106D5Cu;
            // 0x106d60: 0x655825  or          $t3, $v1, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106d5c) {
            ctx->pc = 0x106DF8u;
            goto label_106df8;
        }
    }
    ctx->pc = 0x106D64u;
    // 0x106d64: 0x260f05a8  addiu       $t7, $s0, 0x5A8
    ctx->pc = 0x106d64u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 16), 1448));
    // 0x106d68: 0x260e05b8  addiu       $t6, $s0, 0x5B8
    ctx->pc = 0x106d68u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 16), 1464));
    // 0x106d6c: 0x258dffff  addiu       $t5, $t4, -0x1
    ctx->pc = 0x106d6cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
    // 0x106d70: 0x261105a0  addiu       $s1, $s0, 0x5A0
    ctx->pc = 0x106d70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 1440));
    // 0x106d74: 0x0  nop
    ctx->pc = 0x106d74u;
    // NOP
label_106d78:
    // 0x106d78: 0x24040140  addiu       $a0, $zero, 0x140
    ctx->pc = 0x106d78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x106d7c: 0xa1080  sll         $v0, $t2, 2
    ctx->pc = 0x106d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x106d80: 0x3042018  mult        $a0, $t8, $a0
    ctx->pc = 0x106d80u;
    { int64_t result = (int64_t)GPR_S32(ctx, 24) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x106d84: 0x14d1826  xor         $v1, $t2, $t5
    ctx->pc = 0x106d84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) ^ GPR_U64(ctx, 13));
    // 0x106d88: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x106d88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x106d8c: 0x3c060fff  lui         $a2, 0xFFF
    ctx->pc = 0x106d8cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4095 << 16));
    // 0x106d90: 0x3280a  movz        $a1, $zero, $v1
    ctx->pc = 0x106d90u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
    // 0x106d94: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x106d94u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x106d98: 0x3c093000  lui         $t1, 0x3000
    ctx->pc = 0x106d98u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)12288 << 16));
    // 0x106d9c: 0x52f38  dsll        $a1, $a1, 28
    ctx->pc = 0x106d9cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 28);
    // 0x106da0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x106da0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x106da4: 0x24070030  addiu       $a3, $zero, 0x30
    ctx->pc = 0x106da4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x106da8: 0x1c22021  addu        $a0, $t6, $v0
    ctx->pc = 0x106da8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x106dac: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x106dacu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x106db0: 0x1e21021  addu        $v0, $t7, $v0
    ctx->pc = 0x106db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 2)));
    // 0x106db4: 0x14c402a  slt         $t0, $t2, $t4
    ctx->pc = 0x106db4u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
    // 0x106db8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x106db8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x106dbc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x106dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x106dc0: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x106dc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x106dc4: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x106dc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x106dc8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x106dc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x106dcc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x106dccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x106dd0: 0x691825  or          $v1, $v1, $t1
    ctx->pc = 0x106dd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 9));
    // 0x106dd4: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x106dd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x106dd8: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x106dd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x106ddc: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x106ddcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x106de0: 0xfd630000  sd          $v1, 0x0($t3)
    ctx->pc = 0x106de0u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 0), GPR_U64(ctx, 3));
    // 0x106de4: 0xfd620010  sd          $v0, 0x10($t3)
    ctx->pc = 0x106de4u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 16), GPR_U64(ctx, 2));
    // 0x106de8: 0x1500ffe3  bnez        $t0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x106DE8u;
    {
        const bool branch_taken_0x106de8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x106DECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106DE8u;
            // 0x106dec: 0x256b0020  addiu       $t3, $t3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106de8) {
            ctx->pc = 0x106D78u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_106d78;
        }
    }
    ctx->pc = 0x106DF0u;
    // 0x106df0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x106DF0u;
    {
        const bool branch_taken_0x106df0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x106df0) {
            ctx->pc = 0x106DFCu;
            goto label_106dfc;
        }
    }
    ctx->pc = 0x106DF8u;
label_106df8:
    // 0x106df8: 0x261105a0  addiu       $s1, $s0, 0x5A0
    ctx->pc = 0x106df8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 1440));
label_106dfc:
    // 0x106dfc: 0xc045968  jal         func_1165A0
    ctx->pc = 0x106DFCu;
    SET_GPR_U32(ctx, 31, 0x106E04u);
    ctx->pc = 0x1165A0u;
    if (runtime->hasFunction(0x1165A0u)) {
        auto targetFn = runtime->lookupFunction(0x1165A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x106E04u; }
        if (ctx->pc != 0x106E04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001165A0_0x1165a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x106E04u; }
        if (ctx->pc != 0x106E04u) { return; }
    }
    ctx->pc = 0x106E04u;
label_106e04:
    // 0x106e04: 0xf  sync
    ctx->pc = 0x106e04u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x106e08: 0x8e060820  lw          $a2, 0x820($s0)
    ctx->pc = 0x106e08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2080)));
    // 0x106e0c: 0x24030140  addiu       $v1, $zero, 0x140
    ctx->pc = 0x106e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x106e10: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x106e10u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x106e14: 0x3c081000  lui         $t0, 0x1000
    ctx->pc = 0x106e14u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)4096 << 16));
    // 0x106e18: 0xc32018  mult        $a0, $a2, $v1
    ctx->pc = 0x106e18u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x106e1c: 0x34e7d480  ori         $a3, $a3, 0xD480
    ctx->pc = 0x106e1cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)54400);
    // 0x106e20: 0x264a8a40  addiu       $t2, $s2, -0x75C0
    ctx->pc = 0x106e20u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 18), 4294937152));
    // 0x106e24: 0x3508d430  ori         $t0, $t0, 0xD430
    ctx->pc = 0x106e24u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)54320);
    // 0x106e28: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x106e28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x106e2c: 0x24090105  addiu       $t1, $zero, 0x105
    ctx->pc = 0x106e2cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 261));
    // 0x106e30: 0x3463d420  ori         $v1, $v1, 0xD420
    ctx->pc = 0x106e30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54304);
    // 0x106e34: 0x913021  addu        $a2, $a0, $s1
    ctx->pc = 0x106e34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x106e38: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x106e38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x106e3c: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x106e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x106e40: 0x3484d400  ori         $a0, $a0, 0xD400
    ctx->pc = 0x106e40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)54272);
    // 0x106e44: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x106e44u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
    // 0x106e48: 0xad0a0000  sw          $t2, 0x0($t0)
    ctx->pc = 0x106e48u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 10));
    // 0x106e4c: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x106e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x106e50: 0xac890000  sw          $t1, 0x0($a0)
    ctx->pc = 0x106e50u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 9)); // MMIO: 0x10000000
    // 0x106e54: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x106E54u;
    {
        const bool branch_taken_0x106e54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x106E58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106E54u;
            // 0x106e58: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106e54) {
            ctx->pc = 0x106E70u;
            goto label_106e70;
        }
    }
    ctx->pc = 0x106E5Cu;
    // 0x106e5c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x106e5cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x106e60: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x106e60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x106e64: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x106e64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x106e68: 0x804597c  j           func_1165F0
    ctx->pc = 0x106E68u;
    ctx->pc = 0x106E6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x106E68u;
            // 0x106e6c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1165F0u;
    if (runtime->hasFunction(0x1165F0u)) {
        auto targetFn = runtime->lookupFunction(0x1165F0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001165F0_0x1165f0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x106E70u;
label_106e70:
    // 0x106e70: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x106e70u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x106e74: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x106e74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x106e78: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x106e78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x106e7c: 0x3e00008  jr          $ra
    ctx->pc = 0x106E7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x106E80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106E7Cu;
            // 0x106e80: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x106E84u;
    // 0x106e84: 0x0  nop
    ctx->pc = 0x106e84u;
    // NOP
    // 0x106e88: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x106e88u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x106e8c: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x106e8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x106e90: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x106e90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x106e94: 0x8c8c0010  lw          $t4, 0x10($a0)
    ctx->pc = 0x106e94u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x106e98: 0x8c880004  lw          $t0, 0x4($a0)
    ctx->pc = 0x106e98u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x106e9c: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x106e9cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x106ea0: 0x5180000  mtsab       $t0, 0x0
    ctx->pc = 0x106ea0u;
    ctx->sa = ((GPR_U32(ctx, 8) ^ (uint32_t)0) & 0xF) << 3;
    // 0x106ea4: 0xc5840  sll         $t3, $t4, 1
    ctx->pc = 0x106ea4u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
    // 0x106ea8: 0x240fffff  addiu       $t7, $zero, -0x1
    ctx->pc = 0x106ea8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_106eac:
    // 0x106eac: 0x78a80000  lq          $t0, 0x0($a1)
    ctx->pc = 0x106eacu;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x106eb0: 0x78c90000  lq          $t1, 0x0($a2)
    ctx->pc = 0x106eb0u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x106eb4: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x106eb4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x106eb8: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x106eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x106ebc: 0xcc3021  addu        $a2, $a2, $t4
    ctx->pc = 0x106ebcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x106ec0: 0x712856e8  qfsrv       $t2, $t1, $t0
    ctx->pc = 0x106ec0u;
    SET_GPR_VEC(ctx, 10, PS2_QFSRV(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x106ec4: 0x700a4688  pextlb      $t0, $zero, $t2
    ctx->pc = 0x106ec4u;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x106ec8: 0x700a4ea8  pextub      $t1, $zero, $t2
    ctx->pc = 0x106ec8u;
    SET_GPR_VEC(ctx, 9, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x106ecc: 0x7dc80000  sq          $t0, 0x0($t6)
    ctx->pc = 0x106eccu;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 8));
    // 0x106ed0: 0x7dc90010  sq          $t1, 0x10($t6)
    ctx->pc = 0x106ed0u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 16), GPR_VEC(ctx, 9));
    // 0x106ed4: 0x1ce0fff5  bgtz        $a3, . + 4 + (-0xB << 2)
    ctx->pc = 0x106ED4u;
    {
        const bool branch_taken_0x106ed4 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x106ED8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106ED4u;
            // 0x106ed8: 0x1cb7021  addu        $t6, $t6, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106ed4) {
            ctx->pc = 0x106EACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_106eac;
        }
    }
    ctx->pc = 0x106EDCu;
    // 0x106edc: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x106edcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x106ee0: 0x24c60080  addiu       $a2, $a2, 0x80
    ctx->pc = 0x106ee0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x106ee4: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x106ee4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x106ee8: 0x1e75024  and         $t2, $t7, $a3
    ctx->pc = 0x106ee8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 15) & GPR_U64(ctx, 7));
    // 0x106eec: 0x1540ffef  bnez        $t2, . + 4 + (-0x11 << 2)
    ctx->pc = 0x106EECu;
    {
        const bool branch_taken_0x106eec = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x106EF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106EECu;
            // 0x106ef0: 0x782d  daddu       $t7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106eec) {
            ctx->pc = 0x106EACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_106eac;
        }
    }
    ctx->pc = 0x106EF4u;
    // 0x106ef4: 0x3e00008  jr          $ra
    ctx->pc = 0x106EF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x106EFCu;
    // 0x106efc: 0x0  nop
    ctx->pc = 0x106efcu;
    // NOP
    // 0x106f00: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x106f00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x106f04: 0x8c860014  lw          $a2, 0x14($a0)
    ctx->pc = 0x106f04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x106f08: 0x8c870018  lw          $a3, 0x18($a0)
    ctx->pc = 0x106f08u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x106f0c: 0x8c8d0010  lw          $t5, 0x10($a0)
    ctx->pc = 0x106f0cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x106f10: 0x8c8c0004  lw          $t4, 0x4($a0)
    ctx->pc = 0x106f10u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x106f14: 0xd5840  sll         $t3, $t5, 1
    ctx->pc = 0x106f14u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 13), 1));
    // 0x106f18: 0x5980000  mtsab       $t4, 0x0
    ctx->pc = 0x106f18u;
    ctx->sa = ((GPR_U32(ctx, 12) ^ (uint32_t)0) & 0xF) << 3;
    // 0x106f1c: 0x2418ffff  addiu       $t8, $zero, -0x1
    ctx->pc = 0x106f1cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_106f20:
    // 0x106f20: 0x8c8f0008  lw          $t7, 0x8($a0)
    ctx->pc = 0x106f20u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x106f24: 0x2419ffff  addiu       $t9, $zero, -0x1
    ctx->pc = 0x106f24u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_106f28:
    // 0x106f28: 0xdcc80000  ld          $t0, 0x0($a2)
    ctx->pc = 0x106f28u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x106f2c: 0xdce90000  ld          $t1, 0x0($a3)
    ctx->pc = 0x106f2cu;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x106f30: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x106f30u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x106f34: 0x71084ee8  qfsrv       $t1, $t0, $t0
    ctx->pc = 0x106f34u;
    SET_GPR_VEC(ctx, 9, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x106f38: 0x70094688  pextlb      $t0, $zero, $t1
    ctx->pc = 0x106f38u;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 9)));
    // 0x106f3c: 0x7ca80000  sq          $t0, 0x0($a1)
    ctx->pc = 0x106f3cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 8));
    // 0x106f40: 0x21efffff  addi        $t7, $t7, -0x1
    ctx->pc = 0x106f40u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 15), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 15, (int32_t)tmp); }
    // 0x106f44: 0xcd3021  addu        $a2, $a2, $t5
    ctx->pc = 0x106f44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 13)));
    // 0x106f48: 0xab2821  addu        $a1, $a1, $t3
    ctx->pc = 0x106f48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 11)));
    // 0x106f4c: 0x1de0fff6  bgtz        $t7, . + 4 + (-0xA << 2)
    ctx->pc = 0x106F4Cu;
    {
        const bool branch_taken_0x106f4c = (GPR_S32(ctx, 15) > 0);
        ctx->pc = 0x106F50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106F4Cu;
            // 0x106f50: 0xed3821  addu        $a3, $a3, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106f4c) {
            ctx->pc = 0x106F28u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_106f28;
        }
    }
    ctx->pc = 0x106F54u;
    // 0x106f54: 0x24c60140  addiu       $a2, $a2, 0x140
    ctx->pc = 0x106f54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 320));
    // 0x106f58: 0x24e70140  addiu       $a3, $a3, 0x140
    ctx->pc = 0x106f58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 320));
    // 0x106f5c: 0x8c8f000c  lw          $t7, 0xC($a0)
    ctx->pc = 0x106f5cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x106f60: 0x32f5024  and         $t2, $t9, $t7
    ctx->pc = 0x106f60u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 25) & GPR_U64(ctx, 15));
    // 0x106f64: 0x1540fff0  bnez        $t2, . + 4 + (-0x10 << 2)
    ctx->pc = 0x106F64u;
    {
        const bool branch_taken_0x106f64 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x106F68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106F64u;
            // 0x106f68: 0xc82d  daddu       $t9, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106f64) {
            ctx->pc = 0x106F28u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_106f28;
        }
    }
    ctx->pc = 0x106F6Cu;
    // 0x106f6c: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x106f6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x106f70: 0x8c860014  lw          $a2, 0x14($a0)
    ctx->pc = 0x106f70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x106f74: 0x8c870018  lw          $a3, 0x18($a0)
    ctx->pc = 0x106f74u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x106f78: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x106f78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x106f7c: 0x24c60040  addiu       $a2, $a2, 0x40
    ctx->pc = 0x106f7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x106f80: 0x24e70040  addiu       $a3, $a3, 0x40
    ctx->pc = 0x106f80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
    // 0x106f84: 0x1700ffe6  bnez        $t8, . + 4 + (-0x1A << 2)
    ctx->pc = 0x106F84u;
    {
        const bool branch_taken_0x106f84 = (GPR_U64(ctx, 24) != GPR_U64(ctx, 0));
        ctx->pc = 0x106F88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106F84u;
            // 0x106f88: 0xc02d  daddu       $t8, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106f84) {
            ctx->pc = 0x106F20u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_106f20;
        }
    }
    ctx->pc = 0x106F8Cu;
    // 0x106f8c: 0x3e00008  jr          $ra
    ctx->pc = 0x106F8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x106F94u;
    // 0x106f94: 0x0  nop
    ctx->pc = 0x106f94u;
    // NOP
    // 0x106f98: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x106f98u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x106f9c: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x106f9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x106fa0: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x106fa0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x106fa4: 0x8c980010  lw          $t8, 0x10($a0)
    ctx->pc = 0x106fa4u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x106fa8: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x106fa8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x106fac: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x106facu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x106fb0: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x106fb0u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x106fb4: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x106fb4u;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x106fb8: 0x78a80000  lq          $t0, 0x0($a1)
    ctx->pc = 0x106fb8u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x106fbc: 0x186040  sll         $t4, $t8, 1
    ctx->pc = 0x106fbcu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 24), 1));
    // 0x106fc0: 0x78c90000  lq          $t1, 0x0($a2)
    ctx->pc = 0x106fc0u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x106fc4: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x106fc4u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x106fc8: 0x712856e8  qfsrv       $t2, $t1, $t0
    ctx->pc = 0x106fc8u;
    SET_GPR_VEC(ctx, 10, PS2_QFSRV(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x106fcc: 0x700a4688  pextlb      $t0, $zero, $t2
    ctx->pc = 0x106fccu;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x106fd0: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x106fd0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x106fd4: 0x10e00015  beqz        $a3, . + 4 + (0x15 << 2)
    ctx->pc = 0x106FD4u;
    {
        const bool branch_taken_0x106fd4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x106FD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106FD4u;
            // 0x106fd8: 0x700a4ea8  pextub      $t1, $zero, $t2 (Delay Slot)
        SET_GPR_VEC(ctx, 9, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106fd4) {
            ctx->pc = 0x10702Cu;
            goto label_10702c;
        }
    }
    ctx->pc = 0x106FDCu;
label_106fdc:
    // 0x106fdc: 0xb82821  addu        $a1, $a1, $t8
    ctx->pc = 0x106fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 24)));
    // 0x106fe0: 0xd83021  addu        $a2, $a2, $t8
    ctx->pc = 0x106fe0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 24)));
    // 0x106fe4: 0x78aa0000  lq          $t2, 0x0($a1)
    ctx->pc = 0x106fe4u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x106fe8: 0x78cf0000  lq          $t7, 0x0($a2)
    ctx->pc = 0x106fe8u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x106fec: 0x71ea16e8  qfsrv       $v0, $t7, $t2
    ctx->pc = 0x106fecu;
    SET_GPR_VEC(ctx, 2, PS2_QFSRV(GPR_VEC(ctx, 15), GPR_VEC(ctx, 10), ctx->sa & 0x7F));
    // 0x106ff0: 0x70025688  pextlb      $t2, $zero, $v0
    ctx->pc = 0x106ff0u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x106ff4: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x106ff4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x106ff8: 0x70027ea8  pextub      $t7, $zero, $v0
    ctx->pc = 0x106ff8u;
    SET_GPR_VEC(ctx, 15, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x106ffc: 0x710a1108  paddh       $v0, $t0, $t2
    ctx->pc = 0x106ffcu;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 10)));
    // 0x107000: 0x712f1908  paddh       $v1, $t1, $t7
    ctx->pc = 0x107000u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 15)));
    // 0x107004: 0x714044a9  por         $t0, $t2, $zero
    ctx->pc = 0x107004u;
    SET_GPR_VEC(ctx, 8, PS2_POR(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x107008: 0x71e04ca9  por         $t1, $t7, $zero
    ctx->pc = 0x107008u;
    SET_GPR_VEC(ctx, 9, PS2_POR(GPR_VEC(ctx, 15), GPR_VEC(ctx, 0)));
    // 0x10700c: 0x70591108  paddh       $v0, $v0, $t9
    ctx->pc = 0x10700cu;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 25)));
    // 0x107010: 0x70791908  paddh       $v1, $v1, $t9
    ctx->pc = 0x107010u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 25)));
    // 0x107014: 0x70021076  psrlh       $v0, $v0, 1
    ctx->pc = 0x107014u;
    SET_GPR_VEC(ctx, 2, _mm_srli_epi16(GPR_VEC(ctx, 2), 1));
    // 0x107018: 0x70031876  psrlh       $v1, $v1, 1
    ctx->pc = 0x107018u;
    SET_GPR_VEC(ctx, 3, _mm_srli_epi16(GPR_VEC(ctx, 3), 1));
    // 0x10701c: 0x7dc20000  sq          $v0, 0x0($t6)
    ctx->pc = 0x10701cu;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 2));
    // 0x107020: 0x7dc30010  sq          $v1, 0x10($t6)
    ctx->pc = 0x107020u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 16), GPR_VEC(ctx, 3));
    // 0x107024: 0x1ce0ffed  bgtz        $a3, . + 4 + (-0x13 << 2)
    ctx->pc = 0x107024u;
    {
        const bool branch_taken_0x107024 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x107028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107024u;
            // 0x107028: 0x1cc7021  addu        $t6, $t6, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107024) {
            ctx->pc = 0x106FDCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_106fdc;
        }
    }
    ctx->pc = 0x10702Cu;
label_10702c:
    // 0x10702c: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x10702cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x107030: 0x24c60080  addiu       $a2, $a2, 0x80
    ctx->pc = 0x107030u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x107034: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x107034u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x107038: 0x1675024  and         $t2, $t3, $a3
    ctx->pc = 0x107038u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & GPR_U64(ctx, 7));
    // 0x10703c: 0x1540ffe7  bnez        $t2, . + 4 + (-0x19 << 2)
    ctx->pc = 0x10703Cu;
    {
        const bool branch_taken_0x10703c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x107040u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10703Cu;
            // 0x107040: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10703c) {
            ctx->pc = 0x106FDCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_106fdc;
        }
    }
    ctx->pc = 0x107044u;
    // 0x107044: 0x3e00008  jr          $ra
    ctx->pc = 0x107044u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10704Cu;
    // 0x10704c: 0x0  nop
    ctx->pc = 0x10704cu;
    // NOP
    // 0x107050: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x107050u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x107054: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x107054u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x107058: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x107058u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x10705c: 0x8c8c0010  lw          $t4, 0x10($a0)
    ctx->pc = 0x10705cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x107060: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x107060u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x107064: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x107064u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x107068: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x107068u;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x10706c: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x10706cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x107070: 0xcc040  sll         $t8, $t4, 1
    ctx->pc = 0x107070u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
    // 0x107074: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x107074u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
label_107078:
    // 0x107078: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x107078u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x10707c: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x10707cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x107080: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x107080u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x107084: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x107084u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x107088: 0x710846e8  qfsrv       $t0, $t0, $t0
    ctx->pc = 0x107088u;
    SET_GPR_VEC(ctx, 8, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x10708c: 0x356b8000  ori         $t3, $t3, 0x8000
    ctx->pc = 0x10708cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)32768);
    // 0x107090: 0x10e00010  beqz        $a3, . + 4 + (0x10 << 2)
    ctx->pc = 0x107090u;
    {
        const bool branch_taken_0x107090 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x107094u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107090u;
            // 0x107094: 0x70087e88  pextlb      $t7, $zero, $t0 (Delay Slot)
        SET_GPR_VEC(ctx, 15, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107090) {
            ctx->pc = 0x1070D4u;
            goto label_1070d4;
        }
    }
    ctx->pc = 0x107098u;
label_107098:
    // 0x107098: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x107098u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x10709c: 0xcc3021  addu        $a2, $a2, $t4
    ctx->pc = 0x10709cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x1070a0: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x1070a0u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1070a4: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x1070a4u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1070a8: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x1070a8u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x1070ac: 0x710846e8  qfsrv       $t0, $t0, $t0
    ctx->pc = 0x1070acu;
    SET_GPR_VEC(ctx, 8, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x1070b0: 0x70085688  pextlb      $t2, $zero, $t0
    ctx->pc = 0x1070b0u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
    // 0x1070b4: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x1070b4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x1070b8: 0x714f4908  paddh       $t1, $t2, $t7
    ctx->pc = 0x1070b8u;
    SET_GPR_VEC(ctx, 9, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 15)));
    // 0x1070bc: 0x71407ca9  por         $t7, $t2, $zero
    ctx->pc = 0x1070bcu;
    SET_GPR_VEC(ctx, 15, PS2_POR(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x1070c0: 0x71395108  paddh       $t2, $t1, $t9
    ctx->pc = 0x1070c0u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 25)));
    // 0x1070c4: 0x700a5076  psrlh       $t2, $t2, 1
    ctx->pc = 0x1070c4u;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x1070c8: 0x7dca0000  sq          $t2, 0x0($t6)
    ctx->pc = 0x1070c8u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 10));
    // 0x1070cc: 0x1ce0fff2  bgtz        $a3, . + 4 + (-0xE << 2)
    ctx->pc = 0x1070CCu;
    {
        const bool branch_taken_0x1070cc = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x1070D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1070CCu;
            // 0x1070d0: 0x1d87021  addu        $t6, $t6, $t8 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1070cc) {
            ctx->pc = 0x107098u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_107098;
        }
    }
    ctx->pc = 0x1070D4u;
label_1070d4:
    // 0x1070d4: 0x700b53f7  psrah       $t2, $t3, 15
    ctx->pc = 0x1070d4u;
    SET_GPR_VEC(ctx, 10, _mm_srai_epi16(GPR_VEC(ctx, 11), 15));
    // 0x1070d8: 0x24a50140  addiu       $a1, $a1, 0x140
    ctx->pc = 0x1070d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 320));
    // 0x1070dc: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x1070dcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1070e0: 0x24c60140  addiu       $a2, $a2, 0x140
    ctx->pc = 0x1070e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 320));
    // 0x1070e4: 0x1475024  and         $t2, $t2, $a3
    ctx->pc = 0x1070e4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 7));
    // 0x1070e8: 0x1540ffeb  bnez        $t2, . + 4 + (-0x15 << 2)
    ctx->pc = 0x1070E8u;
    {
        const bool branch_taken_0x1070e8 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x1070ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1070E8u;
            // 0x1070ec: 0x316b7fff  andi        $t3, $t3, 0x7FFF (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)32767);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1070e8) {
            ctx->pc = 0x107098u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_107098;
        }
    }
    ctx->pc = 0x1070F0u;
    // 0x1070f0: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x1070f0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1070f4: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x1070f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1070f8: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x1070f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1070fc: 0x25ce0080  addiu       $t6, $t6, 0x80
    ctx->pc = 0x1070fcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 128));
    // 0x107100: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x107100u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x107104: 0x24c60040  addiu       $a2, $a2, 0x40
    ctx->pc = 0x107104u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x107108: 0x316a0001  andi        $t2, $t3, 0x1
    ctx->pc = 0x107108u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)1);
    // 0x10710c: 0x1540ffda  bnez        $t2, . + 4 + (-0x26 << 2)
    ctx->pc = 0x10710Cu;
    {
        const bool branch_taken_0x10710c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x107110u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10710Cu;
            // 0x107110: 0x316bfffe  andi        $t3, $t3, 0xFFFE (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65534);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10710c) {
            ctx->pc = 0x107078u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_107078;
        }
    }
    ctx->pc = 0x107114u;
    // 0x107114: 0x3e00008  jr          $ra
    ctx->pc = 0x107114u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10711Cu;
    // 0x10711c: 0x0  nop
    ctx->pc = 0x10711cu;
    // NOP
    // 0x107120: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x107120u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x107124: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x107124u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x107128: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x107128u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x10712c: 0x8c890010  lw          $t1, 0x10($a0)
    ctx->pc = 0x10712cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x107130: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x107130u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x107134: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x107134u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x107138: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x107138u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x10713c: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x10713cu;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x107140: 0x24180001  addiu       $t8, $zero, 0x1
    ctx->pc = 0x107140u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x107144: 0x94040  sll         $t0, $t1, 1
    ctx->pc = 0x107144u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x107148: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x107148u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_10714c:
    // 0x10714c: 0x78aa0000  lq          $t2, 0x0($a1)
    ctx->pc = 0x10714cu;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x107150: 0x78cf0000  lq          $t7, 0x0($a2)
    ctx->pc = 0x107150u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x107154: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x107154u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x107158: 0x71ea16e8  qfsrv       $v0, $t7, $t2
    ctx->pc = 0x107158u;
    SET_GPR_VEC(ctx, 2, PS2_QFSRV(GPR_VEC(ctx, 15), GPR_VEC(ctx, 10), ctx->sa & 0x7F));
    // 0x10715c: 0x714f1ee8  qfsrv       $v1, $t2, $t7
    ctx->pc = 0x10715cu;
    SET_GPR_VEC(ctx, 3, PS2_QFSRV(GPR_VEC(ctx, 10), GPR_VEC(ctx, 15), ctx->sa & 0x7F));
    // 0x107160: 0x70025688  pextlb      $t2, $zero, $v0
    ctx->pc = 0x107160u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x107164: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x107164u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x107168: 0x70027ea8  pextub      $t7, $zero, $v0
    ctx->pc = 0x107168u;
    SET_GPR_VEC(ctx, 15, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x10716c: 0x7180000  mtsab       $t8, 0x0
    ctx->pc = 0x10716cu;
    ctx->sa = ((GPR_U32(ctx, 24) ^ (uint32_t)0) & 0xF) << 3;
    // 0x107170: 0x70621ee8  qfsrv       $v1, $v1, $v0
    ctx->pc = 0x107170u;
    SET_GPR_VEC(ctx, 3, PS2_QFSRV(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2), ctx->sa & 0x7F));
    // 0x107174: 0x70031688  pextlb      $v0, $zero, $v1
    ctx->pc = 0x107174u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x107178: 0x70031ea8  pextub      $v1, $zero, $v1
    ctx->pc = 0x107178u;
    SET_GPR_VEC(ctx, 3, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x10717c: 0x71425108  paddh       $t2, $t2, $v0
    ctx->pc = 0x10717cu;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 2)));
    // 0x107180: 0x71e37908  paddh       $t7, $t7, $v1
    ctx->pc = 0x107180u;
    SET_GPR_VEC(ctx, 15, PS2_PADDH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 3)));
    // 0x107184: 0x71591108  paddh       $v0, $t2, $t9
    ctx->pc = 0x107184u;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 25)));
    // 0x107188: 0x71f91908  paddh       $v1, $t7, $t9
    ctx->pc = 0x107188u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 25)));
    // 0x10718c: 0x70021076  psrlh       $v0, $v0, 1
    ctx->pc = 0x10718cu;
    SET_GPR_VEC(ctx, 2, _mm_srli_epi16(GPR_VEC(ctx, 2), 1));
    // 0x107190: 0x70031876  psrlh       $v1, $v1, 1
    ctx->pc = 0x107190u;
    SET_GPR_VEC(ctx, 3, _mm_srli_epi16(GPR_VEC(ctx, 3), 1));
    // 0x107194: 0x7dc20000  sq          $v0, 0x0($t6)
    ctx->pc = 0x107194u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 2));
    // 0x107198: 0x7dc30010  sq          $v1, 0x10($t6)
    ctx->pc = 0x107198u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 16), GPR_VEC(ctx, 3));
    // 0x10719c: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x10719cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x1071a0: 0xc93021  addu        $a2, $a2, $t1
    ctx->pc = 0x1071a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x1071a4: 0x1ce0ffe9  bgtz        $a3, . + 4 + (-0x17 << 2)
    ctx->pc = 0x1071A4u;
    {
        const bool branch_taken_0x1071a4 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x1071A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1071A4u;
            // 0x1071a8: 0x1c87021  addu        $t6, $t6, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1071a4) {
            ctx->pc = 0x10714Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10714c;
        }
    }
    ctx->pc = 0x1071ACu;
    // 0x1071ac: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x1071acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x1071b0: 0x24c60080  addiu       $a2, $a2, 0x80
    ctx->pc = 0x1071b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x1071b4: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x1071b4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1071b8: 0x1676024  and         $t4, $t3, $a3
    ctx->pc = 0x1071b8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 11) & GPR_U64(ctx, 7));
    // 0x1071bc: 0x1580ffe3  bnez        $t4, . + 4 + (-0x1D << 2)
    ctx->pc = 0x1071BCu;
    {
        const bool branch_taken_0x1071bc = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x1071C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1071BCu;
            // 0x1071c0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1071bc) {
            ctx->pc = 0x10714Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10714c;
        }
    }
    ctx->pc = 0x1071C4u;
    // 0x1071c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1071C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1071CCu;
    // 0x1071cc: 0x0  nop
    ctx->pc = 0x1071ccu;
    // NOP
    // 0x1071d0: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x1071d0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1071d4: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x1071d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1071d8: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x1071d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1071dc: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x1071dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1071e0: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x1071e0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1071e4: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x1071e4u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1071e8: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x1071e8u;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x1071ec: 0x24180001  addiu       $t8, $zero, 0x1
    ctx->pc = 0x1071ecu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1071f0: 0x240cffff  addiu       $t4, $zero, -0x1
    ctx->pc = 0x1071f0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1071f4: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1071f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_1071f8:
    // 0x1071f8: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x1071f8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1071fc: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x1071fcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_107200:
    // 0x107200: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x107200u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x107204: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x107204u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x107208: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x107208u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x10720c: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x10720cu;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x107210: 0x710846e8  qfsrv       $t0, $t0, $t0
    ctx->pc = 0x107210u;
    SET_GPR_VEC(ctx, 8, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x107214: 0x70084e88  pextlb      $t1, $zero, $t0
    ctx->pc = 0x107214u;
    SET_GPR_VEC(ctx, 9, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
    // 0x107218: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x107218u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x10721c: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x10721cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x107220: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x107220u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x107224: 0x7180000  mtsab       $t8, 0x0
    ctx->pc = 0x107224u;
    ctx->sa = ((GPR_U32(ctx, 24) ^ (uint32_t)0) & 0xF) << 3;
    // 0x107228: 0x700856e8  qfsrv       $t2, $zero, $t0
    ctx->pc = 0x107228u;
    SET_GPR_VEC(ctx, 10, PS2_QFSRV(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x10722c: 0x700a4688  pextlb      $t0, $zero, $t2
    ctx->pc = 0x10722cu;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x107230: 0x71285108  paddh       $t2, $t1, $t0
    ctx->pc = 0x107230u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x107234: 0x71595108  paddh       $t2, $t2, $t9
    ctx->pc = 0x107234u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 25)));
    // 0x107238: 0x700a5076  psrlh       $t2, $t2, 1
    ctx->pc = 0x107238u;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x10723c: 0x7dca0000  sq          $t2, 0x0($t6)
    ctx->pc = 0x10723cu;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 10));
    // 0x107240: 0x1ce0ffef  bgtz        $a3, . + 4 + (-0x11 << 2)
    ctx->pc = 0x107240u;
    {
        const bool branch_taken_0x107240 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x107244u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107240u;
            // 0x107244: 0x1c27021  addu        $t6, $t6, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107240) {
            ctx->pc = 0x107200u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_107200;
        }
    }
    ctx->pc = 0x107248u;
    // 0x107248: 0x24a50140  addiu       $a1, $a1, 0x140
    ctx->pc = 0x107248u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 320));
    // 0x10724c: 0x24c60140  addiu       $a2, $a2, 0x140
    ctx->pc = 0x10724cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 320));
    // 0x107250: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x107250u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x107254: 0x1675024  and         $t2, $t3, $a3
    ctx->pc = 0x107254u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & GPR_U64(ctx, 7));
    // 0x107258: 0x1540ffe9  bnez        $t2, . + 4 + (-0x17 << 2)
    ctx->pc = 0x107258u;
    {
        const bool branch_taken_0x107258 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x10725Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107258u;
            // 0x10725c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107258) {
            ctx->pc = 0x107200u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_107200;
        }
    }
    ctx->pc = 0x107260u;
    // 0x107260: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x107260u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x107264: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x107264u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x107268: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x107268u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x10726c: 0x25ce0080  addiu       $t6, $t6, 0x80
    ctx->pc = 0x10726cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 128));
    // 0x107270: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x107270u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x107274: 0x24c60040  addiu       $a2, $a2, 0x40
    ctx->pc = 0x107274u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x107278: 0x1580ffdf  bnez        $t4, . + 4 + (-0x21 << 2)
    ctx->pc = 0x107278u;
    {
        const bool branch_taken_0x107278 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x10727Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107278u;
            // 0x10727c: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107278) {
            ctx->pc = 0x1071F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1071f8;
        }
    }
    ctx->pc = 0x107280u;
    // 0x107280: 0x3e00008  jr          $ra
    ctx->pc = 0x107280u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x107288u;
    // 0x107288: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x107288u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x10728c: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x10728cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x107290: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x107290u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x107294: 0x8c8c0010  lw          $t4, 0x10($a0)
    ctx->pc = 0x107294u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x107298: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x107298u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x10729c: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x10729cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1072a0: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x1072a0u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1072a4: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x1072a4u;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x1072a8: 0x7019c874  psllh       $t9, $t9, 1
    ctx->pc = 0x1072a8u;
    SET_GPR_VEC(ctx, 25, _mm_slli_epi16(GPR_VEC(ctx, 25), 1));
    // 0x1072ac: 0x24180001  addiu       $t8, $zero, 0x1
    ctx->pc = 0x1072acu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1072b0: 0x78a80000  lq          $t0, 0x0($a1)
    ctx->pc = 0x1072b0u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1072b4: 0x78c90000  lq          $t1, 0x0($a2)
    ctx->pc = 0x1072b4u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1072b8: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x1072b8u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x1072bc: 0x712856e8  qfsrv       $t2, $t1, $t0
    ctx->pc = 0x1072bcu;
    SET_GPR_VEC(ctx, 10, PS2_QFSRV(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x1072c0: 0x71097ee8  qfsrv       $t7, $t0, $t1
    ctx->pc = 0x1072c0u;
    SET_GPR_VEC(ctx, 15, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 9), ctx->sa & 0x7F));
    // 0x1072c4: 0x700a4688  pextlb      $t0, $zero, $t2
    ctx->pc = 0x1072c4u;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x1072c8: 0x700a4ea8  pextub      $t1, $zero, $t2
    ctx->pc = 0x1072c8u;
    SET_GPR_VEC(ctx, 9, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x1072cc: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x1072ccu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1072d0: 0x7180000  mtsab       $t8, 0x0
    ctx->pc = 0x1072d0u;
    ctx->sa = ((GPR_U32(ctx, 24) ^ (uint32_t)0) & 0xF) << 3;
    // 0x1072d4: 0x71ea7ee8  qfsrv       $t7, $t7, $t2
    ctx->pc = 0x1072d4u;
    SET_GPR_VEC(ctx, 15, PS2_QFSRV(GPR_VEC(ctx, 15), GPR_VEC(ctx, 10), ctx->sa & 0x7F));
    // 0x1072d8: 0x700f5688  pextlb      $t2, $zero, $t7
    ctx->pc = 0x1072d8u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 15)));
    // 0x1072dc: 0x700f7ea8  pextub      $t7, $zero, $t7
    ctx->pc = 0x1072dcu;
    SET_GPR_VEC(ctx, 15, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 15)));
    // 0x1072e0: 0x710a4108  paddh       $t0, $t0, $t2
    ctx->pc = 0x1072e0u;
    SET_GPR_VEC(ctx, 8, PS2_PADDH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 10)));
    // 0x1072e4: 0x10e0001e  beqz        $a3, . + 4 + (0x1E << 2)
    ctx->pc = 0x1072E4u;
    {
        const bool branch_taken_0x1072e4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1072E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1072E4u;
            // 0x1072e8: 0x712f4908  paddh       $t1, $t1, $t7 (Delay Slot)
        SET_GPR_VEC(ctx, 9, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 15)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1072e4) {
            ctx->pc = 0x107360u;
            goto label_107360;
        }
    }
    ctx->pc = 0x1072ECu;
label_1072ec:
    // 0x1072ec: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x1072ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x1072f0: 0xcc3021  addu        $a2, $a2, $t4
    ctx->pc = 0x1072f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x1072f4: 0x78aa0000  lq          $t2, 0x0($a1)
    ctx->pc = 0x1072f4u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1072f8: 0x78cf0000  lq          $t7, 0x0($a2)
    ctx->pc = 0x1072f8u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1072fc: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x1072fcu;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x107300: 0x71ea16e8  qfsrv       $v0, $t7, $t2
    ctx->pc = 0x107300u;
    SET_GPR_VEC(ctx, 2, PS2_QFSRV(GPR_VEC(ctx, 15), GPR_VEC(ctx, 10), ctx->sa & 0x7F));
    // 0x107304: 0x714f1ee8  qfsrv       $v1, $t2, $t7
    ctx->pc = 0x107304u;
    SET_GPR_VEC(ctx, 3, PS2_QFSRV(GPR_VEC(ctx, 10), GPR_VEC(ctx, 15), ctx->sa & 0x7F));
    // 0x107308: 0x70025688  pextlb      $t2, $zero, $v0
    ctx->pc = 0x107308u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x10730c: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x10730cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x107310: 0x70027ea8  pextub      $t7, $zero, $v0
    ctx->pc = 0x107310u;
    SET_GPR_VEC(ctx, 15, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x107314: 0x7180000  mtsab       $t8, 0x0
    ctx->pc = 0x107314u;
    ctx->sa = ((GPR_U32(ctx, 24) ^ (uint32_t)0) & 0xF) << 3;
    // 0x107318: 0x70621ee8  qfsrv       $v1, $v1, $v0
    ctx->pc = 0x107318u;
    SET_GPR_VEC(ctx, 3, PS2_QFSRV(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2), ctx->sa & 0x7F));
    // 0x10731c: 0x70031688  pextlb      $v0, $zero, $v1
    ctx->pc = 0x10731cu;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x107320: 0x70031ea8  pextub      $v1, $zero, $v1
    ctx->pc = 0x107320u;
    SET_GPR_VEC(ctx, 3, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x107324: 0x71425108  paddh       $t2, $t2, $v0
    ctx->pc = 0x107324u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 2)));
    // 0x107328: 0x71e37908  paddh       $t7, $t7, $v1
    ctx->pc = 0x107328u;
    SET_GPR_VEC(ctx, 15, PS2_PADDH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 3)));
    // 0x10732c: 0x710a1108  paddh       $v0, $t0, $t2
    ctx->pc = 0x10732cu;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 10)));
    // 0x107330: 0x712f1908  paddh       $v1, $t1, $t7
    ctx->pc = 0x107330u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 15)));
    // 0x107334: 0x714044a9  por         $t0, $t2, $zero
    ctx->pc = 0x107334u;
    SET_GPR_VEC(ctx, 8, PS2_POR(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x107338: 0x71e04ca9  por         $t1, $t7, $zero
    ctx->pc = 0x107338u;
    SET_GPR_VEC(ctx, 9, PS2_POR(GPR_VEC(ctx, 15), GPR_VEC(ctx, 0)));
    // 0x10733c: 0x70591108  paddh       $v0, $v0, $t9
    ctx->pc = 0x10733cu;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 25)));
    // 0x107340: 0x70791908  paddh       $v1, $v1, $t9
    ctx->pc = 0x107340u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 25)));
    // 0x107344: 0x700210b6  psrlh       $v0, $v0, 2
    ctx->pc = 0x107344u;
    SET_GPR_VEC(ctx, 2, _mm_srli_epi16(GPR_VEC(ctx, 2), 2));
    // 0x107348: 0x700318b6  psrlh       $v1, $v1, 2
    ctx->pc = 0x107348u;
    SET_GPR_VEC(ctx, 3, _mm_srli_epi16(GPR_VEC(ctx, 3), 2));
    // 0x10734c: 0x7dc20000  sq          $v0, 0x0($t6)
    ctx->pc = 0x10734cu;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 2));
    // 0x107350: 0xc5040  sll         $t2, $t4, 1
    ctx->pc = 0x107350u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
    // 0x107354: 0x7dc30010  sq          $v1, 0x10($t6)
    ctx->pc = 0x107354u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 16), GPR_VEC(ctx, 3));
    // 0x107358: 0x1ce0ffe4  bgtz        $a3, . + 4 + (-0x1C << 2)
    ctx->pc = 0x107358u;
    {
        const bool branch_taken_0x107358 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x10735Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107358u;
            // 0x10735c: 0x1ca7021  addu        $t6, $t6, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107358) {
            ctx->pc = 0x1072ECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1072ec;
        }
    }
    ctx->pc = 0x107360u;
label_107360:
    // 0x107360: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x107360u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x107364: 0x24c60080  addiu       $a2, $a2, 0x80
    ctx->pc = 0x107364u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x107368: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x107368u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x10736c: 0x1675024  and         $t2, $t3, $a3
    ctx->pc = 0x10736cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & GPR_U64(ctx, 7));
    // 0x107370: 0x1540ffde  bnez        $t2, . + 4 + (-0x22 << 2)
    ctx->pc = 0x107370u;
    {
        const bool branch_taken_0x107370 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x107374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107370u;
            // 0x107374: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107370) {
            ctx->pc = 0x1072ECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1072ec;
        }
    }
    ctx->pc = 0x107378u;
    // 0x107378: 0x3e00008  jr          $ra
    ctx->pc = 0x107378u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x107380u;
    // 0x107380: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x107380u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x107384: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x107384u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x107388: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x107388u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x10738c: 0x8c8c0010  lw          $t4, 0x10($a0)
    ctx->pc = 0x10738cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x107390: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x107390u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x107394: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x107394u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x107398: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x107398u;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x10739c: 0x7019c874  psllh       $t9, $t9, 1
    ctx->pc = 0x10739cu;
    SET_GPR_VEC(ctx, 25, _mm_slli_epi16(GPR_VEC(ctx, 25), 1));
    // 0x1073a0: 0x24180001  addiu       $t8, $zero, 0x1
    ctx->pc = 0x1073a0u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1073a4: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x1073a4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1073a8:
    // 0x1073a8: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x1073a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1073ac: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x1073acu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1073b0: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x1073b0u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1073b4: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x1073b4u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x1073b8: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x1073b8u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x1073bc: 0x710846e8  qfsrv       $t0, $t0, $t0
    ctx->pc = 0x1073bcu;
    SET_GPR_VEC(ctx, 8, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x1073c0: 0x70084e88  pextlb      $t1, $zero, $t0
    ctx->pc = 0x1073c0u;
    SET_GPR_VEC(ctx, 9, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
    // 0x1073c4: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x1073c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x1073c8: 0x356b8000  ori         $t3, $t3, 0x8000
    ctx->pc = 0x1073c8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)32768);
    // 0x1073cc: 0x7180000  mtsab       $t8, 0x0
    ctx->pc = 0x1073ccu;
    ctx->sa = ((GPR_U32(ctx, 24) ^ (uint32_t)0) & 0xF) << 3;
    // 0x1073d0: 0x700856e8  qfsrv       $t2, $zero, $t0
    ctx->pc = 0x1073d0u;
    SET_GPR_VEC(ctx, 10, PS2_QFSRV(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x1073d4: 0x700a4688  pextlb      $t0, $zero, $t2
    ctx->pc = 0x1073d4u;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x1073d8: 0x10e00016  beqz        $a3, . + 4 + (0x16 << 2)
    ctx->pc = 0x1073D8u;
    {
        const bool branch_taken_0x1073d8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1073DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1073D8u;
            // 0x1073dc: 0x71287908  paddh       $t7, $t1, $t0 (Delay Slot)
        SET_GPR_VEC(ctx, 15, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1073d8) {
            ctx->pc = 0x107434u;
            goto label_107434;
        }
    }
    ctx->pc = 0x1073E0u;
label_1073e0:
    // 0x1073e0: 0xcc3021  addu        $a2, $a2, $t4
    ctx->pc = 0x1073e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x1073e4: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x1073e4u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1073e8: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x1073e8u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1073ec: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x1073ecu;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x1073f0: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x1073f0u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x1073f4: 0x710846e8  qfsrv       $t0, $t0, $t0
    ctx->pc = 0x1073f4u;
    SET_GPR_VEC(ctx, 8, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x1073f8: 0x70084e88  pextlb      $t1, $zero, $t0
    ctx->pc = 0x1073f8u;
    SET_GPR_VEC(ctx, 9, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
    // 0x1073fc: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x1073fcu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x107400: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x107400u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x107404: 0x7180000  mtsab       $t8, 0x0
    ctx->pc = 0x107404u;
    ctx->sa = ((GPR_U32(ctx, 24) ^ (uint32_t)0) & 0xF) << 3;
    // 0x107408: 0x700856e8  qfsrv       $t2, $zero, $t0
    ctx->pc = 0x107408u;
    SET_GPR_VEC(ctx, 10, PS2_QFSRV(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x10740c: 0x700a4688  pextlb      $t0, $zero, $t2
    ctx->pc = 0x10740cu;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x107410: 0x71285108  paddh       $t2, $t1, $t0
    ctx->pc = 0x107410u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x107414: 0x714f4908  paddh       $t1, $t2, $t7
    ctx->pc = 0x107414u;
    SET_GPR_VEC(ctx, 9, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 15)));
    // 0x107418: 0x71407ca9  por         $t7, $t2, $zero
    ctx->pc = 0x107418u;
    SET_GPR_VEC(ctx, 15, PS2_POR(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x10741c: 0x71395108  paddh       $t2, $t1, $t9
    ctx->pc = 0x10741cu;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 25)));
    // 0x107420: 0xc4040  sll         $t0, $t4, 1
    ctx->pc = 0x107420u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
    // 0x107424: 0x700a50b6  psrlh       $t2, $t2, 2
    ctx->pc = 0x107424u;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 2));
    // 0x107428: 0x7dca0000  sq          $t2, 0x0($t6)
    ctx->pc = 0x107428u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 10));
    // 0x10742c: 0x1ce0ffec  bgtz        $a3, . + 4 + (-0x14 << 2)
    ctx->pc = 0x10742Cu;
    {
        const bool branch_taken_0x10742c = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x107430u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10742Cu;
            // 0x107430: 0x1c87021  addu        $t6, $t6, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10742c) {
            ctx->pc = 0x1073E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1073e0;
        }
    }
    ctx->pc = 0x107434u;
label_107434:
    // 0x107434: 0x700b53f7  psrah       $t2, $t3, 15
    ctx->pc = 0x107434u;
    SET_GPR_VEC(ctx, 10, _mm_srai_epi16(GPR_VEC(ctx, 11), 15));
    // 0x107438: 0x24a50140  addiu       $a1, $a1, 0x140
    ctx->pc = 0x107438u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 320));
    // 0x10743c: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x10743cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x107440: 0x24c60140  addiu       $a2, $a2, 0x140
    ctx->pc = 0x107440u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 320));
    // 0x107444: 0x1475024  and         $t2, $t2, $a3
    ctx->pc = 0x107444u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 7));
    // 0x107448: 0x1540ffe5  bnez        $t2, . + 4 + (-0x1B << 2)
    ctx->pc = 0x107448u;
    {
        const bool branch_taken_0x107448 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x10744Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107448u;
            // 0x10744c: 0x316b7fff  andi        $t3, $t3, 0x7FFF (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)32767);
        ctx->in_delay_slot = false;
        if (branch_taken_0x107448) {
            ctx->pc = 0x1073E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1073e0;
        }
    }
    ctx->pc = 0x107450u;
    // 0x107450: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x107450u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x107454: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x107454u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x107458: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x107458u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x10745c: 0x25ce0080  addiu       $t6, $t6, 0x80
    ctx->pc = 0x10745cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 128));
    // 0x107460: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x107460u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x107464: 0x24c60040  addiu       $a2, $a2, 0x40
    ctx->pc = 0x107464u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x107468: 0x316a0001  andi        $t2, $t3, 0x1
    ctx->pc = 0x107468u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)1);
    // 0x10746c: 0x1540ffce  bnez        $t2, . + 4 + (-0x32 << 2)
    ctx->pc = 0x10746Cu;
    {
        const bool branch_taken_0x10746c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x107470u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10746Cu;
            // 0x107470: 0x316bfffe  andi        $t3, $t3, 0xFFFE (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65534);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10746c) {
            ctx->pc = 0x1073A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1073a8;
        }
    }
    ctx->pc = 0x107474u;
    // 0x107474: 0x3e00008  jr          $ra
    ctx->pc = 0x107474u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10747Cu;
    // 0x10747c: 0x0  nop
    ctx->pc = 0x10747cu;
    // NOP
    // 0x107480: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x107480u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x107484: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x107484u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x107488: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x107488u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x10748c: 0x8c890010  lw          $t1, 0x10($a0)
    ctx->pc = 0x10748cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x107490: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x107490u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x107494: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x107494u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x107498: 0x94040  sll         $t0, $t1, 1
    ctx->pc = 0x107498u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x10749c: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x10749cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1074a0: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x1074a0u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
label_1074a4:
    // 0x1074a4: 0x78aa0000  lq          $t2, 0x0($a1)
    ctx->pc = 0x1074a4u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1074a8: 0x78cf0000  lq          $t7, 0x0($a2)
    ctx->pc = 0x1074a8u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1074ac: 0x71ea16e8  qfsrv       $v0, $t7, $t2
    ctx->pc = 0x1074acu;
    SET_GPR_VEC(ctx, 2, PS2_QFSRV(GPR_VEC(ctx, 15), GPR_VEC(ctx, 10), ctx->sa & 0x7F));
    // 0x1074b0: 0x70025688  pextlb      $t2, $zero, $v0
    ctx->pc = 0x1074b0u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x1074b4: 0x70027ea8  pextub      $t7, $zero, $v0
    ctx->pc = 0x1074b4u;
    SET_GPR_VEC(ctx, 15, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x1074b8: 0x79c20000  lq          $v0, 0x0($t6)
    ctx->pc = 0x1074b8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x1074bc: 0x79c30010  lq          $v1, 0x10($t6)
    ctx->pc = 0x1074bcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 14), 16)));
    // 0x1074c0: 0x704a1108  paddh       $v0, $v0, $t2
    ctx->pc = 0x1074c0u;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 10)));
    // 0x1074c4: 0x706f1908  paddh       $v1, $v1, $t7
    ctx->pc = 0x1074c4u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 15)));
    // 0x1074c8: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x1074c8u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1074cc: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x1074ccu;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x1074d0: 0x70595108  paddh       $t2, $v0, $t9
    ctx->pc = 0x1074d0u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 25)));
    // 0x1074d4: 0x700a1076  psrlh       $v0, $t2, 1
    ctx->pc = 0x1074d4u;
    SET_GPR_VEC(ctx, 2, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x1074d8: 0x70795108  paddh       $t2, $v1, $t9
    ctx->pc = 0x1074d8u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 25)));
    // 0x1074dc: 0x700a1876  psrlh       $v1, $t2, 1
    ctx->pc = 0x1074dcu;
    SET_GPR_VEC(ctx, 3, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x1074e0: 0x7dc20000  sq          $v0, 0x0($t6)
    ctx->pc = 0x1074e0u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 2));
    // 0x1074e4: 0x7dc30010  sq          $v1, 0x10($t6)
    ctx->pc = 0x1074e4u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 16), GPR_VEC(ctx, 3));
    // 0x1074e8: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x1074e8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x1074ec: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x1074ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x1074f0: 0x1c87021  addu        $t6, $t6, $t0
    ctx->pc = 0x1074f0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 8)));
    // 0x1074f4: 0x1ce0ffeb  bgtz        $a3, . + 4 + (-0x15 << 2)
    ctx->pc = 0x1074F4u;
    {
        const bool branch_taken_0x1074f4 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x1074F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1074F4u;
            // 0x1074f8: 0xc93021  addu        $a2, $a2, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1074f4) {
            ctx->pc = 0x1074A4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1074a4;
        }
    }
    ctx->pc = 0x1074FCu;
    // 0x1074fc: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x1074fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x107500: 0x24c60080  addiu       $a2, $a2, 0x80
    ctx->pc = 0x107500u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x107504: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x107504u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x107508: 0x1676024  and         $t4, $t3, $a3
    ctx->pc = 0x107508u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 11) & GPR_U64(ctx, 7));
    // 0x10750c: 0x1580ffe5  bnez        $t4, . + 4 + (-0x1B << 2)
    ctx->pc = 0x10750Cu;
    {
        const bool branch_taken_0x10750c = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x107510u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10750Cu;
            // 0x107510: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10750c) {
            ctx->pc = 0x1074A4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1074a4;
        }
    }
    ctx->pc = 0x107514u;
    // 0x107514: 0x3e00008  jr          $ra
    ctx->pc = 0x107514u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10751Cu;
    // 0x10751c: 0x0  nop
    ctx->pc = 0x10751cu;
    // NOP
    // 0x107520: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x107520u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x107524: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x107524u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x107528: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x107528u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x10752c: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x10752cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x107530: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x107530u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x107534: 0x240cffff  addiu       $t4, $zero, -0x1
    ctx->pc = 0x107534u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x107538: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x107538u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x10753c: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x10753cu;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
label_107540:
    // 0x107540: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x107540u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x107544: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x107544u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_107548:
    // 0x107548: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x107548u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x10754c: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x10754cu;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x107550: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x107550u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x107554: 0x710846e8  qfsrv       $t0, $t0, $t0
    ctx->pc = 0x107554u;
    SET_GPR_VEC(ctx, 8, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x107558: 0x70084e88  pextlb      $t1, $zero, $t0
    ctx->pc = 0x107558u;
    SET_GPR_VEC(ctx, 9, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
    // 0x10755c: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x10755cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x107560: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x107560u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x107564: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x107564u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x107568: 0x79c80000  lq          $t0, 0x0($t6)
    ctx->pc = 0x107568u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x10756c: 0x71285108  paddh       $t2, $t1, $t0
    ctx->pc = 0x10756cu;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x107570: 0x71404988  pcgth       $t1, $t2, $zero
    ctx->pc = 0x107570u;
    SET_GPR_VEC(ctx, 9, PS2_PCGTH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x107574: 0x70094bf6  psrlh       $t1, $t1, 15
    ctx->pc = 0x107574u;
    SET_GPR_VEC(ctx, 9, _mm_srli_epi16(GPR_VEC(ctx, 9), 15));
    // 0x107578: 0x71495108  paddh       $t2, $t2, $t1
    ctx->pc = 0x107578u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 9)));
    // 0x10757c: 0x700a5076  psrlh       $t2, $t2, 1
    ctx->pc = 0x10757cu;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x107580: 0x7dca0000  sq          $t2, 0x0($t6)
    ctx->pc = 0x107580u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 10));
    // 0x107584: 0x1ce0fff0  bgtz        $a3, . + 4 + (-0x10 << 2)
    ctx->pc = 0x107584u;
    {
        const bool branch_taken_0x107584 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x107588u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107584u;
            // 0x107588: 0x1c27021  addu        $t6, $t6, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107584) {
            ctx->pc = 0x107548u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_107548;
        }
    }
    ctx->pc = 0x10758Cu;
    // 0x10758c: 0x24a50140  addiu       $a1, $a1, 0x140
    ctx->pc = 0x10758cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 320));
    // 0x107590: 0x24c60140  addiu       $a2, $a2, 0x140
    ctx->pc = 0x107590u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 320));
    // 0x107594: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x107594u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x107598: 0x1675024  and         $t2, $t3, $a3
    ctx->pc = 0x107598u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & GPR_U64(ctx, 7));
    // 0x10759c: 0x1540ffea  bnez        $t2, . + 4 + (-0x16 << 2)
    ctx->pc = 0x10759Cu;
    {
        const bool branch_taken_0x10759c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x1075A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10759Cu;
            // 0x1075a0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10759c) {
            ctx->pc = 0x107548u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_107548;
        }
    }
    ctx->pc = 0x1075A4u;
    // 0x1075a4: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x1075a4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1075a8: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x1075a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1075ac: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x1075acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1075b0: 0x25ce0080  addiu       $t6, $t6, 0x80
    ctx->pc = 0x1075b0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 128));
    // 0x1075b4: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x1075b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x1075b8: 0x24c60040  addiu       $a2, $a2, 0x40
    ctx->pc = 0x1075b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x1075bc: 0x1580ffe0  bnez        $t4, . + 4 + (-0x20 << 2)
    ctx->pc = 0x1075BCu;
    {
        const bool branch_taken_0x1075bc = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x1075C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1075BCu;
            // 0x1075c0: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1075bc) {
            ctx->pc = 0x107540u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_107540;
        }
    }
    ctx->pc = 0x1075C4u;
    // 0x1075c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1075C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1075CCu;
    // 0x1075cc: 0x0  nop
    ctx->pc = 0x1075ccu;
    // NOP
    // 0x1075d0: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x1075d0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1075d4: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x1075d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1075d8: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x1075d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1075dc: 0x8c8c0010  lw          $t4, 0x10($a0)
    ctx->pc = 0x1075dcu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1075e0: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x1075e0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1075e4: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x1075e4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1075e8: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x1075e8u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1075ec: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x1075ecu;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x1075f0: 0x78a80000  lq          $t0, 0x0($a1)
    ctx->pc = 0x1075f0u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1075f4: 0x78c90000  lq          $t1, 0x0($a2)
    ctx->pc = 0x1075f4u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1075f8: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x1075f8u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x1075fc: 0x712856e8  qfsrv       $t2, $t1, $t0
    ctx->pc = 0x1075fcu;
    SET_GPR_VEC(ctx, 10, PS2_QFSRV(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x107600: 0xcc040  sll         $t8, $t4, 1
    ctx->pc = 0x107600u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
    // 0x107604: 0x700a4688  pextlb      $t0, $zero, $t2
    ctx->pc = 0x107604u;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x107608: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x107608u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10760c: 0x10e0001f  beqz        $a3, . + 4 + (0x1F << 2)
    ctx->pc = 0x10760Cu;
    {
        const bool branch_taken_0x10760c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x107610u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10760Cu;
            // 0x107610: 0x700a4ea8  pextub      $t1, $zero, $t2 (Delay Slot)
        SET_GPR_VEC(ctx, 9, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10760c) {
            ctx->pc = 0x10768Cu;
            goto label_10768c;
        }
    }
    ctx->pc = 0x107614u;
label_107614:
    // 0x107614: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x107614u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x107618: 0xcc3021  addu        $a2, $a2, $t4
    ctx->pc = 0x107618u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x10761c: 0x78aa0000  lq          $t2, 0x0($a1)
    ctx->pc = 0x10761cu;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x107620: 0x78cf0000  lq          $t7, 0x0($a2)
    ctx->pc = 0x107620u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x107624: 0x71ea16e8  qfsrv       $v0, $t7, $t2
    ctx->pc = 0x107624u;
    SET_GPR_VEC(ctx, 2, PS2_QFSRV(GPR_VEC(ctx, 15), GPR_VEC(ctx, 10), ctx->sa & 0x7F));
    // 0x107628: 0x70025688  pextlb      $t2, $zero, $v0
    ctx->pc = 0x107628u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x10762c: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x10762cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x107630: 0x70027ea8  pextub      $t7, $zero, $v0
    ctx->pc = 0x107630u;
    SET_GPR_VEC(ctx, 15, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x107634: 0x710a1108  paddh       $v0, $t0, $t2
    ctx->pc = 0x107634u;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 10)));
    // 0x107638: 0x712f1908  paddh       $v1, $t1, $t7
    ctx->pc = 0x107638u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 15)));
    // 0x10763c: 0x714044a9  por         $t0, $t2, $zero
    ctx->pc = 0x10763cu;
    SET_GPR_VEC(ctx, 8, PS2_POR(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x107640: 0x71e04ca9  por         $t1, $t7, $zero
    ctx->pc = 0x107640u;
    SET_GPR_VEC(ctx, 9, PS2_POR(GPR_VEC(ctx, 15), GPR_VEC(ctx, 0)));
    // 0x107644: 0x70591108  paddh       $v0, $v0, $t9
    ctx->pc = 0x107644u;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 25)));
    // 0x107648: 0x70791908  paddh       $v1, $v1, $t9
    ctx->pc = 0x107648u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 25)));
    // 0x10764c: 0x70021076  psrlh       $v0, $v0, 1
    ctx->pc = 0x10764cu;
    SET_GPR_VEC(ctx, 2, _mm_srli_epi16(GPR_VEC(ctx, 2), 1));
    // 0x107650: 0x70031876  psrlh       $v1, $v1, 1
    ctx->pc = 0x107650u;
    SET_GPR_VEC(ctx, 3, _mm_srli_epi16(GPR_VEC(ctx, 3), 1));
    // 0x107654: 0x79ca0000  lq          $t2, 0x0($t6)
    ctx->pc = 0x107654u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x107658: 0x79cf0010  lq          $t7, 0x10($t6)
    ctx->pc = 0x107658u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 14), 16)));
    // 0x10765c: 0x704a1108  paddh       $v0, $v0, $t2
    ctx->pc = 0x10765cu;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 10)));
    // 0x107660: 0x706f1908  paddh       $v1, $v1, $t7
    ctx->pc = 0x107660u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 15)));
    // 0x107664: 0x70595108  paddh       $t2, $v0, $t9
    ctx->pc = 0x107664u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 25)));
    // 0x107668: 0x700a1076  psrlh       $v0, $t2, 1
    ctx->pc = 0x107668u;
    SET_GPR_VEC(ctx, 2, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x10766c: 0x70605188  pcgth       $t2, $v1, $zero
    ctx->pc = 0x10766cu;
    SET_GPR_VEC(ctx, 10, PS2_PCGTH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x107670: 0x700a53f6  psrlh       $t2, $t2, 15
    ctx->pc = 0x107670u;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 15));
    // 0x107674: 0x706a5108  paddh       $t2, $v1, $t2
    ctx->pc = 0x107674u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 10)));
    // 0x107678: 0x700a1876  psrlh       $v1, $t2, 1
    ctx->pc = 0x107678u;
    SET_GPR_VEC(ctx, 3, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x10767c: 0x7dc20000  sq          $v0, 0x0($t6)
    ctx->pc = 0x10767cu;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 2));
    // 0x107680: 0x7dc30010  sq          $v1, 0x10($t6)
    ctx->pc = 0x107680u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 16), GPR_VEC(ctx, 3));
    // 0x107684: 0x1ce0ffe3  bgtz        $a3, . + 4 + (-0x1D << 2)
    ctx->pc = 0x107684u;
    {
        const bool branch_taken_0x107684 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x107688u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107684u;
            // 0x107688: 0x1d87021  addu        $t6, $t6, $t8 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107684) {
            ctx->pc = 0x107614u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_107614;
        }
    }
    ctx->pc = 0x10768Cu;
label_10768c:
    // 0x10768c: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x10768cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x107690: 0x24c60080  addiu       $a2, $a2, 0x80
    ctx->pc = 0x107690u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x107694: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x107694u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x107698: 0x1675024  and         $t2, $t3, $a3
    ctx->pc = 0x107698u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & GPR_U64(ctx, 7));
    // 0x10769c: 0x1540ffdd  bnez        $t2, . + 4 + (-0x23 << 2)
    ctx->pc = 0x10769Cu;
    {
        const bool branch_taken_0x10769c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x1076A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10769Cu;
            // 0x1076a0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10769c) {
            ctx->pc = 0x107614u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_107614;
        }
    }
    ctx->pc = 0x1076A4u;
    // 0x1076a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1076A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1076ACu;
    // 0x1076ac: 0x0  nop
    ctx->pc = 0x1076acu;
    // NOP
    // 0x1076b0: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x1076b0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1076b4: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x1076b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1076b8: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x1076b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1076bc: 0x8c8c0010  lw          $t4, 0x10($a0)
    ctx->pc = 0x1076bcu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1076c0: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x1076c0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1076c4: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x1076c4u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1076c8: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x1076c8u;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x1076cc: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x1076ccu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1076d0: 0xcc040  sll         $t8, $t4, 1
    ctx->pc = 0x1076d0u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
    // 0x1076d4: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x1076d4u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
label_1076d8:
    // 0x1076d8: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x1076d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1076dc: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x1076dcu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1076e0: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x1076e0u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1076e4: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x1076e4u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x1076e8: 0x710846e8  qfsrv       $t0, $t0, $t0
    ctx->pc = 0x1076e8u;
    SET_GPR_VEC(ctx, 8, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x1076ec: 0x356b8000  ori         $t3, $t3, 0x8000
    ctx->pc = 0x1076ecu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)32768);
    // 0x1076f0: 0x10e00016  beqz        $a3, . + 4 + (0x16 << 2)
    ctx->pc = 0x1076F0u;
    {
        const bool branch_taken_0x1076f0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1076F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1076F0u;
            // 0x1076f4: 0x70087e88  pextlb      $t7, $zero, $t0 (Delay Slot)
        SET_GPR_VEC(ctx, 15, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1076f0) {
            ctx->pc = 0x10774Cu;
            goto label_10774c;
        }
    }
    ctx->pc = 0x1076F8u;
label_1076f8:
    // 0x1076f8: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x1076f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x1076fc: 0xcc3021  addu        $a2, $a2, $t4
    ctx->pc = 0x1076fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x107700: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x107700u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x107704: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x107704u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x107708: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x107708u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x10770c: 0x710846e8  qfsrv       $t0, $t0, $t0
    ctx->pc = 0x10770cu;
    SET_GPR_VEC(ctx, 8, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x107710: 0x70085688  pextlb      $t2, $zero, $t0
    ctx->pc = 0x107710u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
    // 0x107714: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x107714u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x107718: 0x714f4908  paddh       $t1, $t2, $t7
    ctx->pc = 0x107718u;
    SET_GPR_VEC(ctx, 9, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 15)));
    // 0x10771c: 0x71407ca9  por         $t7, $t2, $zero
    ctx->pc = 0x10771cu;
    SET_GPR_VEC(ctx, 15, PS2_POR(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x107720: 0x71395108  paddh       $t2, $t1, $t9
    ctx->pc = 0x107720u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 25)));
    // 0x107724: 0x700a5076  psrlh       $t2, $t2, 1
    ctx->pc = 0x107724u;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x107728: 0x79c80000  lq          $t0, 0x0($t6)
    ctx->pc = 0x107728u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x10772c: 0x71485108  paddh       $t2, $t2, $t0
    ctx->pc = 0x10772cu;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 8)));
    // 0x107730: 0x71404988  pcgth       $t1, $t2, $zero
    ctx->pc = 0x107730u;
    SET_GPR_VEC(ctx, 9, PS2_PCGTH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x107734: 0x70094bf6  psrlh       $t1, $t1, 15
    ctx->pc = 0x107734u;
    SET_GPR_VEC(ctx, 9, _mm_srli_epi16(GPR_VEC(ctx, 9), 15));
    // 0x107738: 0x71495108  paddh       $t2, $t2, $t1
    ctx->pc = 0x107738u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 9)));
    // 0x10773c: 0x700a5076  psrlh       $t2, $t2, 1
    ctx->pc = 0x10773cu;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x107740: 0x7dca0000  sq          $t2, 0x0($t6)
    ctx->pc = 0x107740u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 10));
    // 0x107744: 0x1ce0ffec  bgtz        $a3, . + 4 + (-0x14 << 2)
    ctx->pc = 0x107744u;
    {
        const bool branch_taken_0x107744 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x107748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107744u;
            // 0x107748: 0x1d87021  addu        $t6, $t6, $t8 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107744) {
            ctx->pc = 0x1076F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1076f8;
        }
    }
    ctx->pc = 0x10774Cu;
label_10774c:
    // 0x10774c: 0x700b53f7  psrah       $t2, $t3, 15
    ctx->pc = 0x10774cu;
    SET_GPR_VEC(ctx, 10, _mm_srai_epi16(GPR_VEC(ctx, 11), 15));
    // 0x107750: 0x24a50140  addiu       $a1, $a1, 0x140
    ctx->pc = 0x107750u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 320));
    // 0x107754: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x107754u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x107758: 0x24c60140  addiu       $a2, $a2, 0x140
    ctx->pc = 0x107758u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 320));
    // 0x10775c: 0x1475024  and         $t2, $t2, $a3
    ctx->pc = 0x10775cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 7));
    // 0x107760: 0x1540ffe5  bnez        $t2, . + 4 + (-0x1B << 2)
    ctx->pc = 0x107760u;
    {
        const bool branch_taken_0x107760 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x107764u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107760u;
            // 0x107764: 0x316b7fff  andi        $t3, $t3, 0x7FFF (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)32767);
        ctx->in_delay_slot = false;
        if (branch_taken_0x107760) {
            ctx->pc = 0x1076F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1076f8;
        }
    }
    ctx->pc = 0x107768u;
    // 0x107768: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x107768u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x10776c: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x10776cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x107770: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x107770u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x107774: 0x25ce0080  addiu       $t6, $t6, 0x80
    ctx->pc = 0x107774u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 128));
    // 0x107778: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x107778u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x10777c: 0x24c60040  addiu       $a2, $a2, 0x40
    ctx->pc = 0x10777cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x107780: 0x316a0001  andi        $t2, $t3, 0x1
    ctx->pc = 0x107780u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)1);
    // 0x107784: 0x1540ffd4  bnez        $t2, . + 4 + (-0x2C << 2)
    ctx->pc = 0x107784u;
    {
        const bool branch_taken_0x107784 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x107788u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107784u;
            // 0x107788: 0x316bfffe  andi        $t3, $t3, 0xFFFE (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65534);
        ctx->in_delay_slot = false;
        if (branch_taken_0x107784) {
            ctx->pc = 0x1076D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1076d8;
        }
    }
    ctx->pc = 0x10778Cu;
    // 0x10778c: 0x3e00008  jr          $ra
    ctx->pc = 0x10778Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x107794u;
    // 0x107794: 0x0  nop
    ctx->pc = 0x107794u;
    // NOP
    // 0x107798: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x107798u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x10779c: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x10779cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1077a0: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x1077a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1077a4: 0x8c890010  lw          $t1, 0x10($a0)
    ctx->pc = 0x1077a4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1077a8: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x1077a8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1077ac: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x1077acu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1077b0: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x1077b0u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1077b4: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x1077b4u;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x1077b8: 0x24180001  addiu       $t8, $zero, 0x1
    ctx->pc = 0x1077b8u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1077bc: 0x94040  sll         $t0, $t1, 1
    ctx->pc = 0x1077bcu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x1077c0: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x1077c0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1077c4:
    // 0x1077c4: 0x78aa0000  lq          $t2, 0x0($a1)
    ctx->pc = 0x1077c4u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1077c8: 0x78cf0000  lq          $t7, 0x0($a2)
    ctx->pc = 0x1077c8u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1077cc: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x1077ccu;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x1077d0: 0x71ea16e8  qfsrv       $v0, $t7, $t2
    ctx->pc = 0x1077d0u;
    SET_GPR_VEC(ctx, 2, PS2_QFSRV(GPR_VEC(ctx, 15), GPR_VEC(ctx, 10), ctx->sa & 0x7F));
    // 0x1077d4: 0x714f1ee8  qfsrv       $v1, $t2, $t7
    ctx->pc = 0x1077d4u;
    SET_GPR_VEC(ctx, 3, PS2_QFSRV(GPR_VEC(ctx, 10), GPR_VEC(ctx, 15), ctx->sa & 0x7F));
    // 0x1077d8: 0x70025688  pextlb      $t2, $zero, $v0
    ctx->pc = 0x1077d8u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x1077dc: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x1077dcu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x1077e0: 0x70027ea8  pextub      $t7, $zero, $v0
    ctx->pc = 0x1077e0u;
    SET_GPR_VEC(ctx, 15, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x1077e4: 0x7180000  mtsab       $t8, 0x0
    ctx->pc = 0x1077e4u;
    ctx->sa = ((GPR_U32(ctx, 24) ^ (uint32_t)0) & 0xF) << 3;
    // 0x1077e8: 0x70621ee8  qfsrv       $v1, $v1, $v0
    ctx->pc = 0x1077e8u;
    SET_GPR_VEC(ctx, 3, PS2_QFSRV(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2), ctx->sa & 0x7F));
    // 0x1077ec: 0x70031688  pextlb      $v0, $zero, $v1
    ctx->pc = 0x1077ecu;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x1077f0: 0x70031ea8  pextub      $v1, $zero, $v1
    ctx->pc = 0x1077f0u;
    SET_GPR_VEC(ctx, 3, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x1077f4: 0x71425108  paddh       $t2, $t2, $v0
    ctx->pc = 0x1077f4u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 2)));
    // 0x1077f8: 0x71e37908  paddh       $t7, $t7, $v1
    ctx->pc = 0x1077f8u;
    SET_GPR_VEC(ctx, 15, PS2_PADDH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 3)));
    // 0x1077fc: 0x71591108  paddh       $v0, $t2, $t9
    ctx->pc = 0x1077fcu;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 25)));
    // 0x107800: 0x71f91908  paddh       $v1, $t7, $t9
    ctx->pc = 0x107800u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 25)));
    // 0x107804: 0x70021076  psrlh       $v0, $v0, 1
    ctx->pc = 0x107804u;
    SET_GPR_VEC(ctx, 2, _mm_srli_epi16(GPR_VEC(ctx, 2), 1));
    // 0x107808: 0x70031876  psrlh       $v1, $v1, 1
    ctx->pc = 0x107808u;
    SET_GPR_VEC(ctx, 3, _mm_srli_epi16(GPR_VEC(ctx, 3), 1));
    // 0x10780c: 0x79ca0000  lq          $t2, 0x0($t6)
    ctx->pc = 0x10780cu;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x107810: 0x79cf0010  lq          $t7, 0x10($t6)
    ctx->pc = 0x107810u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 14), 16)));
    // 0x107814: 0x704a1108  paddh       $v0, $v0, $t2
    ctx->pc = 0x107814u;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 10)));
    // 0x107818: 0x706f1908  paddh       $v1, $v1, $t7
    ctx->pc = 0x107818u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 15)));
    // 0x10781c: 0x70595108  paddh       $t2, $v0, $t9
    ctx->pc = 0x10781cu;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 25)));
    // 0x107820: 0x700a1076  psrlh       $v0, $t2, 1
    ctx->pc = 0x107820u;
    SET_GPR_VEC(ctx, 2, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x107824: 0x70605188  pcgth       $t2, $v1, $zero
    ctx->pc = 0x107824u;
    SET_GPR_VEC(ctx, 10, PS2_PCGTH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x107828: 0x700a53f6  psrlh       $t2, $t2, 15
    ctx->pc = 0x107828u;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 15));
    // 0x10782c: 0x706a5108  paddh       $t2, $v1, $t2
    ctx->pc = 0x10782cu;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 10)));
    // 0x107830: 0x700a1876  psrlh       $v1, $t2, 1
    ctx->pc = 0x107830u;
    SET_GPR_VEC(ctx, 3, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x107834: 0x7dc20000  sq          $v0, 0x0($t6)
    ctx->pc = 0x107834u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 2));
    // 0x107838: 0x7dc30010  sq          $v1, 0x10($t6)
    ctx->pc = 0x107838u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 16), GPR_VEC(ctx, 3));
    // 0x10783c: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x10783cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x107840: 0xc93021  addu        $a2, $a2, $t1
    ctx->pc = 0x107840u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x107844: 0x1ce0ffdf  bgtz        $a3, . + 4 + (-0x21 << 2)
    ctx->pc = 0x107844u;
    {
        const bool branch_taken_0x107844 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x107848u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107844u;
            // 0x107848: 0x1c87021  addu        $t6, $t6, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107844) {
            ctx->pc = 0x1077C4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1077c4;
        }
    }
    ctx->pc = 0x10784Cu;
    // 0x10784c: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x10784cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x107850: 0x24c60080  addiu       $a2, $a2, 0x80
    ctx->pc = 0x107850u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x107854: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x107854u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x107858: 0x1676024  and         $t4, $t3, $a3
    ctx->pc = 0x107858u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 11) & GPR_U64(ctx, 7));
    // 0x10785c: 0x1580ffd9  bnez        $t4, . + 4 + (-0x27 << 2)
    ctx->pc = 0x10785Cu;
    {
        const bool branch_taken_0x10785c = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x107860u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10785Cu;
            // 0x107860: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10785c) {
            ctx->pc = 0x1077C4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1077c4;
        }
    }
    ctx->pc = 0x107864u;
    // 0x107864: 0x3e00008  jr          $ra
    ctx->pc = 0x107864u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10786Cu;
    // 0x10786c: 0x0  nop
    ctx->pc = 0x10786cu;
    // NOP
    // 0x107870: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x107870u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x107874: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x107874u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x107878: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x107878u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x10787c: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x10787cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x107880: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x107880u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x107884: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x107884u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x107888: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x107888u;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x10788c: 0x24180001  addiu       $t8, $zero, 0x1
    ctx->pc = 0x10788cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x107890: 0x240cffff  addiu       $t4, $zero, -0x1
    ctx->pc = 0x107890u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x107894: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x107894u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_107898:
    // 0x107898: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x107898u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x10789c: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x10789cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1078a0:
    // 0x1078a0: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x1078a0u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1078a4: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x1078a4u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1078a8: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x1078a8u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x1078ac: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x1078acu;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x1078b0: 0x710846e8  qfsrv       $t0, $t0, $t0
    ctx->pc = 0x1078b0u;
    SET_GPR_VEC(ctx, 8, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x1078b4: 0x70084e88  pextlb      $t1, $zero, $t0
    ctx->pc = 0x1078b4u;
    SET_GPR_VEC(ctx, 9, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
    // 0x1078b8: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x1078b8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x1078bc: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1078bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1078c0: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x1078c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1078c4: 0x7180000  mtsab       $t8, 0x0
    ctx->pc = 0x1078c4u;
    ctx->sa = ((GPR_U32(ctx, 24) ^ (uint32_t)0) & 0xF) << 3;
    // 0x1078c8: 0x700856e8  qfsrv       $t2, $zero, $t0
    ctx->pc = 0x1078c8u;
    SET_GPR_VEC(ctx, 10, PS2_QFSRV(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x1078cc: 0x700a4688  pextlb      $t0, $zero, $t2
    ctx->pc = 0x1078ccu;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x1078d0: 0x71285108  paddh       $t2, $t1, $t0
    ctx->pc = 0x1078d0u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x1078d4: 0x71595108  paddh       $t2, $t2, $t9
    ctx->pc = 0x1078d4u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 25)));
    // 0x1078d8: 0x700a5076  psrlh       $t2, $t2, 1
    ctx->pc = 0x1078d8u;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x1078dc: 0x79c80000  lq          $t0, 0x0($t6)
    ctx->pc = 0x1078dcu;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x1078e0: 0x71485108  paddh       $t2, $t2, $t0
    ctx->pc = 0x1078e0u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 8)));
    // 0x1078e4: 0x71404988  pcgth       $t1, $t2, $zero
    ctx->pc = 0x1078e4u;
    SET_GPR_VEC(ctx, 9, PS2_PCGTH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x1078e8: 0x70094bf6  psrlh       $t1, $t1, 15
    ctx->pc = 0x1078e8u;
    SET_GPR_VEC(ctx, 9, _mm_srli_epi16(GPR_VEC(ctx, 9), 15));
    // 0x1078ec: 0x71495108  paddh       $t2, $t2, $t1
    ctx->pc = 0x1078ecu;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 9)));
    // 0x1078f0: 0x700a5076  psrlh       $t2, $t2, 1
    ctx->pc = 0x1078f0u;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x1078f4: 0x7dca0000  sq          $t2, 0x0($t6)
    ctx->pc = 0x1078f4u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 10));
    // 0x1078f8: 0x1ce0ffe9  bgtz        $a3, . + 4 + (-0x17 << 2)
    ctx->pc = 0x1078F8u;
    {
        const bool branch_taken_0x1078f8 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x1078FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1078F8u;
            // 0x1078fc: 0x1c27021  addu        $t6, $t6, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1078f8) {
            ctx->pc = 0x1078A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1078a0;
        }
    }
    ctx->pc = 0x107900u;
    // 0x107900: 0x24a50140  addiu       $a1, $a1, 0x140
    ctx->pc = 0x107900u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 320));
    // 0x107904: 0x24c60140  addiu       $a2, $a2, 0x140
    ctx->pc = 0x107904u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 320));
    // 0x107908: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x107908u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x10790c: 0x1675024  and         $t2, $t3, $a3
    ctx->pc = 0x10790cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & GPR_U64(ctx, 7));
    // 0x107910: 0x1540ffe3  bnez        $t2, . + 4 + (-0x1D << 2)
    ctx->pc = 0x107910u;
    {
        const bool branch_taken_0x107910 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x107914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107910u;
            // 0x107914: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107910) {
            ctx->pc = 0x1078A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1078a0;
        }
    }
    ctx->pc = 0x107918u;
    // 0x107918: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x107918u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x10791c: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x10791cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x107920: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x107920u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x107924: 0x25ce0080  addiu       $t6, $t6, 0x80
    ctx->pc = 0x107924u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 128));
    // 0x107928: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x107928u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x10792c: 0x24c60040  addiu       $a2, $a2, 0x40
    ctx->pc = 0x10792cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x107930: 0x1580ffd9  bnez        $t4, . + 4 + (-0x27 << 2)
    ctx->pc = 0x107930u;
    {
        const bool branch_taken_0x107930 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x107934u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107930u;
            // 0x107934: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107930) {
            ctx->pc = 0x107898u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_107898;
        }
    }
    ctx->pc = 0x107938u;
    // 0x107938: 0x3e00008  jr          $ra
    ctx->pc = 0x107938u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x107940u;
    // 0x107940: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x107940u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x107944: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x107944u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x107948: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x107948u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x10794c: 0x8c980010  lw          $t8, 0x10($a0)
    ctx->pc = 0x10794cu;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x107950: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x107950u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x107954: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x107954u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x107958: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x107958u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x10795c: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x10795cu;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x107960: 0x7019c874  psllh       $t9, $t9, 1
    ctx->pc = 0x107960u;
    SET_GPR_VEC(ctx, 25, _mm_slli_epi16(GPR_VEC(ctx, 25), 1));
    // 0x107964: 0x240c0001  addiu       $t4, $zero, 0x1
    ctx->pc = 0x107964u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x107968: 0x78a80000  lq          $t0, 0x0($a1)
    ctx->pc = 0x107968u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x10796c: 0x78c90000  lq          $t1, 0x0($a2)
    ctx->pc = 0x10796cu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x107970: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x107970u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x107974: 0x712856e8  qfsrv       $t2, $t1, $t0
    ctx->pc = 0x107974u;
    SET_GPR_VEC(ctx, 10, PS2_QFSRV(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x107978: 0x71097ee8  qfsrv       $t7, $t0, $t1
    ctx->pc = 0x107978u;
    SET_GPR_VEC(ctx, 15, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 9), ctx->sa & 0x7F));
    // 0x10797c: 0x700a4688  pextlb      $t0, $zero, $t2
    ctx->pc = 0x10797cu;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x107980: 0x700a4ea8  pextub      $t1, $zero, $t2
    ctx->pc = 0x107980u;
    SET_GPR_VEC(ctx, 9, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x107984: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x107984u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x107988: 0x5980000  mtsab       $t4, 0x0
    ctx->pc = 0x107988u;
    ctx->sa = ((GPR_U32(ctx, 12) ^ (uint32_t)0) & 0xF) << 3;
    // 0x10798c: 0x71ea7ee8  qfsrv       $t7, $t7, $t2
    ctx->pc = 0x10798cu;
    SET_GPR_VEC(ctx, 15, PS2_QFSRV(GPR_VEC(ctx, 15), GPR_VEC(ctx, 10), ctx->sa & 0x7F));
    // 0x107990: 0x700f5688  pextlb      $t2, $zero, $t7
    ctx->pc = 0x107990u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 15)));
    // 0x107994: 0x700f7ea8  pextub      $t7, $zero, $t7
    ctx->pc = 0x107994u;
    SET_GPR_VEC(ctx, 15, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 15)));
    // 0x107998: 0x710a4108  paddh       $t0, $t0, $t2
    ctx->pc = 0x107998u;
    SET_GPR_VEC(ctx, 8, PS2_PADDH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 10)));
    // 0x10799c: 0x10e00028  beqz        $a3, . + 4 + (0x28 << 2)
    ctx->pc = 0x10799Cu;
    {
        const bool branch_taken_0x10799c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1079A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10799Cu;
            // 0x1079a0: 0x712f4908  paddh       $t1, $t1, $t7 (Delay Slot)
        SET_GPR_VEC(ctx, 9, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 15)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10799c) {
            ctx->pc = 0x107A40u;
            goto label_107a40;
        }
    }
    ctx->pc = 0x1079A4u;
label_1079a4:
    // 0x1079a4: 0xb82821  addu        $a1, $a1, $t8
    ctx->pc = 0x1079a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 24)));
    // 0x1079a8: 0xd83021  addu        $a2, $a2, $t8
    ctx->pc = 0x1079a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 24)));
    // 0x1079ac: 0x78aa0000  lq          $t2, 0x0($a1)
    ctx->pc = 0x1079acu;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1079b0: 0x78cf0000  lq          $t7, 0x0($a2)
    ctx->pc = 0x1079b0u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1079b4: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x1079b4u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x1079b8: 0x71ea16e8  qfsrv       $v0, $t7, $t2
    ctx->pc = 0x1079b8u;
    SET_GPR_VEC(ctx, 2, PS2_QFSRV(GPR_VEC(ctx, 15), GPR_VEC(ctx, 10), ctx->sa & 0x7F));
    // 0x1079bc: 0x714f1ee8  qfsrv       $v1, $t2, $t7
    ctx->pc = 0x1079bcu;
    SET_GPR_VEC(ctx, 3, PS2_QFSRV(GPR_VEC(ctx, 10), GPR_VEC(ctx, 15), ctx->sa & 0x7F));
    // 0x1079c0: 0x70025688  pextlb      $t2, $zero, $v0
    ctx->pc = 0x1079c0u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x1079c4: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x1079c4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x1079c8: 0x70027ea8  pextub      $t7, $zero, $v0
    ctx->pc = 0x1079c8u;
    SET_GPR_VEC(ctx, 15, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x1079cc: 0x5980000  mtsab       $t4, 0x0
    ctx->pc = 0x1079ccu;
    ctx->sa = ((GPR_U32(ctx, 12) ^ (uint32_t)0) & 0xF) << 3;
    // 0x1079d0: 0x70621ee8  qfsrv       $v1, $v1, $v0
    ctx->pc = 0x1079d0u;
    SET_GPR_VEC(ctx, 3, PS2_QFSRV(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2), ctx->sa & 0x7F));
    // 0x1079d4: 0x70031688  pextlb      $v0, $zero, $v1
    ctx->pc = 0x1079d4u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x1079d8: 0x70031ea8  pextub      $v1, $zero, $v1
    ctx->pc = 0x1079d8u;
    SET_GPR_VEC(ctx, 3, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x1079dc: 0x71425108  paddh       $t2, $t2, $v0
    ctx->pc = 0x1079dcu;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 2)));
    // 0x1079e0: 0x71e37908  paddh       $t7, $t7, $v1
    ctx->pc = 0x1079e0u;
    SET_GPR_VEC(ctx, 15, PS2_PADDH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 3)));
    // 0x1079e4: 0x710a1108  paddh       $v0, $t0, $t2
    ctx->pc = 0x1079e4u;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 10)));
    // 0x1079e8: 0x712f1908  paddh       $v1, $t1, $t7
    ctx->pc = 0x1079e8u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 15)));
    // 0x1079ec: 0x714044a9  por         $t0, $t2, $zero
    ctx->pc = 0x1079ecu;
    SET_GPR_VEC(ctx, 8, PS2_POR(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x1079f0: 0x71e04ca9  por         $t1, $t7, $zero
    ctx->pc = 0x1079f0u;
    SET_GPR_VEC(ctx, 9, PS2_POR(GPR_VEC(ctx, 15), GPR_VEC(ctx, 0)));
    // 0x1079f4: 0x70591108  paddh       $v0, $v0, $t9
    ctx->pc = 0x1079f4u;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 25)));
    // 0x1079f8: 0x70791908  paddh       $v1, $v1, $t9
    ctx->pc = 0x1079f8u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 25)));
    // 0x1079fc: 0x700210b6  psrlh       $v0, $v0, 2
    ctx->pc = 0x1079fcu;
    SET_GPR_VEC(ctx, 2, _mm_srli_epi16(GPR_VEC(ctx, 2), 2));
    // 0x107a00: 0x700318b6  psrlh       $v1, $v1, 2
    ctx->pc = 0x107a00u;
    SET_GPR_VEC(ctx, 3, _mm_srli_epi16(GPR_VEC(ctx, 3), 2));
    // 0x107a04: 0x79ca0000  lq          $t2, 0x0($t6)
    ctx->pc = 0x107a04u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x107a08: 0x79cf0010  lq          $t7, 0x10($t6)
    ctx->pc = 0x107a08u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 14), 16)));
    // 0x107a0c: 0x704a1108  paddh       $v0, $v0, $t2
    ctx->pc = 0x107a0cu;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 10)));
    // 0x107a10: 0x706f1908  paddh       $v1, $v1, $t7
    ctx->pc = 0x107a10u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 15)));
    // 0x107a14: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x107a14u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x107a18: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x107a18u;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x107a1c: 0x70595108  paddh       $t2, $v0, $t9
    ctx->pc = 0x107a1cu;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 25)));
    // 0x107a20: 0x700a1076  psrlh       $v0, $t2, 1
    ctx->pc = 0x107a20u;
    SET_GPR_VEC(ctx, 2, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x107a24: 0x70795108  paddh       $t2, $v1, $t9
    ctx->pc = 0x107a24u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 25)));
    // 0x107a28: 0x700a1876  psrlh       $v1, $t2, 1
    ctx->pc = 0x107a28u;
    SET_GPR_VEC(ctx, 3, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x107a2c: 0x7dc20000  sq          $v0, 0x0($t6)
    ctx->pc = 0x107a2cu;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 2));
    // 0x107a30: 0x185040  sll         $t2, $t8, 1
    ctx->pc = 0x107a30u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 24), 1));
    // 0x107a34: 0x7dc30010  sq          $v1, 0x10($t6)
    ctx->pc = 0x107a34u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 16), GPR_VEC(ctx, 3));
    // 0x107a38: 0x1ce0ffda  bgtz        $a3, . + 4 + (-0x26 << 2)
    ctx->pc = 0x107A38u;
    {
        const bool branch_taken_0x107a38 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x107A3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107A38u;
            // 0x107a3c: 0x1ca7021  addu        $t6, $t6, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107a38) {
            ctx->pc = 0x1079A4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1079a4;
        }
    }
    ctx->pc = 0x107A40u;
label_107a40:
    // 0x107a40: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x107a40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x107a44: 0x24c60080  addiu       $a2, $a2, 0x80
    ctx->pc = 0x107a44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x107a48: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x107a48u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x107a4c: 0x1675024  and         $t2, $t3, $a3
    ctx->pc = 0x107a4cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & GPR_U64(ctx, 7));
    // 0x107a50: 0x1540ffd4  bnez        $t2, . + 4 + (-0x2C << 2)
    ctx->pc = 0x107A50u;
    {
        const bool branch_taken_0x107a50 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x107A54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107A50u;
            // 0x107a54: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107a50) {
            ctx->pc = 0x1079A4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1079a4;
        }
    }
    ctx->pc = 0x107A58u;
    // 0x107a58: 0x3e00008  jr          $ra
    ctx->pc = 0x107A58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x107A60u;
    // 0x107a60: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x107a60u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x107a64: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x107a64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x107a68: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x107a68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x107a6c: 0x8c8c0010  lw          $t4, 0x10($a0)
    ctx->pc = 0x107a6cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x107a70: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x107a70u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x107a74: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x107a74u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x107a78: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x107a78u;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x107a7c: 0x7019c874  psllh       $t9, $t9, 1
    ctx->pc = 0x107a7cu;
    SET_GPR_VEC(ctx, 25, _mm_slli_epi16(GPR_VEC(ctx, 25), 1));
    // 0x107a80: 0x24180001  addiu       $t8, $zero, 0x1
    ctx->pc = 0x107a80u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x107a84: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x107a84u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_107a88:
    // 0x107a88: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x107a88u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x107a8c: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x107a8cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x107a90: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x107a90u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x107a94: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x107a94u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x107a98: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x107a98u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x107a9c: 0x710846e8  qfsrv       $t0, $t0, $t0
    ctx->pc = 0x107a9cu;
    SET_GPR_VEC(ctx, 8, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x107aa0: 0x70084e88  pextlb      $t1, $zero, $t0
    ctx->pc = 0x107aa0u;
    SET_GPR_VEC(ctx, 9, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
    // 0x107aa4: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x107aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x107aa8: 0x356b8000  ori         $t3, $t3, 0x8000
    ctx->pc = 0x107aa8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)32768);
    // 0x107aac: 0x7180000  mtsab       $t8, 0x0
    ctx->pc = 0x107aacu;
    ctx->sa = ((GPR_U32(ctx, 24) ^ (uint32_t)0) & 0xF) << 3;
    // 0x107ab0: 0x700856e8  qfsrv       $t2, $zero, $t0
    ctx->pc = 0x107ab0u;
    SET_GPR_VEC(ctx, 10, PS2_QFSRV(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x107ab4: 0x700a4688  pextlb      $t0, $zero, $t2
    ctx->pc = 0x107ab4u;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x107ab8: 0x10e0001c  beqz        $a3, . + 4 + (0x1C << 2)
    ctx->pc = 0x107AB8u;
    {
        const bool branch_taken_0x107ab8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x107ABCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107AB8u;
            // 0x107abc: 0x71287908  paddh       $t7, $t1, $t0 (Delay Slot)
        SET_GPR_VEC(ctx, 15, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107ab8) {
            ctx->pc = 0x107B2Cu;
            goto label_107b2c;
        }
    }
    ctx->pc = 0x107AC0u;
label_107ac0:
    // 0x107ac0: 0xcc3021  addu        $a2, $a2, $t4
    ctx->pc = 0x107ac0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x107ac4: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x107ac4u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x107ac8: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x107ac8u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x107acc: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x107accu;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x107ad0: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x107ad0u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x107ad4: 0x710846e8  qfsrv       $t0, $t0, $t0
    ctx->pc = 0x107ad4u;
    SET_GPR_VEC(ctx, 8, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x107ad8: 0x70084e88  pextlb      $t1, $zero, $t0
    ctx->pc = 0x107ad8u;
    SET_GPR_VEC(ctx, 9, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
    // 0x107adc: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x107adcu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x107ae0: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x107ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x107ae4: 0x7180000  mtsab       $t8, 0x0
    ctx->pc = 0x107ae4u;
    ctx->sa = ((GPR_U32(ctx, 24) ^ (uint32_t)0) & 0xF) << 3;
    // 0x107ae8: 0x700856e8  qfsrv       $t2, $zero, $t0
    ctx->pc = 0x107ae8u;
    SET_GPR_VEC(ctx, 10, PS2_QFSRV(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x107aec: 0x700a4688  pextlb      $t0, $zero, $t2
    ctx->pc = 0x107aecu;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x107af0: 0x71285108  paddh       $t2, $t1, $t0
    ctx->pc = 0x107af0u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x107af4: 0x714f4908  paddh       $t1, $t2, $t7
    ctx->pc = 0x107af4u;
    SET_GPR_VEC(ctx, 9, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 15)));
    // 0x107af8: 0x71407ca9  por         $t7, $t2, $zero
    ctx->pc = 0x107af8u;
    SET_GPR_VEC(ctx, 15, PS2_POR(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x107afc: 0x71395108  paddh       $t2, $t1, $t9
    ctx->pc = 0x107afcu;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 25)));
    // 0x107b00: 0x700a50b6  psrlh       $t2, $t2, 2
    ctx->pc = 0x107b00u;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 2));
    // 0x107b04: 0x79c80000  lq          $t0, 0x0($t6)
    ctx->pc = 0x107b04u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x107b08: 0x71485108  paddh       $t2, $t2, $t0
    ctx->pc = 0x107b08u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 8)));
    // 0x107b0c: 0x71404988  pcgth       $t1, $t2, $zero
    ctx->pc = 0x107b0cu;
    SET_GPR_VEC(ctx, 9, PS2_PCGTH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x107b10: 0x70094bf6  psrlh       $t1, $t1, 15
    ctx->pc = 0x107b10u;
    SET_GPR_VEC(ctx, 9, _mm_srli_epi16(GPR_VEC(ctx, 9), 15));
    // 0x107b14: 0x71495108  paddh       $t2, $t2, $t1
    ctx->pc = 0x107b14u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 9)));
    // 0x107b18: 0xc4040  sll         $t0, $t4, 1
    ctx->pc = 0x107b18u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
    // 0x107b1c: 0x700a5076  psrlh       $t2, $t2, 1
    ctx->pc = 0x107b1cu;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x107b20: 0x7dca0000  sq          $t2, 0x0($t6)
    ctx->pc = 0x107b20u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 10));
    // 0x107b24: 0x1ce0ffe6  bgtz        $a3, . + 4 + (-0x1A << 2)
    ctx->pc = 0x107B24u;
    {
        const bool branch_taken_0x107b24 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x107B28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107B24u;
            // 0x107b28: 0x1c87021  addu        $t6, $t6, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107b24) {
            ctx->pc = 0x107AC0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_107ac0;
        }
    }
    ctx->pc = 0x107B2Cu;
label_107b2c:
    // 0x107b2c: 0x700b53f7  psrah       $t2, $t3, 15
    ctx->pc = 0x107b2cu;
    SET_GPR_VEC(ctx, 10, _mm_srai_epi16(GPR_VEC(ctx, 11), 15));
    // 0x107b30: 0x24a50140  addiu       $a1, $a1, 0x140
    ctx->pc = 0x107b30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 320));
    // 0x107b34: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x107b34u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x107b38: 0x24c60140  addiu       $a2, $a2, 0x140
    ctx->pc = 0x107b38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 320));
    // 0x107b3c: 0x1475024  and         $t2, $t2, $a3
    ctx->pc = 0x107b3cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 7));
    // 0x107b40: 0x1540ffdf  bnez        $t2, . + 4 + (-0x21 << 2)
    ctx->pc = 0x107B40u;
    {
        const bool branch_taken_0x107b40 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x107B44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107B40u;
            // 0x107b44: 0x316b7fff  andi        $t3, $t3, 0x7FFF (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)32767);
        ctx->in_delay_slot = false;
        if (branch_taken_0x107b40) {
            ctx->pc = 0x107AC0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_107ac0;
        }
    }
    ctx->pc = 0x107B48u;
    // 0x107b48: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x107b48u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x107b4c: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x107b4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x107b50: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x107b50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x107b54: 0x25ce0080  addiu       $t6, $t6, 0x80
    ctx->pc = 0x107b54u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 128));
    // 0x107b58: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x107b58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x107b5c: 0x24c60040  addiu       $a2, $a2, 0x40
    ctx->pc = 0x107b5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x107b60: 0x316a0001  andi        $t2, $t3, 0x1
    ctx->pc = 0x107b60u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)1);
    // 0x107b64: 0x1540ffc8  bnez        $t2, . + 4 + (-0x38 << 2)
    ctx->pc = 0x107B64u;
    {
        const bool branch_taken_0x107b64 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x107B68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107B64u;
            // 0x107b68: 0x316bfffe  andi        $t3, $t3, 0xFFFE (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65534);
        ctx->in_delay_slot = false;
        if (branch_taken_0x107b64) {
            ctx->pc = 0x107A88u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_107a88;
        }
    }
    ctx->pc = 0x107B6Cu;
    // 0x107b6c: 0x3e00008  jr          $ra
    ctx->pc = 0x107B6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x107B74u;
    // 0x107b74: 0x0  nop
    ctx->pc = 0x107b74u;
    // NOP
}
