#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00210DA0
// Address: 0x210da0 - 0x210f78
void sub_00210DA0_0x210da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00210DA0_0x210da0");
#endif

    switch (ctx->pc) {
        case 0x210de8u: goto label_210de8;
        case 0x210df0u: goto label_210df0;
        case 0x210e28u: goto label_210e28;
        case 0x210e30u: goto label_210e30;
        case 0x210f20u: goto label_210f20;
        case 0x210f44u: goto label_210f44;
        default: break;
    }

    ctx->pc = 0x210da0u;

    // 0x210da0: 0x27bdfe10  addiu       $sp, $sp, -0x1F0
    ctx->pc = 0x210da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966800));
    // 0x210da4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x210da4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x210da8: 0x7fb001e0  sq          $s0, 0x1E0($sp)
    ctx->pc = 0x210da8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), GPR_VEC(ctx, 16));
    // 0x210dac: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x210dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x210db0: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x210db0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x210db4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x210db4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210db8: 0x82800b  movn        $s0, $a0, $v0
    ctx->pc = 0x210db8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 4));
    // 0x210dbc: 0x7fb101d0  sq          $s1, 0x1D0($sp)
    ctx->pc = 0x210dbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), GPR_VEC(ctx, 17));
    // 0x210dc0: 0x7fb201c0  sq          $s2, 0x1C0($sp)
    ctx->pc = 0x210dc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 18));
    // 0x210dc4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x210dc4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210dc8: 0x7fb401a0  sq          $s4, 0x1A0($sp)
    ctx->pc = 0x210dc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 20));
    // 0x210dcc: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x210dccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210dd0: 0x7fb301b0  sq          $s3, 0x1B0($sp)
    ctx->pc = 0x210dd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 19));
    // 0x210dd4: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x210dd4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210dd8: 0xffbf0190  sd          $ra, 0x190($sp)
    ctx->pc = 0x210dd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 400), GPR_U64(ctx, 31));
    // 0x210ddc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x210ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x210de0: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x210de0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x210de4: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x210de4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_210de8:
    // 0x210de8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x210de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x210dec: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x210decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_210df0:
    // 0x210df0: 0x0  nop
    ctx->pc = 0x210df0u;
    // NOP
    // 0x210df4: 0x0  nop
    ctx->pc = 0x210df4u;
    // NOP
    // 0x210df8: 0x0  nop
    ctx->pc = 0x210df8u;
    // NOP
    // 0x210dfc: 0x0  nop
    ctx->pc = 0x210dfcu;
    // NOP
    // 0x210e00: 0x1444fffb  bne         $v0, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x210E00u;
    {
        const bool branch_taken_0x210e00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x210E04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x210E00u;
            // 0x210e04: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210e00) {
            ctx->pc = 0x210DF0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_210df0;
        }
    }
    ctx->pc = 0x210E08u;
    // 0x210e08: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x210e08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210e0c: 0x1444fff6  bne         $v0, $a0, . + 4 + (-0xA << 2)
    ctx->pc = 0x210E0Cu;
    {
        const bool branch_taken_0x210e0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x210E10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x210E0Cu;
            // 0x210e10: 0x2443ffff  addiu       $v1, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210e0c) {
            ctx->pc = 0x210DE8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_210de8;
        }
    }
    ctx->pc = 0x210E14u;
    // 0x210e14: 0x1200002f  beqz        $s0, . + 4 + (0x2F << 2)
    ctx->pc = 0x210E14u;
    {
        const bool branch_taken_0x210e14 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x210E18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x210E14u;
            // 0x210e18: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210e14) {
            ctx->pc = 0x210ED4u;
            goto label_210ed4;
        }
    }
    ctx->pc = 0x210E1Cu;
    // 0x210e1c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x210e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x210e20: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x210e20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x210e24: 0x0  nop
    ctx->pc = 0x210e24u;
    // NOP
label_210e28:
    // 0x210e28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x210e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x210e2c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x210e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_210e30:
    // 0x210e30: 0x0  nop
    ctx->pc = 0x210e30u;
    // NOP
    // 0x210e34: 0x0  nop
    ctx->pc = 0x210e34u;
    // NOP
    // 0x210e38: 0x0  nop
    ctx->pc = 0x210e38u;
    // NOP
    // 0x210e3c: 0x0  nop
    ctx->pc = 0x210e3cu;
    // NOP
    // 0x210e40: 0x1444fffb  bne         $v0, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x210E40u;
    {
        const bool branch_taken_0x210e40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x210E44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x210E40u;
            // 0x210e44: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210e40) {
            ctx->pc = 0x210E30u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_210e30;
        }
    }
    ctx->pc = 0x210E48u;
    // 0x210e48: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x210e48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210e4c: 0x1444fff6  bne         $v0, $a0, . + 4 + (-0xA << 2)
    ctx->pc = 0x210E4Cu;
    {
        const bool branch_taken_0x210e4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x210E50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x210E4Cu;
            // 0x210e50: 0x2443ffff  addiu       $v1, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210e4c) {
            ctx->pc = 0x210E28u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_210e28;
        }
    }
    ctx->pc = 0x210E54u;
    // 0x210e54: 0x240503c0  addiu       $a1, $zero, 0x3C0
    ctx->pc = 0x210e54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 960));
    // 0x210e58: 0x2051018  mult        $v0, $s0, $a1
    ctx->pc = 0x210e58u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x210e5c: 0x522021  addu        $a0, $v0, $s2
    ctx->pc = 0x210e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x210e60: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x210e60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210e64: 0x2484ff40  addiu       $a0, $a0, -0xC0
    ctx->pc = 0x210e64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967104));
    // 0x210e68: 0x24a5fdc0  addiu       $a1, $a1, -0x240
    ctx->pc = 0x210e68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966720));
    // 0x210e6c: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x210e6cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x210e70: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x210e70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x210e74: 0x78830010  lq          $v1, 0x10($a0)
    ctx->pc = 0x210e74u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x210e78: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x210e78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    // 0x210e7c: 0x78820020  lq          $v0, 0x20($a0)
    ctx->pc = 0x210e7cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x210e80: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x210e80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x210e84: 0x78830030  lq          $v1, 0x30($a0)
    ctx->pc = 0x210e84u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x210e88: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x210e88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
    // 0x210e8c: 0x78820040  lq          $v0, 0x40($a0)
    ctx->pc = 0x210e8cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x210e90: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x210e90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x210e94: 0x78830050  lq          $v1, 0x50($a0)
    ctx->pc = 0x210e94u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x210e98: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x210e98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
    // 0x210e9c: 0x78820060  lq          $v0, 0x60($a0)
    ctx->pc = 0x210e9cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x210ea0: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x210ea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    // 0x210ea4: 0x78830070  lq          $v1, 0x70($a0)
    ctx->pc = 0x210ea4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x210ea8: 0x7fa30070  sq          $v1, 0x70($sp)
    ctx->pc = 0x210ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 3));
    // 0x210eac: 0x78820080  lq          $v0, 0x80($a0)
    ctx->pc = 0x210eacu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x210eb0: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x210eb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    // 0x210eb4: 0x78830090  lq          $v1, 0x90($a0)
    ctx->pc = 0x210eb4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 144)));
    // 0x210eb8: 0x7fa30090  sq          $v1, 0x90($sp)
    ctx->pc = 0x210eb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 3));
    // 0x210ebc: 0x788200a0  lq          $v0, 0xA0($a0)
    ctx->pc = 0x210ebcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 160)));
    // 0x210ec0: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x210ec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x210ec4: 0x788300b0  lq          $v1, 0xB0($a0)
    ctx->pc = 0x210ec4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 176)));
    // 0x210ec8: 0xafa50180  sw          $a1, 0x180($sp)
    ctx->pc = 0x210ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 5));
    // 0x210ecc: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x210ECCu;
    {
        const bool branch_taken_0x210ecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210ED0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x210ECCu;
            // 0x210ed0: 0x7fa300b0  sq          $v1, 0xB0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210ecc) {
            ctx->pc = 0x210F0Cu;
            goto label_210f0c;
        }
    }
    ctx->pc = 0x210ED4u;
label_210ed4:
    // 0x210ed4: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x210ed4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x210ed8: 0xafbd0180  sw          $sp, 0x180($sp)
    ctx->pc = 0x210ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 29));
    // 0x210edc: 0xfba100b0  sqc2        $vf1, 0xB0($sp)
    ctx->pc = 0x210edcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x210ee0: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x210ee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x210ee4: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x210ee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x210ee8: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x210ee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x210eec: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x210eecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x210ef0: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x210ef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x210ef4: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x210ef4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x210ef8: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x210ef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x210efc: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x210efcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x210f00: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x210f00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x210f04: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x210f04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x210f08: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x210f08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
label_210f0c:
    // 0x210f0c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x210f0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210f10: 0xd1102a  slt         $v0, $a2, $s1
    ctx->pc = 0x210f10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x210f14: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x210F14u;
    {
        const bool branch_taken_0x210f14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x210F18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x210F14u;
            // 0x210f18: 0x241303c0  addiu       $s3, $zero, 0x3C0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 960));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210f14) {
            ctx->pc = 0x210F54u;
            goto label_210f54;
        }
    }
    ctx->pc = 0x210F1Cu;
    // 0x210f1c: 0xd31018  mult        $v0, $a2, $s3
    ctx->pc = 0x210f1cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_210f20:
    // 0x210f20: 0x24d00001  addiu       $s0, $a2, 0x1
    ctx->pc = 0x210f20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x210f24: 0x63180  sll         $a2, $a2, 6
    ctx->pc = 0x210f24u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x210f28: 0x2302023  subu        $a0, $s1, $s0
    ctx->pc = 0x210f28u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x210f2c: 0x2863021  addu        $a2, $s4, $a2
    ctx->pc = 0x210f2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 6)));
    // 0x210f30: 0x4202b  sltu        $a0, $zero, $a0
    ctx->pc = 0x210f30u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x210f34: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x210f34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210f38: 0x27a80180  addiu       $t0, $sp, 0x180
    ctx->pc = 0x210f38u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x210f3c: 0xc0843de  jal         func_210F78
    ctx->pc = 0x210F3Cu;
    SET_GPR_U32(ctx, 31, 0x210F44u);
    ctx->pc = 0x210F40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x210F3Cu;
            // 0x210f40: 0x522821  addu        $a1, $v0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x210F78u;
    if (runtime->hasFunction(0x210F78u)) {
        auto targetFn = runtime->lookupFunction(0x210F78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210F44u; }
        if (ctx->pc != 0x210F44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00210F78_0x210f78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210F44u; }
        if (ctx->pc != 0x210F44u) { return; }
    }
    ctx->pc = 0x210F44u;
label_210f44:
    // 0x210f44: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x210f44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210f48: 0xd1102a  slt         $v0, $a2, $s1
    ctx->pc = 0x210f48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x210f4c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x210F4Cu;
    {
        const bool branch_taken_0x210f4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x210F50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x210F4Cu;
            // 0x210f50: 0xd31018  mult        $v0, $a2, $s3 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x210f4c) {
            ctx->pc = 0x210F20u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_210f20;
        }
    }
    ctx->pc = 0x210F54u;
label_210f54:
    // 0x210f54: 0x7bb001e0  lq          $s0, 0x1E0($sp)
    ctx->pc = 0x210f54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x210f58: 0x7bb101d0  lq          $s1, 0x1D0($sp)
    ctx->pc = 0x210f58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x210f5c: 0x7bb201c0  lq          $s2, 0x1C0($sp)
    ctx->pc = 0x210f5cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x210f60: 0x7bb301b0  lq          $s3, 0x1B0($sp)
    ctx->pc = 0x210f60u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x210f64: 0x7bb401a0  lq          $s4, 0x1A0($sp)
    ctx->pc = 0x210f64u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x210f68: 0xdfbf0190  ld          $ra, 0x190($sp)
    ctx->pc = 0x210f68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x210f6c: 0x3e00008  jr          $ra
    ctx->pc = 0x210F6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x210F70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x210F6Cu;
            // 0x210f70: 0x27bd01f0  addiu       $sp, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x210F74u;
    // 0x210f74: 0x0  nop
    ctx->pc = 0x210f74u;
    // NOP
}
