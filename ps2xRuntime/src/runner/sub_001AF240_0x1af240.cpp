#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001AF240
// Address: 0x1af240 - 0x1af3f8
void sub_001AF240_0x1af240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AF240_0x1af240");
#endif

    switch (ctx->pc) {
        case 0x1af25cu: goto label_1af25c;
        case 0x1af278u: goto label_1af278;
        case 0x1af284u: goto label_1af284;
        case 0x1af2bcu: goto label_1af2bc;
        case 0x1af2d0u: goto label_1af2d0;
        case 0x1af2e0u: goto label_1af2e0;
        case 0x1af2e8u: goto label_1af2e8;
        case 0x1af330u: goto label_1af330;
        case 0x1af340u: goto label_1af340;
        case 0x1af370u: goto label_1af370;
        case 0x1af380u: goto label_1af380;
        case 0x1af38cu: goto label_1af38c;
        case 0x1af39cu: goto label_1af39c;
        case 0x1af3acu: goto label_1af3ac;
        case 0x1af3b4u: goto label_1af3b4;
        case 0x1af3d8u: goto label_1af3d8;
        default: break;
    }

    ctx->pc = 0x1af240u;

    // 0x1af240: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1af240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1af244: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1af244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1af248: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1af248u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af24c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1af24cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1af250: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1af250u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af254: 0xc06978c  jal         func_1A5E30
    ctx->pc = 0x1AF254u;
    SET_GPR_U32(ctx, 31, 0x1AF25Cu);
    ctx->pc = 0x1AF258u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF254u;
            // 0x1af258: 0x8e052038  lw          $a1, 0x2038($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8248)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A5E30u;
    if (runtime->hasFunction(0x1A5E30u)) {
        auto targetFn = runtime->lookupFunction(0x1A5E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF25Cu; }
        if (ctx->pc != 0x1AF25Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A5E30_0x1a5e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF25Cu; }
        if (ctx->pc != 0x1AF25Cu) { return; }
    }
    ctx->pc = 0x1AF25Cu;
label_1af25c:
    // 0x1af25c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1af25cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1af260: 0x27a50004  addiu       $a1, $sp, 0x4
    ctx->pc = 0x1af260u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x1af264: 0x27a60008  addiu       $a2, $sp, 0x8
    ctx->pc = 0x1af264u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x1af268: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1AF268u;
    {
        const bool branch_taken_0x1af268 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF26Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF268u;
            // 0x1af26c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af268) {
            ctx->pc = 0x1AF288u;
            goto label_1af288;
        }
    }
    ctx->pc = 0x1AF270u;
    // 0x1af270: 0xc069984  jal         func_1A6610
    ctx->pc = 0x1AF270u;
    SET_GPR_U32(ctx, 31, 0x1AF278u);
    ctx->pc = 0x1A6610u;
    if (runtime->hasFunction(0x1A6610u)) {
        auto targetFn = runtime->lookupFunction(0x1A6610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF278u; }
        if (ctx->pc != 0x1AF278u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A6610_0x1a6610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF278u; }
        if (ctx->pc != 0x1AF278u) { return; }
    }
    ctx->pc = 0x1AF278u;
label_1af278:
    // 0x1af278: 0xde0409a0  ld          $a0, 0x9A0($s0)
    ctx->pc = 0x1af278u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 2464)));
    // 0x1af27c: 0xc0699f2  jal         func_1A67C8
    ctx->pc = 0x1AF27Cu;
    SET_GPR_U32(ctx, 31, 0x1AF284u);
    ctx->pc = 0x1AF280u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF27Cu;
            // 0x1af280: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A67C8u;
    if (runtime->hasFunction(0x1A67C8u)) {
        auto targetFn = runtime->lookupFunction(0x1A67C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF284u; }
        if (ctx->pc != 0x1AF284u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A67C8_0x1a67c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF284u; }
        if (ctx->pc != 0x1AF284u) { return; }
    }
    ctx->pc = 0x1AF284u;
label_1af284:
    // 0x1af284: 0xfe0209a0  sd          $v0, 0x9A0($s0)
    ctx->pc = 0x1af284u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 2464), GPR_U64(ctx, 2));
label_1af288:
    // 0x1af288: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1af288u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1af28c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1af28cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1af290: 0x3e00008  jr          $ra
    ctx->pc = 0x1AF290u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AF294u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF290u;
            // 0x1af294: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AF298u;
    // 0x1af298: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1af298u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1af29c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1af29cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1af2a0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1af2a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1af2a4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1af2a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af2a8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1af2a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1af2ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1af2acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1af2b0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1af2b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1af2b4: 0xc06d81c  jal         func_1B6070
    ctx->pc = 0x1AF2B4u;
    SET_GPR_U32(ctx, 31, 0x1AF2BCu);
    ctx->pc = 0x1AF2B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF2B4u;
            // 0x1af2b8: 0x26322418  addiu       $s2, $s1, 0x2418 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 9240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6070u;
    if (runtime->hasFunction(0x1B6070u)) {
        auto targetFn = runtime->lookupFunction(0x1B6070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF2BCu; }
        if (ctx->pc != 0x1AF2BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6070_0x1b6070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF2BCu; }
        if (ctx->pc != 0x1AF2BCu) { return; }
    }
    ctx->pc = 0x1AF2BCu;
label_1af2bc:
    // 0x1af2bc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1af2bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af2c0: 0x10400046  beqz        $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x1AF2C0u;
    {
        const bool branch_taken_0x1af2c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF2C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF2C0u;
            // 0x1af2c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af2c0) {
            ctx->pc = 0x1AF3DCu;
            goto label_1af3dc;
        }
    }
    ctx->pc = 0x1AF2C8u;
    // 0x1af2c8: 0xc06bcfe  jal         func_1AF3F8
    ctx->pc = 0x1AF2C8u;
    SET_GPR_U32(ctx, 31, 0x1AF2D0u);
    ctx->pc = 0x1AF2CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF2C8u;
            // 0x1af2cc: 0xae322030  sw          $s2, 0x2030($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8240), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AF3F8u;
    if (runtime->hasFunction(0x1AF3F8u)) {
        auto targetFn = runtime->lookupFunction(0x1AF3F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF2D0u; }
        if (ctx->pc != 0x1AF2D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF3F8_0x1af3f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF2D0u; }
        if (ctx->pc != 0x1AF2D0u) { return; }
    }
    ctx->pc = 0x1AF2D0u;
label_1af2d0:
    // 0x1af2d0: 0x14400042  bnez        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x1AF2D0u;
    {
        const bool branch_taken_0x1af2d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AF2D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF2D0u;
            // 0x1af2d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af2d0) {
            ctx->pc = 0x1AF3DCu;
            goto label_1af3dc;
        }
    }
    ctx->pc = 0x1AF2D8u;
    // 0x1af2d8: 0xc06c560  jal         func_1B1580
    ctx->pc = 0x1AF2D8u;
    SET_GPR_U32(ctx, 31, 0x1AF2E0u);
    ctx->pc = 0x1B1580u;
    if (runtime->hasFunction(0x1B1580u)) {
        auto targetFn = runtime->lookupFunction(0x1B1580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF2E0u; }
        if (ctx->pc != 0x1AF2E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B1580_0x1b1580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF2E0u; }
        if (ctx->pc != 0x1AF2E0u) { return; }
    }
    ctx->pc = 0x1AF2E0u;
label_1af2e0:
    // 0x1af2e0: 0xc0658a6  jal         func_196298
    ctx->pc = 0x1AF2E0u;
    SET_GPR_U32(ctx, 31, 0x1AF2E8u);
    ctx->pc = 0x196298u;
    if (runtime->hasFunction(0x196298u)) {
        auto targetFn = runtime->lookupFunction(0x196298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF2E8u; }
        if (ctx->pc != 0x1AF2E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00196298_0x196298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF2E8u; }
        if (ctx->pc != 0x1AF2E8u) { return; }
    }
    ctx->pc = 0x1AF2E8u;
label_1af2e8:
    // 0x1af2e8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1af2e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af2ec: 0x3c05001b  lui         $a1, 0x1B
    ctx->pc = 0x1af2ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)27 << 16));
    // 0x1af2f0: 0x24a5f7f8  addiu       $a1, $a1, -0x808
    ctx->pc = 0x1af2f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965240));
    // 0x1af2f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1af2f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af2f8: 0x1600000b  bnez        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x1AF2F8u;
    {
        const bool branch_taken_0x1af2f8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AF2FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF2F8u;
            // 0x1af2fc: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af2f8) {
            ctx->pc = 0x1AF328u;
            goto label_1af328;
        }
    }
    ctx->pc = 0x1AF300u;
    // 0x1af300: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1af300u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1af304: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1af304u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1af308: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1af308u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1af30c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1af30cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af310: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1af310u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1af314: 0x34a50f0a  ori         $a1, $a1, 0xF0A
    ctx->pc = 0x1af314u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3850);
    // 0x1af318: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1af318u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1af31c: 0x806a1ac  j           func_1A86B0
    ctx->pc = 0x1AF31Cu;
    ctx->pc = 0x1AF320u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF31Cu;
            // 0x1af320: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A86B0u;
    if (runtime->hasFunction(0x1A86B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A86B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A86B0_0x1a86b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1AF324u;
    // 0x1af324: 0x0  nop
    ctx->pc = 0x1af324u;
    // NOP
label_1af328:
    // 0x1af328: 0xc064ed6  jal         func_193B58
    ctx->pc = 0x1AF328u;
    SET_GPR_U32(ctx, 31, 0x1AF330u);
    ctx->pc = 0x193B58u;
    if (runtime->hasFunction(0x193B58u)) {
        auto targetFn = runtime->lookupFunction(0x193B58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF330u; }
        if (ctx->pc != 0x1AF330u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00193B58_0x193b58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF330u; }
        if (ctx->pc != 0x1AF330u) { return; }
    }
    ctx->pc = 0x1AF330u;
label_1af330:
    // 0x1af330: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1AF330u;
    {
        const bool branch_taken_0x1af330 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF330u;
            // 0x1af334: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af330) {
            ctx->pc = 0x1AF368u;
            goto label_1af368;
        }
    }
    ctx->pc = 0x1AF338u;
    // 0x1af338: 0xc06be72  jal         func_1AF9C8
    ctx->pc = 0x1AF338u;
    SET_GPR_U32(ctx, 31, 0x1AF340u);
    ctx->pc = 0x1AF33Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF338u;
            // 0x1af33c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AF9C8u;
    if (runtime->hasFunction(0x1AF9C8u)) {
        auto targetFn = runtime->lookupFunction(0x1AF9C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF340u; }
        if (ctx->pc != 0x1AF340u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF9C8_0x1af9c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF340u; }
        if (ctx->pc != 0x1AF340u) { return; }
    }
    ctx->pc = 0x1AF340u;
label_1af340:
    // 0x1af340: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1af340u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af344: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1af344u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1af348: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1af348u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1af34c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1af34cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1af350: 0x34a50f0b  ori         $a1, $a1, 0xF0B
    ctx->pc = 0x1af350u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3851);
    // 0x1af354: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1af354u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1af358: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1af358u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1af35c: 0x806a1ac  j           func_1A86B0
    ctx->pc = 0x1AF35Cu;
    ctx->pc = 0x1AF360u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF35Cu;
            // 0x1af360: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A86B0u;
    if (runtime->hasFunction(0x1A86B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A86B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A86B0_0x1a86b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1AF364u;
    // 0x1af364: 0x0  nop
    ctx->pc = 0x1af364u;
    // NOP
label_1af368:
    // 0x1af368: 0xc06d81c  jal         func_1B6070
    ctx->pc = 0x1AF368u;
    SET_GPR_U32(ctx, 31, 0x1AF370u);
    ctx->pc = 0x1AF36Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF368u;
            // 0x1af36c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6070u;
    if (runtime->hasFunction(0x1B6070u)) {
        auto targetFn = runtime->lookupFunction(0x1B6070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF370u; }
        if (ctx->pc != 0x1AF370u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6070_0x1b6070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF370u; }
        if (ctx->pc != 0x1AF370u) { return; }
    }
    ctx->pc = 0x1AF370u;
label_1af370:
    // 0x1af370: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1af370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af374: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1af374u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af378: 0xc06592c  jal         func_1964B0
    ctx->pc = 0x1AF378u;
    SET_GPR_U32(ctx, 31, 0x1AF380u);
    ctx->pc = 0x1AF37Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF378u;
            // 0x1af37c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1964B0u;
    if (runtime->hasFunction(0x1964B0u)) {
        auto targetFn = runtime->lookupFunction(0x1964B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF380u; }
        if (ctx->pc != 0x1AF380u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001964B0_0x1964b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF380u; }
        if (ctx->pc != 0x1AF380u) { return; }
    }
    ctx->pc = 0x1AF380u;
label_1af380:
    // 0x1af380: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1af380u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af384: 0xc06d81c  jal         func_1B6070
    ctx->pc = 0x1AF384u;
    SET_GPR_U32(ctx, 31, 0x1AF38Cu);
    ctx->pc = 0x1AF388u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF384u;
            // 0x1af388: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6070u;
    if (runtime->hasFunction(0x1B6070u)) {
        auto targetFn = runtime->lookupFunction(0x1B6070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF38Cu; }
        if (ctx->pc != 0x1AF38Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6070_0x1b6070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF38Cu; }
        if (ctx->pc != 0x1AF38Cu) { return; }
    }
    ctx->pc = 0x1AF38Cu;
label_1af38c:
    // 0x1af38c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1af38cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af390: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1af390u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1af394: 0xc06592c  jal         func_1964B0
    ctx->pc = 0x1AF394u;
    SET_GPR_U32(ctx, 31, 0x1AF39Cu);
    ctx->pc = 0x1AF398u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF394u;
            // 0x1af398: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1964B0u;
    if (runtime->hasFunction(0x1964B0u)) {
        auto targetFn = runtime->lookupFunction(0x1964B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF39Cu; }
        if (ctx->pc != 0x1AF39Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001964B0_0x1964b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF39Cu; }
        if (ctx->pc != 0x1AF39Cu) { return; }
    }
    ctx->pc = 0x1AF39Cu;
label_1af39c:
    // 0x1af39c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1af39cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af3a0: 0x8e260038  lw          $a2, 0x38($s1)
    ctx->pc = 0x1af3a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x1af3a4: 0xc06592c  jal         func_1964B0
    ctx->pc = 0x1AF3A4u;
    SET_GPR_U32(ctx, 31, 0x1AF3ACu);
    ctx->pc = 0x1AF3A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF3A4u;
            // 0x1af3a8: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1964B0u;
    if (runtime->hasFunction(0x1964B0u)) {
        auto targetFn = runtime->lookupFunction(0x1964B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF3ACu; }
        if (ctx->pc != 0x1AF3ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001964B0_0x1964b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF3ACu; }
        if (ctx->pc != 0x1AF3ACu) { return; }
    }
    ctx->pc = 0x1AF3ACu;
label_1af3ac:
    // 0x1af3ac: 0xc06cf70  jal         func_1B3DC0
    ctx->pc = 0x1AF3ACu;
    SET_GPR_U32(ctx, 31, 0x1AF3B4u);
    ctx->pc = 0x1AF3B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF3ACu;
            // 0x1af3b0: 0xae500000  sw          $s0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3DC0u;
    if (runtime->hasFunction(0x1B3DC0u)) {
        auto targetFn = runtime->lookupFunction(0x1B3DC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF3B4u; }
        if (ctx->pc != 0x1AF3B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B3DC0_0x1b3dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF3B4u; }
        if (ctx->pc != 0x1AF3B4u) { return; }
    }
    ctx->pc = 0x1AF3B4u;
label_1af3b4:
    // 0x1af3b4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1AF3B4u;
    {
        const bool branch_taken_0x1af3b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF3B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF3B4u;
            // 0x1af3b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af3b4) {
            ctx->pc = 0x1AF3D8u;
            goto label_1af3d8;
        }
    }
    ctx->pc = 0x1AF3BCu;
    // 0x1af3bc: 0x3c02006e  lui         $v0, 0x6E
    ctx->pc = 0x1af3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)110 << 16));
    // 0x1af3c0: 0x3c03006e  lui         $v1, 0x6E
    ctx->pc = 0x1af3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)110 << 16));
    // 0x1af3c4: 0x8c451e20  lw          $a1, 0x1E20($v0)
    ctx->pc = 0x1af3c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7712)));
    // 0x1af3c8: 0x3c02006e  lui         $v0, 0x6E
    ctx->pc = 0x1af3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)110 << 16));
    // 0x1af3cc: 0x8c661e24  lw          $a2, 0x1E24($v1)
    ctx->pc = 0x1af3ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7716)));
    // 0x1af3d0: 0xc06ac4a  jal         func_1AB128
    ctx->pc = 0x1AF3D0u;
    SET_GPR_U32(ctx, 31, 0x1AF3D8u);
    ctx->pc = 0x1AF3D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF3D0u;
            // 0x1af3d4: 0x8c471e28  lw          $a3, 0x1E28($v0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7720)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AB128u;
    if (runtime->hasFunction(0x1AB128u)) {
        auto targetFn = runtime->lookupFunction(0x1AB128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF3D8u; }
        if (ctx->pc != 0x1AF3D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AB128_0x1ab128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF3D8u; }
        if (ctx->pc != 0x1AF3D8u) { return; }
    }
    ctx->pc = 0x1AF3D8u;
label_1af3d8:
    // 0x1af3d8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1af3d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1af3dc:
    // 0x1af3dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1af3dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1af3e0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1af3e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1af3e4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1af3e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1af3e8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1af3e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1af3ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1AF3ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AF3F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF3ECu;
            // 0x1af3f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AF3F4u;
    // 0x1af3f4: 0x0  nop
    ctx->pc = 0x1af3f4u;
    // NOP
}
