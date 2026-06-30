#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0051C210
// Address: 0x51c210 - 0x51c300
void sub_0051C210_0x51c210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0051C210_0x51c210");
#endif

    switch (ctx->pc) {
        case 0x51c288u: goto label_51c288;
        case 0x51c2e0u: goto label_51c2e0;
        default: break;
    }

    ctx->pc = 0x51c210u;

    // 0x51c210: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x51c210u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x51c214: 0x24425998  addiu       $v0, $v0, 0x5998
    ctx->pc = 0x51c214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22936));
    // 0x51c218: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x51c218u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x51c21c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x51c21cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x51c220: 0xac44e3f0  sw          $a0, -0x1C10($v0)
    ctx->pc = 0x51c220u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960112), GPR_U32(ctx, 4));
    // 0x51c224: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x51c224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x51c228: 0x24425988  addiu       $v0, $v0, 0x5988
    ctx->pc = 0x51c228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22920));
    // 0x51c22c: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x51c22cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x51c230: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x51c230u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x51c234: 0x24425970  addiu       $v0, $v0, 0x5970
    ctx->pc = 0x51c234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22896));
    // 0x51c238: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x51c238u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x51c23c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x51c23cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x51c240: 0x2442597c  addiu       $v0, $v0, 0x597C
    ctx->pc = 0x51c240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22908));
    // 0x51c244: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x51c244u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x51c248: 0x3e00008  jr          $ra
    ctx->pc = 0x51C248u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x51C24Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51C248u;
            // 0x51c24c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x51C250u;
    // 0x51c250: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x51c250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x51c254: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x51c254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x51c258: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x51c258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x51c25c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x51c25cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51c260: 0x5200000a  beql        $s0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x51C260u;
    {
        const bool branch_taken_0x51c260 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x51c260) {
            ctx->pc = 0x51C264u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x51C260u;
            // 0x51c264: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x51C28Cu;
            goto label_51c28c;
        }
    }
    ctx->pc = 0x51C268u;
    // 0x51c268: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x51c268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x51c26c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x51c26cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x51c270: 0x24635988  addiu       $v1, $v1, 0x5988
    ctx->pc = 0x51c270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22920));
    // 0x51c274: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x51c274u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x51c278: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x51C278u;
    {
        const bool branch_taken_0x51c278 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x51C27Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51C278u;
            // 0x51c27c: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x51c278) {
            ctx->pc = 0x51C288u;
            goto label_51c288;
        }
    }
    ctx->pc = 0x51C280u;
    // 0x51c280: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x51C280u;
    SET_GPR_U32(ctx, 31, 0x51C288u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51C288u; }
        if (ctx->pc != 0x51C288u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51C288u; }
        if (ctx->pc != 0x51C288u) { return; }
    }
    ctx->pc = 0x51C288u;
label_51c288:
    // 0x51c288: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x51c288u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_51c28c:
    // 0x51c28c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x51c28cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x51c290: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x51c290u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x51c294: 0x3e00008  jr          $ra
    ctx->pc = 0x51C294u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x51C298u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51C294u;
            // 0x51c298: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x51C29Cu;
    // 0x51c29c: 0x0  nop
    ctx->pc = 0x51c29cu;
    // NOP
    // 0x51c2a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x51c2a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x51c2a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x51c2a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x51c2a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x51c2a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x51c2ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x51c2acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51c2b0: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x51C2B0u;
    {
        const bool branch_taken_0x51c2b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x51c2b0) {
            ctx->pc = 0x51C2B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x51C2B0u;
            // 0x51c2b4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x51C2E4u;
            goto label_51c2e4;
        }
    }
    ctx->pc = 0x51C2B8u;
    // 0x51c2b8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x51c2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x51c2bc: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x51c2bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x51c2c0: 0x24425998  addiu       $v0, $v0, 0x5998
    ctx->pc = 0x51c2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22936));
    // 0x51c2c4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x51c2c4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x51c2c8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x51c2c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x51c2cc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x51c2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x51c2d0: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x51C2D0u;
    {
        const bool branch_taken_0x51c2d0 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x51C2D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51C2D0u;
            // 0x51c2d4: 0xac40e3f0  sw          $zero, -0x1C10($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294960112), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x51c2d0) {
            ctx->pc = 0x51C2E0u;
            goto label_51c2e0;
        }
    }
    ctx->pc = 0x51C2D8u;
    // 0x51c2d8: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x51C2D8u;
    SET_GPR_U32(ctx, 31, 0x51C2E0u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51C2E0u; }
        if (ctx->pc != 0x51C2E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51C2E0u; }
        if (ctx->pc != 0x51C2E0u) { return; }
    }
    ctx->pc = 0x51C2E0u;
label_51c2e0:
    // 0x51c2e0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x51c2e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_51c2e4:
    // 0x51c2e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x51c2e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x51c2e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x51c2e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x51c2ec: 0x3e00008  jr          $ra
    ctx->pc = 0x51C2ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x51C2F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51C2ECu;
            // 0x51c2f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x51C2F4u;
    // 0x51c2f4: 0x0  nop
    ctx->pc = 0x51c2f4u;
    // NOP
    // 0x51c2f8: 0x0  nop
    ctx->pc = 0x51c2f8u;
    // NOP
    // 0x51c2fc: 0x0  nop
    ctx->pc = 0x51c2fcu;
    // NOP
}
