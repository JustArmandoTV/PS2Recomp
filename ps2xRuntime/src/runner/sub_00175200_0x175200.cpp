#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00175200
// Address: 0x175200 - 0x175260
void sub_00175200_0x175200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00175200_0x175200");
#endif

    switch (ctx->pc) {
        case 0x175218u: goto label_175218;
        case 0x175244u: goto label_175244;
        case 0x17524cu: goto label_17524c;
        default: break;
    }

    ctx->pc = 0x175200u;

    // 0x175200: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x175200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x175204: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x175204u;
    {
        const bool branch_taken_0x175204 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x175208u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x175204u;
            // 0x175208: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175204) {
            ctx->pc = 0x175220u;
            goto label_175220;
        }
    }
    ctx->pc = 0x17520Cu;
    // 0x17520c: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x17520cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x175210: 0xc059f4e  jal         func_167D38
    ctx->pc = 0x175210u;
    SET_GPR_U32(ctx, 31, 0x175218u);
    ctx->pc = 0x175214u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175210u;
            // 0x175214: 0x24844798  addiu       $a0, $a0, 0x4798 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18328));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167D38u;
    if (runtime->hasFunction(0x167D38u)) {
        auto targetFn = runtime->lookupFunction(0x167D38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175218u; }
        if (ctx->pc != 0x175218u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00167D38_0x167d38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175218u; }
        if (ctx->pc != 0x175218u) { return; }
    }
    ctx->pc = 0x175218u;
label_175218:
    // 0x175218: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x175218u;
    {
        const bool branch_taken_0x175218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17521Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x175218u;
            // 0x17521c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175218) {
            ctx->pc = 0x175224u;
            goto label_175224;
        }
    }
    ctx->pc = 0x175220u;
label_175220:
    // 0x175220: 0x80820072  lb          $v0, 0x72($a0)
    ctx->pc = 0x175220u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 114)));
label_175224:
    // 0x175224: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x175224u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x175228: 0x3e00008  jr          $ra
    ctx->pc = 0x175228u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17522Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x175228u;
            // 0x17522c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x175230u;
    // 0x175230: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x175230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x175234: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x175234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x175238: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x175238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x17523c: 0xc0599de  jal         func_166778
    ctx->pc = 0x17523Cu;
    SET_GPR_U32(ctx, 31, 0x175244u);
    ctx->pc = 0x175240u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17523Cu;
            // 0x175240: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166778u;
    if (runtime->hasFunction(0x166778u)) {
        auto targetFn = runtime->lookupFunction(0x166778u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175244u; }
        if (ctx->pc != 0x175244u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166778_0x166778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175244u; }
        if (ctx->pc != 0x175244u) { return; }
    }
    ctx->pc = 0x175244u;
label_175244:
    // 0x175244: 0xc05d498  jal         func_175260
    ctx->pc = 0x175244u;
    SET_GPR_U32(ctx, 31, 0x17524Cu);
    ctx->pc = 0x175248u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175244u;
            // 0x175248: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175260u;
    if (runtime->hasFunction(0x175260u)) {
        auto targetFn = runtime->lookupFunction(0x175260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17524Cu; }
        if (ctx->pc != 0x17524Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175260_0x175260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17524Cu; }
        if (ctx->pc != 0x17524Cu) { return; }
    }
    ctx->pc = 0x17524Cu;
label_17524c:
    // 0x17524c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17524cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x175250: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x175250u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x175254: 0x80599e0  j           func_166780
    ctx->pc = 0x175254u;
    ctx->pc = 0x175258u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175254u;
            // 0x175258: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166780u;
    if (runtime->hasFunction(0x166780u)) {
        auto targetFn = runtime->lookupFunction(0x166780u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00166780_0x166780(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x17525Cu;
    // 0x17525c: 0x0  nop
    ctx->pc = 0x17525cu;
    // NOP
}
