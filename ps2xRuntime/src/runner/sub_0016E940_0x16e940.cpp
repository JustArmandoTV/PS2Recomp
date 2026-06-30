#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0016E940
// Address: 0x16e940 - 0x16e958
void sub_0016E940_0x16e940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016E940_0x16e940");
#endif

    ctx->pc = 0x16e940u;

    // 0x16e940: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16e940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16e944: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16e944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16e948: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16e948u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16e94c: 0x8060e42  j           func_183908
    ctx->pc = 0x16E94Cu;
    ctx->pc = 0x16E950u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16E94Cu;
            // 0x16e950: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x183908u;
    {
        auto targetFn = runtime->lookupFunction(0x183908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x16E954u;
    // 0x16e954: 0x0  nop
    ctx->pc = 0x16e954u;
    // NOP
}
