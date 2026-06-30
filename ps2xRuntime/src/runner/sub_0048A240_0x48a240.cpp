#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0048A240
// Address: 0x48a240 - 0x48a400
void sub_0048A240_0x48a240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048A240_0x48a240");
#endif

    switch (ctx->pc) {
        case 0x48a240u: goto label_48a240;
        case 0x48a244u: goto label_48a244;
        case 0x48a248u: goto label_48a248;
        case 0x48a24cu: goto label_48a24c;
        case 0x48a250u: goto label_48a250;
        case 0x48a254u: goto label_48a254;
        case 0x48a258u: goto label_48a258;
        case 0x48a25cu: goto label_48a25c;
        case 0x48a260u: goto label_48a260;
        case 0x48a264u: goto label_48a264;
        case 0x48a268u: goto label_48a268;
        case 0x48a26cu: goto label_48a26c;
        case 0x48a270u: goto label_48a270;
        case 0x48a274u: goto label_48a274;
        case 0x48a278u: goto label_48a278;
        case 0x48a27cu: goto label_48a27c;
        case 0x48a280u: goto label_48a280;
        case 0x48a284u: goto label_48a284;
        case 0x48a288u: goto label_48a288;
        case 0x48a28cu: goto label_48a28c;
        case 0x48a290u: goto label_48a290;
        case 0x48a294u: goto label_48a294;
        case 0x48a298u: goto label_48a298;
        case 0x48a29cu: goto label_48a29c;
        case 0x48a2a0u: goto label_48a2a0;
        case 0x48a2a4u: goto label_48a2a4;
        case 0x48a2a8u: goto label_48a2a8;
        case 0x48a2acu: goto label_48a2ac;
        case 0x48a2b0u: goto label_48a2b0;
        case 0x48a2b4u: goto label_48a2b4;
        case 0x48a2b8u: goto label_48a2b8;
        case 0x48a2bcu: goto label_48a2bc;
        case 0x48a2c0u: goto label_48a2c0;
        case 0x48a2c4u: goto label_48a2c4;
        case 0x48a2c8u: goto label_48a2c8;
        case 0x48a2ccu: goto label_48a2cc;
        case 0x48a2d0u: goto label_48a2d0;
        case 0x48a2d4u: goto label_48a2d4;
        case 0x48a2d8u: goto label_48a2d8;
        case 0x48a2dcu: goto label_48a2dc;
        case 0x48a2e0u: goto label_48a2e0;
        case 0x48a2e4u: goto label_48a2e4;
        case 0x48a2e8u: goto label_48a2e8;
        case 0x48a2ecu: goto label_48a2ec;
        case 0x48a2f0u: goto label_48a2f0;
        case 0x48a2f4u: goto label_48a2f4;
        case 0x48a2f8u: goto label_48a2f8;
        case 0x48a2fcu: goto label_48a2fc;
        case 0x48a300u: goto label_48a300;
        case 0x48a304u: goto label_48a304;
        case 0x48a308u: goto label_48a308;
        case 0x48a30cu: goto label_48a30c;
        case 0x48a310u: goto label_48a310;
        case 0x48a314u: goto label_48a314;
        case 0x48a318u: goto label_48a318;
        case 0x48a31cu: goto label_48a31c;
        case 0x48a320u: goto label_48a320;
        case 0x48a324u: goto label_48a324;
        case 0x48a328u: goto label_48a328;
        case 0x48a32cu: goto label_48a32c;
        case 0x48a330u: goto label_48a330;
        case 0x48a334u: goto label_48a334;
        case 0x48a338u: goto label_48a338;
        case 0x48a33cu: goto label_48a33c;
        case 0x48a340u: goto label_48a340;
        case 0x48a344u: goto label_48a344;
        case 0x48a348u: goto label_48a348;
        case 0x48a34cu: goto label_48a34c;
        case 0x48a350u: goto label_48a350;
        case 0x48a354u: goto label_48a354;
        case 0x48a358u: goto label_48a358;
        case 0x48a35cu: goto label_48a35c;
        case 0x48a360u: goto label_48a360;
        case 0x48a364u: goto label_48a364;
        case 0x48a368u: goto label_48a368;
        case 0x48a36cu: goto label_48a36c;
        case 0x48a370u: goto label_48a370;
        case 0x48a374u: goto label_48a374;
        case 0x48a378u: goto label_48a378;
        case 0x48a37cu: goto label_48a37c;
        case 0x48a380u: goto label_48a380;
        case 0x48a384u: goto label_48a384;
        case 0x48a388u: goto label_48a388;
        case 0x48a38cu: goto label_48a38c;
        case 0x48a390u: goto label_48a390;
        case 0x48a394u: goto label_48a394;
        case 0x48a398u: goto label_48a398;
        case 0x48a39cu: goto label_48a39c;
        case 0x48a3a0u: goto label_48a3a0;
        case 0x48a3a4u: goto label_48a3a4;
        case 0x48a3a8u: goto label_48a3a8;
        case 0x48a3acu: goto label_48a3ac;
        case 0x48a3b0u: goto label_48a3b0;
        case 0x48a3b4u: goto label_48a3b4;
        case 0x48a3b8u: goto label_48a3b8;
        case 0x48a3bcu: goto label_48a3bc;
        case 0x48a3c0u: goto label_48a3c0;
        case 0x48a3c4u: goto label_48a3c4;
        case 0x48a3c8u: goto label_48a3c8;
        case 0x48a3ccu: goto label_48a3cc;
        case 0x48a3d0u: goto label_48a3d0;
        case 0x48a3d4u: goto label_48a3d4;
        case 0x48a3d8u: goto label_48a3d8;
        case 0x48a3dcu: goto label_48a3dc;
        case 0x48a3e0u: goto label_48a3e0;
        case 0x48a3e4u: goto label_48a3e4;
        case 0x48a3e8u: goto label_48a3e8;
        case 0x48a3ecu: goto label_48a3ec;
        case 0x48a3f0u: goto label_48a3f0;
        case 0x48a3f4u: goto label_48a3f4;
        case 0x48a3f8u: goto label_48a3f8;
        case 0x48a3fcu: goto label_48a3fc;
        default: break;
    }

    ctx->pc = 0x48a240u;

label_48a240:
    // 0x48a240: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x48a240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_48a244:
    // 0x48a244: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x48a244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_48a248:
    // 0x48a248: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x48a248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_48a24c:
    // 0x48a24c: 0x8c4289e8  lw          $v0, -0x7618($v0)
    ctx->pc = 0x48a24cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937064)));
label_48a250:
    // 0x48a250: 0x8c4401a0  lw          $a0, 0x1A0($v0)
    ctx->pc = 0x48a250u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 416)));
label_48a254:
    // 0x48a254: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
label_48a258:
    if (ctx->pc == 0x48A258u) {
        ctx->pc = 0x48A25Cu;
        goto label_48a25c;
    }
    ctx->pc = 0x48A254u;
    {
        const bool branch_taken_0x48a254 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x48a254) {
            ctx->pc = 0x48A264u;
            goto label_48a264;
        }
    }
    ctx->pc = 0x48A25Cu;
label_48a25c:
    // 0x48a25c: 0x10000003  b           . + 4 + (0x3 << 2)
label_48a260:
    if (ctx->pc == 0x48A260u) {
        ctx->pc = 0x48A260u;
            // 0x48a260: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x48A264u;
        goto label_48a264;
    }
    ctx->pc = 0x48A25Cu;
    {
        const bool branch_taken_0x48a25c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48A260u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48A25Cu;
            // 0x48a260: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48a25c) {
            ctx->pc = 0x48A26Cu;
            goto label_48a26c;
        }
    }
    ctx->pc = 0x48A264u;
label_48a264:
    // 0x48a264: 0xc0675b0  jal         func_19D6C0
label_48a268:
    if (ctx->pc == 0x48A268u) {
        ctx->pc = 0x48A26Cu;
        goto label_48a26c;
    }
    ctx->pc = 0x48A264u;
    SET_GPR_U32(ctx, 31, 0x48A26Cu);
    ctx->pc = 0x19D6C0u;
    if (runtime->hasFunction(0x19D6C0u)) {
        auto targetFn = runtime->lookupFunction(0x19D6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48A26Cu; }
        if (ctx->pc != 0x48A26Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019D6C0_0x19d6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48A26Cu; }
        if (ctx->pc != 0x48A26Cu) { return; }
    }
    ctx->pc = 0x48A26Cu;
label_48a26c:
    // 0x48a26c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x48a26cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_48a270:
    // 0x48a270: 0x3e00008  jr          $ra
label_48a274:
    if (ctx->pc == 0x48A274u) {
        ctx->pc = 0x48A274u;
            // 0x48a274: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x48A278u;
        goto label_48a278;
    }
    ctx->pc = 0x48A270u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48A274u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48A270u;
            // 0x48a274: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x48A278u;
label_48a278:
    // 0x48a278: 0x0  nop
    ctx->pc = 0x48a278u;
    // NOP
label_48a27c:
    // 0x48a27c: 0x0  nop
    ctx->pc = 0x48a27cu;
    // NOP
label_48a280:
    // 0x48a280: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x48a280u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_48a284:
    // 0x48a284: 0x8c4289e8  lw          $v0, -0x7618($v0)
    ctx->pc = 0x48a284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937064)));
label_48a288:
    // 0x48a288: 0x80670f8  j           func_19C3E0
label_48a28c:
    if (ctx->pc == 0x48A28Cu) {
        ctx->pc = 0x48A28Cu;
            // 0x48a28c: 0x8c4401a0  lw          $a0, 0x1A0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 416)));
        ctx->pc = 0x48A290u;
        goto label_48a290;
    }
    ctx->pc = 0x48A288u;
    ctx->pc = 0x48A28Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48A288u;
            // 0x48a28c: 0x8c4401a0  lw          $a0, 0x1A0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 416)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19C3E0u;
    if (runtime->hasFunction(0x19C3E0u)) {
        auto targetFn = runtime->lookupFunction(0x19C3E0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0019C3E0_0x19c3e0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x48A290u;
label_48a290:
    // 0x48a290: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x48a290u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_48a294:
    // 0x48a294: 0x8c4289e8  lw          $v0, -0x7618($v0)
    ctx->pc = 0x48a294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937064)));
label_48a298:
    // 0x48a298: 0x80670be  j           func_19C2F8
label_48a29c:
    if (ctx->pc == 0x48A29Cu) {
        ctx->pc = 0x48A29Cu;
            // 0x48a29c: 0x8c4401a0  lw          $a0, 0x1A0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 416)));
        ctx->pc = 0x48A2A0u;
        goto label_48a2a0;
    }
    ctx->pc = 0x48A298u;
    ctx->pc = 0x48A29Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48A298u;
            // 0x48a29c: 0x8c4401a0  lw          $a0, 0x1A0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 416)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19C2F8u;
    if (runtime->hasFunction(0x19C2F8u)) {
        auto targetFn = runtime->lookupFunction(0x19C2F8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0019C2F8_0x19c2f8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x48A2A0u;
label_48a2a0:
    // 0x48a2a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x48a2a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_48a2a4:
    // 0x48a2a4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x48a2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_48a2a8:
    // 0x48a2a8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x48a2a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_48a2ac:
    // 0x48a2ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x48a2acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_48a2b0:
    // 0x48a2b0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x48a2b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_48a2b4:
    // 0x48a2b4: 0x8c4289e8  lw          $v0, -0x7618($v0)
    ctx->pc = 0x48a2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937064)));
label_48a2b8:
    // 0x48a2b8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x48a2b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_48a2bc:
    // 0x48a2bc: 0x26050018  addiu       $a1, $s0, 0x18
    ctx->pc = 0x48a2bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
label_48a2c0:
    // 0x48a2c0: 0x8c5101a0  lw          $s1, 0x1A0($v0)
    ctx->pc = 0x48a2c0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 416)));
label_48a2c4:
    // 0x48a2c4: 0xc066638  jal         func_1998E0
label_48a2c8:
    if (ctx->pc == 0x48A2C8u) {
        ctx->pc = 0x48A2C8u;
            // 0x48a2c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x48A2CCu;
        goto label_48a2cc;
    }
    ctx->pc = 0x48A2C4u;
    SET_GPR_U32(ctx, 31, 0x48A2CCu);
    ctx->pc = 0x48A2C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48A2C4u;
            // 0x48a2c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1998E0u;
    if (runtime->hasFunction(0x1998E0u)) {
        auto targetFn = runtime->lookupFunction(0x1998E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48A2CCu; }
        if (ctx->pc != 0x48A2CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001998E0_0x1998e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48A2CCu; }
        if (ctx->pc != 0x48A2CCu) { return; }
    }
    ctx->pc = 0x48A2CCu;
label_48a2cc:
    // 0x48a2cc: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x48a2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_48a2d0:
    // 0x48a2d0: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_48a2d4:
    if (ctx->pc == 0x48A2D4u) {
        ctx->pc = 0x48A2D4u;
            // 0x48a2d4: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x48A2D8u;
        goto label_48a2d8;
    }
    ctx->pc = 0x48A2D0u;
    {
        const bool branch_taken_0x48a2d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48a2d0) {
            ctx->pc = 0x48A2D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x48A2D0u;
            // 0x48a2d4: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x48A2F8u;
            goto label_48a2f8;
        }
    }
    ctx->pc = 0x48A2D8u;
label_48a2d8:
    // 0x48a2d8: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x48a2d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_48a2dc:
    // 0x48a2dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x48a2dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_48a2e0:
    // 0x48a2e0: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x48a2e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_48a2e4:
    // 0x48a2e4: 0x320f809  jalr        $t9
label_48a2e8:
    if (ctx->pc == 0x48A2E8u) {
        ctx->pc = 0x48A2E8u;
            // 0x48a2e8: 0x26050018  addiu       $a1, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->pc = 0x48A2ECu;
        goto label_48a2ec;
    }
    ctx->pc = 0x48A2E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x48A2ECu);
        ctx->pc = 0x48A2E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48A2E4u;
            // 0x48a2e8: 0x26050018  addiu       $a1, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x48A2ECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x48A2ECu; }
            if (ctx->pc != 0x48A2ECu) { return; }
        }
        }
    }
    ctx->pc = 0x48A2ECu;
label_48a2ec:
    // 0x48a2ec: 0xc0668a0  jal         func_19A280
label_48a2f0:
    if (ctx->pc == 0x48A2F0u) {
        ctx->pc = 0x48A2F0u;
            // 0x48a2f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x48A2F4u;
        goto label_48a2f4;
    }
    ctx->pc = 0x48A2ECu;
    SET_GPR_U32(ctx, 31, 0x48A2F4u);
    ctx->pc = 0x48A2F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48A2ECu;
            // 0x48a2f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19A280u;
    if (runtime->hasFunction(0x19A280u)) {
        auto targetFn = runtime->lookupFunction(0x19A280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48A2F4u; }
        if (ctx->pc != 0x48A2F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019A280_0x19a280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48A2F4u; }
        if (ctx->pc != 0x48A2F4u) { return; }
    }
    ctx->pc = 0x48A2F4u;
label_48a2f4:
    // 0x48a2f4: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x48a2f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_48a2f8:
    // 0x48a2f8: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x48a2f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_48a2fc:
    // 0x48a2fc: 0x320f809  jalr        $t9
label_48a300:
    if (ctx->pc == 0x48A300u) {
        ctx->pc = 0x48A300u;
            // 0x48a300: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x48A304u;
        goto label_48a304;
    }
    ctx->pc = 0x48A2FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x48A304u);
        ctx->pc = 0x48A300u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48A2FCu;
            // 0x48a300: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x48A304u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x48A304u; }
            if (ctx->pc != 0x48A304u) { return; }
        }
        }
    }
    ctx->pc = 0x48A304u;
label_48a304:
    // 0x48a304: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x48a304u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_48a308:
    // 0x48a308: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x48a308u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_48a30c:
    // 0x48a30c: 0x8c5189e0  lw          $s1, -0x7620($v0)
    ctx->pc = 0x48a30cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_48a310:
    // 0x48a310: 0xc0506ac  jal         func_141AB0
label_48a314:
    if (ctx->pc == 0x48A314u) {
        ctx->pc = 0x48A314u;
            // 0x48a314: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x48A318u;
        goto label_48a318;
    }
    ctx->pc = 0x48A310u;
    SET_GPR_U32(ctx, 31, 0x48A318u);
    ctx->pc = 0x48A314u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48A310u;
            // 0x48a314: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48A318u; }
        if (ctx->pc != 0x48A318u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48A318u; }
        if (ctx->pc != 0x48A318u) { return; }
    }
    ctx->pc = 0x48A318u;
label_48a318:
    // 0x48a318: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x48a318u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_48a31c:
    // 0x48a31c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x48a31cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_48a320:
    // 0x48a320: 0x8c4289e0  lw          $v0, -0x7620($v0)
    ctx->pc = 0x48a320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_48a324:
    // 0x48a324: 0xa0400004  sb          $zero, 0x4($v0)
    ctx->pc = 0x48a324u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4), (uint8_t)GPR_U32(ctx, 0));
label_48a328:
    // 0x48a328: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x48a328u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_48a32c:
    // 0x48a32c: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x48a32cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_48a330:
    // 0x48a330: 0x320f809  jalr        $t9
label_48a334:
    if (ctx->pc == 0x48A334u) {
        ctx->pc = 0x48A334u;
            // 0x48a334: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x48A338u;
        goto label_48a338;
    }
    ctx->pc = 0x48A330u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x48A338u);
        ctx->pc = 0x48A334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48A330u;
            // 0x48a334: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x48A338u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x48A338u; }
            if (ctx->pc != 0x48A338u) { return; }
        }
        }
    }
    ctx->pc = 0x48A338u;
label_48a338:
    // 0x48a338: 0xc60d00d4  lwc1        $f13, 0xD4($s0)
    ctx->pc = 0x48a338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_48a33c:
    // 0x48a33c: 0x8e390008  lw          $t9, 0x8($s1)
    ctx->pc = 0x48a33cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_48a340:
    // 0x48a340: 0xc60000dc  lwc1        $f0, 0xDC($s0)
    ctx->pc = 0x48a340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_48a344:
    // 0x48a344: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x48a344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_48a348:
    // 0x48a348: 0xc60c00d0  lwc1        $f12, 0xD0($s0)
    ctx->pc = 0x48a348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_48a34c:
    // 0x48a34c: 0x26240004  addiu       $a0, $s1, 0x4
    ctx->pc = 0x48a34cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_48a350:
    // 0x48a350: 0xc60100d8  lwc1        $f1, 0xD8($s0)
    ctx->pc = 0x48a350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_48a354:
    // 0x48a354: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x48a354u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_48a358:
    // 0x48a358: 0x46006bc0  add.s       $f15, $f13, $f0
    ctx->pc = 0x48a358u;
    ctx->f[15] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
label_48a35c:
    // 0x48a35c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x48a35cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_48a360:
    // 0x48a360: 0x260600bc  addiu       $a2, $s0, 0xBC
    ctx->pc = 0x48a360u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 188));
label_48a364:
    // 0x48a364: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x48a364u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_48a368:
    // 0x48a368: 0x44828000  mtc1        $v0, $f16
    ctx->pc = 0x48a368u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
label_48a36c:
    // 0x48a36c: 0x320f809  jalr        $t9
label_48a370:
    if (ctx->pc == 0x48A370u) {
        ctx->pc = 0x48A370u;
            // 0x48a370: 0x46016380  add.s       $f14, $f12, $f1 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
        ctx->pc = 0x48A374u;
        goto label_48a374;
    }
    ctx->pc = 0x48A36Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x48A374u);
        ctx->pc = 0x48A370u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48A36Cu;
            // 0x48a370: 0x46016380  add.s       $f14, $f12, $f1 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x48A374u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x48A374u; }
            if (ctx->pc != 0x48A374u) { return; }
        }
        }
    }
    ctx->pc = 0x48A374u;
label_48a374:
    // 0x48a374: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x48a374u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_48a378:
    // 0x48a378: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x48a378u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_48a37c:
    // 0x48a37c: 0x320f809  jalr        $t9
label_48a380:
    if (ctx->pc == 0x48A380u) {
        ctx->pc = 0x48A380u;
            // 0x48a380: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x48A384u;
        goto label_48a384;
    }
    ctx->pc = 0x48A37Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x48A384u);
        ctx->pc = 0x48A380u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48A37Cu;
            // 0x48a380: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x48A384u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x48A384u; }
            if (ctx->pc != 0x48A384u) { return; }
        }
        }
    }
    ctx->pc = 0x48A384u;
label_48a384:
    // 0x48a384: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x48a384u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_48a388:
    // 0x48a388: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x48a388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_48a38c:
    // 0x48a38c: 0x8c6389e0  lw          $v1, -0x7620($v1)
    ctx->pc = 0x48a38cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937056)));
label_48a390:
    // 0x48a390: 0xa0640004  sb          $a0, 0x4($v1)
    ctx->pc = 0x48a390u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4), (uint8_t)GPR_U32(ctx, 4));
label_48a394:
    // 0x48a394: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x48a394u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_48a398:
    // 0x48a398: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x48a398u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_48a39c:
    // 0x48a39c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x48a39cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_48a3a0:
    // 0x48a3a0: 0x3e00008  jr          $ra
label_48a3a4:
    if (ctx->pc == 0x48A3A4u) {
        ctx->pc = 0x48A3A4u;
            // 0x48a3a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x48A3A8u;
        goto label_48a3a8;
    }
    ctx->pc = 0x48A3A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48A3A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48A3A0u;
            // 0x48a3a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x48A3A8u;
label_48a3a8:
    // 0x48a3a8: 0x0  nop
    ctx->pc = 0x48a3a8u;
    // NOP
label_48a3ac:
    // 0x48a3ac: 0x0  nop
    ctx->pc = 0x48a3acu;
    // NOP
label_48a3b0:
    // 0x48a3b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x48a3b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_48a3b4:
    // 0x48a3b4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x48a3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_48a3b8:
    // 0x48a3b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x48a3b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_48a3bc:
    // 0x48a3bc: 0x8c4689e8  lw          $a2, -0x7618($v0)
    ctx->pc = 0x48a3bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937064)));
label_48a3c0:
    // 0x48a3c0: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x48a3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_48a3c4:
    // 0x48a3c4: 0x8c8200e0  lw          $v0, 0xE0($a0)
    ctx->pc = 0x48a3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 224)));
label_48a3c8:
    // 0x48a3c8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_48a3cc:
    if (ctx->pc == 0x48A3CCu) {
        ctx->pc = 0x48A3CCu;
            // 0x48a3cc: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->pc = 0x48A3D0u;
        goto label_48a3d0;
    }
    ctx->pc = 0x48A3C8u;
    {
        const bool branch_taken_0x48a3c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x48A3CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48A3C8u;
            // 0x48a3cc: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48a3c8) {
            ctx->pc = 0x48A3E0u;
            goto label_48a3e0;
        }
    }
    ctx->pc = 0x48A3D0u;
label_48a3d0:
    // 0x48a3d0: 0xc066fc6  jal         func_19BF18
label_48a3d4:
    if (ctx->pc == 0x48A3D4u) {
        ctx->pc = 0x48A3D4u;
            // 0x48a3d4: 0x8cc401a0  lw          $a0, 0x1A0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 416)));
        ctx->pc = 0x48A3D8u;
        goto label_48a3d8;
    }
    ctx->pc = 0x48A3D0u;
    SET_GPR_U32(ctx, 31, 0x48A3D8u);
    ctx->pc = 0x48A3D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48A3D0u;
            // 0x48a3d4: 0x8cc401a0  lw          $a0, 0x1A0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 416)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19BF18u;
    if (runtime->hasFunction(0x19BF18u)) {
        auto targetFn = runtime->lookupFunction(0x19BF18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48A3D8u; }
        if (ctx->pc != 0x48A3D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019BF18_0x19bf18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48A3D8u; }
        if (ctx->pc != 0x48A3D8u) { return; }
    }
    ctx->pc = 0x48A3D8u;
label_48a3d8:
    // 0x48a3d8: 0x10000004  b           . + 4 + (0x4 << 2)
label_48a3dc:
    if (ctx->pc == 0x48A3DCu) {
        ctx->pc = 0x48A3DCu;
            // 0x48a3dc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x48A3E0u;
        goto label_48a3e0;
    }
    ctx->pc = 0x48A3D8u;
    {
        const bool branch_taken_0x48a3d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48A3DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48A3D8u;
            // 0x48a3dc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48a3d8) {
            ctx->pc = 0x48A3ECu;
            goto label_48a3ec;
        }
    }
    ctx->pc = 0x48A3E0u;
label_48a3e0:
    // 0x48a3e0: 0xc0680a2  jal         func_1A0288
label_48a3e4:
    if (ctx->pc == 0x48A3E4u) {
        ctx->pc = 0x48A3E4u;
            // 0x48a3e4: 0x8cc401a0  lw          $a0, 0x1A0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 416)));
        ctx->pc = 0x48A3E8u;
        goto label_48a3e8;
    }
    ctx->pc = 0x48A3E0u;
    SET_GPR_U32(ctx, 31, 0x48A3E8u);
    ctx->pc = 0x48A3E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48A3E0u;
            // 0x48a3e4: 0x8cc401a0  lw          $a0, 0x1A0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 416)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A0288u;
    if (runtime->hasFunction(0x1A0288u)) {
        auto targetFn = runtime->lookupFunction(0x1A0288u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48A3E8u; }
        if (ctx->pc != 0x48A3E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A0288_0x1a0288(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48A3E8u; }
        if (ctx->pc != 0x48A3E8u) { return; }
    }
    ctx->pc = 0x48A3E8u;
label_48a3e8:
    // 0x48a3e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x48a3e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_48a3ec:
    // 0x48a3ec: 0x3e00008  jr          $ra
label_48a3f0:
    if (ctx->pc == 0x48A3F0u) {
        ctx->pc = 0x48A3F0u;
            // 0x48a3f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x48A3F4u;
        goto label_48a3f4;
    }
    ctx->pc = 0x48A3ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48A3F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48A3ECu;
            // 0x48a3f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x48A3F4u;
label_48a3f4:
    // 0x48a3f4: 0x0  nop
    ctx->pc = 0x48a3f4u;
    // NOP
label_48a3f8:
    // 0x48a3f8: 0x0  nop
    ctx->pc = 0x48a3f8u;
    // NOP
label_48a3fc:
    // 0x48a3fc: 0x0  nop
    ctx->pc = 0x48a3fcu;
    // NOP
}
