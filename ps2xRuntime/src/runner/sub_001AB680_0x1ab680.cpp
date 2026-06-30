#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001AB680
// Address: 0x1ab680 - 0x1ab790
void sub_001AB680_0x1ab680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AB680_0x1ab680");
#endif

    switch (ctx->pc) {
        case 0x1ab6acu: goto label_1ab6ac;
        case 0x1ab6dcu: goto label_1ab6dc;
        case 0x1ab700u: goto label_1ab700;
        case 0x1ab720u: goto label_1ab720;
        case 0x1ab730u: goto label_1ab730;
        case 0x1ab740u: goto label_1ab740;
        case 0x1ab768u: goto label_1ab768;
        default: break;
    }

    ctx->pc = 0x1ab680u;

    // 0x1ab680: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1ab680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1ab684: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1ab684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1ab688: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1ab688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1ab68c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1ab68cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab690: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1ab690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1ab694: 0x26500078  addiu       $s0, $s2, 0x78
    ctx->pc = 0x1ab694u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 120));
    // 0x1ab698: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1ab698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1ab69c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1ab69cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1ab6a0: 0x8e532030  lw          $s3, 0x2030($s2)
    ctx->pc = 0x1ab6a0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8240)));
    // 0x1ab6a4: 0xc06b20c  jal         func_1AC830
    ctx->pc = 0x1AB6A4u;
    SET_GPR_U32(ctx, 31, 0x1AB6ACu);
    ctx->pc = 0x1AB6A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB6A4u;
            // 0x1ab6a8: 0x8e710000  lw          $s1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AC830u;
    if (runtime->hasFunction(0x1AC830u)) {
        auto targetFn = runtime->lookupFunction(0x1AC830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB6ACu; }
        if (ctx->pc != 0x1AB6ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AC830_0x1ac830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB6ACu; }
        if (ctx->pc != 0x1AB6ACu) { return; }
    }
    ctx->pc = 0x1AB6ACu;
label_1ab6ac:
    // 0x1ab6ac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ab6acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ab6b0: 0x50430026  beql        $v0, $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x1AB6B0u;
    {
        const bool branch_taken_0x1ab6b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1ab6b0) {
            ctx->pc = 0x1AB6B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB6B0u;
            // 0x1ab6b4: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AB74Cu;
            goto label_1ab74c;
        }
    }
    ctx->pc = 0x1AB6B8u;
    // 0x1ab6b8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1ab6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ab6bc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1AB6BCu;
    {
        const bool branch_taken_0x1ab6bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB6C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB6BCu;
            // 0x1ab6c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab6bc) {
            ctx->pc = 0x1AB6D4u;
            goto label_1ab6d4;
        }
    }
    ctx->pc = 0x1AB6C4u;
    // 0x1ab6c4: 0x8e03007c  lw          $v1, 0x7C($s0)
    ctx->pc = 0x1ab6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x1ab6c8: 0x1060001f  beqz        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x1AB6C8u;
    {
        const bool branch_taken_0x1ab6c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB6CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB6C8u;
            // 0x1ab6cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab6c8) {
            ctx->pc = 0x1AB748u;
            goto label_1ab748;
        }
    }
    ctx->pc = 0x1AB6D0u;
    // 0x1ab6d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ab6d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ab6d4:
    // 0x1ab6d4: 0xc065030  jal         func_1940C0
    ctx->pc = 0x1AB6D4u;
    SET_GPR_U32(ctx, 31, 0x1AB6DCu);
    ctx->pc = 0x1AB6D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB6D4u;
            // 0x1ab6d8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1940C0u;
    if (runtime->hasFunction(0x1940C0u)) {
        auto targetFn = runtime->lookupFunction(0x1940C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB6DCu; }
        if (ctx->pc != 0x1AB6DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001940C0_0x1940c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB6DCu; }
        if (ctx->pc != 0x1AB6DCu) { return; }
    }
    ctx->pc = 0x1AB6DCu;
label_1ab6dc:
    // 0x1ab6dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ab6dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab6e0: 0x3c030003  lui         $v1, 0x3
    ctx->pc = 0x1ab6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3 << 16));
    // 0x1ab6e4: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x1ab6e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ab6e8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1ab6e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1ab6ec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ab6ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ab6f0: 0x10c30015  beq         $a2, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x1AB6F0u;
    {
        const bool branch_taken_0x1ab6f0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x1AB6F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB6F0u;
            // 0x1ab6f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab6f0) {
            ctx->pc = 0x1AB748u;
            goto label_1ab748;
        }
    }
    ctx->pc = 0x1AB6F8u;
    // 0x1ab6f8: 0xc069764  jal         func_1A5D90
    ctx->pc = 0x1AB6F8u;
    SET_GPR_U32(ctx, 31, 0x1AB700u);
    ctx->pc = 0x1A5D90u;
    if (runtime->hasFunction(0x1A5D90u)) {
        auto targetFn = runtime->lookupFunction(0x1A5D90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB700u; }
        if (ctx->pc != 0x1AB700u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A5D90_0x1a5d90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB700u; }
        if (ctx->pc != 0x1AB700u) { return; }
    }
    ctx->pc = 0x1AB700u;
label_1ab700:
    // 0x1ab700: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ab700u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab704: 0x8e630114  lw          $v1, 0x114($s3)
    ctx->pc = 0x1ab704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 276)));
    // 0x1ab708: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ab708u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ab70c: 0x43302a  slt         $a2, $v0, $v1
    ctx->pc = 0x1ab70cu;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1ab710: 0x10c0000d  beqz        $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x1AB710u;
    {
        const bool branch_taken_0x1ab710 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB710u;
            // 0x1ab714: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab710) {
            ctx->pc = 0x1AB748u;
            goto label_1ab748;
        }
    }
    ctx->pc = 0x1AB718u;
    // 0x1ab718: 0xc06e388  jal         func_1B8E20
    ctx->pc = 0x1AB718u;
    SET_GPR_U32(ctx, 31, 0x1AB720u);
    ctx->pc = 0x1B8E20u;
    if (runtime->hasFunction(0x1B8E20u)) {
        auto targetFn = runtime->lookupFunction(0x1B8E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB720u; }
        if (ctx->pc != 0x1AB720u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8E20_0x1b8e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB720u; }
        if (ctx->pc != 0x1AB720u) { return; }
    }
    ctx->pc = 0x1AB720u;
label_1ab720:
    // 0x1ab720: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ab720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab724: 0x2c510001  sltiu       $s1, $v0, 0x1
    ctx->pc = 0x1ab724u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1ab728: 0xc069764  jal         func_1A5D90
    ctx->pc = 0x1AB728u;
    SET_GPR_U32(ctx, 31, 0x1AB730u);
    ctx->pc = 0x1AB72Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB728u;
            // 0x1ab72c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A5D90u;
    if (runtime->hasFunction(0x1A5D90u)) {
        auto targetFn = runtime->lookupFunction(0x1A5D90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB730u; }
        if (ctx->pc != 0x1AB730u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A5D90_0x1a5d90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB730u; }
        if (ctx->pc != 0x1AB730u) { return; }
    }
    ctx->pc = 0x1AB730u;
label_1ab730:
    // 0x1ab730: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ab730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab734: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1ab734u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab738: 0xc069754  jal         func_1A5D50
    ctx->pc = 0x1AB738u;
    SET_GPR_U32(ctx, 31, 0x1AB740u);
    ctx->pc = 0x1AB73Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB738u;
            // 0x1ab73c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A5D50u;
    if (runtime->hasFunction(0x1A5D50u)) {
        auto targetFn = runtime->lookupFunction(0x1A5D50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB740u; }
        if (ctx->pc != 0x1AB740u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A5D50_0x1a5d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB740u; }
        if (ctx->pc != 0x1AB740u) { return; }
    }
    ctx->pc = 0x1AB740u;
label_1ab740:
    // 0x1ab740: 0x202802a  slt         $s0, $s0, $v0
    ctx->pc = 0x1ab740u;
    SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1ab744: 0x2e020001  sltiu       $v0, $s0, 0x1
    ctx->pc = 0x1ab744u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1ab748:
    // 0x1ab748: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1ab748u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1ab74c:
    // 0x1ab74c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1ab74cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ab750: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1ab750u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ab754: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1ab754u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ab758: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1ab758u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ab75c: 0x3e00008  jr          $ra
    ctx->pc = 0x1AB75Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AB760u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB75Cu;
            // 0x1ab760: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AB764u;
    // 0x1ab764: 0x0  nop
    ctx->pc = 0x1ab764u;
    // NOP
label_1ab768:
    // 0x1ab768: 0x24840ea0  addiu       $a0, $a0, 0xEA0
    ctx->pc = 0x1ab768u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3744));
    // 0x1ab76c: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x1ab76cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x1ab770: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x1ab770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x1ab774: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1ab774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1ab778: 0x10620002  beq         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1AB778u;
    {
        const bool branch_taken_0x1ab778 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AB77Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB778u;
            // 0x1ab77c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab778) {
            ctx->pc = 0x1AB784u;
            goto label_1ab784;
        }
    }
    ctx->pc = 0x1AB780u;
    // 0x1ab780: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1ab780u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_1ab784:
    // 0x1ab784: 0x3e00008  jr          $ra
    ctx->pc = 0x1AB784u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AB78Cu;
    // 0x1ab78c: 0x0  nop
    ctx->pc = 0x1ab78cu;
    // NOP
}
