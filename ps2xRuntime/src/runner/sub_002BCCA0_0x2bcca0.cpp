#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002BCCA0
// Address: 0x2bcca0 - 0x2bce00
void sub_002BCCA0_0x2bcca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BCCA0_0x2bcca0");
#endif

    switch (ctx->pc) {
        case 0x2bcca0u: goto label_2bcca0;
        case 0x2bcca4u: goto label_2bcca4;
        case 0x2bcca8u: goto label_2bcca8;
        case 0x2bccacu: goto label_2bccac;
        case 0x2bccb0u: goto label_2bccb0;
        case 0x2bccb4u: goto label_2bccb4;
        case 0x2bccb8u: goto label_2bccb8;
        case 0x2bccbcu: goto label_2bccbc;
        case 0x2bccc0u: goto label_2bccc0;
        case 0x2bccc4u: goto label_2bccc4;
        case 0x2bccc8u: goto label_2bccc8;
        case 0x2bccccu: goto label_2bcccc;
        case 0x2bccd0u: goto label_2bccd0;
        case 0x2bccd4u: goto label_2bccd4;
        case 0x2bccd8u: goto label_2bccd8;
        case 0x2bccdcu: goto label_2bccdc;
        case 0x2bcce0u: goto label_2bcce0;
        case 0x2bcce4u: goto label_2bcce4;
        case 0x2bcce8u: goto label_2bcce8;
        case 0x2bccecu: goto label_2bccec;
        case 0x2bccf0u: goto label_2bccf0;
        case 0x2bccf4u: goto label_2bccf4;
        case 0x2bccf8u: goto label_2bccf8;
        case 0x2bccfcu: goto label_2bccfc;
        case 0x2bcd00u: goto label_2bcd00;
        case 0x2bcd04u: goto label_2bcd04;
        case 0x2bcd08u: goto label_2bcd08;
        case 0x2bcd0cu: goto label_2bcd0c;
        case 0x2bcd10u: goto label_2bcd10;
        case 0x2bcd14u: goto label_2bcd14;
        case 0x2bcd18u: goto label_2bcd18;
        case 0x2bcd1cu: goto label_2bcd1c;
        case 0x2bcd20u: goto label_2bcd20;
        case 0x2bcd24u: goto label_2bcd24;
        case 0x2bcd28u: goto label_2bcd28;
        case 0x2bcd2cu: goto label_2bcd2c;
        case 0x2bcd30u: goto label_2bcd30;
        case 0x2bcd34u: goto label_2bcd34;
        case 0x2bcd38u: goto label_2bcd38;
        case 0x2bcd3cu: goto label_2bcd3c;
        case 0x2bcd40u: goto label_2bcd40;
        case 0x2bcd44u: goto label_2bcd44;
        case 0x2bcd48u: goto label_2bcd48;
        case 0x2bcd4cu: goto label_2bcd4c;
        case 0x2bcd50u: goto label_2bcd50;
        case 0x2bcd54u: goto label_2bcd54;
        case 0x2bcd58u: goto label_2bcd58;
        case 0x2bcd5cu: goto label_2bcd5c;
        case 0x2bcd60u: goto label_2bcd60;
        case 0x2bcd64u: goto label_2bcd64;
        case 0x2bcd68u: goto label_2bcd68;
        case 0x2bcd6cu: goto label_2bcd6c;
        case 0x2bcd70u: goto label_2bcd70;
        case 0x2bcd74u: goto label_2bcd74;
        case 0x2bcd78u: goto label_2bcd78;
        case 0x2bcd7cu: goto label_2bcd7c;
        case 0x2bcd80u: goto label_2bcd80;
        case 0x2bcd84u: goto label_2bcd84;
        case 0x2bcd88u: goto label_2bcd88;
        case 0x2bcd8cu: goto label_2bcd8c;
        case 0x2bcd90u: goto label_2bcd90;
        case 0x2bcd94u: goto label_2bcd94;
        case 0x2bcd98u: goto label_2bcd98;
        case 0x2bcd9cu: goto label_2bcd9c;
        case 0x2bcda0u: goto label_2bcda0;
        case 0x2bcda4u: goto label_2bcda4;
        case 0x2bcda8u: goto label_2bcda8;
        case 0x2bcdacu: goto label_2bcdac;
        case 0x2bcdb0u: goto label_2bcdb0;
        case 0x2bcdb4u: goto label_2bcdb4;
        case 0x2bcdb8u: goto label_2bcdb8;
        case 0x2bcdbcu: goto label_2bcdbc;
        case 0x2bcdc0u: goto label_2bcdc0;
        case 0x2bcdc4u: goto label_2bcdc4;
        case 0x2bcdc8u: goto label_2bcdc8;
        case 0x2bcdccu: goto label_2bcdcc;
        case 0x2bcdd0u: goto label_2bcdd0;
        case 0x2bcdd4u: goto label_2bcdd4;
        case 0x2bcdd8u: goto label_2bcdd8;
        case 0x2bcddcu: goto label_2bcddc;
        case 0x2bcde0u: goto label_2bcde0;
        case 0x2bcde4u: goto label_2bcde4;
        case 0x2bcde8u: goto label_2bcde8;
        case 0x2bcdecu: goto label_2bcdec;
        case 0x2bcdf0u: goto label_2bcdf0;
        case 0x2bcdf4u: goto label_2bcdf4;
        case 0x2bcdf8u: goto label_2bcdf8;
        case 0x2bcdfcu: goto label_2bcdfc;
        default: break;
    }

    ctx->pc = 0x2bcca0u;

label_2bcca0:
    // 0x2bcca0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2bcca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2bcca4:
    // 0x2bcca4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2bcca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2bcca8:
    // 0x2bcca8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2bcca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2bccac:
    // 0x2bccac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2bccacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2bccb0:
    // 0x2bccb0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2bccb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2bccb4:
    // 0x2bccb4: 0x1220004c  beqz        $s1, . + 4 + (0x4C << 2)
label_2bccb8:
    if (ctx->pc == 0x2BCCB8u) {
        ctx->pc = 0x2BCCB8u;
            // 0x2bccb8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BCCBCu;
        goto label_2bccbc;
    }
    ctx->pc = 0x2BCCB4u;
    {
        const bool branch_taken_0x2bccb4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BCCB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BCCB4u;
            // 0x2bccb8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bccb4) {
            ctx->pc = 0x2BCDE8u;
            goto label_2bcde8;
        }
    }
    ctx->pc = 0x2BCCBCu;
label_2bccbc:
    // 0x2bccbc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2bccbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2bccc0:
    // 0x2bccc0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2bccc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2bccc4:
    // 0x2bccc4: 0x24631fe0  addiu       $v1, $v1, 0x1FE0
    ctx->pc = 0x2bccc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8160));
label_2bccc8:
    // 0x2bccc8: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x2bccc8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
label_2bcccc:
    // 0x2bcccc: 0x24422018  addiu       $v0, $v0, 0x2018
    ctx->pc = 0x2bccccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8216));
label_2bccd0:
    // 0x2bccd0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2bccd0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_2bccd4:
    // 0x2bccd4: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x2bccd4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_2bccd8:
    // 0x2bccd8: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x2bccd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_2bccdc:
    // 0x2bccdc: 0xc0407c0  jal         func_101F00
label_2bcce0:
    if (ctx->pc == 0x2BCCE0u) {
        ctx->pc = 0x2BCCE0u;
            // 0x2bcce0: 0x24a5cc00  addiu       $a1, $a1, -0x3400 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953984));
        ctx->pc = 0x2BCCE4u;
        goto label_2bcce4;
    }
    ctx->pc = 0x2BCCDCu;
    SET_GPR_U32(ctx, 31, 0x2BCCE4u);
    ctx->pc = 0x2BCCE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BCCDCu;
            // 0x2bcce0: 0x24a5cc00  addiu       $a1, $a1, -0x3400 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953984));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BCCE4u; }
        if (ctx->pc != 0x2BCCE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BCCE4u; }
        if (ctx->pc != 0x2BCCE4u) { return; }
    }
    ctx->pc = 0x2BCCE4u;
label_2bcce4:
    // 0x2bcce4: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x2bcce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_2bcce8:
    // 0x2bcce8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_2bccec:
    if (ctx->pc == 0x2BCCECu) {
        ctx->pc = 0x2BCCECu;
            // 0x2bccec: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x2BCCF0u;
        goto label_2bccf0;
    }
    ctx->pc = 0x2BCCE8u;
    {
        const bool branch_taken_0x2bcce8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bcce8) {
            ctx->pc = 0x2BCCECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BCCE8u;
            // 0x2bccec: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BCCFCu;
            goto label_2bccfc;
        }
    }
    ctx->pc = 0x2BCCF0u;
label_2bccf0:
    // 0x2bccf0: 0xc07507c  jal         func_1D41F0
label_2bccf4:
    if (ctx->pc == 0x2BCCF4u) {
        ctx->pc = 0x2BCCF4u;
            // 0x2bccf4: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->pc = 0x2BCCF8u;
        goto label_2bccf8;
    }
    ctx->pc = 0x2BCCF0u;
    SET_GPR_U32(ctx, 31, 0x2BCCF8u);
    ctx->pc = 0x2BCCF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BCCF0u;
            // 0x2bccf4: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BCCF8u; }
        if (ctx->pc != 0x2BCCF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BCCF8u; }
        if (ctx->pc != 0x2BCCF8u) { return; }
    }
    ctx->pc = 0x2BCCF8u;
label_2bccf8:
    // 0x2bccf8: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x2bccf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_2bccfc:
    // 0x2bccfc: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_2bcd00:
    if (ctx->pc == 0x2BCD00u) {
        ctx->pc = 0x2BCD00u;
            // 0x2bcd00: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x2BCD04u;
        goto label_2bcd04;
    }
    ctx->pc = 0x2BCCFCu;
    {
        const bool branch_taken_0x2bccfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bccfc) {
            ctx->pc = 0x2BCD00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BCCFCu;
            // 0x2bcd00: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BCD2Cu;
            goto label_2bcd2c;
        }
    }
    ctx->pc = 0x2BCD04u;
label_2bcd04:
    // 0x2bcd04: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2bcd08:
    if (ctx->pc == 0x2BCD08u) {
        ctx->pc = 0x2BCD0Cu;
        goto label_2bcd0c;
    }
    ctx->pc = 0x2BCD04u;
    {
        const bool branch_taken_0x2bcd04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bcd04) {
            ctx->pc = 0x2BCD28u;
            goto label_2bcd28;
        }
    }
    ctx->pc = 0x2BCD0Cu;
label_2bcd0c:
    // 0x2bcd0c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2bcd10:
    if (ctx->pc == 0x2BCD10u) {
        ctx->pc = 0x2BCD14u;
        goto label_2bcd14;
    }
    ctx->pc = 0x2BCD0Cu;
    {
        const bool branch_taken_0x2bcd0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bcd0c) {
            ctx->pc = 0x2BCD28u;
            goto label_2bcd28;
        }
    }
    ctx->pc = 0x2BCD14u;
label_2bcd14:
    // 0x2bcd14: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x2bcd14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_2bcd18:
    // 0x2bcd18: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2bcd1c:
    if (ctx->pc == 0x2BCD1Cu) {
        ctx->pc = 0x2BCD20u;
        goto label_2bcd20;
    }
    ctx->pc = 0x2BCD18u;
    {
        const bool branch_taken_0x2bcd18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bcd18) {
            ctx->pc = 0x2BCD28u;
            goto label_2bcd28;
        }
    }
    ctx->pc = 0x2BCD20u;
label_2bcd20:
    // 0x2bcd20: 0xc0400a8  jal         func_1002A0
label_2bcd24:
    if (ctx->pc == 0x2BCD24u) {
        ctx->pc = 0x2BCD28u;
        goto label_2bcd28;
    }
    ctx->pc = 0x2BCD20u;
    SET_GPR_U32(ctx, 31, 0x2BCD28u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BCD28u; }
        if (ctx->pc != 0x2BCD28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BCD28u; }
        if (ctx->pc != 0x2BCD28u) { return; }
    }
    ctx->pc = 0x2BCD28u;
label_2bcd28:
    // 0x2bcd28: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x2bcd28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_2bcd2c:
    // 0x2bcd2c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_2bcd30:
    if (ctx->pc == 0x2BCD30u) {
        ctx->pc = 0x2BCD30u;
            // 0x2bcd30: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x2BCD34u;
        goto label_2bcd34;
    }
    ctx->pc = 0x2BCD2Cu;
    {
        const bool branch_taken_0x2bcd2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bcd2c) {
            ctx->pc = 0x2BCD30u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BCD2Cu;
            // 0x2bcd30: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BCD5Cu;
            goto label_2bcd5c;
        }
    }
    ctx->pc = 0x2BCD34u;
label_2bcd34:
    // 0x2bcd34: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2bcd38:
    if (ctx->pc == 0x2BCD38u) {
        ctx->pc = 0x2BCD3Cu;
        goto label_2bcd3c;
    }
    ctx->pc = 0x2BCD34u;
    {
        const bool branch_taken_0x2bcd34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bcd34) {
            ctx->pc = 0x2BCD58u;
            goto label_2bcd58;
        }
    }
    ctx->pc = 0x2BCD3Cu;
label_2bcd3c:
    // 0x2bcd3c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2bcd40:
    if (ctx->pc == 0x2BCD40u) {
        ctx->pc = 0x2BCD44u;
        goto label_2bcd44;
    }
    ctx->pc = 0x2BCD3Cu;
    {
        const bool branch_taken_0x2bcd3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bcd3c) {
            ctx->pc = 0x2BCD58u;
            goto label_2bcd58;
        }
    }
    ctx->pc = 0x2BCD44u;
label_2bcd44:
    // 0x2bcd44: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x2bcd44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_2bcd48:
    // 0x2bcd48: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2bcd4c:
    if (ctx->pc == 0x2BCD4Cu) {
        ctx->pc = 0x2BCD50u;
        goto label_2bcd50;
    }
    ctx->pc = 0x2BCD48u;
    {
        const bool branch_taken_0x2bcd48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bcd48) {
            ctx->pc = 0x2BCD58u;
            goto label_2bcd58;
        }
    }
    ctx->pc = 0x2BCD50u;
label_2bcd50:
    // 0x2bcd50: 0xc0400a8  jal         func_1002A0
label_2bcd54:
    if (ctx->pc == 0x2BCD54u) {
        ctx->pc = 0x2BCD58u;
        goto label_2bcd58;
    }
    ctx->pc = 0x2BCD50u;
    SET_GPR_U32(ctx, 31, 0x2BCD58u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BCD58u; }
        if (ctx->pc != 0x2BCD58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BCD58u; }
        if (ctx->pc != 0x2BCD58u) { return; }
    }
    ctx->pc = 0x2BCD58u;
label_2bcd58:
    // 0x2bcd58: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x2bcd58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_2bcd5c:
    // 0x2bcd5c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2bcd60:
    if (ctx->pc == 0x2BCD60u) {
        ctx->pc = 0x2BCD64u;
        goto label_2bcd64;
    }
    ctx->pc = 0x2BCD5Cu;
    {
        const bool branch_taken_0x2bcd5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bcd5c) {
            ctx->pc = 0x2BCD78u;
            goto label_2bcd78;
        }
    }
    ctx->pc = 0x2BCD64u;
label_2bcd64:
    // 0x2bcd64: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2bcd64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2bcd68:
    // 0x2bcd68: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2bcd68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_2bcd6c:
    // 0x2bcd6c: 0x24631fd0  addiu       $v1, $v1, 0x1FD0
    ctx->pc = 0x2bcd6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8144));
label_2bcd70:
    // 0x2bcd70: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x2bcd70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_2bcd74:
    // 0x2bcd74: 0xac400d48  sw          $zero, 0xD48($v0)
    ctx->pc = 0x2bcd74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3400), GPR_U32(ctx, 0));
label_2bcd78:
    // 0x2bcd78: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_2bcd7c:
    if (ctx->pc == 0x2BCD7Cu) {
        ctx->pc = 0x2BCD7Cu;
            // 0x2bcd7c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x2BCD80u;
        goto label_2bcd80;
    }
    ctx->pc = 0x2BCD78u;
    {
        const bool branch_taken_0x2bcd78 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bcd78) {
            ctx->pc = 0x2BCD7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BCD78u;
            // 0x2bcd7c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BCDD4u;
            goto label_2bcdd4;
        }
    }
    ctx->pc = 0x2BCD80u;
label_2bcd80:
    // 0x2bcd80: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2bcd80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2bcd84:
    // 0x2bcd84: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x2bcd84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_2bcd88:
    // 0x2bcd88: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2bcd88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2bcd8c:
    // 0x2bcd8c: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x2bcd8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_2bcd90:
    // 0x2bcd90: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2bcd94:
    if (ctx->pc == 0x2BCD94u) {
        ctx->pc = 0x2BCD94u;
            // 0x2bcd94: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x2BCD98u;
        goto label_2bcd98;
    }
    ctx->pc = 0x2BCD90u;
    {
        const bool branch_taken_0x2bcd90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bcd90) {
            ctx->pc = 0x2BCD94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BCD90u;
            // 0x2bcd94: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BCDACu;
            goto label_2bcdac;
        }
    }
    ctx->pc = 0x2BCD98u;
label_2bcd98:
    // 0x2bcd98: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2bcd98u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2bcd9c:
    // 0x2bcd9c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2bcd9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2bcda0:
    // 0x2bcda0: 0x320f809  jalr        $t9
label_2bcda4:
    if (ctx->pc == 0x2BCDA4u) {
        ctx->pc = 0x2BCDA4u;
            // 0x2bcda4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2BCDA8u;
        goto label_2bcda8;
    }
    ctx->pc = 0x2BCDA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2BCDA8u);
        ctx->pc = 0x2BCDA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BCDA0u;
            // 0x2bcda4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2BCDA8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2BCDA8u; }
            if (ctx->pc != 0x2BCDA8u) { return; }
        }
        }
    }
    ctx->pc = 0x2BCDA8u;
label_2bcda8:
    // 0x2bcda8: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x2bcda8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_2bcdac:
    // 0x2bcdac: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2bcdb0:
    if (ctx->pc == 0x2BCDB0u) {
        ctx->pc = 0x2BCDB0u;
            // 0x2bcdb0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BCDB4u;
        goto label_2bcdb4;
    }
    ctx->pc = 0x2BCDACu;
    {
        const bool branch_taken_0x2bcdac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bcdac) {
            ctx->pc = 0x2BCDB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BCDACu;
            // 0x2bcdb0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BCDC8u;
            goto label_2bcdc8;
        }
    }
    ctx->pc = 0x2BCDB4u;
label_2bcdb4:
    // 0x2bcdb4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2bcdb4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2bcdb8:
    // 0x2bcdb8: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2bcdb8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2bcdbc:
    // 0x2bcdbc: 0x320f809  jalr        $t9
label_2bcdc0:
    if (ctx->pc == 0x2BCDC0u) {
        ctx->pc = 0x2BCDC0u;
            // 0x2bcdc0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2BCDC4u;
        goto label_2bcdc4;
    }
    ctx->pc = 0x2BCDBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2BCDC4u);
        ctx->pc = 0x2BCDC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BCDBCu;
            // 0x2bcdc0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2BCDC4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2BCDC4u; }
            if (ctx->pc != 0x2BCDC4u) { return; }
        }
        }
    }
    ctx->pc = 0x2BCDC4u;
label_2bcdc4:
    // 0x2bcdc4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2bcdc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2bcdc8:
    // 0x2bcdc8: 0xc075bf8  jal         func_1D6FE0
label_2bcdcc:
    if (ctx->pc == 0x2BCDCCu) {
        ctx->pc = 0x2BCDCCu;
            // 0x2bcdcc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BCDD0u;
        goto label_2bcdd0;
    }
    ctx->pc = 0x2BCDC8u;
    SET_GPR_U32(ctx, 31, 0x2BCDD0u);
    ctx->pc = 0x2BCDCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BCDC8u;
            // 0x2bcdcc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BCDD0u; }
        if (ctx->pc != 0x2BCDD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BCDD0u; }
        if (ctx->pc != 0x2BCDD0u) { return; }
    }
    ctx->pc = 0x2BCDD0u;
label_2bcdd0:
    // 0x2bcdd0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2bcdd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2bcdd4:
    // 0x2bcdd4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2bcdd4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2bcdd8:
    // 0x2bcdd8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2bcddc:
    if (ctx->pc == 0x2BCDDCu) {
        ctx->pc = 0x2BCDDCu;
            // 0x2bcddc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BCDE0u;
        goto label_2bcde0;
    }
    ctx->pc = 0x2BCDD8u;
    {
        const bool branch_taken_0x2bcdd8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2bcdd8) {
            ctx->pc = 0x2BCDDCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BCDD8u;
            // 0x2bcddc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BCDECu;
            goto label_2bcdec;
        }
    }
    ctx->pc = 0x2BCDE0u;
label_2bcde0:
    // 0x2bcde0: 0xc0400a8  jal         func_1002A0
label_2bcde4:
    if (ctx->pc == 0x2BCDE4u) {
        ctx->pc = 0x2BCDE4u;
            // 0x2bcde4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BCDE8u;
        goto label_2bcde8;
    }
    ctx->pc = 0x2BCDE0u;
    SET_GPR_U32(ctx, 31, 0x2BCDE8u);
    ctx->pc = 0x2BCDE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BCDE0u;
            // 0x2bcde4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BCDE8u; }
        if (ctx->pc != 0x2BCDE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BCDE8u; }
        if (ctx->pc != 0x2BCDE8u) { return; }
    }
    ctx->pc = 0x2BCDE8u;
label_2bcde8:
    // 0x2bcde8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2bcde8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2bcdec:
    // 0x2bcdec: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2bcdecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2bcdf0:
    // 0x2bcdf0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2bcdf0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2bcdf4:
    // 0x2bcdf4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2bcdf4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2bcdf8:
    // 0x2bcdf8: 0x3e00008  jr          $ra
label_2bcdfc:
    if (ctx->pc == 0x2BCDFCu) {
        ctx->pc = 0x2BCDFCu;
            // 0x2bcdfc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2BCE00u;
        goto label_fallthrough_0x2bcdf8;
    }
    ctx->pc = 0x2BCDF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BCDFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BCDF8u;
            // 0x2bcdfc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2bcdf8:
    ctx->pc = 0x2BCE00u;
}
