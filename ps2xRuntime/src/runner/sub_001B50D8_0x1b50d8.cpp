#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B50D8
// Address: 0x1b50d8 - 0x1b5260
void sub_001B50D8_0x1b50d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B50D8_0x1b50d8");
#endif

    switch (ctx->pc) {
        case 0x1b50f4u: goto label_1b50f4;
        case 0x1b514cu: goto label_1b514c;
        case 0x1b51a4u: goto label_1b51a4;
        case 0x1b51d8u: goto label_1b51d8;
        case 0x1b5210u: goto label_1b5210;
        case 0x1b5244u: goto label_1b5244;
        default: break;
    }

    ctx->pc = 0x1b50d8u;

    // 0x1b50d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b50d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b50dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b50dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b50e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b50e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b50e4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b50e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b50e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b50e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b50ec: 0xc06a234  jal         func_1A88D0
    ctx->pc = 0x1B50ECu;
    SET_GPR_U32(ctx, 31, 0x1B50F4u);
    ctx->pc = 0x1B50F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B50ECu;
            // 0x1b50f0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A88D0u;
    if (runtime->hasFunction(0x1A88D0u)) {
        auto targetFn = runtime->lookupFunction(0x1A88D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B50F4u; }
        if (ctx->pc != 0x1B50F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A88D0_0x1a88d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B50F4u; }
        if (ctx->pc != 0x1B50F4u) { return; }
    }
    ctx->pc = 0x1B50F4u;
label_1b50f4:
    // 0x1b50f4: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1b50f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1b50f8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B50F8u;
    {
        const bool branch_taken_0x1b50f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B50FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B50F8u;
            // 0x1b50fc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b50f8) {
            ctx->pc = 0x1B5118u;
            goto label_1b5118;
        }
    }
    ctx->pc = 0x1B5100u;
    // 0x1b5100: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b5100u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b5104: 0x34a50151  ori         $a1, $a1, 0x151
    ctx->pc = 0x1b5104u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)337);
    // 0x1b5108: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b5108u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b510c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b510cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b5110: 0x806a1ac  j           func_1A86B0
    ctx->pc = 0x1B5110u;
    ctx->pc = 0x1B5114u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5110u;
            // 0x1b5114: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A86B0u;
    if (runtime->hasFunction(0x1A86B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A86B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A86B0_0x1a86b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B5118u;
label_1b5118:
    // 0x1b5118: 0xae113720  sw          $s1, 0x3720($s0)
    ctx->pc = 0x1b5118u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 14112), GPR_U32(ctx, 17));
    // 0x1b511c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b511cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b5120: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b5120u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b5124: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b5124u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b5128: 0x3e00008  jr          $ra
    ctx->pc = 0x1B5128u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B512Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5128u;
            // 0x1b512c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B5130u;
    // 0x1b5130: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b5130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b5134: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b5134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b5138: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b5138u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b513c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b513cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b5140: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b5140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b5144: 0xc06a234  jal         func_1A88D0
    ctx->pc = 0x1B5144u;
    SET_GPR_U32(ctx, 31, 0x1B514Cu);
    ctx->pc = 0x1B5148u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5144u;
            // 0x1b5148: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A88D0u;
    if (runtime->hasFunction(0x1A88D0u)) {
        auto targetFn = runtime->lookupFunction(0x1A88D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B514Cu; }
        if (ctx->pc != 0x1B514Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A88D0_0x1a88d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B514Cu; }
        if (ctx->pc != 0x1B514Cu) { return; }
    }
    ctx->pc = 0x1B514Cu;
label_1b514c:
    // 0x1b514c: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1b514cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1b5150: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B5150u;
    {
        const bool branch_taken_0x1b5150 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5154u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5150u;
            // 0x1b5154: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5150) {
            ctx->pc = 0x1B5170u;
            goto label_1b5170;
        }
    }
    ctx->pc = 0x1B5158u;
    // 0x1b5158: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b5158u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b515c: 0x34a50152  ori         $a1, $a1, 0x152
    ctx->pc = 0x1b515cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)338);
    // 0x1b5160: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b5160u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b5164: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b5164u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b5168: 0x806a1ac  j           func_1A86B0
    ctx->pc = 0x1B5168u;
    ctx->pc = 0x1B516Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5168u;
            // 0x1b516c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A86B0u;
    if (runtime->hasFunction(0x1A86B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A86B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A86B0_0x1a86b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B5170u;
label_1b5170:
    // 0x1b5170: 0x8e033720  lw          $v1, 0x3720($s0)
    ctx->pc = 0x1b5170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 14112)));
    // 0x1b5174: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b5174u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b5178: 0xac710dc0  sw          $s1, 0xDC0($v1)
    ctx->pc = 0x1b5178u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3520), GPR_U32(ctx, 17));
    // 0x1b517c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b517cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b5180: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b5180u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b5184: 0x3e00008  jr          $ra
    ctx->pc = 0x1B5184u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B5188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5184u;
            // 0x1b5188: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B518Cu;
    // 0x1b518c: 0x0  nop
    ctx->pc = 0x1b518cu;
    // NOP
    // 0x1b5190: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b5190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b5194: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b5194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b5198: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1b5198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1b519c: 0xc06a234  jal         func_1A88D0
    ctx->pc = 0x1B519Cu;
    SET_GPR_U32(ctx, 31, 0x1B51A4u);
    ctx->pc = 0x1B51A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B519Cu;
            // 0x1b51a0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A88D0u;
    if (runtime->hasFunction(0x1A88D0u)) {
        auto targetFn = runtime->lookupFunction(0x1A88D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B51A4u; }
        if (ctx->pc != 0x1B51A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A88D0_0x1a88d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B51A4u; }
        if (ctx->pc != 0x1B51A4u) { return; }
    }
    ctx->pc = 0x1B51A4u;
label_1b51a4:
    // 0x1b51a4: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1b51a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1b51a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b51a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b51ac: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1b51acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b51b0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B51B0u;
    {
        const bool branch_taken_0x1b51b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B51B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B51B0u;
            // 0x1b51b4: 0x34a50153  ori         $a1, $a1, 0x153 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)339);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b51b0) {
            ctx->pc = 0x1B51D0u;
            goto label_1b51d0;
        }
    }
    ctx->pc = 0x1B51B8u;
    // 0x1b51b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b51b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b51bc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b51bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b51c0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b51c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b51c4: 0x806a1ac  j           func_1A86B0
    ctx->pc = 0x1B51C4u;
    ctx->pc = 0x1B51C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B51C4u;
            // 0x1b51c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A86B0u;
    if (runtime->hasFunction(0x1A86B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A86B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A86B0_0x1a86b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B51CCu;
    // 0x1b51cc: 0x0  nop
    ctx->pc = 0x1b51ccu;
    // NOP
label_1b51d0:
    // 0x1b51d0: 0xc06d7aa  jal         func_1B5EA8
    ctx->pc = 0x1B51D0u;
    SET_GPR_U32(ctx, 31, 0x1B51D8u);
    ctx->pc = 0x1B51D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B51D0u;
            // 0x1b51d4: 0x2405002f  addiu       $a1, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5EA8u;
    if (runtime->hasFunction(0x1B5EA8u)) {
        auto targetFn = runtime->lookupFunction(0x1B5EA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B51D8u; }
        if (ctx->pc != 0x1B51D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5EA8_0x1b5ea8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B51D8u; }
        if (ctx->pc != 0x1B51D8u) { return; }
    }
    ctx->pc = 0x1B51D8u;
label_1b51d8:
    // 0x1b51d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b51d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b51dc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b51dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b51e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b51e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b51e4: 0x806c8c6  j           func_1B2318
    ctx->pc = 0x1B51E4u;
    ctx->pc = 0x1B51E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B51E4u;
            // 0x1b51e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B2318u;
    if (runtime->hasFunction(0x1B2318u)) {
        auto targetFn = runtime->lookupFunction(0x1B2318u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001B2318_0x1b2318(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B51ECu;
    // 0x1b51ec: 0x0  nop
    ctx->pc = 0x1b51ecu;
    // NOP
    // 0x1b51f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b51f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b51f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b51f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b51f8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1b51f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b51fc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b51fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b5200: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b5200u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5204: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b5204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b5208: 0xc06a234  jal         func_1A88D0
    ctx->pc = 0x1B5208u;
    SET_GPR_U32(ctx, 31, 0x1B5210u);
    ctx->pc = 0x1B520Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5208u;
            // 0x1b520c: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A88D0u;
    if (runtime->hasFunction(0x1A88D0u)) {
        auto targetFn = runtime->lookupFunction(0x1A88D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5210u; }
        if (ctx->pc != 0x1B5210u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A88D0_0x1a88d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5210u; }
        if (ctx->pc != 0x1B5210u) { return; }
    }
    ctx->pc = 0x1B5210u;
label_1b5210:
    // 0x1b5210: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1b5210u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1b5214: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B5214u;
    {
        const bool branch_taken_0x1b5214 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5218u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5214u;
            // 0x1b5218: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5214) {
            ctx->pc = 0x1B5238u;
            goto label_1b5238;
        }
    }
    ctx->pc = 0x1B521Cu;
    // 0x1b521c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b521cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b5220: 0x34a50154  ori         $a1, $a1, 0x154
    ctx->pc = 0x1b5220u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)340);
    // 0x1b5224: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b5224u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b5228: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b5228u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b522c: 0x806a1ac  j           func_1A86B0
    ctx->pc = 0x1B522Cu;
    ctx->pc = 0x1B5230u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B522Cu;
            // 0x1b5230: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A86B0u;
    if (runtime->hasFunction(0x1A86B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A86B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A86B0_0x1a86b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B5234u;
    // 0x1b5234: 0x0  nop
    ctx->pc = 0x1b5234u;
    // NOP
label_1b5238:
    // 0x1b5238: 0x8e243720  lw          $a0, 0x3720($s1)
    ctx->pc = 0x1b5238u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 14112)));
    // 0x1b523c: 0xc06d498  jal         func_1B5260
    ctx->pc = 0x1B523Cu;
    SET_GPR_U32(ctx, 31, 0x1B5244u);
    ctx->pc = 0x1B5240u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B523Cu;
            // 0x1b5240: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5260u;
    if (runtime->hasFunction(0x1B5260u)) {
        auto targetFn = runtime->lookupFunction(0x1B5260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5244u; }
        if (ctx->pc != 0x1B5244u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5260_0x1b5260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5244u; }
        if (ctx->pc != 0x1B5244u) { return; }
    }
    ctx->pc = 0x1B5244u;
label_1b5244:
    // 0x1b5244: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b5244u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5248: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b5248u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b524c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b524cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b5250: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b5250u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b5254: 0x3e00008  jr          $ra
    ctx->pc = 0x1B5254u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B5258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5254u;
            // 0x1b5258: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B525Cu;
    // 0x1b525c: 0x0  nop
    ctx->pc = 0x1b525cu;
    // NOP
}
