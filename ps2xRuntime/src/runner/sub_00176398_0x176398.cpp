#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00176398
// Address: 0x176398 - 0x176548
void sub_00176398_0x176398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00176398_0x176398");
#endif

    switch (ctx->pc) {
        case 0x176400u: goto label_176400;
        case 0x176444u: goto label_176444;
        case 0x176480u: goto label_176480;
        case 0x176494u: goto label_176494;
        case 0x1764c4u: goto label_1764c4;
        case 0x1764d0u: goto label_1764d0;
        case 0x176524u: goto label_176524;
        case 0x176530u: goto label_176530;
        default: break;
    }

    ctx->pc = 0x176398u;

    // 0x176398: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x176398u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17639c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x17639cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1763a0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1763a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1763a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1763a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1763a8: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1763a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1763ac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1763acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1763b0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1763b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1763b4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1763b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1763b8: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1763B8u;
    {
        const bool branch_taken_0x1763b8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1763BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1763B8u;
            // 0x1763bc: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1763b8) {
            ctx->pc = 0x1763D0u;
            goto label_1763d0;
        }
    }
    ctx->pc = 0x1763C0u;
    // 0x1763c0: 0x52200004  beql        $s1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1763C0u;
    {
        const bool branch_taken_0x1763c0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1763c0) {
            ctx->pc = 0x1763C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1763C0u;
            // 0x1763c4: 0x3c040063  lui         $a0, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1763D4u;
            goto label_1763d4;
        }
    }
    ctx->pc = 0x1763C8u;
    // 0x1763c8: 0x601000b  bgez        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x1763C8u;
    {
        const bool branch_taken_0x1763c8 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x1763c8) {
            ctx->pc = 0x1763F8u;
            goto label_1763f8;
        }
    }
    ctx->pc = 0x1763D0u;
label_1763d0:
    // 0x1763d0: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x1763d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_1763d4:
    // 0x1763d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1763d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1763d8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1763d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1763dc: 0x248449b8  addiu       $a0, $a0, 0x49B8
    ctx->pc = 0x1763dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18872));
    // 0x1763e0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1763e0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1763e4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1763e4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1763e8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1763e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1763ec: 0x8059f4e  j           func_167D38
    ctx->pc = 0x1763ECu;
    ctx->pc = 0x1763F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1763ECu;
            // 0x1763f0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167D38u;
    if (runtime->hasFunction(0x167D38u)) {
        auto targetFn = runtime->lookupFunction(0x167D38u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00167D38_0x167d38(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1763F4u;
    // 0x1763f4: 0x0  nop
    ctx->pc = 0x1763f4u;
    // NOP
label_1763f8:
    // 0x1763f8: 0xc05cc84  jal         func_173210
    ctx->pc = 0x1763F8u;
    SET_GPR_U32(ctx, 31, 0x176400u);
    ctx->pc = 0x1763FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1763F8u;
            // 0x1763fc: 0x3c1300ff  lui         $s3, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173210u;
    if (runtime->hasFunction(0x173210u)) {
        auto targetFn = runtime->lookupFunction(0x173210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176400u; }
        if (ctx->pc != 0x176400u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00173210_0x173210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176400u; }
        if (ctx->pc != 0x176400u) { return; }
    }
    ctx->pc = 0x176400u;
label_176400:
    // 0x176400: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x176400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x176404: 0x32a03  sra         $a1, $v1, 8
    ctx->pc = 0x176404u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 8));
    // 0x176408: 0x32200  sll         $a0, $v1, 8
    ctx->pc = 0x176408u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x17640c: 0x31602  srl         $v0, $v1, 24
    ctx->pc = 0x17640cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 24));
    // 0x176410: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x176410u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x176414: 0x932024  and         $a0, $a0, $s3
    ctx->pc = 0x176414u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 19));
    // 0x176418: 0x30a5ff00  andi        $a1, $a1, 0xFF00
    ctx->pc = 0x176418u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65280);
    // 0x17641c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x17641cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x176420: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x176420u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x176424: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x176424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x176428: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x176428u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x17642c: 0x50400030  beql        $v0, $zero, . + 4 + (0x30 << 2)
    ctx->pc = 0x17642Cu;
    {
        const bool branch_taken_0x17642c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17642c) {
            ctx->pc = 0x176430u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17642Cu;
            // 0x176430: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1764F0u;
            goto label_1764f0;
        }
    }
    ctx->pc = 0x176434u;
    // 0x176434: 0x602002e  bltzl       $s0, . + 4 + (0x2E << 2)
    ctx->pc = 0x176434u;
    {
        const bool branch_taken_0x176434 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x176434) {
            ctx->pc = 0x176438u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x176434u;
            // 0x176438: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1764F0u;
            goto label_1764f0;
        }
    }
    ctx->pc = 0x17643Cu;
    // 0x17643c: 0xc0599d2  jal         func_166748
    ctx->pc = 0x17643Cu;
    SET_GPR_U32(ctx, 31, 0x176444u);
    ctx->pc = 0x166748u;
    if (runtime->hasFunction(0x166748u)) {
        auto targetFn = runtime->lookupFunction(0x166748u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176444u; }
        if (ctx->pc != 0x176444u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166748_0x166748(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176444u; }
        if (ctx->pc != 0x176444u) { return; }
    }
    ctx->pc = 0x176444u;
label_176444:
    // 0x176444: 0x3c054000  lui         $a1, 0x4000
    ctx->pc = 0x176444u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
    // 0x176448: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x176448u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x17644c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x17644cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x176450: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x176450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x176454: 0x33203  sra         $a2, $v1, 8
    ctx->pc = 0x176454u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 8));
    // 0x176458: 0x31200  sll         $v0, $v1, 8
    ctx->pc = 0x176458u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x17645c: 0x30c6ff00  andi        $a2, $a2, 0xFF00
    ctx->pc = 0x17645cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65280);
    // 0x176460: 0x32602  srl         $a0, $v1, 24
    ctx->pc = 0x176460u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 24));
    // 0x176464: 0x531024  and         $v0, $v0, $s3
    ctx->pc = 0x176464u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
    // 0x176468: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x176468u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x17646c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x17646cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x176470: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x176470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x176474: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x176474u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x176478: 0xc0612e8  jal         func_184BA0
    ctx->pc = 0x176478u;
    SET_GPR_U32(ctx, 31, 0x176480u);
    ctx->pc = 0x17647Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176478u;
            // 0x17647c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x184BA0u;
    if (runtime->hasFunction(0x184BA0u)) {
        auto targetFn = runtime->lookupFunction(0x184BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176480u; }
        if (ctx->pc != 0x176480u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00184BA0_0x184ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176480u; }
        if (ctx->pc != 0x176480u) { return; }
    }
    ctx->pc = 0x176480u;
label_176480:
    // 0x176480: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x176480u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176484: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x176484u;
    {
        const bool branch_taken_0x176484 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x176488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176484u;
            // 0x176488: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176484) {
            ctx->pc = 0x1764B8u;
            goto label_1764b8;
        }
    }
    ctx->pc = 0x17648Cu;
    // 0x17648c: 0xc0599d8  jal         func_166760
    ctx->pc = 0x17648Cu;
    SET_GPR_U32(ctx, 31, 0x176494u);
    ctx->pc = 0x166760u;
    if (runtime->hasFunction(0x166760u)) {
        auto targetFn = runtime->lookupFunction(0x166760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176494u; }
        if (ctx->pc != 0x176494u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166760_0x166760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176494u; }
        if (ctx->pc != 0x176494u) { return; }
    }
    ctx->pc = 0x176494u;
label_176494:
    // 0x176494: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x176494u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x176498: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x176498u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17649c: 0x248449e8  addiu       $a0, $a0, 0x49E8
    ctx->pc = 0x17649cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18920));
    // 0x1764a0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1764a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1764a4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1764a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1764a8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1764a8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1764ac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1764acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1764b0: 0x8059f4e  j           func_167D38
    ctx->pc = 0x1764B0u;
    ctx->pc = 0x1764B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1764B0u;
            // 0x1764b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167D38u;
    if (runtime->hasFunction(0x167D38u)) {
        auto targetFn = runtime->lookupFunction(0x167D38u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00167D38_0x167d38(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1764B8u;
label_1764b8:
    // 0x1764b8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1764b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1764bc: 0xc05cba8  jal         func_172EA0
    ctx->pc = 0x1764BCu;
    SET_GPR_U32(ctx, 31, 0x1764C4u);
    ctx->pc = 0x1764C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1764BCu;
            // 0x1764c0: 0xa2420002  sb          $v0, 0x2($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 2), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x172EA0u;
    if (runtime->hasFunction(0x172EA0u)) {
        auto targetFn = runtime->lookupFunction(0x172EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1764C4u; }
        if (ctx->pc != 0x1764C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00172EA0_0x172ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1764C4u; }
        if (ctx->pc != 0x1764C4u) { return; }
    }
    ctx->pc = 0x1764C4u;
label_1764c4:
    // 0x1764c4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1764c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1764c8: 0xc05d5c0  jal         func_175700
    ctx->pc = 0x1764C8u;
    SET_GPR_U32(ctx, 31, 0x1764D0u);
    ctx->pc = 0x1764CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1764C8u;
            // 0x1764cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175700u;
    if (runtime->hasFunction(0x175700u)) {
        auto targetFn = runtime->lookupFunction(0x175700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1764D0u; }
        if (ctx->pc != 0x1764D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175700_0x175700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1764D0u; }
        if (ctx->pc != 0x1764D0u) { return; }
    }
    ctx->pc = 0x1764D0u;
label_1764d0:
    // 0x1764d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1764d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1764d4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1764d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1764d8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1764d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1764dc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1764dcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1764e0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1764e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1764e4: 0x80599d8  j           func_166760
    ctx->pc = 0x1764E4u;
    ctx->pc = 0x1764E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1764E4u;
            // 0x1764e8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166760u;
    if (runtime->hasFunction(0x166760u)) {
        auto targetFn = runtime->lookupFunction(0x166760u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00166760_0x166760(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1764ECu;
    // 0x1764ec: 0x0  nop
    ctx->pc = 0x1764ecu;
    // NOP
label_1764f0:
    // 0x1764f0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1764f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1764f4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1764f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1764f8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1764f8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1764fc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1764fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x176500: 0x3e00008  jr          $ra
    ctx->pc = 0x176500u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x176504u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176500u;
            // 0x176504: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x176508u;
    // 0x176508: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x176508u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17650c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17650cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x176510: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x176510u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176514: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x176514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x176518: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x176518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17651c: 0xc0599de  jal         func_166778
    ctx->pc = 0x17651Cu;
    SET_GPR_U32(ctx, 31, 0x176524u);
    ctx->pc = 0x176520u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17651Cu;
            // 0x176520: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166778u;
    if (runtime->hasFunction(0x166778u)) {
        auto targetFn = runtime->lookupFunction(0x166778u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176524u; }
        if (ctx->pc != 0x176524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166778_0x166778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176524u; }
        if (ctx->pc != 0x176524u) { return; }
    }
    ctx->pc = 0x176524u;
label_176524:
    // 0x176524: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x176524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176528: 0xc05d952  jal         func_176548
    ctx->pc = 0x176528u;
    SET_GPR_U32(ctx, 31, 0x176530u);
    ctx->pc = 0x17652Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176528u;
            // 0x17652c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x176548u;
    if (runtime->hasFunction(0x176548u)) {
        auto targetFn = runtime->lookupFunction(0x176548u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176530u; }
        if (ctx->pc != 0x176530u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00176548_0x176548(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176530u; }
        if (ctx->pc != 0x176530u) { return; }
    }
    ctx->pc = 0x176530u;
label_176530:
    // 0x176530: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x176530u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x176534: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x176534u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x176538: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x176538u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17653c: 0x80599e0  j           func_166780
    ctx->pc = 0x17653Cu;
    ctx->pc = 0x176540u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17653Cu;
            // 0x176540: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166780u;
    if (runtime->hasFunction(0x166780u)) {
        auto targetFn = runtime->lookupFunction(0x166780u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00166780_0x166780(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x176544u;
    // 0x176544: 0x0  nop
    ctx->pc = 0x176544u;
    // NOP
}
