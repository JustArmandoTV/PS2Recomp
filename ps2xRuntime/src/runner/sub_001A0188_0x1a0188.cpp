#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A0188
// Address: 0x1a0188 - 0x1a0228
void sub_001A0188_0x1a0188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A0188_0x1a0188");
#endif

    switch (ctx->pc) {
        case 0x1a0188u: goto label_1a0188;
        case 0x1a018cu: goto label_1a018c;
        case 0x1a0190u: goto label_1a0190;
        case 0x1a0194u: goto label_1a0194;
        case 0x1a0198u: goto label_1a0198;
        case 0x1a019cu: goto label_1a019c;
        case 0x1a01a0u: goto label_1a01a0;
        case 0x1a01a4u: goto label_1a01a4;
        case 0x1a01a8u: goto label_1a01a8;
        case 0x1a01acu: goto label_1a01ac;
        case 0x1a01b0u: goto label_1a01b0;
        case 0x1a01b4u: goto label_1a01b4;
        case 0x1a01b8u: goto label_1a01b8;
        case 0x1a01bcu: goto label_1a01bc;
        case 0x1a01c0u: goto label_1a01c0;
        case 0x1a01c4u: goto label_1a01c4;
        case 0x1a01c8u: goto label_1a01c8;
        case 0x1a01ccu: goto label_1a01cc;
        case 0x1a01d0u: goto label_1a01d0;
        case 0x1a01d4u: goto label_1a01d4;
        case 0x1a01d8u: goto label_1a01d8;
        case 0x1a01dcu: goto label_1a01dc;
        case 0x1a01e0u: goto label_1a01e0;
        case 0x1a01e4u: goto label_1a01e4;
        case 0x1a01e8u: goto label_1a01e8;
        case 0x1a01ecu: goto label_1a01ec;
        case 0x1a01f0u: goto label_1a01f0;
        case 0x1a01f4u: goto label_1a01f4;
        case 0x1a01f8u: goto label_1a01f8;
        case 0x1a01fcu: goto label_1a01fc;
        case 0x1a0200u: goto label_1a0200;
        case 0x1a0204u: goto label_1a0204;
        case 0x1a0208u: goto label_1a0208;
        case 0x1a020cu: goto label_1a020c;
        case 0x1a0210u: goto label_1a0210;
        case 0x1a0214u: goto label_1a0214;
        case 0x1a0218u: goto label_1a0218;
        case 0x1a021cu: goto label_1a021c;
        case 0x1a0220u: goto label_1a0220;
        case 0x1a0224u: goto label_1a0224;
        default: break;
    }

    ctx->pc = 0x1a0188u;

label_1a0188:
    // 0x1a0188: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a0188u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1a018c:
    // 0x1a018c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a018cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a0190:
    // 0x1a0190: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1a0190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_1a0194:
    // 0x1a0194: 0xc06756a  jal         func_19D5A8
label_1a0198:
    if (ctx->pc == 0x1A0198u) {
        ctx->pc = 0x1A0198u;
            // 0x1a0198: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A019Cu;
        goto label_1a019c;
    }
    ctx->pc = 0x1A0194u;
    SET_GPR_U32(ctx, 31, 0x1A019Cu);
    ctx->pc = 0x1A0198u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0194u;
            // 0x1a0198: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D5A8u;
    if (runtime->hasFunction(0x19D5A8u)) {
        auto targetFn = runtime->lookupFunction(0x19D5A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A019Cu; }
        if (ctx->pc != 0x1A019Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019D5A8_0x19d5a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A019Cu; }
        if (ctx->pc != 0x1A019Cu) { return; }
    }
    ctx->pc = 0x1A019Cu;
label_1a019c:
    // 0x1a019c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a019cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a01a0:
    // 0x1a01a0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a01a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a01a4:
    // 0x1a01a4: 0x10430008  beq         $v0, $v1, . + 4 + (0x8 << 2)
label_1a01a8:
    if (ctx->pc == 0x1A01A8u) {
        ctx->pc = 0x1A01A8u;
            // 0x1a01a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A01ACu;
        goto label_1a01ac;
    }
    ctx->pc = 0x1A01A4u;
    {
        const bool branch_taken_0x1a01a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1A01A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A01A4u;
            // 0x1a01a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a01a4) {
            ctx->pc = 0x1A01C8u;
            goto label_1a01c8;
        }
    }
    ctx->pc = 0x1A01ACu;
label_1a01ac:
    // 0x1a01ac: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1a01acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
label_1a01b0:
    // 0x1a01b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a01b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a01b4:
    // 0x1a01b4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1a01b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1a01b8:
    // 0x1a01b8: 0x2484a470  addiu       $a0, $a0, -0x5B90
    ctx->pc = 0x1a01b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943856));
label_1a01bc:
    // 0x1a01bc: 0x80686c6  j           func_1A1B18
label_1a01c0:
    if (ctx->pc == 0x1A01C0u) {
        ctx->pc = 0x1A01C0u;
            // 0x1a01c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1A01C4u;
        goto label_1a01c4;
    }
    ctx->pc = 0x1A01BCu;
    ctx->pc = 0x1A01C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A01BCu;
            // 0x1a01c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1B18u;
    if (runtime->hasFunction(0x1A1B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A1B18u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A1B18_0x1a1b18(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1A01C4u;
label_1a01c4:
    // 0x1a01c4: 0x0  nop
    ctx->pc = 0x1a01c4u;
    // NOP
label_1a01c8:
    // 0x1a01c8: 0xc068242  jal         func_1A0908
label_1a01cc:
    if (ctx->pc == 0x1A01CCu) {
        ctx->pc = 0x1A01D0u;
        goto label_1a01d0;
    }
    ctx->pc = 0x1A01C8u;
    SET_GPR_U32(ctx, 31, 0x1A01D0u);
    ctx->pc = 0x1A0908u;
    if (runtime->hasFunction(0x1A0908u)) {
        auto targetFn = runtime->lookupFunction(0x1A0908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A01D0u; }
        if (ctx->pc != 0x1A01D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A0908_0x1a0908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A01D0u; }
        if (ctx->pc != 0x1A01D0u) { return; }
    }
    ctx->pc = 0x1A01D0u;
label_1a01d0:
    // 0x1a01d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a01d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a01d4:
    // 0x1a01d4: 0xc067054  jal         func_19C150
label_1a01d8:
    if (ctx->pc == 0x1A01D8u) {
        ctx->pc = 0x1A01D8u;
            // 0x1a01d8: 0x8e050434  lw          $a1, 0x434($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1076)));
        ctx->pc = 0x1A01DCu;
        goto label_1a01dc;
    }
    ctx->pc = 0x1A01D4u;
    SET_GPR_U32(ctx, 31, 0x1A01DCu);
    ctx->pc = 0x1A01D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A01D4u;
            // 0x1a01d8: 0x8e050434  lw          $a1, 0x434($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1076)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19C150u;
    if (runtime->hasFunction(0x19C150u)) {
        auto targetFn = runtime->lookupFunction(0x19C150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A01DCu; }
        if (ctx->pc != 0x1A01DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019C150_0x19c150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A01DCu; }
        if (ctx->pc != 0x1A01DCu) { return; }
    }
    ctx->pc = 0x1A01DCu;
label_1a01dc:
    // 0x1a01dc: 0xc067170  jal         func_19C5C0
label_1a01e0:
    if (ctx->pc == 0x1A01E0u) {
        ctx->pc = 0x1A01E0u;
            // 0x1a01e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A01E4u;
        goto label_1a01e4;
    }
    ctx->pc = 0x1A01DCu;
    SET_GPR_U32(ctx, 31, 0x1A01E4u);
    ctx->pc = 0x1A01E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A01DCu;
            // 0x1a01e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19C5C0u;
    if (runtime->hasFunction(0x19C5C0u)) {
        auto targetFn = runtime->lookupFunction(0x19C5C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A01E4u; }
        if (ctx->pc != 0x1A01E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019C5C0_0x19c5c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A01E4u; }
        if (ctx->pc != 0x1A01E4u) { return; }
    }
    ctx->pc = 0x1A01E4u;
label_1a01e4:
    // 0x1a01e4: 0xc0600f4  jal         func_1803D0
label_1a01e8:
    if (ctx->pc == 0x1A01E8u) {
        ctx->pc = 0x1A01E8u;
            // 0x1a01e8: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->pc = 0x1A01ECu;
        goto label_1a01ec;
    }
    ctx->pc = 0x1A01E4u;
    SET_GPR_U32(ctx, 31, 0x1A01ECu);
    ctx->pc = 0x1A01E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A01E4u;
            // 0x1a01e8: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1803D0u;
    if (runtime->hasFunction(0x1803D0u)) {
        auto targetFn = runtime->lookupFunction(0x1803D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A01ECu; }
        if (ctx->pc != 0x1A01ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001803D0_0x1803d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A01ECu; }
        if (ctx->pc != 0x1A01ECu) { return; }
    }
    ctx->pc = 0x1A01ECu;
label_1a01ec:
    // 0x1a01ec: 0x8e020430  lw          $v0, 0x430($s0)
    ctx->pc = 0x1a01ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1072)));
label_1a01f0:
    // 0x1a01f0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1a01f4:
    if (ctx->pc == 0x1A01F4u) {
        ctx->pc = 0x1A01F4u;
            // 0x1a01f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A01F8u;
        goto label_1a01f8;
    }
    ctx->pc = 0x1A01F0u;
    {
        const bool branch_taken_0x1a01f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A01F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A01F0u;
            // 0x1a01f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a01f0) {
            ctx->pc = 0x1A0208u;
            goto label_1a0208;
        }
    }
    ctx->pc = 0x1A01F8u;
label_1a01f8:
    // 0x1a01f8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1a01f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a01fc:
    // 0x1a01fc: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x1a01fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_1a0200:
    // 0x1a0200: 0x60f809  jalr        $v1
label_1a0204:
    if (ctx->pc == 0x1A0204u) {
        ctx->pc = 0x1A0208u;
        goto label_1a0208;
    }
    ctx->pc = 0x1A0200u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1A0208u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A0208u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A0208u; }
            if (ctx->pc != 0x1A0208u) { return; }
        }
        }
    }
    ctx->pc = 0x1A0208u;
label_1a0208:
    // 0x1a0208: 0xc065e92  jal         func_197A48
label_1a020c:
    if (ctx->pc == 0x1A020Cu) {
        ctx->pc = 0x1A020Cu;
            // 0x1a020c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A0210u;
        goto label_1a0210;
    }
    ctx->pc = 0x1A0208u;
    SET_GPR_U32(ctx, 31, 0x1A0210u);
    ctx->pc = 0x1A020Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0208u;
            // 0x1a020c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197A48u;
    if (runtime->hasFunction(0x197A48u)) {
        auto targetFn = runtime->lookupFunction(0x197A48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0210u; }
        if (ctx->pc != 0x1A0210u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00197A48_0x197a48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0210u; }
        if (ctx->pc != 0x1A0210u) { return; }
    }
    ctx->pc = 0x1A0210u;
label_1a0210:
    // 0x1a0210: 0xae000550  sw          $zero, 0x550($s0)
    ctx->pc = 0x1a0210u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1360), GPR_U32(ctx, 0));
label_1a0214:
    // 0x1a0214: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1a0214u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1a0218:
    // 0x1a0218: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a0218u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a021c:
    // 0x1a021c: 0x3e00008  jr          $ra
label_1a0220:
    if (ctx->pc == 0x1A0220u) {
        ctx->pc = 0x1A0220u;
            // 0x1a0220: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1A0224u;
        goto label_1a0224;
    }
    ctx->pc = 0x1A021Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0220u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A021Cu;
            // 0x1a0220: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A0224u;
label_1a0224:
    // 0x1a0224: 0x0  nop
    ctx->pc = 0x1a0224u;
    // NOP
}
