#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003F9010
// Address: 0x3f9010 - 0x3f9070
void sub_003F9010_0x3f9010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F9010_0x3f9010");
#endif

    ctx->pc = 0x3f9010u;

    // 0x3f9010: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x3f9010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3f9014: 0xa3082b  sltu        $at, $a1, $v1
    ctx->pc = 0x3f9014u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3f9018: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
    ctx->pc = 0x3F9018u;
    {
        const bool branch_taken_0x3f9018 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f9018) {
            ctx->pc = 0x3F9068u;
            goto label_3f9068;
        }
    }
    ctx->pc = 0x3F9020u;
    // 0x3f9020: 0x8c680000  lw          $t0, 0x0($v1)
    ctx->pc = 0x3f9020u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3f9024: 0x653023  subu        $a2, $v1, $a1
    ctx->pc = 0x3f9024u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3f9028: 0x8c670004  lw          $a3, 0x4($v1)
    ctx->pc = 0x3f9028u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x3f902c: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x3f902cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x3f9030: 0xaca80000  sw          $t0, 0x0($a1)
    ctx->pc = 0x3f9030u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 8));
    // 0x3f9034: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x3f9034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x3f9038: 0xaca70004  sw          $a3, 0x4($a1)
    ctx->pc = 0x3f9038u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 7));
    // 0x3f903c: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x3f903cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x3f9040: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x3f9040u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x3f9044: 0xad050004  sw          $a1, 0x4($t0)
    ctx->pc = 0x3f9044u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 5));
    // 0x3f9048: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x3f9048u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
    // 0x3f904c: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x3f904cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
    // 0x3f9050: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x3f9050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x3f9054: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x3f9054u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x3f9058: 0xac830018  sw          $v1, 0x18($a0)
    ctx->pc = 0x3f9058u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
    // 0x3f905c: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x3f905cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x3f9060: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x3f9060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x3f9064: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x3f9064u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
label_3f9068:
    // 0x3f9068: 0x3e00008  jr          $ra
    ctx->pc = 0x3F9068u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3F9070u;
}
