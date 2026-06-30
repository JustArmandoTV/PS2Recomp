#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00331180
// Address: 0x331180 - 0x331280
void sub_00331180_0x331180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00331180_0x331180");
#endif

    switch (ctx->pc) {
        case 0x3311b0u: goto label_3311b0;
        case 0x3311e4u: goto label_3311e4;
        default: break;
    }

    ctx->pc = 0x331180u;

    // 0x331180: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x331180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x331184: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x331184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x331188: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x331188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x33118c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x33118cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x331190: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x331190u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331194: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x331194u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x331198: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x331198u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33119c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x33119cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3311a0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3311a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3311a4: 0x3c1100af  lui         $s1, 0xAF
    ctx->pc = 0x3311a4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)175 << 16));
    // 0x3311a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3311a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3311ac: 0x26310e80  addiu       $s1, $s1, 0xE80
    ctx->pc = 0x3311acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 3712));
label_3311b0:
    // 0x3311b0: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x3311b0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3311b4: 0x8e020da0  lw          $v0, 0xDA0($s0)
    ctx->pc = 0x3311b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3488)));
    // 0x3311b8: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x3311b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x3311bc: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x3311BCu;
    {
        const bool branch_taken_0x3311bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3311bc) {
            ctx->pc = 0x331210u;
            goto label_331210;
        }
    }
    ctx->pc = 0x3311C4u;
    // 0x3311c4: 0x8e030d78  lw          $v1, 0xD78($s0)
    ctx->pc = 0x3311c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3448)));
    // 0x3311c8: 0x8e82078c  lw          $v0, 0x78C($s4)
    ctx->pc = 0x3311c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1932)));
    // 0x3311cc: 0x8c63003c  lw          $v1, 0x3C($v1)
    ctx->pc = 0x3311ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x3311d0: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x3311d0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3311d4: 0x10200016  beqz        $at, . + 4 + (0x16 << 2)
    ctx->pc = 0x3311D4u;
    {
        const bool branch_taken_0x3311d4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3311d4) {
            ctx->pc = 0x331230u;
            goto label_331230;
        }
    }
    ctx->pc = 0x3311DCu;
    // 0x3311dc: 0xc07634c  jal         func_1D8D30
    ctx->pc = 0x3311DCu;
    SET_GPR_U32(ctx, 31, 0x3311E4u);
    ctx->pc = 0x3311E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3311DCu;
            // 0x3311e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D8D30u;
    if (runtime->hasFunction(0x1D8D30u)) {
        auto targetFn = runtime->lookupFunction(0x1D8D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3311E4u; }
        if (ctx->pc != 0x3311E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D8D30_0x1d8d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3311E4u; }
        if (ctx->pc != 0x3311E4u) { return; }
    }
    ctx->pc = 0x3311E4u;
label_3311e4:
    // 0x3311e4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x3311E4u;
    {
        const bool branch_taken_0x3311e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3311e4) {
            ctx->pc = 0x331230u;
            goto label_331230;
        }
    }
    ctx->pc = 0x3311ECu;
    // 0x3311ec: 0x8e030d98  lw          $v1, 0xD98($s0)
    ctx->pc = 0x3311ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3480)));
    // 0x3311f0: 0x8e820780  lw          $v0, 0x780($s4)
    ctx->pc = 0x3311f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1920)));
    // 0x3311f4: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x3311f4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3311f8: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x3311F8u;
    {
        const bool branch_taken_0x3311f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3311f8) {
            ctx->pc = 0x331230u;
            goto label_331230;
        }
    }
    ctx->pc = 0x331200u;
    // 0x331200: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x331200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x331204: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x331204u;
    {
        const bool branch_taken_0x331204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x331208u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x331204u;
            // 0x331208: 0x305200ff  andi        $s2, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x331204) {
            ctx->pc = 0x331230u;
            goto label_331230;
        }
    }
    ctx->pc = 0x33120Cu;
    // 0x33120c: 0x0  nop
    ctx->pc = 0x33120cu;
    // NOP
label_331210:
    // 0x331210: 0x8e030d98  lw          $v1, 0xD98($s0)
    ctx->pc = 0x331210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3480)));
    // 0x331214: 0x8e820780  lw          $v0, 0x780($s4)
    ctx->pc = 0x331214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1920)));
    // 0x331218: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x331218u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x33121c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x33121Cu;
    {
        const bool branch_taken_0x33121c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x33121c) {
            ctx->pc = 0x331230u;
            goto label_331230;
        }
    }
    ctx->pc = 0x331224u;
    // 0x331224: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x331224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x331228: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x331228u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x33122c: 0x0  nop
    ctx->pc = 0x33122cu;
    // NOP
label_331230:
    // 0x331230: 0x8e82077c  lw          $v0, 0x77C($s4)
    ctx->pc = 0x331230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1916)));
    // 0x331234: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x331234u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x331238: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x331238u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x33123c: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x33123Cu;
    {
        const bool branch_taken_0x33123c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x331240u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33123Cu;
            // 0x331240: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33123c) {
            ctx->pc = 0x3311B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3311b0;
        }
    }
    ctx->pc = 0x331244u;
    // 0x331244: 0x8e820780  lw          $v0, 0x780($s4)
    ctx->pc = 0x331244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1920)));
    // 0x331248: 0x324300ff  andi        $v1, $s2, 0xFF
    ctx->pc = 0x331248u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x33124c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x33124cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x331250: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x331250u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x331254: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x331254u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x331258: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x331258u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x33125c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x33125cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x331260: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x331260u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x331264: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x331264u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x331268: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x331268u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33126c: 0x3e00008  jr          $ra
    ctx->pc = 0x33126Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x331270u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33126Cu;
            // 0x331270: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x331274u;
    // 0x331274: 0x0  nop
    ctx->pc = 0x331274u;
    // NOP
    // 0x331278: 0x0  nop
    ctx->pc = 0x331278u;
    // NOP
    // 0x33127c: 0x0  nop
    ctx->pc = 0x33127cu;
    // NOP
}
