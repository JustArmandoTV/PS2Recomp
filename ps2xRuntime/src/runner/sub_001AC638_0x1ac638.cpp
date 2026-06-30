#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001AC638
// Address: 0x1ac638 - 0x1ac6e0
void sub_001AC638_0x1ac638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AC638_0x1ac638");
#endif

    switch (ctx->pc) {
        case 0x1ac684u: goto label_1ac684;
        case 0x1ac6b8u: goto label_1ac6b8;
        default: break;
    }

    ctx->pc = 0x1ac638u;

    // 0x1ac638: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ac638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ac63c: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x1ac63cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
    // 0x1ac640: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1ac640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1ac644: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ac644u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac648: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1ac648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1ac64c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1ac64cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1ac650: 0x2442a8f8  addiu       $v0, $v0, -0x5708
    ctx->pc = 0x1ac650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945016));
    // 0x1ac654: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1ac654u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ac658: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x1ac658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1ac65c: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AC65Cu;
    {
        const bool branch_taken_0x1ac65c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AC660u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC65Cu;
            // 0x1ac660: 0x26110d88  addiu       $s1, $s0, 0xD88 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 3464));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac65c) {
            ctx->pc = 0x1AC678u;
            goto label_1ac678;
        }
    }
    ctx->pc = 0x1AC664u;
    // 0x1ac664: 0x3402ac44  ori         $v0, $zero, 0xAC44
    ctx->pc = 0x1ac664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)44100);
    // 0x1ac668: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1ac668u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1ac66c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1AC66Cu;
    {
        const bool branch_taken_0x1ac66c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC670u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC66Cu;
            // 0x1ac670: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac66c) {
            ctx->pc = 0x1AC698u;
            goto label_1ac698;
        }
    }
    ctx->pc = 0x1AC674u;
    // 0x1ac674: 0x0  nop
    ctx->pc = 0x1ac674u;
    // NOP
label_1ac678:
    // 0x1ac678: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1ac678u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac67c: 0xc069a94  jal         func_1A6A50
    ctx->pc = 0x1AC67Cu;
    SET_GPR_U32(ctx, 31, 0x1AC684u);
    ctx->pc = 0x1AC680u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC67Cu;
            // 0x1ac680: 0x27a60004  addiu       $a2, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A6A50u;
    if (runtime->hasFunction(0x1A6A50u)) {
        auto targetFn = runtime->lookupFunction(0x1A6A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC684u; }
        if (ctx->pc != 0x1AC684u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A6A50_0x1a6a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC684u; }
        if (ctx->pc != 0x1AC684u) { return; }
    }
    ctx->pc = 0x1AC684u;
label_1ac684:
    // 0x1ac684: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1AC684u;
    {
        const bool branch_taken_0x1ac684 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AC688u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC684u;
            // 0x1ac688: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac684) {
            ctx->pc = 0x1AC69Cu;
            goto label_1ac69c;
        }
    }
    ctx->pc = 0x1AC68Cu;
    // 0x1ac68c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1AC68Cu;
    {
        const bool branch_taken_0x1ac68c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC690u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC68Cu;
            // 0x1ac690: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac68c) {
            ctx->pc = 0x1AC6C8u;
            goto label_1ac6c8;
        }
    }
    ctx->pc = 0x1AC694u;
    // 0x1ac694: 0x0  nop
    ctx->pc = 0x1ac694u;
    // NOP
label_1ac698:
    // 0x1ac698: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1ac698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1ac69c:
    // 0x1ac69c: 0x8e2201f0  lw          $v0, 0x1F0($s1)
    ctx->pc = 0x1ac69cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 496)));
    // 0x1ac6a0: 0x8e050dec  lw          $a1, 0xDEC($s0)
    ctx->pc = 0x1ac6a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3564)));
    // 0x1ac6a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ac6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ac6a8: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x1ac6a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1ac6ac: 0xae2201f0  sw          $v0, 0x1F0($s1)
    ctx->pc = 0x1ac6acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 496), GPR_U32(ctx, 2));
    // 0x1ac6b0: 0xc065a72  jal         func_1969C8
    ctx->pc = 0x1AC6B0u;
    SET_GPR_U32(ctx, 31, 0x1AC6B8u);
    ctx->pc = 0x1AC6B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC6B0u;
            // 0x1ac6b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1969C8u;
    if (runtime->hasFunction(0x1969C8u)) {
        auto targetFn = runtime->lookupFunction(0x1969C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC6B8u; }
        if (ctx->pc != 0x1AC6B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001969C8_0x1969c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC6B8u; }
        if (ctx->pc != 0x1AC6B8u) { return; }
    }
    ctx->pc = 0x1AC6B8u;
label_1ac6b8:
    // 0x1ac6b8: 0x8e230164  lw          $v1, 0x164($s1)
    ctx->pc = 0x1ac6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 356)));
    // 0x1ac6bc: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1ac6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ac6c0: 0x28440000  slti        $a0, $v0, 0x0
    ctx->pc = 0x1ac6c0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1ac6c4: 0x4100b  movn        $v0, $zero, $a0
    ctx->pc = 0x1ac6c4u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_1ac6c8:
    // 0x1ac6c8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1ac6c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ac6cc: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1ac6ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ac6d0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ac6d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ac6d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1AC6D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AC6D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC6D4u;
            // 0x1ac6d8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AC6DCu;
    // 0x1ac6dc: 0x0  nop
    ctx->pc = 0x1ac6dcu;
    // NOP
}
