#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001FE0C0
// Address: 0x1fe0c0 - 0x1fe180
void sub_001FE0C0_0x1fe0c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FE0C0_0x1fe0c0");
#endif

    switch (ctx->pc) {
        case 0x1fe0f4u: goto label_1fe0f4;
        case 0x1fe144u: goto label_1fe144;
        default: break;
    }

    ctx->pc = 0x1fe0c0u;

    // 0x1fe0c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1fe0c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1fe0c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1fe0c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1fe0c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1fe0c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1fe0cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1fe0ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1fe0d0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1fe0d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe0d4: 0x12200021  beqz        $s1, . + 4 + (0x21 << 2)
    ctx->pc = 0x1FE0D4u;
    {
        const bool branch_taken_0x1fe0d4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE0D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE0D4u;
            // 0x1fe0d8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe0d4) {
            ctx->pc = 0x1FE15Cu;
            goto label_1fe15c;
        }
    }
    ctx->pc = 0x1FE0DCu;
    // 0x1fe0dc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1fe0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1fe0e0: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x1fe0e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1fe0e4: 0x2442dfc0  addiu       $v0, $v0, -0x2040
    ctx->pc = 0x1fe0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959040));
    // 0x1fe0e8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1fe0e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1fe0ec: 0xc07f8cc  jal         func_1FE330
    ctx->pc = 0x1FE0ECu;
    SET_GPR_U32(ctx, 31, 0x1FE0F4u);
    ctx->pc = 0x1FE0F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE0ECu;
            // 0x1fe0f0: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FE330u;
    if (runtime->hasFunction(0x1FE330u)) {
        auto targetFn = runtime->lookupFunction(0x1FE330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE0F4u; }
        if (ctx->pc != 0x1FE0F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FE330_0x1fe330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE0F4u; }
        if (ctx->pc != 0x1FE0F4u) { return; }
    }
    ctx->pc = 0x1FE0F4u;
label_1fe0f4:
    // 0x1fe0f4: 0x52200005  beql        $s1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FE0F4u;
    {
        const bool branch_taken_0x1fe0f4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe0f4) {
            ctx->pc = 0x1FE0F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE0F4u;
            // 0x1fe0f8: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FE10Cu;
            goto label_1fe10c;
        }
    }
    ctx->pc = 0x1FE0FCu;
    // 0x1fe0fc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1fe0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1fe100: 0x2442d4e0  addiu       $v0, $v0, -0x2B20
    ctx->pc = 0x1fe100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956256));
    // 0x1fe104: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1fe104u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1fe108: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1fe108u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_1fe10c:
    // 0x1fe10c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1fe10cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1fe110: 0x58400013  blezl       $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1FE110u;
    {
        const bool branch_taken_0x1fe110 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1fe110) {
            ctx->pc = 0x1FE114u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE110u;
            // 0x1fe114: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FE160u;
            goto label_1fe160;
        }
    }
    ctx->pc = 0x1FE118u;
    // 0x1fe118: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1fe118u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x1fe11c: 0x8c50ea40  lw          $s0, -0x15C0($v0)
    ctx->pc = 0x1fe11cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x1fe120: 0x8e030088  lw          $v1, 0x88($s0)
    ctx->pc = 0x1fe120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x1fe124: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x1fe124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1fe128: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x1fe128u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1fe12c: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FE12Cu;
    {
        const bool branch_taken_0x1fe12c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fe12c) {
            ctx->pc = 0x1FE130u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE12Cu;
            // 0x1fe130: 0x8e020088  lw          $v0, 0x88($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FE148u;
            goto label_1fe148;
        }
    }
    ctx->pc = 0x1FE134u;
    // 0x1fe134: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fe134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe138: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1fe138u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1fe13c: 0xc0a79ec  jal         func_29E7B0
    ctx->pc = 0x1FE13Cu;
    SET_GPR_U32(ctx, 31, 0x1FE144u);
    ctx->pc = 0x1FE140u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE13Cu;
            // 0x1fe140: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29E7B0u;
    if (runtime->hasFunction(0x29E7B0u)) {
        auto targetFn = runtime->lookupFunction(0x29E7B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE144u; }
        if (ctx->pc != 0x1FE144u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029E7B0_0x29e7b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE144u; }
        if (ctx->pc != 0x1FE144u) { return; }
    }
    ctx->pc = 0x1FE144u;
label_1fe144:
    // 0x1fe144: 0x8e020088  lw          $v0, 0x88($s0)
    ctx->pc = 0x1fe144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
label_1fe148:
    // 0x1fe148: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1fe148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1fe14c: 0xae020088  sw          $v0, 0x88($s0)
    ctx->pc = 0x1fe14cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 2));
    // 0x1fe150: 0x8e020084  lw          $v0, 0x84($s0)
    ctx->pc = 0x1fe150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x1fe154: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1fe154u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1fe158: 0xae110084  sw          $s1, 0x84($s0)
    ctx->pc = 0x1fe158u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 17));
label_1fe15c:
    // 0x1fe15c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1fe15cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1fe160:
    // 0x1fe160: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1fe160u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fe164: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1fe164u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fe168: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1fe168u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fe16c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FE16Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FE170u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE16Cu;
            // 0x1fe170: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FE174u;
    // 0x1fe174: 0x0  nop
    ctx->pc = 0x1fe174u;
    // NOP
    // 0x1fe178: 0x0  nop
    ctx->pc = 0x1fe178u;
    // NOP
    // 0x1fe17c: 0x0  nop
    ctx->pc = 0x1fe17cu;
    // NOP
}
