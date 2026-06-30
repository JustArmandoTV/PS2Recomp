#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00177978
// Address: 0x177978 - 0x177a10
void sub_00177978_0x177978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00177978_0x177978");
#endif

    switch (ctx->pc) {
        case 0x17799cu: goto label_17799c;
        case 0x1779d8u: goto label_1779d8;
        case 0x1779ecu: goto label_1779ec;
        case 0x177a00u: goto label_177a00;
        default: break;
    }

    ctx->pc = 0x177978u;

    // 0x177978: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x177978u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17797c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17797cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x177980: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x177980u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177984: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x177984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x177988: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x177988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x17798c: 0x5040001d  beql        $v0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x17798Cu;
    {
        const bool branch_taken_0x17798c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17798c) {
            ctx->pc = 0x177990u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17798Cu;
            // 0x177990: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x177A04u;
            goto label_177a04;
        }
    }
    ctx->pc = 0x177994u;
    // 0x177994: 0xc05ccc0  jal         func_173300
    ctx->pc = 0x177994u;
    SET_GPR_U32(ctx, 31, 0x17799Cu);
    ctx->pc = 0x173300u;
    if (runtime->hasFunction(0x173300u)) {
        auto targetFn = runtime->lookupFunction(0x173300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17799Cu; }
        if (ctx->pc != 0x17799Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00173300_0x173300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17799Cu; }
        if (ctx->pc != 0x17799Cu) { return; }
    }
    ctx->pc = 0x17799Cu;
label_17799c:
    // 0x17799c: 0x50400019  beql        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x17799Cu;
    {
        const bool branch_taken_0x17799c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17799c) {
            ctx->pc = 0x1779A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17799Cu;
            // 0x1779a0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x177A04u;
            goto label_177a04;
        }
    }
    ctx->pc = 0x1779A4u;
    // 0x1779a4: 0x82030002  lb          $v1, 0x2($s0)
    ctx->pc = 0x1779a4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x1779a8: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x1779a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x1779ac: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x1779ACu;
    {
        const bool branch_taken_0x1779ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1779ac) {
            ctx->pc = 0x1779B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1779ACu;
            // 0x1779b0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x177A04u;
            goto label_177a04;
        }
    }
    ctx->pc = 0x1779B4u;
    // 0x1779b4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1779b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1779b8: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x1779b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
    // 0x1779bc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1779bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1779c0: 0x8c634a90  lw          $v1, 0x4A90($v1)
    ctx->pc = 0x1779c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 19088)));
    // 0x1779c4: 0x600008  jr          $v1
    ctx->pc = 0x1779C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1779D0u: goto label_1779d0;
            case 0x1779F8u: goto label_1779f8;
            case 0x177A00u: goto label_177a00;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1779CCu;
    // 0x1779cc: 0x0  nop
    ctx->pc = 0x1779ccu;
    // NOP
label_1779d0:
    // 0x1779d0: 0xc05c2e2  jal         func_170B88
    ctx->pc = 0x1779D0u;
    SET_GPR_U32(ctx, 31, 0x1779D8u);
    ctx->pc = 0x1779D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1779D0u;
            // 0x1779d4: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170B88u;
    if (runtime->hasFunction(0x170B88u)) {
        auto targetFn = runtime->lookupFunction(0x170B88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1779D8u; }
        if (ctx->pc != 0x1779D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170B88_0x170b88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1779D8u; }
        if (ctx->pc != 0x1779D8u) { return; }
    }
    ctx->pc = 0x1779D8u;
label_1779d8:
    // 0x1779d8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1779d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1779dc: 0x54430009  bnel        $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1779DCu;
    {
        const bool branch_taken_0x1779dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1779dc) {
            ctx->pc = 0x1779E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1779DCu;
            // 0x1779e0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x177A04u;
            goto label_177a04;
        }
    }
    ctx->pc = 0x1779E4u;
    // 0x1779e4: 0xc05bbf6  jal         func_16EFD8
    ctx->pc = 0x1779E4u;
    SET_GPR_U32(ctx, 31, 0x1779ECu);
    ctx->pc = 0x1779E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1779E4u;
            // 0x1779e8: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16EFD8u;
    if (runtime->hasFunction(0x16EFD8u)) {
        auto targetFn = runtime->lookupFunction(0x16EFD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1779ECu; }
        if (ctx->pc != 0x1779ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016EFD8_0x16efd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1779ECu; }
        if (ctx->pc != 0x1779ECu) { return; }
    }
    ctx->pc = 0x1779ECu;
label_1779ec:
    // 0x1779ec: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1779ECu;
    {
        const bool branch_taken_0x1779ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1779F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1779ECu;
            // 0x1779f0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1779ec) {
            ctx->pc = 0x177A04u;
            goto label_177a04;
        }
    }
    ctx->pc = 0x1779F4u;
    // 0x1779f4: 0x0  nop
    ctx->pc = 0x1779f4u;
    // NOP
label_1779f8:
    // 0x1779f8: 0xc05bbf6  jal         func_16EFD8
    ctx->pc = 0x1779F8u;
    SET_GPR_U32(ctx, 31, 0x177A00u);
    ctx->pc = 0x1779FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1779F8u;
            // 0x1779fc: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16EFD8u;
    if (runtime->hasFunction(0x16EFD8u)) {
        auto targetFn = runtime->lookupFunction(0x16EFD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177A00u; }
        if (ctx->pc != 0x177A00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016EFD8_0x16efd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177A00u; }
        if (ctx->pc != 0x177A00u) { return; }
    }
    ctx->pc = 0x177A00u;
label_177a00:
    // 0x177a00: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x177a00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_177a04:
    // 0x177a04: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x177a04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x177a08: 0x3e00008  jr          $ra
    ctx->pc = 0x177A08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x177A0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177A08u;
            // 0x177a0c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x177A10u;
}
