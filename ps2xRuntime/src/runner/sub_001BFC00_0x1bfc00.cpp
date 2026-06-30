#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BFC00
// Address: 0x1bfc00 - 0x1bfcc0
void sub_001BFC00_0x1bfc00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BFC00_0x1bfc00");
#endif

    switch (ctx->pc) {
        case 0x1bfc10u: goto label_1bfc10;
        case 0x1bfc58u: goto label_1bfc58;
        case 0x1bfc6cu: goto label_1bfc6c;
        case 0x1bfc7cu: goto label_1bfc7c;
        case 0x1bfc90u: goto label_1bfc90;
        case 0x1bfc9cu: goto label_1bfc9c;
        case 0x1bfcacu: goto label_1bfcac;
        default: break;
    }

    ctx->pc = 0x1bfc00u;

    // 0x1bfc00: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x1bfc00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
    // 0x1bfc04: 0x3e00008  jr          $ra
    ctx->pc = 0x1BFC04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BFC08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFC04u;
            // 0x1bfc08: 0x2442b750  addiu       $v0, $v0, -0x48B0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948688));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BFC0Cu;
    // 0x1bfc0c: 0x0  nop
    ctx->pc = 0x1bfc0cu;
    // NOP
label_1bfc10:
    // 0x1bfc10: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1bfc10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1bfc14: 0x2442a4b0  addiu       $v0, $v0, -0x5B50
    ctx->pc = 0x1bfc14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943920));
    // 0x1bfc18: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1bfc18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bfc1c: 0x18600002  blez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BFC1Cu;
    {
        const bool branch_taken_0x1bfc1c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1BFC20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFC1Cu;
            // 0x1bfc20: 0x2464ffff  addiu       $a0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfc1c) {
            ctx->pc = 0x1BFC28u;
            goto label_1bfc28;
        }
    }
    ctx->pc = 0x1BFC24u;
    // 0x1bfc24: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1bfc24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_1bfc28:
    // 0x1bfc28: 0x3e00008  jr          $ra
    ctx->pc = 0x1BFC28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BFC30u;
    // 0x1bfc30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1bfc30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1bfc34: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x1bfc34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x1bfc38: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1bfc38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1bfc3c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1bfc3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfc40: 0x24a5b788  addiu       $a1, $a1, -0x4878
    ctx->pc = 0x1bfc40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948744));
    // 0x1bfc44: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x1bfc44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1bfc48: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1bfc48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1bfc4c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1bfc4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1bfc50: 0xc04b156  jal         func_12C558
    ctx->pc = 0x1BFC50u;
    SET_GPR_U32(ctx, 31, 0x1BFC58u);
    ctx->pc = 0x1BFC54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFC50u;
            // 0x1bfc54: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C558u;
    if (runtime->hasFunction(0x12C558u)) {
        auto targetFn = runtime->lookupFunction(0x12C558u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFC58u; }
        if (ctx->pc != 0x1BFC58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012C558_0x12c558(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFC58u; }
        if (ctx->pc != 0x1BFC58u) { return; }
    }
    ctx->pc = 0x1BFC58u;
label_1bfc58:
    // 0x1bfc58: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x1bfc58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x1bfc5c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1bfc5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfc60: 0x24060013  addiu       $a2, $zero, 0x13
    ctx->pc = 0x1bfc60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x1bfc64: 0xc04ae62  jal         func_12B988
    ctx->pc = 0x1BFC64u;
    SET_GPR_U32(ctx, 31, 0x1BFC6Cu);
    ctx->pc = 0x1BFC68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFC64u;
            // 0x1bfc68: 0x24a5b798  addiu       $a1, $a1, -0x4868 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948760));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B988u;
    if (runtime->hasFunction(0x12B988u)) {
        auto targetFn = runtime->lookupFunction(0x12B988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFC6Cu; }
        if (ctx->pc != 0x1BFC6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012B988_0x12b988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFC6Cu; }
        if (ctx->pc != 0x1BFC6Cu) { return; }
    }
    ctx->pc = 0x1BFC6Cu;
label_1bfc6c:
    // 0x1bfc6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bfc6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfc70: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1bfc70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfc74: 0xc04af4a  jal         func_12BD28
    ctx->pc = 0x1BFC74u;
    SET_GPR_U32(ctx, 31, 0x1BFC7Cu);
    ctx->pc = 0x1BFC78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFC74u;
            // 0x1bfc78: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12BD28u;
    if (runtime->hasFunction(0x12BD28u)) {
        auto targetFn = runtime->lookupFunction(0x12BD28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFC7Cu; }
        if (ctx->pc != 0x1BFC7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012BD28_0x12bd28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFC7Cu; }
        if (ctx->pc != 0x1BFC7Cu) { return; }
    }
    ctx->pc = 0x1BFC7Cu;
label_1bfc7c:
    // 0x1bfc7c: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x1bfc7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x1bfc80: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1bfc80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1bfc84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bfc84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfc88: 0xc04b156  jal         func_12C558
    ctx->pc = 0x1BFC88u;
    SET_GPR_U32(ctx, 31, 0x1BFC90u);
    ctx->pc = 0x1BFC8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFC88u;
            // 0x1bfc8c: 0x24a5b7a0  addiu       $a1, $a1, -0x4860 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948768));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C558u;
    if (runtime->hasFunction(0x12C558u)) {
        auto targetFn = runtime->lookupFunction(0x12C558u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFC90u; }
        if (ctx->pc != 0x1BFC90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012C558_0x12c558(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFC90u; }
        if (ctx->pc != 0x1BFC90u) { return; }
    }
    ctx->pc = 0x1BFC90u;
label_1bfc90:
    // 0x1bfc90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bfc90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfc94: 0xc06ff30  jal         func_1BFCC0
    ctx->pc = 0x1BFC94u;
    SET_GPR_U32(ctx, 31, 0x1BFC9Cu);
    ctx->pc = 0x1BFC98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFC94u;
            // 0x1bfc98: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BFCC0u;
    if (runtime->hasFunction(0x1BFCC0u)) {
        auto targetFn = runtime->lookupFunction(0x1BFCC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFC9Cu; }
        if (ctx->pc != 0x1BFC9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BFCC0_0x1bfcc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFC9Cu; }
        if (ctx->pc != 0x1BFC9Cu) { return; }
    }
    ctx->pc = 0x1BFC9Cu;
label_1bfc9c:
    // 0x1bfc9c: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x1bfc9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x1bfca0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bfca0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfca4: 0xc04af4a  jal         func_12BD28
    ctx->pc = 0x1BFCA4u;
    SET_GPR_U32(ctx, 31, 0x1BFCACu);
    ctx->pc = 0x1BFCA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFCA4u;
            // 0x1bfca8: 0x24a5b7a8  addiu       $a1, $a1, -0x4858 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948776));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12BD28u;
    if (runtime->hasFunction(0x12BD28u)) {
        auto targetFn = runtime->lookupFunction(0x12BD28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFCACu; }
        if (ctx->pc != 0x1BFCACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012BD28_0x12bd28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFCACu; }
        if (ctx->pc != 0x1BFCACu) { return; }
    }
    ctx->pc = 0x1BFCACu;
label_1bfcac:
    // 0x1bfcac: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1bfcacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bfcb0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1bfcb0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1bfcb4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1bfcb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bfcb8: 0x3e00008  jr          $ra
    ctx->pc = 0x1BFCB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BFCBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFCB8u;
            // 0x1bfcbc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BFCC0u;
}
