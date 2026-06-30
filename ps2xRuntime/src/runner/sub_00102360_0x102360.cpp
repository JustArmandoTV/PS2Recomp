#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00102360
// Address: 0x102360 - 0x1023b0
void sub_00102360_0x102360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00102360_0x102360");
#endif

    ctx->pc = 0x102360u;

    // 0x102360: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x102360u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x102364: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x102364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x102368: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x102368u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x10236c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x10236cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x102370: 0xe21026  xor         $v0, $a3, $v0
    ctx->pc = 0x102370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) ^ GPR_U64(ctx, 2));
    // 0x102374: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x102374u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
    // 0x102378: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x102378u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x10237c: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x10237cu;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x102380: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x102380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x102384: 0xc42026  xor         $a0, $a2, $a0
    ctx->pc = 0x102384u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 4));
    // 0x102388: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x102388u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x10238c: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x10238cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x102390: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x102390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x102394: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x102394u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x102398: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x102398u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x10239c: 0xe31825  or          $v1, $a3, $v1
    ctx->pc = 0x10239cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x1023a0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1023a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1023a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1023A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1023A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1023A4u;
            // 0x1023a8: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1023ACu;
    // 0x1023ac: 0x0  nop
    ctx->pc = 0x1023acu;
    // NOP
}
