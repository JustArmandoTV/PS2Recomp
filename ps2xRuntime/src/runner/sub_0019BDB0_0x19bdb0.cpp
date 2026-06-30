#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019BDB0
// Address: 0x19bdb0 - 0x19bf08
void sub_0019BDB0_0x19bdb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019BDB0_0x19bdb0");
#endif

    switch (ctx->pc) {
        case 0x19bdd4u: goto label_19bdd4;
        case 0x19bde4u: goto label_19bde4;
        case 0x19bdf8u: goto label_19bdf8;
        case 0x19be2cu: goto label_19be2c;
        case 0x19be38u: goto label_19be38;
        case 0x19be40u: goto label_19be40;
        case 0x19be48u: goto label_19be48;
        case 0x19be78u: goto label_19be78;
        case 0x19be80u: goto label_19be80;
        case 0x19be88u: goto label_19be88;
        case 0x19be90u: goto label_19be90;
        case 0x19be9cu: goto label_19be9c;
        case 0x19bea8u: goto label_19bea8;
        case 0x19beb4u: goto label_19beb4;
        case 0x19bebcu: goto label_19bebc;
        case 0x19bec4u: goto label_19bec4;
        case 0x19bed0u: goto label_19bed0;
        case 0x19bedcu: goto label_19bedc;
        default: break;
    }

    ctx->pc = 0x19bdb0u;

    // 0x19bdb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19bdb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19bdb4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19bdb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19bdb8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19bdb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bdbc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x19bdbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x19bdc0: 0x261104f8  addiu       $s1, $s0, 0x4F8
    ctx->pc = 0x19bdc0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 1272));
    // 0x19bdc4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x19bdc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x19bdc8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x19bdc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x19bdcc: 0xc066c68  jal         func_19B1A0
    ctx->pc = 0x19BDCCu;
    SET_GPR_U32(ctx, 31, 0x19BDD4u);
    ctx->pc = 0x19BDD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19BDCCu;
            // 0x19bdd0: 0x2612051c  addiu       $s2, $s0, 0x51C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 1308));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B1A0u;
    if (runtime->hasFunction(0x19B1A0u)) {
        auto targetFn = runtime->lookupFunction(0x19B1A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BDD4u; }
        if (ctx->pc != 0x19BDD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019B1A0_0x19b1a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BDD4u; }
        if (ctx->pc != 0x19BDD4u) { return; }
    }
    ctx->pc = 0x19BDD4u;
label_19bdd4:
    // 0x19bdd4: 0xae000590  sw          $zero, 0x590($s0)
    ctx->pc = 0x19bdd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1424), GPR_U32(ctx, 0));
    // 0x19bdd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19bdd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bddc: 0xc068236  jal         func_1A08D8
    ctx->pc = 0x19BDDCu;
    SET_GPR_U32(ctx, 31, 0x19BDE4u);
    ctx->pc = 0x19BDE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19BDDCu;
            // 0x19bde0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A08D8u;
    if (runtime->hasFunction(0x1A08D8u)) {
        auto targetFn = runtime->lookupFunction(0x1A08D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BDE4u; }
        if (ctx->pc != 0x19BDE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A08D8_0x1a08d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BDE4u; }
        if (ctx->pc != 0x19BDE4u) { return; }
    }
    ctx->pc = 0x19BDE4u;
label_19bde4:
    // 0x19bde4: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x19bde4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x19bde8: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x19BDE8u;
    {
        const bool branch_taken_0x19bde8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19BDECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19BDE8u;
            // 0x19bdec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bde8) {
            ctx->pc = 0x19BE80u;
            goto label_19be80;
        }
    }
    ctx->pc = 0x19BDF0u;
    // 0x19bdf0: 0xc06620a  jal         func_198828
    ctx->pc = 0x19BDF0u;
    SET_GPR_U32(ctx, 31, 0x19BDF8u);
    ctx->pc = 0x198828u;
    if (runtime->hasFunction(0x198828u)) {
        auto targetFn = runtime->lookupFunction(0x198828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BDF8u; }
        if (ctx->pc != 0x19BDF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00198828_0x198828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BDF8u; }
        if (ctx->pc != 0x19BDF8u) { return; }
    }
    ctx->pc = 0x19BDF8u;
label_19bdf8:
    // 0x19bdf8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x19BDF8u;
    {
        const bool branch_taken_0x19bdf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19BDFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19BDF8u;
            // 0x19bdfc: 0xdfbf0018  ld          $ra, 0x18($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bdf8) {
            ctx->pc = 0x19BE20u;
            goto label_19be20;
        }
    }
    ctx->pc = 0x19BE00u;
    // 0x19be00: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x19be00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x19be04: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19be04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19be08: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x19be08u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19be0c: 0x248493c8  addiu       $a0, $a0, -0x6C38
    ctx->pc = 0x19be0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939592));
    // 0x19be10: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x19be10u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19be14: 0x80686c6  j           func_1A1B18
    ctx->pc = 0x19BE14u;
    ctx->pc = 0x19BE18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19BE14u;
            // 0x19be18: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1B18u;
    if (runtime->hasFunction(0x1A1B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A1B18u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A1B18_0x1a1b18(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x19BE1Cu;
    // 0x19be1c: 0x0  nop
    ctx->pc = 0x19be1cu;
    // NOP
label_19be20:
    // 0x19be20: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19be20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19be24: 0xc06857c  jal         func_1A15F0
    ctx->pc = 0x19BE24u;
    SET_GPR_U32(ctx, 31, 0x19BE2Cu);
    ctx->pc = 0x19BE28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19BE24u;
            // 0x19be28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A15F0u;
    if (runtime->hasFunction(0x1A15F0u)) {
        auto targetFn = runtime->lookupFunction(0x1A15F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BE2Cu; }
        if (ctx->pc != 0x19BE2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A15F0_0x1a15f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BE2Cu; }
        if (ctx->pc != 0x19BE2Cu) { return; }
    }
    ctx->pc = 0x19BE2Cu;
label_19be2c:
    // 0x19be2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19be2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19be30: 0xc06857c  jal         func_1A15F0
    ctx->pc = 0x19BE30u;
    SET_GPR_U32(ctx, 31, 0x19BE38u);
    ctx->pc = 0x19BE34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19BE30u;
            // 0x19be34: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A15F0u;
    if (runtime->hasFunction(0x1A15F0u)) {
        auto targetFn = runtime->lookupFunction(0x1A15F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BE38u; }
        if (ctx->pc != 0x19BE38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A15F0_0x1a15f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BE38u; }
        if (ctx->pc != 0x19BE38u) { return; }
    }
    ctx->pc = 0x19BE38u;
label_19be38:
    // 0x19be38: 0xc067d46  jal         func_19F518
    ctx->pc = 0x19BE38u;
    SET_GPR_U32(ctx, 31, 0x19BE40u);
    ctx->pc = 0x19BE3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19BE38u;
            // 0x19be3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19F518u;
    if (runtime->hasFunction(0x19F518u)) {
        auto targetFn = runtime->lookupFunction(0x19F518u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BE40u; }
        if (ctx->pc != 0x19BE40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F518_0x19f518(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BE40u; }
        if (ctx->pc != 0x19BE40u) { return; }
    }
    ctx->pc = 0x19BE40u;
label_19be40:
    // 0x19be40: 0xc067d26  jal         func_19F498
    ctx->pc = 0x19BE40u;
    SET_GPR_U32(ctx, 31, 0x19BE48u);
    ctx->pc = 0x19BE44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19BE40u;
            // 0x19be44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19F498u;
    if (runtime->hasFunction(0x19F498u)) {
        auto targetFn = runtime->lookupFunction(0x19F498u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BE48u; }
        if (ctx->pc != 0x19BE48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F498_0x19f498(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BE48u; }
        if (ctx->pc != 0x19BE48u) { return; }
    }
    ctx->pc = 0x19BE48u;
label_19be48:
    // 0x19be48: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x19BE48u;
    {
        const bool branch_taken_0x19be48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19BE4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19BE48u;
            // 0x19be4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19be48) {
            ctx->pc = 0x19BE70u;
            goto label_19be70;
        }
    }
    ctx->pc = 0x19BE50u;
    // 0x19be50: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x19be50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x19be54: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19be54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19be58: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x19be58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19be5c: 0x248493f0  addiu       $a0, $a0, -0x6C10
    ctx->pc = 0x19be5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939632));
    // 0x19be60: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x19be60u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19be64: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x19be64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19be68: 0x80686c6  j           func_1A1B18
    ctx->pc = 0x19BE68u;
    ctx->pc = 0x19BE6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19BE68u;
            // 0x19be6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1B18u;
    if (runtime->hasFunction(0x1A1B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A1B18u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A1B18_0x1a1b18(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x19BE70u;
label_19be70:
    // 0x19be70: 0xc067d3e  jal         func_19F4F8
    ctx->pc = 0x19BE70u;
    SET_GPR_U32(ctx, 31, 0x19BE78u);
    ctx->pc = 0x19F4F8u;
    if (runtime->hasFunction(0x19F4F8u)) {
        auto targetFn = runtime->lookupFunction(0x19F4F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BE78u; }
        if (ctx->pc != 0x19BE78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F4F8_0x19f4f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BE78u; }
        if (ctx->pc != 0x19BE78u) { return; }
    }
    ctx->pc = 0x19BE78u;
label_19be78:
    // 0x19be78: 0xc0669e4  jal         func_19A790
    ctx->pc = 0x19BE78u;
    SET_GPR_U32(ctx, 31, 0x19BE80u);
    ctx->pc = 0x19BE7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19BE78u;
            // 0x19be7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19A790u;
    if (runtime->hasFunction(0x19A790u)) {
        auto targetFn = runtime->lookupFunction(0x19A790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BE80u; }
        if (ctx->pc != 0x19BE80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019A790_0x19a790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BE80u; }
        if (ctx->pc != 0x19BE80u) { return; }
    }
    ctx->pc = 0x19BE80u;
label_19be80:
    // 0x19be80: 0xc066fc2  jal         func_19BF08
    ctx->pc = 0x19BE80u;
    SET_GPR_U32(ctx, 31, 0x19BE88u);
    ctx->pc = 0x19BE84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19BE80u;
            // 0x19be84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19BF08u;
    if (runtime->hasFunction(0x19BF08u)) {
        auto targetFn = runtime->lookupFunction(0x19BF08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BE88u; }
        if (ctx->pc != 0x19BE88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019BF08_0x19bf08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BE88u; }
        if (ctx->pc != 0x19BE88u) { return; }
    }
    ctx->pc = 0x19BE88u;
label_19be88:
    // 0x19be88: 0xc066efc  jal         func_19BBF0
    ctx->pc = 0x19BE88u;
    SET_GPR_U32(ctx, 31, 0x19BE90u);
    ctx->pc = 0x19BE8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19BE88u;
            // 0x19be8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19BBF0u;
    if (runtime->hasFunction(0x19BBF0u)) {
        auto targetFn = runtime->lookupFunction(0x19BBF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BE90u; }
        if (ctx->pc != 0x19BE90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019BBF0_0x19bbf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BE90u; }
        if (ctx->pc != 0x19BE90u) { return; }
    }
    ctx->pc = 0x19BE90u;
label_19be90:
    // 0x19be90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19be90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19be94: 0xc0670f8  jal         func_19C3E0
    ctx->pc = 0x19BE94u;
    SET_GPR_U32(ctx, 31, 0x19BE9Cu);
    ctx->pc = 0x19BE98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19BE94u;
            // 0x19be98: 0x82050082  lb          $a1, 0x82($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 130)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19C3E0u;
    if (runtime->hasFunction(0x19C3E0u)) {
        auto targetFn = runtime->lookupFunction(0x19C3E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BE9Cu; }
        if (ctx->pc != 0x19BE9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019C3E0_0x19c3e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BE9Cu; }
        if (ctx->pc != 0x19BE9Cu) { return; }
    }
    ctx->pc = 0x19BE9Cu;
label_19be9c:
    // 0x19be9c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19be9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bea0: 0xc0684d0  jal         func_1A1340
    ctx->pc = 0x19BEA0u;
    SET_GPR_U32(ctx, 31, 0x19BEA8u);
    ctx->pc = 0x19BEA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19BEA0u;
            // 0x19bea4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1340u;
    if (runtime->hasFunction(0x1A1340u)) {
        auto targetFn = runtime->lookupFunction(0x1A1340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BEA8u; }
        if (ctx->pc != 0x19BEA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1340_0x1a1340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BEA8u; }
        if (ctx->pc != 0x19BEA8u) { return; }
    }
    ctx->pc = 0x19BEA8u;
label_19bea8:
    // 0x19bea8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19bea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19beac: 0xc0684d0  jal         func_1A1340
    ctx->pc = 0x19BEACu;
    SET_GPR_U32(ctx, 31, 0x19BEB4u);
    ctx->pc = 0x19BEB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19BEACu;
            // 0x19beb0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1340u;
    if (runtime->hasFunction(0x1A1340u)) {
        auto targetFn = runtime->lookupFunction(0x1A1340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BEB4u; }
        if (ctx->pc != 0x19BEB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1340_0x1a1340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BEB4u; }
        if (ctx->pc != 0x19BEB4u) { return; }
    }
    ctx->pc = 0x19BEB4u;
label_19beb4:
    // 0x19beb4: 0xc068472  jal         func_1A11C8
    ctx->pc = 0x19BEB4u;
    SET_GPR_U32(ctx, 31, 0x19BEBCu);
    ctx->pc = 0x19BEB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19BEB4u;
            // 0x19beb8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A11C8u;
    if (runtime->hasFunction(0x1A11C8u)) {
        auto targetFn = runtime->lookupFunction(0x1A11C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BEBCu; }
        if (ctx->pc != 0x19BEBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A11C8_0x1a11c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BEBCu; }
        if (ctx->pc != 0x19BEBCu) { return; }
    }
    ctx->pc = 0x19BEBCu;
label_19bebc:
    // 0x19bebc: 0xc068472  jal         func_1A11C8
    ctx->pc = 0x19BEBCu;
    SET_GPR_U32(ctx, 31, 0x19BEC4u);
    ctx->pc = 0x19BEC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19BEBCu;
            // 0x19bec0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A11C8u;
    if (runtime->hasFunction(0x1A11C8u)) {
        auto targetFn = runtime->lookupFunction(0x1A11C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BEC4u; }
        if (ctx->pc != 0x19BEC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A11C8_0x1a11c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BEC4u; }
        if (ctx->pc != 0x19BEC4u) { return; }
    }
    ctx->pc = 0x19BEC4u;
label_19bec4:
    // 0x19bec4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19bec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bec8: 0xc0673c8  jal         func_19CF20
    ctx->pc = 0x19BEC8u;
    SET_GPR_U32(ctx, 31, 0x19BED0u);
    ctx->pc = 0x19BECCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19BEC8u;
            // 0x19becc: 0x8e05007c  lw          $a1, 0x7C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19CF20u;
    if (runtime->hasFunction(0x19CF20u)) {
        auto targetFn = runtime->lookupFunction(0x19CF20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BED0u; }
        if (ctx->pc != 0x19BED0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019CF20_0x19cf20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BED0u; }
        if (ctx->pc != 0x19BED0u) { return; }
    }
    ctx->pc = 0x19BED0u;
label_19bed0:
    // 0x19bed0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19bed0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bed4: 0xc0673ea  jal         func_19CFA8
    ctx->pc = 0x19BED4u;
    SET_GPR_U32(ctx, 31, 0x19BEDCu);
    ctx->pc = 0x19BED8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19BED4u;
            // 0x19bed8: 0x8e050078  lw          $a1, 0x78($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19CFA8u;
    if (runtime->hasFunction(0x19CFA8u)) {
        auto targetFn = runtime->lookupFunction(0x19CFA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BEDCu; }
        if (ctx->pc != 0x19BEDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019CFA8_0x19cfa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BEDCu; }
        if (ctx->pc != 0x19BEDCu) { return; }
    }
    ctx->pc = 0x19BEDCu;
label_19bedc:
    // 0x19bedc: 0xae000094  sw          $zero, 0x94($s0)
    ctx->pc = 0x19bedcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 0));
    // 0x19bee0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19bee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19bee4: 0xae000550  sw          $zero, 0x550($s0)
    ctx->pc = 0x19bee4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1360), GPR_U32(ctx, 0));
    // 0x19bee8: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x19bee8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x19beec: 0xa2000081  sb          $zero, 0x81($s0)
    ctx->pc = 0x19beecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 129), (uint8_t)GPR_U32(ctx, 0));
    // 0x19bef0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x19bef0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19bef4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19bef4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19bef8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x19bef8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19befc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x19befcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19bf00: 0x3e00008  jr          $ra
    ctx->pc = 0x19BF00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19BF04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19BF00u;
            // 0x19bf04: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19BF08u;
}
