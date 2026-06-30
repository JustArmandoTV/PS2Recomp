#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001858D0
// Address: 0x1858d0 - 0x1859e8
void sub_001858D0_0x1858d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001858D0_0x1858d0");
#endif

    switch (ctx->pc) {
        case 0x1858d0u: goto label_1858d0;
        case 0x1858d4u: goto label_1858d4;
        case 0x1858d8u: goto label_1858d8;
        case 0x1858dcu: goto label_1858dc;
        case 0x1858e0u: goto label_1858e0;
        case 0x1858e4u: goto label_1858e4;
        case 0x1858e8u: goto label_1858e8;
        case 0x1858ecu: goto label_1858ec;
        case 0x1858f0u: goto label_1858f0;
        case 0x1858f4u: goto label_1858f4;
        case 0x1858f8u: goto label_1858f8;
        case 0x1858fcu: goto label_1858fc;
        case 0x185900u: goto label_185900;
        case 0x185904u: goto label_185904;
        case 0x185908u: goto label_185908;
        case 0x18590cu: goto label_18590c;
        case 0x185910u: goto label_185910;
        case 0x185914u: goto label_185914;
        case 0x185918u: goto label_185918;
        case 0x18591cu: goto label_18591c;
        case 0x185920u: goto label_185920;
        case 0x185924u: goto label_185924;
        case 0x185928u: goto label_185928;
        case 0x18592cu: goto label_18592c;
        case 0x185930u: goto label_185930;
        case 0x185934u: goto label_185934;
        case 0x185938u: goto label_185938;
        case 0x18593cu: goto label_18593c;
        case 0x185940u: goto label_185940;
        case 0x185944u: goto label_185944;
        case 0x185948u: goto label_185948;
        case 0x18594cu: goto label_18594c;
        case 0x185950u: goto label_185950;
        case 0x185954u: goto label_185954;
        case 0x185958u: goto label_185958;
        case 0x18595cu: goto label_18595c;
        case 0x185960u: goto label_185960;
        case 0x185964u: goto label_185964;
        case 0x185968u: goto label_185968;
        case 0x18596cu: goto label_18596c;
        case 0x185970u: goto label_185970;
        case 0x185974u: goto label_185974;
        case 0x185978u: goto label_185978;
        case 0x18597cu: goto label_18597c;
        case 0x185980u: goto label_185980;
        case 0x185984u: goto label_185984;
        case 0x185988u: goto label_185988;
        case 0x18598cu: goto label_18598c;
        case 0x185990u: goto label_185990;
        case 0x185994u: goto label_185994;
        case 0x185998u: goto label_185998;
        case 0x18599cu: goto label_18599c;
        case 0x1859a0u: goto label_1859a0;
        case 0x1859a4u: goto label_1859a4;
        case 0x1859a8u: goto label_1859a8;
        case 0x1859acu: goto label_1859ac;
        case 0x1859b0u: goto label_1859b0;
        case 0x1859b4u: goto label_1859b4;
        case 0x1859b8u: goto label_1859b8;
        case 0x1859bcu: goto label_1859bc;
        case 0x1859c0u: goto label_1859c0;
        case 0x1859c4u: goto label_1859c4;
        case 0x1859c8u: goto label_1859c8;
        case 0x1859ccu: goto label_1859cc;
        case 0x1859d0u: goto label_1859d0;
        case 0x1859d4u: goto label_1859d4;
        case 0x1859d8u: goto label_1859d8;
        case 0x1859dcu: goto label_1859dc;
        case 0x1859e0u: goto label_1859e0;
        case 0x1859e4u: goto label_1859e4;
        default: break;
    }

    ctx->pc = 0x1858d0u;

label_1858d0:
    // 0x1858d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1858d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1858d4:
    // 0x1858d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1858d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1858d8:
    // 0x1858d8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1858d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1858dc:
    // 0x1858dc: 0x1600000a  bnez        $s0, . + 4 + (0xA << 2)
label_1858e0:
    if (ctx->pc == 0x1858E0u) {
        ctx->pc = 0x1858E0u;
            // 0x1858e0: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->pc = 0x1858E4u;
        goto label_1858e4;
    }
    ctx->pc = 0x1858DCu;
    {
        const bool branch_taken_0x1858dc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1858E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1858DCu;
            // 0x1858e0: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1858dc) {
            ctx->pc = 0x185908u;
            goto label_185908;
        }
    }
    ctx->pc = 0x1858E4u;
label_1858e4:
    // 0x1858e4: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x1858e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_1858e8:
    // 0x1858e8: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x1858e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
label_1858ec:
    // 0x1858ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1858ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1858f0:
    // 0x1858f0: 0x24847b48  addiu       $a0, $a0, 0x7B48
    ctx->pc = 0x1858f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31560));
label_1858f4:
    // 0x1858f4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1858f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1858f8:
    // 0x1858f8: 0x24a57ae8  addiu       $a1, $a1, 0x7AE8
    ctx->pc = 0x1858f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31464));
label_1858fc:
    // 0x1858fc: 0x806151c  j           func_185470
label_185900:
    if (ctx->pc == 0x185900u) {
        ctx->pc = 0x185900u;
            // 0x185900: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x185904u;
        goto label_185904;
    }
    ctx->pc = 0x1858FCu;
    ctx->pc = 0x185900u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1858FCu;
            // 0x185900: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x185470u;
    if (runtime->hasFunction(0x185470u)) {
        auto targetFn = runtime->lookupFunction(0x185470u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00185470_0x185470(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x185904u;
label_185904:
    // 0x185904: 0x0  nop
    ctx->pc = 0x185904u;
    // NOP
label_185908:
    // 0x185908: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x185908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_18590c:
    // 0x18590c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_185910:
    if (ctx->pc == 0x185910u) {
        ctx->pc = 0x185910u;
            // 0x185910: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x185914u;
        goto label_185914;
    }
    ctx->pc = 0x18590Cu;
    {
        const bool branch_taken_0x18590c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x185910u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18590Cu;
            // 0x185910: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18590c) {
            ctx->pc = 0x185938u;
            goto label_185938;
        }
    }
    ctx->pc = 0x185914u;
label_185914:
    // 0x185914: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x185914u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_185918:
    // 0x185918: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x185918u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
label_18591c:
    // 0x18591c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x18591cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_185920:
    // 0x185920: 0x24847b58  addiu       $a0, $a0, 0x7B58
    ctx->pc = 0x185920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31576));
label_185924:
    // 0x185924: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x185924u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_185928:
    // 0x185928: 0x24a57b68  addiu       $a1, $a1, 0x7B68
    ctx->pc = 0x185928u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31592));
label_18592c:
    // 0x18592c: 0x806151c  j           func_185470
label_185930:
    if (ctx->pc == 0x185930u) {
        ctx->pc = 0x185930u;
            // 0x185930: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x185934u;
        goto label_185934;
    }
    ctx->pc = 0x18592Cu;
    ctx->pc = 0x185930u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18592Cu;
            // 0x185930: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x185470u;
    if (runtime->hasFunction(0x185470u)) {
        auto targetFn = runtime->lookupFunction(0x185470u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00185470_0x185470(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x185934u;
label_185934:
    // 0x185934: 0x0  nop
    ctx->pc = 0x185934u;
    // NOP
label_185938:
    // 0x185938: 0xc04a576  jal         func_1295D8
label_18593c:
    if (ctx->pc == 0x18593Cu) {
        ctx->pc = 0x18593Cu;
            // 0x18593c: 0x24060048  addiu       $a2, $zero, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
        ctx->pc = 0x185940u;
        goto label_185940;
    }
    ctx->pc = 0x185938u;
    SET_GPR_U32(ctx, 31, 0x185940u);
    ctx->pc = 0x18593Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185938u;
            // 0x18593c: 0x24060048  addiu       $a2, $zero, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185940u; }
        if (ctx->pc != 0x185940u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185940u; }
        if (ctx->pc != 0x185940u) { return; }
    }
    ctx->pc = 0x185940u;
label_185940:
    // 0x185940: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x185940u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_185944:
    // 0x185944: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x185944u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_185948:
    // 0x185948: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x185948u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_18594c:
    // 0x18594c: 0x3e00008  jr          $ra
label_185950:
    if (ctx->pc == 0x185950u) {
        ctx->pc = 0x185950u;
            // 0x185950: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x185954u;
        goto label_185954;
    }
    ctx->pc = 0x18594Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x185950u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18594Cu;
            // 0x185950: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x185954u;
label_185954:
    // 0x185954: 0x0  nop
    ctx->pc = 0x185954u;
    // NOP
label_185958:
    // 0x185958: 0x3e00008  jr          $ra
label_18595c:
    if (ctx->pc == 0x18595Cu) {
        ctx->pc = 0x18595Cu;
            // 0x18595c: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->pc = 0x185960u;
        goto label_185960;
    }
    ctx->pc = 0x185958u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18595Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185958u;
            // 0x18595c: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x185960u;
label_185960:
    // 0x185960: 0xac86003c  sw          $a2, 0x3C($a0)
    ctx->pc = 0x185960u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 6));
label_185964:
    // 0x185964: 0x3e00008  jr          $ra
label_185968:
    if (ctx->pc == 0x185968u) {
        ctx->pc = 0x185968u;
            // 0x185968: 0xac850038  sw          $a1, 0x38($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 5));
        ctx->pc = 0x18596Cu;
        goto label_18596c;
    }
    ctx->pc = 0x185964u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x185968u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185964u;
            // 0x185968: 0xac850038  sw          $a1, 0x38($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18596Cu;
label_18596c:
    // 0x18596c: 0x0  nop
    ctx->pc = 0x18596cu;
    // NOP
label_185970:
    // 0x185970: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x185970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_185974:
    // 0x185974: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x185974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_185978:
    // 0x185978: 0x10a20009  beq         $a1, $v0, . + 4 + (0x9 << 2)
label_18597c:
    if (ctx->pc == 0x18597Cu) {
        ctx->pc = 0x18597Cu;
            // 0x18597c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x185980u;
        goto label_185980;
    }
    ctx->pc = 0x185978u;
    {
        const bool branch_taken_0x185978 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x18597Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185978u;
            // 0x18597c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185978) {
            ctx->pc = 0x1859A0u;
            goto label_1859a0;
        }
    }
    ctx->pc = 0x185980u;
label_185980:
    // 0x185980: 0x8c820038  lw          $v0, 0x38($a0)
    ctx->pc = 0x185980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
label_185984:
    // 0x185984: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_185988:
    if (ctx->pc == 0x185988u) {
        ctx->pc = 0x185988u;
            // 0x185988: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x18598Cu;
        goto label_18598c;
    }
    ctx->pc = 0x185984u;
    {
        const bool branch_taken_0x185984 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x185984) {
            ctx->pc = 0x185988u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x185984u;
            // 0x185988: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1859ACu;
            goto label_1859ac;
        }
    }
    ctx->pc = 0x18598Cu;
label_18598c:
    // 0x18598c: 0x8c84003c  lw          $a0, 0x3C($a0)
    ctx->pc = 0x18598cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
label_185990:
    // 0x185990: 0x40f809  jalr        $v0
label_185994:
    if (ctx->pc == 0x185994u) {
        ctx->pc = 0x185994u;
            // 0x185994: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->pc = 0x185998u;
        goto label_185998;
    }
    ctx->pc = 0x185990u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x185998u);
        ctx->pc = 0x185994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185990u;
            // 0x185994: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x185998u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x185998u; }
            if (ctx->pc != 0x185998u) { return; }
        }
        }
    }
    ctx->pc = 0x185998u;
label_185998:
    // 0x185998: 0x10000004  b           . + 4 + (0x4 << 2)
label_18599c:
    if (ctx->pc == 0x18599Cu) {
        ctx->pc = 0x18599Cu;
            // 0x18599c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1859A0u;
        goto label_1859a0;
    }
    ctx->pc = 0x185998u;
    {
        const bool branch_taken_0x185998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18599Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185998u;
            // 0x18599c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185998) {
            ctx->pc = 0x1859ACu;
            goto label_1859ac;
        }
    }
    ctx->pc = 0x1859A0u;
label_1859a0:
    // 0x1859a0: 0xac870044  sw          $a3, 0x44($a0)
    ctx->pc = 0x1859a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 7));
label_1859a4:
    // 0x1859a4: 0xac860040  sw          $a2, 0x40($a0)
    ctx->pc = 0x1859a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 6));
label_1859a8:
    // 0x1859a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1859a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1859ac:
    // 0x1859ac: 0x3e00008  jr          $ra
label_1859b0:
    if (ctx->pc == 0x1859B0u) {
        ctx->pc = 0x1859B0u;
            // 0x1859b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1859B4u;
        goto label_1859b4;
    }
    ctx->pc = 0x1859ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1859B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1859ACu;
            // 0x1859b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1859B4u;
label_1859b4:
    // 0x1859b4: 0x0  nop
    ctx->pc = 0x1859b4u;
    // NOP
label_1859b8:
    // 0x1859b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1859b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1859bc:
    // 0x1859bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1859bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1859c0:
    // 0x1859c0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1859c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_1859c4:
    // 0x1859c4: 0xc06127c  jal         func_1849F0
label_1859c8:
    if (ctx->pc == 0x1859C8u) {
        ctx->pc = 0x1859C8u;
            // 0x1859c8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1859CCu;
        goto label_1859cc;
    }
    ctx->pc = 0x1859C4u;
    SET_GPR_U32(ctx, 31, 0x1859CCu);
    ctx->pc = 0x1859C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1859C4u;
            // 0x1859c8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1849F0u;
    if (runtime->hasFunction(0x1849F0u)) {
        auto targetFn = runtime->lookupFunction(0x1849F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1859CCu; }
        if (ctx->pc != 0x1859CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001849F0_0x1849f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1859CCu; }
        if (ctx->pc != 0x1859CCu) { return; }
    }
    ctx->pc = 0x1859CCu;
label_1859cc:
    // 0x1859cc: 0xc06167a  jal         func_1859E8
label_1859d0:
    if (ctx->pc == 0x1859D0u) {
        ctx->pc = 0x1859D0u;
            // 0x1859d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1859D4u;
        goto label_1859d4;
    }
    ctx->pc = 0x1859CCu;
    SET_GPR_U32(ctx, 31, 0x1859D4u);
    ctx->pc = 0x1859D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1859CCu;
            // 0x1859d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1859E8u;
    if (runtime->hasFunction(0x1859E8u)) {
        auto targetFn = runtime->lookupFunction(0x1859E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1859D4u; }
        if (ctx->pc != 0x1859D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001859E8_0x1859e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1859D4u; }
        if (ctx->pc != 0x1859D4u) { return; }
    }
    ctx->pc = 0x1859D4u;
label_1859d4:
    // 0x1859d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1859d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1859d8:
    // 0x1859d8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1859d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1859dc:
    // 0x1859dc: 0x8061282  j           func_184A08
label_1859e0:
    if (ctx->pc == 0x1859E0u) {
        ctx->pc = 0x1859E0u;
            // 0x1859e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1859E4u;
        goto label_1859e4;
    }
    ctx->pc = 0x1859DCu;
    ctx->pc = 0x1859E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1859DCu;
            // 0x1859e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x184A08u;
    if (runtime->hasFunction(0x184A08u)) {
        auto targetFn = runtime->lookupFunction(0x184A08u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00184A08_0x184a08(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1859E4u;
label_1859e4:
    // 0x1859e4: 0x0  nop
    ctx->pc = 0x1859e4u;
    // NOP
}
