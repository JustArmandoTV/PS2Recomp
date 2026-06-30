#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00211EB8
// Address: 0x211eb8 - 0x211f08
void sub_00211EB8_0x211eb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00211EB8_0x211eb8");
#endif

    switch (ctx->pc) {
        case 0x211ed0u: goto label_211ed0;
        default: break;
    }

    ctx->pc = 0x211eb8u;

    // 0x211eb8: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x211eb8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x211ebc: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x211EBCu;
    {
        const bool branch_taken_0x211ebc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x211EC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211EBCu;
            // 0x211ec0: 0x24a50090  addiu       $a1, $a1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211ebc) {
            ctx->pc = 0x211EFCu;
            goto label_211efc;
        }
    }
    ctx->pc = 0x211EC4u;
    // 0x211ec4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x211ec4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211ec8: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x211ec8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x211ecc: 0x0  nop
    ctx->pc = 0x211eccu;
    // NOP
label_211ed0:
    // 0x211ed0: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x211ed0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x211ed4: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x211ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x211ed8: 0x621007  srav        $v0, $v0, $v1
    ctx->pc = 0x211ed8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x211edc: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x211edcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x211ee0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x211EE0u;
    {
        const bool branch_taken_0x211ee0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x211EE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211EE0u;
            // 0x211ee4: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211ee0) {
            ctx->pc = 0x211EF0u;
            goto label_211ef0;
        }
    }
    ctx->pc = 0x211EE8u;
    // 0x211ee8: 0xf8a1ffa0  sqc2        $vf1, -0x60($a1)
    ctx->pc = 0x211ee8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 4294967200), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x211eec: 0xf8a10000  sqc2        $vf1, 0x0($a1)
    ctx->pc = 0x211eecu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_211ef0:
    // 0x211ef0: 0x28c20003  slti        $v0, $a2, 0x3
    ctx->pc = 0x211ef0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x211ef4: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x211EF4u;
    {
        const bool branch_taken_0x211ef4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x211EF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211EF4u;
            // 0x211ef8: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211ef4) {
            ctx->pc = 0x211ED0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_211ed0;
        }
    }
    ctx->pc = 0x211EFCu;
label_211efc:
    // 0x211efc: 0x3e00008  jr          $ra
    ctx->pc = 0x211EFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x211F04u;
    // 0x211f04: 0x0  nop
    ctx->pc = 0x211f04u;
    // NOP
}
