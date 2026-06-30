#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004ADAF0
// Address: 0x4adaf0 - 0x4adb20
void sub_004ADAF0_0x4adaf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ADAF0_0x4adaf0");
#endif

    ctx->pc = 0x4adaf0u;

    // 0x4adaf0: 0xac800084  sw          $zero, 0x84($a0)
    ctx->pc = 0x4adaf0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 0));
    // 0x4adaf4: 0xac800080  sw          $zero, 0x80($a0)
    ctx->pc = 0x4adaf4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 0));
    // 0x4adaf8: 0xac800090  sw          $zero, 0x90($a0)
    ctx->pc = 0x4adaf8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 144), GPR_U32(ctx, 0));
    // 0x4adafc: 0xac80008c  sw          $zero, 0x8C($a0)
    ctx->pc = 0x4adafcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 140), GPR_U32(ctx, 0));
    // 0x4adb00: 0xac800094  sw          $zero, 0x94($a0)
    ctx->pc = 0x4adb00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 148), GPR_U32(ctx, 0));
    // 0x4adb04: 0xac8000a4  sw          $zero, 0xA4($a0)
    ctx->pc = 0x4adb04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 164), GPR_U32(ctx, 0));
    // 0x4adb08: 0xac8000a8  sw          $zero, 0xA8($a0)
    ctx->pc = 0x4adb08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 168), GPR_U32(ctx, 0));
    // 0x4adb0c: 0x3e00008  jr          $ra
    ctx->pc = 0x4ADB0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4ADB10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4ADB0Cu;
            // 0x4adb10: 0xa08000ac  sb          $zero, 0xAC($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 172), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4ADB14u;
    // 0x4adb14: 0x0  nop
    ctx->pc = 0x4adb14u;
    // NOP
    // 0x4adb18: 0x0  nop
    ctx->pc = 0x4adb18u;
    // NOP
    // 0x4adb1c: 0x0  nop
    ctx->pc = 0x4adb1cu;
    // NOP
}
