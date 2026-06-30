#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001FE330
// Address: 0x1fe330 - 0x1fe400
void sub_001FE330_0x1fe330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FE330_0x1fe330");
#endif

    switch (ctx->pc) {
        case 0x1fe394u: goto label_1fe394;
        case 0x1fe3d0u: goto label_1fe3d0;
        default: break;
    }

    ctx->pc = 0x1fe330u;

    // 0x1fe330: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1fe330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1fe334: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1fe334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1fe338: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1fe338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1fe33c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1fe33cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1fe340: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1fe340u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe344: 0x12200028  beqz        $s1, . + 4 + (0x28 << 2)
    ctx->pc = 0x1FE344u;
    {
        const bool branch_taken_0x1fe344 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE344u;
            // 0x1fe348: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe344) {
            ctx->pc = 0x1FE3E8u;
            goto label_1fe3e8;
        }
    }
    ctx->pc = 0x1FE34Cu;
    // 0x1fe34c: 0x52200012  beql        $s1, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x1FE34Cu;
    {
        const bool branch_taken_0x1fe34c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe34c) {
            ctx->pc = 0x1FE350u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE34Cu;
            // 0x1fe350: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FE398u;
            goto label_1fe398;
        }
    }
    ctx->pc = 0x1FE354u;
    // 0x1fe354: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1fe354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1fe358: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1fe358u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1fe35c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1fe35cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1fe360: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1FE360u;
    {
        const bool branch_taken_0x1fe360 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fe360) {
            ctx->pc = 0x1FE394u;
            goto label_1fe394;
        }
    }
    ctx->pc = 0x1FE368u;
    // 0x1fe368: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1fe368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1fe36c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1fe36cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x1fe370: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x1fe370u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x1fe374: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x1fe374u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1fe378: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x1fe378u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1fe37c: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x1fe37cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
    // 0x1fe380: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x1fe380u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
    // 0x1fe384: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1fe384u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1fe388: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fe388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fe38c: 0xc0a7ab4  jal         func_29EAD0
    ctx->pc = 0x1FE38Cu;
    SET_GPR_U32(ctx, 31, 0x1FE394u);
    ctx->pc = 0x1FE390u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE38Cu;
            // 0x1fe390: 0x23100  sll         $a2, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE394u; }
        if (ctx->pc != 0x1FE394u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE394u; }
        if (ctx->pc != 0x1FE394u) { return; }
    }
    ctx->pc = 0x1FE394u;
label_1fe394:
    // 0x1fe394: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1fe394u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_1fe398:
    // 0x1fe398: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1fe398u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1fe39c: 0x58400013  blezl       $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1FE39Cu;
    {
        const bool branch_taken_0x1fe39c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1fe39c) {
            ctx->pc = 0x1FE3A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE39Cu;
            // 0x1fe3a0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FE3ECu;
            goto label_1fe3ec;
        }
    }
    ctx->pc = 0x1FE3A4u;
    // 0x1fe3a4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1fe3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x1fe3a8: 0x8c50ea40  lw          $s0, -0x15C0($v0)
    ctx->pc = 0x1fe3a8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x1fe3ac: 0x8e030088  lw          $v1, 0x88($s0)
    ctx->pc = 0x1fe3acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x1fe3b0: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x1fe3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1fe3b4: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x1fe3b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1fe3b8: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FE3B8u;
    {
        const bool branch_taken_0x1fe3b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fe3b8) {
            ctx->pc = 0x1FE3BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE3B8u;
            // 0x1fe3bc: 0x8e020088  lw          $v0, 0x88($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FE3D4u;
            goto label_1fe3d4;
        }
    }
    ctx->pc = 0x1FE3C0u;
    // 0x1fe3c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fe3c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe3c4: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1fe3c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1fe3c8: 0xc0a79ec  jal         func_29E7B0
    ctx->pc = 0x1FE3C8u;
    SET_GPR_U32(ctx, 31, 0x1FE3D0u);
    ctx->pc = 0x1FE3CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE3C8u;
            // 0x1fe3cc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29E7B0u;
    if (runtime->hasFunction(0x29E7B0u)) {
        auto targetFn = runtime->lookupFunction(0x29E7B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE3D0u; }
        if (ctx->pc != 0x1FE3D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029E7B0_0x29e7b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE3D0u; }
        if (ctx->pc != 0x1FE3D0u) { return; }
    }
    ctx->pc = 0x1FE3D0u;
label_1fe3d0:
    // 0x1fe3d0: 0x8e020088  lw          $v0, 0x88($s0)
    ctx->pc = 0x1fe3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
label_1fe3d4:
    // 0x1fe3d4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1fe3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1fe3d8: 0xae020088  sw          $v0, 0x88($s0)
    ctx->pc = 0x1fe3d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 2));
    // 0x1fe3dc: 0x8e020084  lw          $v0, 0x84($s0)
    ctx->pc = 0x1fe3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x1fe3e0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1fe3e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1fe3e4: 0xae110084  sw          $s1, 0x84($s0)
    ctx->pc = 0x1fe3e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 17));
label_1fe3e8:
    // 0x1fe3e8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1fe3e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1fe3ec:
    // 0x1fe3ec: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1fe3ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fe3f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1fe3f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fe3f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1fe3f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fe3f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1FE3F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FE3FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE3F8u;
            // 0x1fe3fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FE400u;
}
