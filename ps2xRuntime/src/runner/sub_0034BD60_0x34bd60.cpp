#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0034BD60
// Address: 0x34bd60 - 0x34bf80
void sub_0034BD60_0x34bd60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034BD60_0x34bd60");
#endif

    switch (ctx->pc) {
        case 0x34bd60u: goto label_34bd60;
        case 0x34bd64u: goto label_34bd64;
        case 0x34bd68u: goto label_34bd68;
        case 0x34bd6cu: goto label_34bd6c;
        case 0x34bd70u: goto label_34bd70;
        case 0x34bd74u: goto label_34bd74;
        case 0x34bd78u: goto label_34bd78;
        case 0x34bd7cu: goto label_34bd7c;
        case 0x34bd80u: goto label_34bd80;
        case 0x34bd84u: goto label_34bd84;
        case 0x34bd88u: goto label_34bd88;
        case 0x34bd8cu: goto label_34bd8c;
        case 0x34bd90u: goto label_34bd90;
        case 0x34bd94u: goto label_34bd94;
        case 0x34bd98u: goto label_34bd98;
        case 0x34bd9cu: goto label_34bd9c;
        case 0x34bda0u: goto label_34bda0;
        case 0x34bda4u: goto label_34bda4;
        case 0x34bda8u: goto label_34bda8;
        case 0x34bdacu: goto label_34bdac;
        case 0x34bdb0u: goto label_34bdb0;
        case 0x34bdb4u: goto label_34bdb4;
        case 0x34bdb8u: goto label_34bdb8;
        case 0x34bdbcu: goto label_34bdbc;
        case 0x34bdc0u: goto label_34bdc0;
        case 0x34bdc4u: goto label_34bdc4;
        case 0x34bdc8u: goto label_34bdc8;
        case 0x34bdccu: goto label_34bdcc;
        case 0x34bdd0u: goto label_34bdd0;
        case 0x34bdd4u: goto label_34bdd4;
        case 0x34bdd8u: goto label_34bdd8;
        case 0x34bddcu: goto label_34bddc;
        case 0x34bde0u: goto label_34bde0;
        case 0x34bde4u: goto label_34bde4;
        case 0x34bde8u: goto label_34bde8;
        case 0x34bdecu: goto label_34bdec;
        case 0x34bdf0u: goto label_34bdf0;
        case 0x34bdf4u: goto label_34bdf4;
        case 0x34bdf8u: goto label_34bdf8;
        case 0x34bdfcu: goto label_34bdfc;
        case 0x34be00u: goto label_34be00;
        case 0x34be04u: goto label_34be04;
        case 0x34be08u: goto label_34be08;
        case 0x34be0cu: goto label_34be0c;
        case 0x34be10u: goto label_34be10;
        case 0x34be14u: goto label_34be14;
        case 0x34be18u: goto label_34be18;
        case 0x34be1cu: goto label_34be1c;
        case 0x34be20u: goto label_34be20;
        case 0x34be24u: goto label_34be24;
        case 0x34be28u: goto label_34be28;
        case 0x34be2cu: goto label_34be2c;
        case 0x34be30u: goto label_34be30;
        case 0x34be34u: goto label_34be34;
        case 0x34be38u: goto label_34be38;
        case 0x34be3cu: goto label_34be3c;
        case 0x34be40u: goto label_34be40;
        case 0x34be44u: goto label_34be44;
        case 0x34be48u: goto label_34be48;
        case 0x34be4cu: goto label_34be4c;
        case 0x34be50u: goto label_34be50;
        case 0x34be54u: goto label_34be54;
        case 0x34be58u: goto label_34be58;
        case 0x34be5cu: goto label_34be5c;
        case 0x34be60u: goto label_34be60;
        case 0x34be64u: goto label_34be64;
        case 0x34be68u: goto label_34be68;
        case 0x34be6cu: goto label_34be6c;
        case 0x34be70u: goto label_34be70;
        case 0x34be74u: goto label_34be74;
        case 0x34be78u: goto label_34be78;
        case 0x34be7cu: goto label_34be7c;
        case 0x34be80u: goto label_34be80;
        case 0x34be84u: goto label_34be84;
        case 0x34be88u: goto label_34be88;
        case 0x34be8cu: goto label_34be8c;
        case 0x34be90u: goto label_34be90;
        case 0x34be94u: goto label_34be94;
        case 0x34be98u: goto label_34be98;
        case 0x34be9cu: goto label_34be9c;
        case 0x34bea0u: goto label_34bea0;
        case 0x34bea4u: goto label_34bea4;
        case 0x34bea8u: goto label_34bea8;
        case 0x34beacu: goto label_34beac;
        case 0x34beb0u: goto label_34beb0;
        case 0x34beb4u: goto label_34beb4;
        case 0x34beb8u: goto label_34beb8;
        case 0x34bebcu: goto label_34bebc;
        case 0x34bec0u: goto label_34bec0;
        case 0x34bec4u: goto label_34bec4;
        case 0x34bec8u: goto label_34bec8;
        case 0x34beccu: goto label_34becc;
        case 0x34bed0u: goto label_34bed0;
        case 0x34bed4u: goto label_34bed4;
        case 0x34bed8u: goto label_34bed8;
        case 0x34bedcu: goto label_34bedc;
        case 0x34bee0u: goto label_34bee0;
        case 0x34bee4u: goto label_34bee4;
        case 0x34bee8u: goto label_34bee8;
        case 0x34beecu: goto label_34beec;
        case 0x34bef0u: goto label_34bef0;
        case 0x34bef4u: goto label_34bef4;
        case 0x34bef8u: goto label_34bef8;
        case 0x34befcu: goto label_34befc;
        case 0x34bf00u: goto label_34bf00;
        case 0x34bf04u: goto label_34bf04;
        case 0x34bf08u: goto label_34bf08;
        case 0x34bf0cu: goto label_34bf0c;
        case 0x34bf10u: goto label_34bf10;
        case 0x34bf14u: goto label_34bf14;
        case 0x34bf18u: goto label_34bf18;
        case 0x34bf1cu: goto label_34bf1c;
        case 0x34bf20u: goto label_34bf20;
        case 0x34bf24u: goto label_34bf24;
        case 0x34bf28u: goto label_34bf28;
        case 0x34bf2cu: goto label_34bf2c;
        case 0x34bf30u: goto label_34bf30;
        case 0x34bf34u: goto label_34bf34;
        case 0x34bf38u: goto label_34bf38;
        case 0x34bf3cu: goto label_34bf3c;
        case 0x34bf40u: goto label_34bf40;
        case 0x34bf44u: goto label_34bf44;
        case 0x34bf48u: goto label_34bf48;
        case 0x34bf4cu: goto label_34bf4c;
        case 0x34bf50u: goto label_34bf50;
        case 0x34bf54u: goto label_34bf54;
        case 0x34bf58u: goto label_34bf58;
        case 0x34bf5cu: goto label_34bf5c;
        case 0x34bf60u: goto label_34bf60;
        case 0x34bf64u: goto label_34bf64;
        case 0x34bf68u: goto label_34bf68;
        case 0x34bf6cu: goto label_34bf6c;
        case 0x34bf70u: goto label_34bf70;
        case 0x34bf74u: goto label_34bf74;
        case 0x34bf78u: goto label_34bf78;
        case 0x34bf7cu: goto label_34bf7c;
        default: break;
    }

    ctx->pc = 0x34bd60u;

label_34bd60:
    // 0x34bd60: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x34bd60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_34bd64:
    // 0x34bd64: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x34bd64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_34bd68:
    // 0x34bd68: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x34bd68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_34bd6c:
    // 0x34bd6c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x34bd6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_34bd70:
    // 0x34bd70: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x34bd70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_34bd74:
    // 0x34bd74: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x34bd74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_34bd78:
    // 0x34bd78: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x34bd78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_34bd7c:
    // 0x34bd7c: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x34bd7cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_34bd80:
    // 0x34bd80: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x34bd80u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_34bd84:
    // 0x34bd84: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x34bd84u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_34bd88:
    // 0x34bd88: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x34bd88u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_34bd8c:
    // 0x34bd8c: 0x90830804  lbu         $v1, 0x804($a0)
    ctx->pc = 0x34bd8cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2052)));
label_34bd90:
    // 0x34bd90: 0x1060006d  beqz        $v1, . + 4 + (0x6D << 2)
label_34bd94:
    if (ctx->pc == 0x34BD94u) {
        ctx->pc = 0x34BD94u;
            // 0x34bd94: 0x26510804  addiu       $s1, $s2, 0x804 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 2052));
        ctx->pc = 0x34BD98u;
        goto label_34bd98;
    }
    ctx->pc = 0x34BD90u;
    {
        const bool branch_taken_0x34bd90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x34BD94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34BD90u;
            // 0x34bd94: 0x26510804  addiu       $s1, $s2, 0x804 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 2052));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34bd90) {
            ctx->pc = 0x34BF48u;
            goto label_34bf48;
        }
    }
    ctx->pc = 0x34BD98u;
label_34bd98:
    // 0x34bd98: 0x92230001  lbu         $v1, 0x1($s1)
    ctx->pc = 0x34bd98u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
label_34bd9c:
    // 0x34bd9c: 0x5060000a  beql        $v1, $zero, . + 4 + (0xA << 2)
label_34bda0:
    if (ctx->pc == 0x34BDA0u) {
        ctx->pc = 0x34BDA0u;
            // 0x34bda0: 0x8e45076c  lw          $a1, 0x76C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1900)));
        ctx->pc = 0x34BDA4u;
        goto label_34bda4;
    }
    ctx->pc = 0x34BD9Cu;
    {
        const bool branch_taken_0x34bd9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x34bd9c) {
            ctx->pc = 0x34BDA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34BD9Cu;
            // 0x34bda0: 0x8e45076c  lw          $a1, 0x76C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1900)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34BDC8u;
            goto label_34bdc8;
        }
    }
    ctx->pc = 0x34BDA4u;
label_34bda4:
    // 0x34bda4: 0x8e45076c  lw          $a1, 0x76C($s2)
    ctx->pc = 0x34bda4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1900)));
label_34bda8:
    // 0x34bda8: 0x50a00068  beql        $a1, $zero, . + 4 + (0x68 << 2)
label_34bdac:
    if (ctx->pc == 0x34BDACu) {
        ctx->pc = 0x34BDACu;
            // 0x34bdac: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x34BDB0u;
        goto label_34bdb0;
    }
    ctx->pc = 0x34BDA8u;
    {
        const bool branch_taken_0x34bda8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x34bda8) {
            ctx->pc = 0x34BDACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34BDA8u;
            // 0x34bdac: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34BF4Cu;
            goto label_34bf4c;
        }
    }
    ctx->pc = 0x34BDB0u;
label_34bdb0:
    // 0x34bdb0: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x34bdb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_34bdb4:
    // 0x34bdb4: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x34bdb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_34bdb8:
    // 0x34bdb8: 0xc057b7c  jal         func_15EDF0
label_34bdbc:
    if (ctx->pc == 0x34BDBCu) {
        ctx->pc = 0x34BDBCu;
            // 0x34bdbc: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x34BDC0u;
        goto label_34bdc0;
    }
    ctx->pc = 0x34BDB8u;
    SET_GPR_U32(ctx, 31, 0x34BDC0u);
    ctx->pc = 0x34BDBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34BDB8u;
            // 0x34bdbc: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34BDC0u; }
        if (ctx->pc != 0x34BDC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34BDC0u; }
        if (ctx->pc != 0x34BDC0u) { return; }
    }
    ctx->pc = 0x34BDC0u;
label_34bdc0:
    // 0x34bdc0: 0x10000061  b           . + 4 + (0x61 << 2)
label_34bdc4:
    if (ctx->pc == 0x34BDC4u) {
        ctx->pc = 0x34BDC4u;
            // 0x34bdc4: 0xae40076c  sw          $zero, 0x76C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1900), GPR_U32(ctx, 0));
        ctx->pc = 0x34BDC8u;
        goto label_34bdc8;
    }
    ctx->pc = 0x34BDC0u;
    {
        const bool branch_taken_0x34bdc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34BDC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34BDC0u;
            // 0x34bdc4: 0xae40076c  sw          $zero, 0x76C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1900), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34bdc0) {
            ctx->pc = 0x34BF48u;
            goto label_34bf48;
        }
    }
    ctx->pc = 0x34BDC8u;
label_34bdc8:
    // 0x34bdc8: 0x50a00007  beql        $a1, $zero, . + 4 + (0x7 << 2)
label_34bdcc:
    if (ctx->pc == 0x34BDCCu) {
        ctx->pc = 0x34BDCCu;
            // 0x34bdcc: 0x8e42076c  lw          $v0, 0x76C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1900)));
        ctx->pc = 0x34BDD0u;
        goto label_34bdd0;
    }
    ctx->pc = 0x34BDC8u;
    {
        const bool branch_taken_0x34bdc8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x34bdc8) {
            ctx->pc = 0x34BDCCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34BDC8u;
            // 0x34bdcc: 0x8e42076c  lw          $v0, 0x76C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1900)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34BDE8u;
            goto label_34bde8;
        }
    }
    ctx->pc = 0x34BDD0u;
label_34bdd0:
    // 0x34bdd0: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x34bdd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_34bdd4:
    // 0x34bdd4: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x34bdd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_34bdd8:
    // 0x34bdd8: 0xc057b7c  jal         func_15EDF0
label_34bddc:
    if (ctx->pc == 0x34BDDCu) {
        ctx->pc = 0x34BDDCu;
            // 0x34bddc: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x34BDE0u;
        goto label_34bde0;
    }
    ctx->pc = 0x34BDD8u;
    SET_GPR_U32(ctx, 31, 0x34BDE0u);
    ctx->pc = 0x34BDDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34BDD8u;
            // 0x34bddc: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34BDE0u; }
        if (ctx->pc != 0x34BDE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34BDE0u; }
        if (ctx->pc != 0x34BDE0u) { return; }
    }
    ctx->pc = 0x34BDE0u;
label_34bde0:
    // 0x34bde0: 0xae40076c  sw          $zero, 0x76C($s2)
    ctx->pc = 0x34bde0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1900), GPR_U32(ctx, 0));
label_34bde4:
    // 0x34bde4: 0x8e42076c  lw          $v0, 0x76C($s2)
    ctx->pc = 0x34bde4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1900)));
label_34bde8:
    // 0x34bde8: 0x54400054  bnel        $v0, $zero, . + 4 + (0x54 << 2)
label_34bdec:
    if (ctx->pc == 0x34BDECu) {
        ctx->pc = 0x34BDECu;
            // 0x34bdec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x34BDF0u;
        goto label_34bdf0;
    }
    ctx->pc = 0x34BDE8u;
    {
        const bool branch_taken_0x34bde8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34bde8) {
            ctx->pc = 0x34BDECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34BDE8u;
            // 0x34bdec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34BF3Cu;
            goto label_34bf3c;
        }
    }
    ctx->pc = 0x34BDF0u;
label_34bdf0:
    // 0x34bdf0: 0xc6210010  lwc1        $f1, 0x10($s1)
    ctx->pc = 0x34bdf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_34bdf4:
    // 0x34bdf4: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x34bdf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_34bdf8:
    // 0x34bdf8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34bdf8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_34bdfc:
    // 0x34bdfc: 0x0  nop
    ctx->pc = 0x34bdfcu;
    // NOP
label_34be00:
    // 0x34be00: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x34be00u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_34be04:
    // 0x34be04: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_34be08:
    if (ctx->pc == 0x34BE08u) {
        ctx->pc = 0x34BE08u;
            // 0x34be08: 0x24040110  addiu       $a0, $zero, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
        ctx->pc = 0x34BE0Cu;
        goto label_34be0c;
    }
    ctx->pc = 0x34BE04u;
    {
        const bool branch_taken_0x34be04 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x34be04) {
            ctx->pc = 0x34BE08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34BE04u;
            // 0x34be08: 0x24040110  addiu       $a0, $zero, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34BE14u;
            goto label_34be14;
        }
    }
    ctx->pc = 0x34BE0Cu;
label_34be0c:
    // 0x34be0c: 0xe6200010  swc1        $f0, 0x10($s1)
    ctx->pc = 0x34be0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
label_34be10:
    // 0x34be10: 0x24040110  addiu       $a0, $zero, 0x110
    ctx->pc = 0x34be10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
label_34be14:
    // 0x34be14: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x34be14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_34be18:
    // 0x34be18: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x34be18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_34be1c:
    // 0x34be1c: 0xc040140  jal         func_100500
label_34be20:
    if (ctx->pc == 0x34BE20u) {
        ctx->pc = 0x34BE20u;
            // 0x34be20: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x34BE24u;
        goto label_34be24;
    }
    ctx->pc = 0x34BE1Cu;
    SET_GPR_U32(ctx, 31, 0x34BE24u);
    ctx->pc = 0x34BE20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34BE1Cu;
            // 0x34be20: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100500u;
    if (runtime->hasFunction(0x100500u)) {
        auto targetFn = runtime->lookupFunction(0x100500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34BE24u; }
        if (ctx->pc != 0x34BE24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100500_0x100500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34BE24u; }
        if (ctx->pc != 0x34BE24u) { return; }
    }
    ctx->pc = 0x34BE24u;
label_34be24:
    // 0x34be24: 0x1040003f  beqz        $v0, . + 4 + (0x3F << 2)
label_34be28:
    if (ctx->pc == 0x34BE28u) {
        ctx->pc = 0x34BE28u;
            // 0x34be28: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x34BE2Cu;
        goto label_34be2c;
    }
    ctx->pc = 0x34BE24u;
    {
        const bool branch_taken_0x34be24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34BE28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34BE24u;
            // 0x34be28: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34be24) {
            ctx->pc = 0x34BF24u;
            goto label_34bf24;
        }
    }
    ctx->pc = 0x34BE2Cu;
label_34be2c:
    // 0x34be2c: 0xc6340010  lwc1        $f20, 0x10($s1)
    ctx->pc = 0x34be2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_34be30:
    // 0x34be30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34be30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_34be34:
    // 0x34be34: 0xc635000c  lwc1        $f21, 0xC($s1)
    ctx->pc = 0x34be34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_34be38:
    // 0x34be38: 0x24053c8d  addiu       $a1, $zero, 0x3C8D
    ctx->pc = 0x34be38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15501));
label_34be3c:
    // 0x34be3c: 0xc6360008  lwc1        $f22, 0x8($s1)
    ctx->pc = 0x34be3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_34be40:
    // 0x34be40: 0xc6370004  lwc1        $f23, 0x4($s1)
    ctx->pc = 0x34be40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_34be44:
    // 0x34be44: 0xc0adc28  jal         func_2B70A0
label_34be48:
    if (ctx->pc == 0x34BE48u) {
        ctx->pc = 0x34BE48u;
            // 0x34be48: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x34BE4Cu;
        goto label_34be4c;
    }
    ctx->pc = 0x34BE44u;
    SET_GPR_U32(ctx, 31, 0x34BE4Cu);
    ctx->pc = 0x34BE48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34BE44u;
            // 0x34be48: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B70A0u;
    if (runtime->hasFunction(0x2B70A0u)) {
        auto targetFn = runtime->lookupFunction(0x2B70A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34BE4Cu; }
        if (ctx->pc != 0x34BE4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B70A0_0x2b70a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34BE4Cu; }
        if (ctx->pc != 0x34BE4Cu) { return; }
    }
    ctx->pc = 0x34BE4Cu;
label_34be4c:
    // 0x34be4c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x34be4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_34be50:
    // 0x34be50: 0x24425560  addiu       $v0, $v0, 0x5560
    ctx->pc = 0x34be50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21856));
label_34be54:
    // 0x34be54: 0xc077318  jal         func_1DCC60
label_34be58:
    if (ctx->pc == 0x34BE58u) {
        ctx->pc = 0x34BE58u;
            // 0x34be58: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x34BE5Cu;
        goto label_34be5c;
    }
    ctx->pc = 0x34BE54u;
    SET_GPR_U32(ctx, 31, 0x34BE5Cu);
    ctx->pc = 0x34BE58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34BE54u;
            // 0x34be58: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC60u;
    if (runtime->hasFunction(0x1DCC60u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34BE5Cu; }
        if (ctx->pc != 0x34BE5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC60_0x1dcc60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34BE5Cu; }
        if (ctx->pc != 0x34BE5Cu) { return; }
    }
    ctx->pc = 0x34BE5Cu;
label_34be5c:
    // 0x34be5c: 0xc077314  jal         func_1DCC50
label_34be60:
    if (ctx->pc == 0x34BE60u) {
        ctx->pc = 0x34BE60u;
            // 0x34be60: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x34BE64u;
        goto label_34be64;
    }
    ctx->pc = 0x34BE5Cu;
    SET_GPR_U32(ctx, 31, 0x34BE64u);
    ctx->pc = 0x34BE60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34BE5Cu;
            // 0x34be60: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC50u;
    if (runtime->hasFunction(0x1DCC50u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34BE64u; }
        if (ctx->pc != 0x34BE64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC50_0x1dcc50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34BE64u; }
        if (ctx->pc != 0x34BE64u) { return; }
    }
    ctx->pc = 0x34BE64u;
label_34be64:
    // 0x34be64: 0x4600a024  .word       0x4600A024                   # cvt.w.s     $f0, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x34be64u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_34be68:
    // 0x34be68: 0xae0200f4  sw          $v0, 0xF4($s0)
    ctx->pc = 0x34be68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 2));
label_34be6c:
    // 0x34be6c: 0xa2000100  sb          $zero, 0x100($s0)
    ctx->pc = 0x34be6cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 256), (uint8_t)GPR_U32(ctx, 0));
label_34be70:
    // 0x34be70: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x34be70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_34be74:
    // 0x34be74: 0xa2000101  sb          $zero, 0x101($s0)
    ctx->pc = 0x34be74u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 257), (uint8_t)GPR_U32(ctx, 0));
label_34be78:
    // 0x34be78: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x34be78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_34be7c:
    // 0x34be7c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x34be7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_34be80:
    // 0x34be80: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x34be80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_34be84:
    // 0x34be84: 0xe61700e0  swc1        $f23, 0xE0($s0)
    ctx->pc = 0x34be84u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 224), bits); }
label_34be88:
    // 0x34be88: 0xe61600e4  swc1        $f22, 0xE4($s0)
    ctx->pc = 0x34be88u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 228), bits); }
label_34be8c:
    // 0x34be8c: 0xe61500e8  swc1        $f21, 0xE8($s0)
    ctx->pc = 0x34be8cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 232), bits); }
label_34be90:
    // 0x34be90: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x34be90u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_34be94:
    // 0x34be94: 0x0  nop
    ctx->pc = 0x34be94u;
    // NOP
label_34be98:
    // 0x34be98: 0xae0300f0  sw          $v1, 0xF0($s0)
    ctx->pc = 0x34be98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 3));
label_34be9c:
    // 0x34be9c: 0xc04a576  jal         func_1295D8
label_34bea0:
    if (ctx->pc == 0x34BEA0u) {
        ctx->pc = 0x34BEA0u;
            // 0x34bea0: 0xae0200ec  sw          $v0, 0xEC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 236), GPR_U32(ctx, 2));
        ctx->pc = 0x34BEA4u;
        goto label_34bea4;
    }
    ctx->pc = 0x34BE9Cu;
    SET_GPR_U32(ctx, 31, 0x34BEA4u);
    ctx->pc = 0x34BEA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34BE9Cu;
            // 0x34bea0: 0xae0200ec  sw          $v0, 0xEC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 236), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34BEA4u; }
        if (ctx->pc != 0x34BEA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34BEA4u; }
        if (ctx->pc != 0x34BEA4u) { return; }
    }
    ctx->pc = 0x34BEA4u;
label_34bea4:
    // 0x34bea4: 0xc0d105c  jal         func_344170
label_34bea8:
    if (ctx->pc == 0x34BEA8u) {
        ctx->pc = 0x34BEACu;
        goto label_34beac;
    }
    ctx->pc = 0x34BEA4u;
    SET_GPR_U32(ctx, 31, 0x34BEACu);
    ctx->pc = 0x344170u;
    if (runtime->hasFunction(0x344170u)) {
        auto targetFn = runtime->lookupFunction(0x344170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34BEACu; }
        if (ctx->pc != 0x34BEACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00344170_0x344170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34BEACu; }
        if (ctx->pc != 0x34BEACu) { return; }
    }
    ctx->pc = 0x34BEACu;
label_34beac:
    // 0x34beac: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x34beacu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_34beb0:
    // 0x34beb0: 0xc0d2fe4  jal         func_34BF90
label_34beb4:
    if (ctx->pc == 0x34BEB4u) {
        ctx->pc = 0x34BEB4u;
            // 0x34beb4: 0x26640004  addiu       $a0, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->pc = 0x34BEB8u;
        goto label_34beb8;
    }
    ctx->pc = 0x34BEB0u;
    SET_GPR_U32(ctx, 31, 0x34BEB8u);
    ctx->pc = 0x34BEB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34BEB0u;
            // 0x34beb4: 0x26640004  addiu       $a0, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34BF90u;
    if (runtime->hasFunction(0x34BF90u)) {
        auto targetFn = runtime->lookupFunction(0x34BF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34BEB8u; }
        if (ctx->pc != 0x34BEB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034BF90_0x34bf90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34BEB8u; }
        if (ctx->pc != 0x34BEB8u) { return; }
    }
    ctx->pc = 0x34BEB8u;
label_34beb8:
    // 0x34beb8: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x34beb8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_34bebc:
    // 0x34bebc: 0x26640004  addiu       $a0, $s3, 0x4
    ctx->pc = 0x34bebcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_34bec0:
    // 0x34bec0: 0xc0d2fe0  jal         func_34BF80
label_34bec4:
    if (ctx->pc == 0x34BEC4u) {
        ctx->pc = 0x34BEC4u;
            // 0x34bec4: 0xa60200f8  sh          $v0, 0xF8($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 248), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x34BEC8u;
        goto label_34bec8;
    }
    ctx->pc = 0x34BEC0u;
    SET_GPR_U32(ctx, 31, 0x34BEC8u);
    ctx->pc = 0x34BEC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34BEC0u;
            // 0x34bec4: 0xa60200f8  sh          $v0, 0xF8($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 248), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34BF80u;
    if (runtime->hasFunction(0x34BF80u)) {
        auto targetFn = runtime->lookupFunction(0x34BF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34BEC8u; }
        if (ctx->pc != 0x34BEC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034BF80_0x34bf80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34BEC8u; }
        if (ctx->pc != 0x34BEC8u) { return; }
    }
    ctx->pc = 0x34BEC8u;
label_34bec8:
    // 0x34bec8: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x34bec8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_34becc:
    // 0x34becc: 0xa60200fa  sh          $v0, 0xFA($s0)
    ctx->pc = 0x34beccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 250), (uint16_t)GPR_U32(ctx, 2));
label_34bed0:
    // 0x34bed0: 0x860200f8  lh          $v0, 0xF8($s0)
    ctx->pc = 0x34bed0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 248)));
label_34bed4:
    // 0x34bed4: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x34bed4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_34bed8:
    // 0x34bed8: 0xa60200fc  sh          $v0, 0xFC($s0)
    ctx->pc = 0x34bed8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 252), (uint16_t)GPR_U32(ctx, 2));
label_34bedc:
    // 0x34bedc: 0x860200fa  lh          $v0, 0xFA($s0)
    ctx->pc = 0x34bedcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 250)));
label_34bee0:
    // 0x34bee0: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x34bee0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_34bee4:
    // 0x34bee4: 0xa60200fe  sh          $v0, 0xFE($s0)
    ctx->pc = 0x34bee4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 254), (uint16_t)GPR_U32(ctx, 2));
label_34bee8:
    // 0x34bee8: 0x8e0200f4  lw          $v0, 0xF4($s0)
    ctx->pc = 0x34bee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
label_34beec:
    // 0x34beec: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x34beecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_34bef0:
    // 0x34bef0: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_34bef4:
    if (ctx->pc == 0x34BEF4u) {
        ctx->pc = 0x34BEF4u;
            // 0x34bef4: 0x8e0200f4  lw          $v0, 0xF4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
        ctx->pc = 0x34BEF8u;
        goto label_34bef8;
    }
    ctx->pc = 0x34BEF0u;
    {
        const bool branch_taken_0x34bef0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34bef0) {
            ctx->pc = 0x34BEF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34BEF0u;
            // 0x34bef4: 0x8e0200f4  lw          $v0, 0xF4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34BF04u;
            goto label_34bf04;
        }
    }
    ctx->pc = 0x34BEF8u;
label_34bef8:
    // 0x34bef8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34bef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_34befc:
    // 0x34befc: 0xa2020101  sb          $v0, 0x101($s0)
    ctx->pc = 0x34befcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 257), (uint8_t)GPR_U32(ctx, 2));
label_34bf00:
    // 0x34bf00: 0x8e0200f4  lw          $v0, 0xF4($s0)
    ctx->pc = 0x34bf00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
label_34bf04:
    // 0x34bf04: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x34bf04u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_34bf08:
    // 0x34bf08: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_34bf0c:
    if (ctx->pc == 0x34BF0Cu) {
        ctx->pc = 0x34BF0Cu;
            // 0x34bf0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x34BF10u;
        goto label_34bf10;
    }
    ctx->pc = 0x34BF08u;
    {
        const bool branch_taken_0x34bf08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34bf08) {
            ctx->pc = 0x34BF0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34BF08u;
            // 0x34bf0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34BF1Cu;
            goto label_34bf1c;
        }
    }
    ctx->pc = 0x34BF10u;
label_34bf10:
    // 0x34bf10: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34bf10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_34bf14:
    // 0x34bf14: 0xa2020100  sb          $v0, 0x100($s0)
    ctx->pc = 0x34bf14u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 256), (uint8_t)GPR_U32(ctx, 2));
label_34bf18:
    // 0x34bf18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34bf18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_34bf1c:
    // 0x34bf1c: 0xc144e48  jal         func_513920
label_34bf20:
    if (ctx->pc == 0x34BF20u) {
        ctx->pc = 0x34BF20u;
            // 0x34bf20: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x34BF24u;
        goto label_34bf24;
    }
    ctx->pc = 0x34BF1Cu;
    SET_GPR_U32(ctx, 31, 0x34BF24u);
    ctx->pc = 0x34BF20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34BF1Cu;
            // 0x34bf20: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x513920u;
    if (runtime->hasFunction(0x513920u)) {
        auto targetFn = runtime->lookupFunction(0x513920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34BF24u; }
        if (ctx->pc != 0x34BF24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00513920_0x513920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34BF24u; }
        if (ctx->pc != 0x34BF24u) { return; }
    }
    ctx->pc = 0x34BF24u;
label_34bf24:
    // 0x34bf24: 0xae50076c  sw          $s0, 0x76C($s2)
    ctx->pc = 0x34bf24u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1900), GPR_U32(ctx, 16));
label_34bf28:
    // 0x34bf28: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x34bf28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_34bf2c:
    // 0x34bf2c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x34bf2cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_34bf30:
    // 0x34bf30: 0x320f809  jalr        $t9
label_34bf34:
    if (ctx->pc == 0x34BF34u) {
        ctx->pc = 0x34BF34u;
            // 0x34bf34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x34BF38u;
        goto label_34bf38;
    }
    ctx->pc = 0x34BF30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x34BF38u);
        ctx->pc = 0x34BF34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34BF30u;
            // 0x34bf34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x34BF38u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x34BF38u; }
            if (ctx->pc != 0x34BF38u) { return; }
        }
        }
    }
    ctx->pc = 0x34BF38u;
label_34bf38:
    // 0x34bf38: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34bf38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_34bf3c:
    // 0x34bf3c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x34bf3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_34bf40:
    // 0x34bf40: 0xc04a576  jal         func_1295D8
label_34bf44:
    if (ctx->pc == 0x34BF44u) {
        ctx->pc = 0x34BF44u;
            // 0x34bf44: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->pc = 0x34BF48u;
        goto label_34bf48;
    }
    ctx->pc = 0x34BF40u;
    SET_GPR_U32(ctx, 31, 0x34BF48u);
    ctx->pc = 0x34BF44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34BF40u;
            // 0x34bf44: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34BF48u; }
        if (ctx->pc != 0x34BF48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34BF48u; }
        if (ctx->pc != 0x34BF48u) { return; }
    }
    ctx->pc = 0x34BF48u;
label_34bf48:
    // 0x34bf48: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x34bf48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_34bf4c:
    // 0x34bf4c: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x34bf4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_34bf50:
    // 0x34bf50: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x34bf50u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_34bf54:
    // 0x34bf54: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x34bf54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_34bf58:
    // 0x34bf58: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x34bf58u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_34bf5c:
    // 0x34bf5c: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x34bf5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_34bf60:
    // 0x34bf60: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x34bf60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_34bf64:
    // 0x34bf64: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x34bf64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_34bf68:
    // 0x34bf68: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x34bf68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_34bf6c:
    // 0x34bf6c: 0x3e00008  jr          $ra
label_34bf70:
    if (ctx->pc == 0x34BF70u) {
        ctx->pc = 0x34BF70u;
            // 0x34bf70: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x34BF74u;
        goto label_34bf74;
    }
    ctx->pc = 0x34BF6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34BF70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34BF6Cu;
            // 0x34bf70: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x34BF74u;
label_34bf74:
    // 0x34bf74: 0x0  nop
    ctx->pc = 0x34bf74u;
    // NOP
label_34bf78:
    // 0x34bf78: 0x0  nop
    ctx->pc = 0x34bf78u;
    // NOP
label_34bf7c:
    // 0x34bf7c: 0x0  nop
    ctx->pc = 0x34bf7cu;
    // NOP
}
