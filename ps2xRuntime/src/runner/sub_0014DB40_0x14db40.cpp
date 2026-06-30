#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0014DB40
// Address: 0x14db40 - 0x14dbb0
void sub_0014DB40_0x14db40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014DB40_0x14db40");
#endif

    switch (ctx->pc) {
        case 0x14db50u: goto label_14db50;
        default: break;
    }

    ctx->pc = 0x14db40u;

    // 0x14db40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14db40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14db44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14db44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14db48: 0xc04c530  jal         func_1314C0
    ctx->pc = 0x14DB48u;
    SET_GPR_U32(ctx, 31, 0x14DB50u);
    ctx->pc = 0x14DB4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14DB48u;
            // 0x14db4c: 0xc48c000c  lwc1        $f12, 0xC($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1314C0u;
    if (runtime->hasFunction(0x1314C0u)) {
        auto targetFn = runtime->lookupFunction(0x1314C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14DB50u; }
        if (ctx->pc != 0x14DB50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001314C0_0x1314c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14DB50u; }
        if (ctx->pc != 0x14DB50u) { return; }
    }
    ctx->pc = 0x14DB50u;
label_14db50:
    // 0x14db50: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x14db50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x14db54: 0x50430010  beql        $v0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x14DB54u;
    {
        const bool branch_taken_0x14db54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x14db54) {
            ctx->pc = 0x14DB58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14DB54u;
            // 0x14db58: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14DB98u;
            goto label_14db98;
        }
    }
    ctx->pc = 0x14DB5Cu;
    // 0x14db5c: 0x24030022  addiu       $v1, $zero, 0x22
    ctx->pc = 0x14db5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x14db60: 0x1043000c  beq         $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x14DB60u;
    {
        const bool branch_taken_0x14db60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x14db60) {
            ctx->pc = 0x14DB94u;
            goto label_14db94;
        }
    }
    ctx->pc = 0x14DB68u;
    // 0x14db68: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x14db68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x14db6c: 0x50430006  beql        $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x14DB6Cu;
    {
        const bool branch_taken_0x14db6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x14db6c) {
            ctx->pc = 0x14DB70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14DB6Cu;
            // 0x14db70: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14DB88u;
            goto label_14db88;
        }
    }
    ctx->pc = 0x14DB74u;
    // 0x14db74: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x14db74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x14db78: 0x5043000a  beql        $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x14DB78u;
    {
        const bool branch_taken_0x14db78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x14db78) {
            ctx->pc = 0x14DB7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14DB78u;
            // 0x14db7c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14DBA4u;
            goto label_14dba4;
        }
    }
    ctx->pc = 0x14DB80u;
    // 0x14db80: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x14DB80u;
    {
        const bool branch_taken_0x14db80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DB84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14DB80u;
            // 0x14db84: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14db80) {
            ctx->pc = 0x14DBA4u;
            goto label_14dba4;
        }
    }
    ctx->pc = 0x14DB88u;
label_14db88:
    // 0x14db88: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14db88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x14db8c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x14DB8Cu;
    {
        const bool branch_taken_0x14db8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DB90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14DB8Cu;
            // 0x14db90: 0xac4357f8  sw          $v1, 0x57F8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 22520), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14db8c) {
            ctx->pc = 0x14DBA0u;
            goto label_14dba0;
        }
    }
    ctx->pc = 0x14DB94u;
label_14db94:
    // 0x14db94: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x14db94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14db98:
    // 0x14db98: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14db98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x14db9c: 0xac4357f0  sw          $v1, 0x57F0($v0)
    ctx->pc = 0x14db9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22512), GPR_U32(ctx, 3));
label_14dba0:
    // 0x14dba0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14dba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14dba4:
    // 0x14dba4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14dba4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14dba8: 0x3e00008  jr          $ra
    ctx->pc = 0x14DBA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14DBACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14DBA8u;
            // 0x14dbac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14DBB0u;
}
