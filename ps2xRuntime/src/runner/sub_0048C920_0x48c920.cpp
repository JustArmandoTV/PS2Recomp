#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0048C920
// Address: 0x48c920 - 0x48c9b0
void sub_0048C920_0x48c920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048C920_0x48c920");
#endif

    switch (ctx->pc) {
        case 0x48c958u: goto label_48c958;
        default: break;
    }

    ctx->pc = 0x48c920u;

    // 0x48c920: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x48c920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x48c924: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x48c924u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x48c928: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x48c928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x48c92c: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x48c92cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x48c930: 0x8cc30028  lw          $v1, 0x28($a2)
    ctx->pc = 0x48c930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 40)));
    // 0x48c934: 0x8cc5002c  lw          $a1, 0x2C($a2)
    ctx->pc = 0x48c934u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 44)));
    // 0x48c938: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x48c938u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x48c93c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x48c93cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x48c940: 0xa31826  xor         $v1, $a1, $v1
    ctx->pc = 0x48c940u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 3));
    // 0x48c944: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x48c944u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x48c948: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x48c948u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x48c94c: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x48C94Cu;
    {
        const bool branch_taken_0x48c94c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x48c94c) {
            ctx->pc = 0x48C9A0u;
            goto label_48c9a0;
        }
    }
    ctx->pc = 0x48C954u;
    // 0x48c954: 0x5183c  dsll32      $v1, $a1, 0
    ctx->pc = 0x48c954u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 0));
label_48c958:
    // 0x48c958: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x48c958u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x48c95c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x48c95cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x48c960: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x48c960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x48c964: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x48C964u;
    {
        const bool branch_taken_0x48c964 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x48c964) {
            ctx->pc = 0x48C970u;
            goto label_48c970;
        }
    }
    ctx->pc = 0x48C96Cu;
    // 0x48c96c: 0xe46c0010  swc1        $f12, 0x10($v1)
    ctx->pc = 0x48c96cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
label_48c970:
    // 0x48c970: 0x5183c  dsll32      $v1, $a1, 0
    ctx->pc = 0x48c970u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 0));
    // 0x48c974: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x48c974u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x48c978: 0x8cc40028  lw          $a0, 0x28($a2)
    ctx->pc = 0x48c978u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 40)));
    // 0x48c97c: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x48c97cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x48c980: 0x8cc3002c  lw          $v1, 0x2C($a2)
    ctx->pc = 0x48c980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 44)));
    // 0x48c984: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x48c984u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x48c988: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x48c988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x48c98c: 0xa31826  xor         $v1, $a1, $v1
    ctx->pc = 0x48c98cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 3));
    // 0x48c990: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x48c990u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x48c994: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x48c994u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x48c998: 0x5460ffef  bnel        $v1, $zero, . + 4 + (-0x11 << 2)
    ctx->pc = 0x48C998u;
    {
        const bool branch_taken_0x48c998 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x48c998) {
            ctx->pc = 0x48C99Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x48C998u;
            // 0x48c99c: 0x5183c  dsll32      $v1, $a1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x48C958u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_48c958;
        }
    }
    ctx->pc = 0x48C9A0u;
label_48c9a0:
    // 0x48c9a0: 0x3e00008  jr          $ra
    ctx->pc = 0x48C9A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x48C9A8u;
    // 0x48c9a8: 0x0  nop
    ctx->pc = 0x48c9a8u;
    // NOP
    // 0x48c9ac: 0x0  nop
    ctx->pc = 0x48c9acu;
    // NOP
}
