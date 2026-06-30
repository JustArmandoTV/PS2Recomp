#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017CD30
// Address: 0x17cd30 - 0x17d198
void sub_0017CD30_0x17cd30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017CD30_0x17cd30");
#endif

    switch (ctx->pc) {
        case 0x17cda0u: goto label_17cda0;
        case 0x17cdc0u: goto label_17cdc0;
        case 0x17cdd4u: goto label_17cdd4;
        case 0x17cdf4u: goto label_17cdf4;
        case 0x17ce04u: goto label_17ce04;
        case 0x17ce0cu: goto label_17ce0c;
        case 0x17ce14u: goto label_17ce14;
        case 0x17ce1cu: goto label_17ce1c;
        case 0x17ce28u: goto label_17ce28;
        case 0x17ce40u: goto label_17ce40;
        case 0x17ce48u: goto label_17ce48;
        case 0x17cef4u: goto label_17cef4;
        case 0x17cf3cu: goto label_17cf3c;
        case 0x17cfd4u: goto label_17cfd4;
        case 0x17d050u: goto label_17d050;
        case 0x17d080u: goto label_17d080;
        case 0x17d0e0u: goto label_17d0e0;
        case 0x17d100u: goto label_17d100;
        case 0x17d110u: goto label_17d110;
        case 0x17d130u: goto label_17d130;
        case 0x17d138u: goto label_17d138;
        case 0x17d140u: goto label_17d140;
        case 0x17d148u: goto label_17d148;
        case 0x17d150u: goto label_17d150;
        default: break;
    }

    ctx->pc = 0x17cd30u;

label_17cd30:
    // 0x17cd30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17cd30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17cd34: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17cd34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cd38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17cd38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17cd3c: 0x24060048  addiu       $a2, $zero, 0x48
    ctx->pc = 0x17cd3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x17cd40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17cd40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17cd44: 0x804a576  j           func_1295D8
    ctx->pc = 0x17CD44u;
    ctx->pc = 0x17CD48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17CD44u;
            // 0x17cd48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001295D8_0x1295d8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x17CD4Cu;
    // 0x17cd4c: 0x0  nop
    ctx->pc = 0x17cd4cu;
    // NOP
    // 0x17cd50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17cd50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17cd54: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x17cd54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x17cd58: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x17cd58u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cd5c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17cd5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17cd60: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17cd60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17cd64: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x17cd64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x17cd68: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x17cd68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x17cd6c: 0x16400004  bnez        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x17CD6Cu;
    {
        const bool branch_taken_0x17cd6c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x17CD70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17CD6Cu;
            // 0x17cd70: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cd6c) {
            ctx->pc = 0x17CD80u;
            goto label_17cd80;
        }
    }
    ctx->pc = 0x17CD74u;
    // 0x17cd74: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x17cd74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
    // 0x17cd78: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x17CD78u;
    {
        const bool branch_taken_0x17cd78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17CD7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17CD78u;
            // 0x17cd7c: 0x24a55ec0  addiu       $a1, $a1, 0x5EC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cd78) {
            ctx->pc = 0x17CDB8u;
            goto label_17cdb8;
        }
    }
    ctx->pc = 0x17CD80u;
label_17cd80:
    // 0x17cd80: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x17CD80u;
    {
        const bool branch_taken_0x17cd80 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x17CD84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17CD80u;
            // 0x17cd84: 0x3c050063  lui         $a1, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cd80) {
            ctx->pc = 0x17CD98u;
            goto label_17cd98;
        }
    }
    ctx->pc = 0x17CD88u;
    // 0x17cd88: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x17cd88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cd8c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x17CD8Cu;
    {
        const bool branch_taken_0x17cd8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17CD90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17CD8Cu;
            // 0x17cd90: 0x24a55ee8  addiu       $a1, $a1, 0x5EE8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24296));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cd8c) {
            ctx->pc = 0x17CDB8u;
            goto label_17cdb8;
        }
    }
    ctx->pc = 0x17CD94u;
    // 0x17cd94: 0x0  nop
    ctx->pc = 0x17cd94u;
    // NOP
label_17cd98:
    // 0x17cd98: 0xc05f33e  jal         func_17CCF8
    ctx->pc = 0x17CD98u;
    SET_GPR_U32(ctx, 31, 0x17CDA0u);
    ctx->pc = 0x17CCF8u;
    if (runtime->hasFunction(0x17CCF8u)) {
        auto targetFn = runtime->lookupFunction(0x17CCF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CDA0u; }
        if (ctx->pc != 0x17CDA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017CCF8_0x17ccf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CDA0u; }
        if (ctx->pc != 0x17CDA0u) { return; }
    }
    ctx->pc = 0x17CDA0u;
label_17cda0:
    // 0x17cda0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x17cda0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cda4: 0x16200008  bnez        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x17CDA4u;
    {
        const bool branch_taken_0x17cda4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x17CDA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17CDA4u;
            // 0x17cda8: 0x26330020  addiu       $s3, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cda4) {
            ctx->pc = 0x17CDC8u;
            goto label_17cdc8;
        }
    }
    ctx->pc = 0x17CDACu;
    // 0x17cdac: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x17cdacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
    // 0x17cdb0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x17cdb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cdb4: 0x24a55f10  addiu       $a1, $a1, 0x5F10
    ctx->pc = 0x17cdb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24336));
label_17cdb8:
    // 0x17cdb8: 0xc05f242  jal         func_17C908
    ctx->pc = 0x17CDB8u;
    SET_GPR_U32(ctx, 31, 0x17CDC0u);
    ctx->pc = 0x17C908u;
    if (runtime->hasFunction(0x17C908u)) {
        auto targetFn = runtime->lookupFunction(0x17C908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CDC0u; }
        if (ctx->pc != 0x17CDC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017C908_0x17c908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CDC0u; }
        if (ctx->pc != 0x17CDC0u) { return; }
    }
    ctx->pc = 0x17CDC0u;
label_17cdc0:
    // 0x17cdc0: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x17CDC0u;
    {
        const bool branch_taken_0x17cdc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17CDC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17CDC0u;
            // 0x17cdc4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cdc0) {
            ctx->pc = 0x17CEA8u;
            goto label_17cea8;
        }
    }
    ctx->pc = 0x17CDC8u;
label_17cdc8:
    // 0x17cdc8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x17cdc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cdcc: 0xc05f77a  jal         func_17DDE8
    ctx->pc = 0x17CDCCu;
    SET_GPR_U32(ctx, 31, 0x17CDD4u);
    ctx->pc = 0x17CDD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17CDCCu;
            // 0x17cdd0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DDE8u;
    if (runtime->hasFunction(0x17DDE8u)) {
        auto targetFn = runtime->lookupFunction(0x17DDE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CDD4u; }
        if (ctx->pc != 0x17CDD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017DDE8_0x17dde8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CDD4u; }
        if (ctx->pc != 0x17CDD4u) { return; }
    }
    ctx->pc = 0x17CDD4u;
label_17cdd4:
    // 0x17cdd4: 0x8e250024  lw          $a1, 0x24($s1)
    ctx->pc = 0x17cdd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x17cdd8: 0x14a0001f  bnez        $a1, . + 4 + (0x1F << 2)
    ctx->pc = 0x17CDD8u;
    {
        const bool branch_taken_0x17cdd8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x17CDDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17CDD8u;
            // 0x17cddc: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cdd8) {
            ctx->pc = 0x17CE58u;
            goto label_17ce58;
        }
    }
    ctx->pc = 0x17CDE0u;
    // 0x17cde0: 0x3c10005e  lui         $s0, 0x5E
    ctx->pc = 0x17cde0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)94 << 16));
    // 0x17cde4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x17cde4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cde8: 0x26106410  addiu       $s0, $s0, 0x6410
    ctx->pc = 0x17cde8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 25616));
    // 0x17cdec: 0xc05f55e  jal         func_17D578
    ctx->pc = 0x17CDECu;
    SET_GPR_U32(ctx, 31, 0x17CDF4u);
    ctx->pc = 0x17CDF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17CDECu;
            // 0x17cdf0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D578u;
    if (runtime->hasFunction(0x17D578u)) {
        auto targetFn = runtime->lookupFunction(0x17D578u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CDF4u; }
        if (ctx->pc != 0x17CDF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017D578_0x17d578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CDF4u; }
        if (ctx->pc != 0x17CDF4u) { return; }
    }
    ctx->pc = 0x17CDF4u;
label_17cdf4:
    // 0x17cdf4: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x17cdf4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x17cdf8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17cdf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cdfc: 0xc05b99c  jal         func_16E670
    ctx->pc = 0x17CDFCu;
    SET_GPR_U32(ctx, 31, 0x17CE04u);
    ctx->pc = 0x17CE00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17CDFCu;
            // 0x17ce00: 0x24845f40  addiu       $a0, $a0, 0x5F40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E670u;
    if (runtime->hasFunction(0x16E670u)) {
        auto targetFn = runtime->lookupFunction(0x16E670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CE04u; }
        if (ctx->pc != 0x17CE04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016E670_0x16e670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CE04u; }
        if (ctx->pc != 0x17CE04u) { return; }
    }
    ctx->pc = 0x17CE04u;
label_17ce04:
    // 0x17ce04: 0xc05ed3a  jal         func_17B4E8
    ctx->pc = 0x17CE04u;
    SET_GPR_U32(ctx, 31, 0x17CE0Cu);
    ctx->pc = 0x17CE08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17CE04u;
            // 0x17ce08: 0x34048300  ori         $a0, $zero, 0x8300 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33536);
        ctx->in_delay_slot = false;
    ctx->pc = 0x17B4E8u;
    if (runtime->hasFunction(0x17B4E8u)) {
        auto targetFn = runtime->lookupFunction(0x17B4E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CE0Cu; }
        if (ctx->pc != 0x17CE0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017B4E8_0x17b4e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CE0Cu; }
        if (ctx->pc != 0x17CE0Cu) { return; }
    }
    ctx->pc = 0x17CE0Cu;
label_17ce0c:
    // 0x17ce0c: 0xc047aee  jal         func_11EBB8
    ctx->pc = 0x17CE0Cu;
    SET_GPR_U32(ctx, 31, 0x17CE14u);
    ctx->pc = 0x17CE10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17CE0Cu;
            // 0x17ce10: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11EBB8u;
    if (runtime->hasFunction(0x11EBB8u)) {
        auto targetFn = runtime->lookupFunction(0x11EBB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CE14u; }
        if (ctx->pc != 0x17CE14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011EBB8_0x11ebb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CE14u; }
        if (ctx->pc != 0x17CE14u) { return; }
    }
    ctx->pc = 0x17CE14u;
label_17ce14:
    // 0x17ce14: 0xc05ed3a  jal         func_17B4E8
    ctx->pc = 0x17CE14u;
    SET_GPR_U32(ctx, 31, 0x17CE1Cu);
    ctx->pc = 0x17CE18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17CE14u;
            // 0x17ce18: 0x34048301  ori         $a0, $zero, 0x8301 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33537);
        ctx->in_delay_slot = false;
    ctx->pc = 0x17B4E8u;
    if (runtime->hasFunction(0x17B4E8u)) {
        auto targetFn = runtime->lookupFunction(0x17B4E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CE1Cu; }
        if (ctx->pc != 0x17CE1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017B4E8_0x17b4e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CE1Cu; }
        if (ctx->pc != 0x17CE1Cu) { return; }
    }
    ctx->pc = 0x17CE1Cu;
label_17ce1c:
    // 0x17ce1c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x17ce1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ce20: 0xc05f24e  jal         func_17C938
    ctx->pc = 0x17CE20u;
    SET_GPR_U32(ctx, 31, 0x17CE28u);
    ctx->pc = 0x17CE24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17CE20u;
            // 0x17ce24: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17C938u;
    if (runtime->hasFunction(0x17C938u)) {
        auto targetFn = runtime->lookupFunction(0x17C938u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CE28u; }
        if (ctx->pc != 0x17CE28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017C938_0x17c938(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CE28u; }
        if (ctx->pc != 0x17CE28u) { return; }
    }
    ctx->pc = 0x17CE28u;
label_17ce28:
    // 0x17ce28: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x17CE28u;
    {
        const bool branch_taken_0x17ce28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17ce28) {
            ctx->pc = 0x17CE2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17CE28u;
            // 0x17ce2c: 0xa2200001  sb          $zero, 0x1($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17CE50u;
            goto label_17ce50;
        }
    }
    ctx->pc = 0x17CE30u;
    // 0x17ce30: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x17ce30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
    // 0x17ce34: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x17ce34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ce38: 0xc05f242  jal         func_17C908
    ctx->pc = 0x17CE38u;
    SET_GPR_U32(ctx, 31, 0x17CE40u);
    ctx->pc = 0x17CE3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17CE38u;
            // 0x17ce3c: 0x24a55f68  addiu       $a1, $a1, 0x5F68 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24424));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17C908u;
    if (runtime->hasFunction(0x17C908u)) {
        auto targetFn = runtime->lookupFunction(0x17C908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CE40u; }
        if (ctx->pc != 0x17CE40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017C908_0x17c908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CE40u; }
        if (ctx->pc != 0x17CE40u) { return; }
    }
    ctx->pc = 0x17CE40u;
label_17ce40:
    // 0x17ce40: 0xc05f34c  jal         func_17CD30
    ctx->pc = 0x17CE40u;
    SET_GPR_U32(ctx, 31, 0x17CE48u);
    ctx->pc = 0x17CE44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17CE40u;
            // 0x17ce44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17CD30u;
    goto label_17cd30;
    ctx->pc = 0x17CE48u;
label_17ce48:
    // 0x17ce48: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x17CE48u;
    {
        const bool branch_taken_0x17ce48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17CE4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17CE48u;
            // 0x17ce4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ce48) {
            ctx->pc = 0x17CEA8u;
            goto label_17cea8;
        }
    }
    ctx->pc = 0x17CE50u;
label_17ce50:
    // 0x17ce50: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x17CE50u;
    {
        const bool branch_taken_0x17ce50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17CE54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17CE50u;
            // 0x17ce54: 0x8e250024  lw          $a1, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ce50) {
            ctx->pc = 0x17CE60u;
            goto label_17ce60;
        }
    }
    ctx->pc = 0x17CE58u;
label_17ce58:
    // 0x17ce58: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17ce58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17ce5c: 0xa2220001  sb          $v0, 0x1($s1)
    ctx->pc = 0x17ce5cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 2));
label_17ce60:
    // 0x17ce60: 0x24a207ff  addiu       $v0, $a1, 0x7FF
    ctx->pc = 0x17ce60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 2047));
    // 0x17ce64: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x17ce64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17ce68: 0x212c2  srl         $v0, $v0, 11
    ctx->pc = 0x17ce68u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 11));
    // 0x17ce6c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x17ce6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17ce70: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x17ce70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x17ce74: 0xa2230000  sb          $v1, 0x0($s1)
    ctx->pc = 0x17ce74u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x17ce78: 0xae250004  sw          $a1, 0x4($s1)
    ctx->pc = 0x17ce78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 5));
    // 0x17ce7c: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x17ce7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x17ce80: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x17ce80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
    // 0x17ce84: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x17ce84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x17ce88: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x17ce88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x17ce8c: 0xa2200002  sb          $zero, 0x2($s1)
    ctx->pc = 0x17ce8cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x17ce90: 0x16840004  bne         $s4, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17CE90u;
    {
        const bool branch_taken_0x17ce90 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 4));
        ctx->pc = 0x17CE94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17CE90u;
            // 0x17ce94: 0xae20001c  sw          $zero, 0x1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ce90) {
            ctx->pc = 0x17CEA4u;
            goto label_17cea4;
        }
    }
    ctx->pc = 0x17CE98u;
    // 0x17ce98: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x17ce98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x17ce9c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x17ce9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x17cea0: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x17cea0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_17cea4:
    // 0x17cea4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x17cea4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_17cea8:
    // 0x17cea8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17cea8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17ceac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17ceacu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17ceb0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x17ceb0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17ceb4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x17ceb4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17ceb8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x17ceb8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17cebc: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x17cebcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17cec0: 0x3e00008  jr          $ra
    ctx->pc = 0x17CEC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17CEC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17CEC0u;
            // 0x17cec4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17CEC8u;
    // 0x17cec8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17cec8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17cecc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17ceccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17ced0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17ced0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ced4: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x17CED4u;
    {
        const bool branch_taken_0x17ced4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x17CED8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17CED4u;
            // 0x17ced8: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ced4) {
            ctx->pc = 0x17CF10u;
            goto label_17cf10;
        }
    }
    ctx->pc = 0x17CEDCu;
    // 0x17cedc: 0x92020002  lbu         $v0, 0x2($s0)
    ctx->pc = 0x17cedcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x17cee0: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x17cee0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x17cee4: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x17CEE4u;
    {
        const bool branch_taken_0x17cee4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17cee4) {
            ctx->pc = 0x17CEE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17CEE4u;
            // 0x17cee8: 0xa2000000  sb          $zero, 0x0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17CEF8u;
            goto label_17cef8;
        }
    }
    ctx->pc = 0x17CEECu;
    // 0x17ceec: 0xc05f466  jal         func_17D198
    ctx->pc = 0x17CEECu;
    SET_GPR_U32(ctx, 31, 0x17CEF4u);
    ctx->pc = 0x17D198u;
    if (runtime->hasFunction(0x17D198u)) {
        auto targetFn = runtime->lookupFunction(0x17D198u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CEF4u; }
        if (ctx->pc != 0x17CEF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017D198_0x17d198(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CEF4u; }
        if (ctx->pc != 0x17CEF4u) { return; }
    }
    ctx->pc = 0x17CEF4u;
label_17cef4:
    // 0x17cef4: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x17cef4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
label_17cef8:
    // 0x17cef8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17cef8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cefc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x17cefcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17cf00: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17cf00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17cf04: 0x805f34c  j           func_17CD30
    ctx->pc = 0x17CF04u;
    ctx->pc = 0x17CF08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17CF04u;
            // 0x17cf08: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17CD30u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_17cd30;
    ctx->pc = 0x17CF0Cu;
    // 0x17cf0c: 0x0  nop
    ctx->pc = 0x17cf0cu;
    // NOP
label_17cf10:
    // 0x17cf10: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17cf10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17cf14: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x17cf14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17cf18: 0x3e00008  jr          $ra
    ctx->pc = 0x17CF18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17CF1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17CF18u;
            // 0x17cf1c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17CF20u;
    // 0x17cf20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17cf20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17cf24: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x17cf24u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cf28: 0x14e00007  bnez        $a3, . + 4 + (0x7 << 2)
    ctx->pc = 0x17CF28u;
    {
        const bool branch_taken_0x17cf28 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x17CF2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17CF28u;
            // 0x17cf2c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cf28) {
            ctx->pc = 0x17CF48u;
            goto label_17cf48;
        }
    }
    ctx->pc = 0x17CF30u;
    // 0x17cf30: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x17cf30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
    // 0x17cf34: 0xc05f242  jal         func_17C908
    ctx->pc = 0x17CF34u;
    SET_GPR_U32(ctx, 31, 0x17CF3Cu);
    ctx->pc = 0x17CF38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17CF34u;
            // 0x17cf38: 0x24a55f98  addiu       $a1, $a1, 0x5F98 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24472));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17C908u;
    if (runtime->hasFunction(0x17C908u)) {
        auto targetFn = runtime->lookupFunction(0x17C908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CF3Cu; }
        if (ctx->pc != 0x17CF3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017C908_0x17c908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CF3Cu; }
        if (ctx->pc != 0x17CF3Cu) { return; }
    }
    ctx->pc = 0x17CF3Cu;
label_17cf3c:
    // 0x17cf3c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x17CF3Cu;
    {
        const bool branch_taken_0x17cf3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17CF40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17CF3Cu;
            // 0x17cf40: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cf3c) {
            ctx->pc = 0x17CFA8u;
            goto label_17cfa8;
        }
    }
    ctx->pc = 0x17CF44u;
    // 0x17cf44: 0x0  nop
    ctx->pc = 0x17cf44u;
    // NOP
label_17cf48:
    // 0x17cf48: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x17CF48u;
    {
        const bool branch_taken_0x17cf48 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x17CF4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17CF48u;
            // 0x17cf4c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cf48) {
            ctx->pc = 0x17CF58u;
            goto label_17cf58;
        }
    }
    ctx->pc = 0x17CF50u;
    // 0x17cf50: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x17CF50u;
    {
        const bool branch_taken_0x17cf50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17CF54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17CF50u;
            // 0x17cf54: 0xace5000c  sw          $a1, 0xC($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cf50) {
            ctx->pc = 0x17CF88u;
            goto label_17cf88;
        }
    }
    ctx->pc = 0x17CF58u;
label_17cf58:
    // 0x17cf58: 0x14c20005  bne         $a2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x17CF58u;
    {
        const bool branch_taken_0x17cf58 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x17CF5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17CF58u;
            // 0x17cf5c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cf58) {
            ctx->pc = 0x17CF70u;
            goto label_17cf70;
        }
    }
    ctx->pc = 0x17CF60u;
    // 0x17cf60: 0x8ce40008  lw          $a0, 0x8($a3)
    ctx->pc = 0x17cf60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x17cf64: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x17cf64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x17cf68: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x17CF68u;
    {
        const bool branch_taken_0x17cf68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17CF6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17CF68u;
            // 0x17cf6c: 0xace2000c  sw          $v0, 0xC($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cf68) {
            ctx->pc = 0x17CF8Cu;
            goto label_17cf8c;
        }
    }
    ctx->pc = 0x17CF70u;
label_17cf70:
    // 0x17cf70: 0x14c20006  bne         $a2, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x17CF70u;
    {
        const bool branch_taken_0x17cf70 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x17CF74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17CF70u;
            // 0x17cf74: 0x8ce40008  lw          $a0, 0x8($a3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cf70) {
            ctx->pc = 0x17CF8Cu;
            goto label_17cf8c;
        }
    }
    ctx->pc = 0x17CF78u;
    // 0x17cf78: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x17cf78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x17cf7c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x17cf7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x17cf80: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x17CF80u;
    {
        const bool branch_taken_0x17cf80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17CF84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17CF80u;
            // 0x17cf84: 0xace2000c  sw          $v0, 0xC($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cf80) {
            ctx->pc = 0x17CF8Cu;
            goto label_17cf8c;
        }
    }
    ctx->pc = 0x17CF88u;
label_17cf88:
    // 0x17cf88: 0x8ce40008  lw          $a0, 0x8($a3)
    ctx->pc = 0x17cf88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_17cf8c:
    // 0x17cf8c: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x17cf8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x17cf90: 0xace00014  sw          $zero, 0x14($a3)
    ctx->pc = 0x17cf90u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 0));
    // 0x17cf94: 0x44182a  slt         $v1, $v0, $a0
    ctx->pc = 0x17cf94u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x17cf98: 0x83100a  movz        $v0, $a0, $v1
    ctx->pc = 0x17cf98u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x17cf9c: 0x28440000  slti        $a0, $v0, 0x0
    ctx->pc = 0x17cf9cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x17cfa0: 0x4100b  movn        $v0, $zero, $a0
    ctx->pc = 0x17cfa0u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x17cfa4: 0xace2000c  sw          $v0, 0xC($a3)
    ctx->pc = 0x17cfa4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 2));
label_17cfa8:
    // 0x17cfa8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17cfa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17cfac: 0x3e00008  jr          $ra
    ctx->pc = 0x17CFACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17CFB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17CFACu;
            // 0x17cfb0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17CFB4u;
    // 0x17cfb4: 0x0  nop
    ctx->pc = 0x17cfb4u;
    // NOP
    // 0x17cfb8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17cfb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17cfbc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x17cfbcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cfc0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x17CFC0u;
    {
        const bool branch_taken_0x17cfc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17CFC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17CFC0u;
            // 0x17cfc4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cfc0) {
            ctx->pc = 0x17CFE0u;
            goto label_17cfe0;
        }
    }
    ctx->pc = 0x17CFC8u;
    // 0x17cfc8: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x17cfc8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
    // 0x17cfcc: 0xc05f242  jal         func_17C908
    ctx->pc = 0x17CFCCu;
    SET_GPR_U32(ctx, 31, 0x17CFD4u);
    ctx->pc = 0x17CFD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17CFCCu;
            // 0x17cfd0: 0x24a55f98  addiu       $a1, $a1, 0x5F98 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24472));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17C908u;
    if (runtime->hasFunction(0x17C908u)) {
        auto targetFn = runtime->lookupFunction(0x17C908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CFD4u; }
        if (ctx->pc != 0x17CFD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017C908_0x17c908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CFD4u; }
        if (ctx->pc != 0x17CFD4u) { return; }
    }
    ctx->pc = 0x17CFD4u;
label_17cfd4:
    // 0x17cfd4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x17CFD4u;
    {
        const bool branch_taken_0x17cfd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17CFD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17CFD4u;
            // 0x17cfd8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cfd4) {
            ctx->pc = 0x17CFE4u;
            goto label_17cfe4;
        }
    }
    ctx->pc = 0x17CFDCu;
    // 0x17cfdc: 0x0  nop
    ctx->pc = 0x17cfdcu;
    // NOP
label_17cfe0:
    // 0x17cfe0: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x17cfe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_17cfe4:
    // 0x17cfe4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17cfe4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17cfe8: 0x3e00008  jr          $ra
    ctx->pc = 0x17CFE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17CFECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17CFE8u;
            // 0x17cfec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17CFF0u;
    // 0x17cff0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17cff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17cff4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17cff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17cff8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17cff8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cffc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17cffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17d000: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x17d000u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d004: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x17d004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x17d008: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x17d008u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d00c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x17d00cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x17d010: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x17D010u;
    {
        const bool branch_taken_0x17d010 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x17D014u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17D010u;
            // 0x17d014: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d010) {
            ctx->pc = 0x17D028u;
            goto label_17d028;
        }
    }
    ctx->pc = 0x17D018u;
    // 0x17d018: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x17d018u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
    // 0x17d01c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x17D01Cu;
    {
        const bool branch_taken_0x17d01c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D020u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17D01Cu;
            // 0x17d020: 0x24a55f98  addiu       $a1, $a1, 0x5F98 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24472));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d01c) {
            ctx->pc = 0x17D048u;
            goto label_17d048;
        }
    }
    ctx->pc = 0x17D024u;
    // 0x17d024: 0x0  nop
    ctx->pc = 0x17d024u;
    // NOP
label_17d028:
    // 0x17d028: 0x6410003  bgez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x17D028u;
    {
        const bool branch_taken_0x17d028 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x17D02Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17D028u;
            // 0x17d02c: 0x3c050063  lui         $a1, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d028) {
            ctx->pc = 0x17D038u;
            goto label_17d038;
        }
    }
    ctx->pc = 0x17D030u;
    // 0x17d030: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x17D030u;
    {
        const bool branch_taken_0x17d030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D034u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17D030u;
            // 0x17d034: 0x24a55fb0  addiu       $a1, $a1, 0x5FB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24496));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d030) {
            ctx->pc = 0x17D048u;
            goto label_17d048;
        }
    }
    ctx->pc = 0x17D038u;
label_17d038:
    // 0x17d038: 0x56200007  bnel        $s1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x17D038u;
    {
        const bool branch_taken_0x17d038 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x17d038) {
            ctx->pc = 0x17D03Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17D038u;
            // 0x17d03c: 0x82030002  lb          $v1, 0x2($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17D058u;
            goto label_17d058;
        }
    }
    ctx->pc = 0x17D040u;
    // 0x17d040: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x17d040u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
    // 0x17d044: 0x24a55fd0  addiu       $a1, $a1, 0x5FD0
    ctx->pc = 0x17d044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24528));
label_17d048:
    // 0x17d048: 0xc05f242  jal         func_17C908
    ctx->pc = 0x17D048u;
    SET_GPR_U32(ctx, 31, 0x17D050u);
    ctx->pc = 0x17C908u;
    if (runtime->hasFunction(0x17C908u)) {
        auto targetFn = runtime->lookupFunction(0x17C908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D050u; }
        if (ctx->pc != 0x17D050u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017C908_0x17c908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D050u; }
        if (ctx->pc != 0x17D050u) { return; }
    }
    ctx->pc = 0x17D050u;
label_17d050:
    // 0x17d050: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x17D050u;
    {
        const bool branch_taken_0x17d050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D054u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17D050u;
            // 0x17d054: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d050) {
            ctx->pc = 0x17D178u;
            goto label_17d178;
        }
    }
    ctx->pc = 0x17D058u;
label_17d058:
    // 0x17d058: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x17d058u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17d05c: 0x10730046  beq         $v1, $s3, . + 4 + (0x46 << 2)
    ctx->pc = 0x17D05Cu;
    {
        const bool branch_taken_0x17d05c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        ctx->pc = 0x17D060u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17D05Cu;
            // 0x17d060: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d05c) {
            ctx->pc = 0x17D178u;
            goto label_17d178;
        }
    }
    ctx->pc = 0x17D064u;
    // 0x17d064: 0x16400004  bnez        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x17D064u;
    {
        const bool branch_taken_0x17d064 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x17D068u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17D064u;
            // 0x17d068: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d064) {
            ctx->pc = 0x17D078u;
            goto label_17d078;
        }
    }
    ctx->pc = 0x17D06Cu;
    // 0x17d06c: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x17D06Cu;
    {
        const bool branch_taken_0x17d06c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D070u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17D06Cu;
            // 0x17d070: 0xa2030002  sb          $v1, 0x2($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d06c) {
            ctx->pc = 0x17D178u;
            goto label_17d178;
        }
    }
    ctx->pc = 0x17D074u;
    // 0x17d074: 0x0  nop
    ctx->pc = 0x17d074u;
    // NOP
label_17d078:
    // 0x17d078: 0xc05e93a  jal         func_17A4E8
    ctx->pc = 0x17D078u;
    SET_GPR_U32(ctx, 31, 0x17D080u);
    ctx->pc = 0x17A4E8u;
    if (runtime->hasFunction(0x17A4E8u)) {
        auto targetFn = runtime->lookupFunction(0x17A4E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D080u; }
        if (ctx->pc != 0x17D080u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A4E8_0x17a4e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D080u; }
        if (ctx->pc != 0x17D080u) { return; }
    }
    ctx->pc = 0x17D080u;
label_17d080:
    // 0x17d080: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x17d080u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d084: 0x1060003c  beqz        $v1, . + 4 + (0x3C << 2)
    ctx->pc = 0x17D084u;
    {
        const bool branch_taken_0x17d084 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D088u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17D084u;
            // 0x17d088: 0xae03001c  sw          $v1, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d084) {
            ctx->pc = 0x17D178u;
            goto label_17d178;
        }
    }
    ctx->pc = 0x17D08Cu;
    // 0x17d08c: 0x3c06005e  lui         $a2, 0x5E
    ctx->pc = 0x17d08cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)94 << 16));
    // 0x17d090: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x17d090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x17d094: 0x24c66550  addiu       $a2, $a2, 0x6550
    ctx->pc = 0x17d094u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 25936));
    // 0x17d098: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x17d098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x17d09c: 0x90c50000  lbu         $a1, 0x0($a2)
    ctx->pc = 0x17d09cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x17d0a0: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x17d0a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d0a4: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x17d0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x17d0a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17d0a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d0ac: 0xa2050044  sb          $a1, 0x44($s0)
    ctx->pc = 0x17d0acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 68), (uint8_t)GPR_U32(ctx, 5));
    // 0x17d0b0: 0x243102a  slt         $v0, $s2, $v1
    ctx->pc = 0x17d0b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x17d0b4: 0x62380a  movz        $a3, $v1, $v0
    ctx->pc = 0x17d0b4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 3));
    // 0x17d0b8: 0x90c80001  lbu         $t0, 0x1($a2)
    ctx->pc = 0x17d0b8u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x17d0bc: 0x72ac0  sll         $a1, $a3, 11
    ctx->pc = 0x17d0bcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 11));
    // 0x17d0c0: 0x2252821  addu        $a1, $s1, $a1
    ctx->pc = 0x17d0c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x17d0c4: 0xa2080045  sb          $t0, 0x45($s0)
    ctx->pc = 0x17d0c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 69), (uint8_t)GPR_U32(ctx, 8));
    // 0x17d0c8: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x17d0c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x17d0cc: 0x90c20002  lbu         $v0, 0x2($a2)
    ctx->pc = 0x17d0ccu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x17d0d0: 0xae070010  sw          $a3, 0x10($s0)
    ctx->pc = 0x17d0d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 7));
    // 0x17d0d4: 0xa2020046  sb          $v0, 0x46($s0)
    ctx->pc = 0x17d0d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 70), (uint8_t)GPR_U32(ctx, 2));
    // 0x17d0d8: 0xc043366  jal         func_10CD98
    ctx->pc = 0x17D0D8u;
    SET_GPR_U32(ctx, 31, 0x17D0E0u);
    ctx->pc = 0x17D0DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D0D8u;
            // 0x17d0dc: 0xae110018  sw          $s1, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CD98u;
    if (runtime->hasFunction(0x10CD98u)) {
        auto targetFn = runtime->lookupFunction(0x10CD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D0E0u; }
        if (ctx->pc != 0x17D0E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CD98_0x10cd98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D0E0u; }
        if (ctx->pc != 0x17D0E0u) { return; }
    }
    ctx->pc = 0x17D0E0u;
label_17d0e0:
    // 0x17d0e0: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x17d0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x17d0e4: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x17d0e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x17d0e8: 0x26080044  addiu       $t0, $s0, 0x44
    ctx->pc = 0x17d0e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
    // 0x17d0ec: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x17d0ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x17d0f0: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x17d0f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x17d0f4: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x17d0f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x17d0f8: 0xc05e984  jal         func_17A610
    ctx->pc = 0x17D0F8u;
    SET_GPR_U32(ctx, 31, 0x17D100u);
    ctx->pc = 0x17D0FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D0F8u;
            // 0x17d0fc: 0x8e070018  lw          $a3, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A610u;
    if (runtime->hasFunction(0x17A610u)) {
        auto targetFn = runtime->lookupFunction(0x17A610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D100u; }
        if (ctx->pc != 0x17D100u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A610_0x17a610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D100u; }
        if (ctx->pc != 0x17D100u) { return; }
    }
    ctx->pc = 0x17D100u;
label_17d100:
    // 0x17d100: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x17D100u;
    {
        const bool branch_taken_0x17d100 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17d100) {
            ctx->pc = 0x17D104u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17D100u;
            // 0x17d104: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17D118u;
            goto label_17d118;
        }
    }
    ctx->pc = 0x17D108u;
    // 0x17d108: 0xc05e95c  jal         func_17A570
    ctx->pc = 0x17D108u;
    SET_GPR_U32(ctx, 31, 0x17D110u);
    ctx->pc = 0x17D10Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D108u;
            // 0x17d10c: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A570u;
    if (runtime->hasFunction(0x17A570u)) {
        auto targetFn = runtime->lookupFunction(0x17A570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D110u; }
        if (ctx->pc != 0x17D110u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A570_0x17a570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D110u; }
        if (ctx->pc != 0x17D110u) { return; }
    }
    ctx->pc = 0x17D110u;
label_17d110:
    // 0x17d110: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x17D110u;
    {
        const bool branch_taken_0x17d110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D114u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17D110u;
            // 0x17d114: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d110) {
            ctx->pc = 0x17D178u;
            goto label_17d178;
        }
    }
    ctx->pc = 0x17D118u;
label_17d118:
    // 0x17d118: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x17d118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17d11c: 0x8c516554  lw          $s1, 0x6554($v0)
    ctx->pc = 0x17d11cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 25940)));
    // 0x17d120: 0x56230013  bnel        $s1, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x17D120u;
    {
        const bool branch_taken_0x17d120 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x17d120) {
            ctx->pc = 0x17D124u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17D120u;
            // 0x17d124: 0xa2130002  sb          $s3, 0x2($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17D170u;
            goto label_17d170;
        }
    }
    ctx->pc = 0x17D128u;
    // 0x17d128: 0xc047aee  jal         func_11EBB8
    ctx->pc = 0x17D128u;
    SET_GPR_U32(ctx, 31, 0x17D130u);
    ctx->pc = 0x17D12Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D128u;
            // 0x17d12c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11EBB8u;
    if (runtime->hasFunction(0x11EBB8u)) {
        auto targetFn = runtime->lookupFunction(0x11EBB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D130u; }
        if (ctx->pc != 0x17D130u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011EBB8_0x11ebb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D130u; }
        if (ctx->pc != 0x17D130u) { return; }
    }
    ctx->pc = 0x17D130u;
label_17d130:
    // 0x17d130: 0xc05ec5c  jal         func_17B170
    ctx->pc = 0x17D130u;
    SET_GPR_U32(ctx, 31, 0x17D138u);
    ctx->pc = 0x17B170u;
    if (runtime->hasFunction(0x17B170u)) {
        auto targetFn = runtime->lookupFunction(0x17B170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D138u; }
        if (ctx->pc != 0x17D138u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017B170_0x17b170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D138u; }
        if (ctx->pc != 0x17D138u) { return; }
    }
    ctx->pc = 0x17D138u;
label_17d138:
    // 0x17d138: 0xc05ec12  jal         func_17B048
    ctx->pc = 0x17D138u;
    SET_GPR_U32(ctx, 31, 0x17D140u);
    ctx->pc = 0x17B048u;
    if (runtime->hasFunction(0x17B048u)) {
        auto targetFn = runtime->lookupFunction(0x17B048u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D140u; }
        if (ctx->pc != 0x17D140u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017B048_0x17b048(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D140u; }
        if (ctx->pc != 0x17D140u) { return; }
    }
    ctx->pc = 0x17D140u;
label_17d140:
    // 0x17d140: 0xc05ea62  jal         func_17A988
    ctx->pc = 0x17D140u;
    SET_GPR_U32(ctx, 31, 0x17D148u);
    ctx->pc = 0x17D144u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D140u;
            // 0x17d144: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A988u;
    if (runtime->hasFunction(0x17A988u)) {
        auto targetFn = runtime->lookupFunction(0x17A988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D148u; }
        if (ctx->pc != 0x17D148u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A988_0x17a988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D148u; }
        if (ctx->pc != 0x17D148u) { return; }
    }
    ctx->pc = 0x17D148u;
label_17d148:
    // 0x17d148: 0xc05e95c  jal         func_17A570
    ctx->pc = 0x17D148u;
    SET_GPR_U32(ctx, 31, 0x17D150u);
    ctx->pc = 0x17D14Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D148u;
            // 0x17d14c: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A570u;
    if (runtime->hasFunction(0x17A570u)) {
        auto targetFn = runtime->lookupFunction(0x17A570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D150u; }
        if (ctx->pc != 0x17D150u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A570_0x17a570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D150u; }
        if (ctx->pc != 0x17D150u) { return; }
    }
    ctx->pc = 0x17D150u;
label_17d150:
    // 0x17d150: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x17d150u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x17d154: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x17d154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x17d158: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x17d158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x17d15c: 0xae120014  sw          $s2, 0x14($s0)
    ctx->pc = 0x17d15cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 18));
    // 0x17d160: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17d160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17d164: 0xa2110002  sb          $s1, 0x2($s0)
    ctx->pc = 0x17d164u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 17));
    // 0x17d168: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x17D168u;
    {
        const bool branch_taken_0x17d168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D16Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17D168u;
            // 0x17d16c: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d168) {
            ctx->pc = 0x17D174u;
            goto label_17d174;
        }
    }
    ctx->pc = 0x17D170u;
label_17d170:
    // 0x17d170: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x17d170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_17d174:
    // 0x17d174: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x17d174u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_17d178:
    // 0x17d178: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17d178u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17d17c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17d17cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17d180: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x17d180u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17d184: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x17d184u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17d188: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x17d188u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17d18c: 0x3e00008  jr          $ra
    ctx->pc = 0x17D18Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D190u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17D18Cu;
            // 0x17d190: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17D194u;
    // 0x17d194: 0x0  nop
    ctx->pc = 0x17d194u;
    // NOP
}
