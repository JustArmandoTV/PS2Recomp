#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00176208
// Address: 0x176208 - 0x176270
void sub_00176208_0x176208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00176208_0x176208");
#endif

    switch (ctx->pc) {
        case 0x176244u: goto label_176244;
        case 0x176254u: goto label_176254;
        default: break;
    }

    ctx->pc = 0x176208u;

    // 0x176208: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x176208u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17620c: 0x3c064000  lui         $a2, 0x4000
    ctx->pc = 0x17620cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16384 << 16));
    // 0x176210: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x176210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x176214: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x176214u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x176218: 0x805d89c  j           func_176270
    ctx->pc = 0x176218u;
    ctx->pc = 0x17621Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176218u;
            // 0x17621c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x176270u;
    if (runtime->hasFunction(0x176270u)) {
        auto targetFn = runtime->lookupFunction(0x176270u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00176270_0x176270(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x176220u;
    // 0x176220: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x176220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x176224: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x176224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x176228: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x176228u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17622c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17622cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x176230: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x176230u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176234: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x176234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x176238: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x176238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x17623c: 0xc0599de  jal         func_166778
    ctx->pc = 0x17623Cu;
    SET_GPR_U32(ctx, 31, 0x176244u);
    ctx->pc = 0x176240u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17623Cu;
            // 0x176240: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166778u;
    if (runtime->hasFunction(0x166778u)) {
        auto targetFn = runtime->lookupFunction(0x166778u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176244u; }
        if (ctx->pc != 0x176244u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166778_0x166778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176244u; }
        if (ctx->pc != 0x176244u) { return; }
    }
    ctx->pc = 0x176244u;
label_176244:
    // 0x176244: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x176244u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176248: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x176248u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17624c: 0xc05d89c  jal         func_176270
    ctx->pc = 0x17624Cu;
    SET_GPR_U32(ctx, 31, 0x176254u);
    ctx->pc = 0x176250u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17624Cu;
            // 0x176250: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x176270u;
    if (runtime->hasFunction(0x176270u)) {
        auto targetFn = runtime->lookupFunction(0x176270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176254u; }
        if (ctx->pc != 0x176254u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00176270_0x176270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176254u; }
        if (ctx->pc != 0x176254u) { return; }
    }
    ctx->pc = 0x176254u;
label_176254:
    // 0x176254: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x176254u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x176258: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x176258u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17625c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x17625cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x176260: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x176260u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x176264: 0x80599e0  j           func_166780
    ctx->pc = 0x176264u;
    ctx->pc = 0x176268u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176264u;
            // 0x176268: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166780u;
    if (runtime->hasFunction(0x166780u)) {
        auto targetFn = runtime->lookupFunction(0x166780u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00166780_0x166780(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x17626Cu;
    // 0x17626c: 0x0  nop
    ctx->pc = 0x17626cu;
    // NOP
}
