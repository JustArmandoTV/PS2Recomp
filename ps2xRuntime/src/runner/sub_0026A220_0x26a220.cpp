#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0026A220
// Address: 0x26a220 - 0x26a2c0
void sub_0026A220_0x26a220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026A220_0x26a220");
#endif

    switch (ctx->pc) {
        case 0x26a25cu: goto label_26a25c;
        case 0x26a2a4u: goto label_26a2a4;
        default: break;
    }

    ctx->pc = 0x26a220u;

    // 0x26a220: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x26a220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x26a224: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x26a224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x26a228: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26a228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x26a22c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x26a22cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x26a230: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x26a230u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a234: 0x1220001c  beqz        $s1, . + 4 + (0x1C << 2)
    ctx->pc = 0x26A234u;
    {
        const bool branch_taken_0x26a234 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A238u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A234u;
            // 0x26a238: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a234) {
            ctx->pc = 0x26A2A8u;
            goto label_26a2a8;
        }
    }
    ctx->pc = 0x26A23Cu;
    // 0x26a23c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x26a23cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x26a240: 0x2442f2d0  addiu       $v0, $v0, -0xD30
    ctx->pc = 0x26a240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963920));
    // 0x26a244: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x26a244u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x26a248: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x26a248u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x26a24c: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x26A24Cu;
    {
        const bool branch_taken_0x26a24c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A250u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A24Cu;
            // 0x26a250: 0x3c01006f  lui         $at, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a24c) {
            ctx->pc = 0x26A260u;
            goto label_26a260;
        }
    }
    ctx->pc = 0x26A254u;
    // 0x26a254: 0xc0a7a48  jal         func_29E920
    ctx->pc = 0x26A254u;
    SET_GPR_U32(ctx, 31, 0x26A25Cu);
    ctx->pc = 0x26A258u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A254u;
            // 0x26a258: 0x8c24ea40  lw          $a0, -0x15C0($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29E920u;
    if (runtime->hasFunction(0x29E920u)) {
        auto targetFn = runtime->lookupFunction(0x29E920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A25Cu; }
        if (ctx->pc != 0x26A25Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029E920_0x29e920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A25Cu; }
        if (ctx->pc != 0x26A25Cu) { return; }
    }
    ctx->pc = 0x26A25Cu;
label_26a25c:
    // 0x26a25c: 0x0  nop
    ctx->pc = 0x26a25cu;
    // NOP
label_26a260:
    // 0x26a260: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x26A260u;
    {
        const bool branch_taken_0x26a260 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A264u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A260u;
            // 0x26a264: 0x3c02006a  lui         $v0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a260) {
            ctx->pc = 0x26A280u;
            goto label_26a280;
        }
    }
    ctx->pc = 0x26A268u;
    // 0x26a268: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x26a268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
    // 0x26a26c: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x26A26Cu;
    {
        const bool branch_taken_0x26a26c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A270u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A26Cu;
            // 0x26a270: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a26c) {
            ctx->pc = 0x26A280u;
            goto label_26a280;
        }
    }
    ctx->pc = 0x26A274u;
    // 0x26a274: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x26a274u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x26a278: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x26a278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
    // 0x26a27c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x26a27cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_26a280:
    // 0x26a280: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x26a280u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x26a284: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x26a284u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x26a288: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x26A288u;
    {
        const bool branch_taken_0x26a288 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x26A28Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A288u;
            // 0x26a28c: 0x3c01006f  lui         $at, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a288) {
            ctx->pc = 0x26A2A8u;
            goto label_26a2a8;
        }
    }
    ctx->pc = 0x26A290u;
    // 0x26a290: 0x96260004  lhu         $a2, 0x4($s1)
    ctx->pc = 0x26a290u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x26a294: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x26a294u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
    // 0x26a298: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x26a298u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a29c: 0xc0a7ab4  jal         func_29EAD0
    ctx->pc = 0x26A29Cu;
    SET_GPR_U32(ctx, 31, 0x26A2A4u);
    ctx->pc = 0x26A2A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A29Cu;
            // 0x26a2a0: 0x24070026  addiu       $a3, $zero, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A2A4u; }
        if (ctx->pc != 0x26A2A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A2A4u; }
        if (ctx->pc != 0x26A2A4u) { return; }
    }
    ctx->pc = 0x26A2A4u;
label_26a2a4:
    // 0x26a2a4: 0x0  nop
    ctx->pc = 0x26a2a4u;
    // NOP
label_26a2a8:
    // 0x26a2a8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x26a2a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a2ac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x26a2acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26a2b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26a2b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26a2b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26a2b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26a2b8: 0x3e00008  jr          $ra
    ctx->pc = 0x26A2B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26A2BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A2B8u;
            // 0x26a2bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26A2C0u;
}
