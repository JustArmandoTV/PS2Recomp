#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0043DD30
// Address: 0x43dd30 - 0x43df30
void sub_0043DD30_0x43dd30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0043DD30_0x43dd30");
#endif

    switch (ctx->pc) {
        case 0x43dd30u: goto label_43dd30;
        case 0x43dd34u: goto label_43dd34;
        case 0x43dd38u: goto label_43dd38;
        case 0x43dd3cu: goto label_43dd3c;
        case 0x43dd40u: goto label_43dd40;
        case 0x43dd44u: goto label_43dd44;
        case 0x43dd48u: goto label_43dd48;
        case 0x43dd4cu: goto label_43dd4c;
        case 0x43dd50u: goto label_43dd50;
        case 0x43dd54u: goto label_43dd54;
        case 0x43dd58u: goto label_43dd58;
        case 0x43dd5cu: goto label_43dd5c;
        case 0x43dd60u: goto label_43dd60;
        case 0x43dd64u: goto label_43dd64;
        case 0x43dd68u: goto label_43dd68;
        case 0x43dd6cu: goto label_43dd6c;
        case 0x43dd70u: goto label_43dd70;
        case 0x43dd74u: goto label_43dd74;
        case 0x43dd78u: goto label_43dd78;
        case 0x43dd7cu: goto label_43dd7c;
        case 0x43dd80u: goto label_43dd80;
        case 0x43dd84u: goto label_43dd84;
        case 0x43dd88u: goto label_43dd88;
        case 0x43dd8cu: goto label_43dd8c;
        case 0x43dd90u: goto label_43dd90;
        case 0x43dd94u: goto label_43dd94;
        case 0x43dd98u: goto label_43dd98;
        case 0x43dd9cu: goto label_43dd9c;
        case 0x43dda0u: goto label_43dda0;
        case 0x43dda4u: goto label_43dda4;
        case 0x43dda8u: goto label_43dda8;
        case 0x43ddacu: goto label_43ddac;
        case 0x43ddb0u: goto label_43ddb0;
        case 0x43ddb4u: goto label_43ddb4;
        case 0x43ddb8u: goto label_43ddb8;
        case 0x43ddbcu: goto label_43ddbc;
        case 0x43ddc0u: goto label_43ddc0;
        case 0x43ddc4u: goto label_43ddc4;
        case 0x43ddc8u: goto label_43ddc8;
        case 0x43ddccu: goto label_43ddcc;
        case 0x43ddd0u: goto label_43ddd0;
        case 0x43ddd4u: goto label_43ddd4;
        case 0x43ddd8u: goto label_43ddd8;
        case 0x43dddcu: goto label_43dddc;
        case 0x43dde0u: goto label_43dde0;
        case 0x43dde4u: goto label_43dde4;
        case 0x43dde8u: goto label_43dde8;
        case 0x43ddecu: goto label_43ddec;
        case 0x43ddf0u: goto label_43ddf0;
        case 0x43ddf4u: goto label_43ddf4;
        case 0x43ddf8u: goto label_43ddf8;
        case 0x43ddfcu: goto label_43ddfc;
        case 0x43de00u: goto label_43de00;
        case 0x43de04u: goto label_43de04;
        case 0x43de08u: goto label_43de08;
        case 0x43de0cu: goto label_43de0c;
        case 0x43de10u: goto label_43de10;
        case 0x43de14u: goto label_43de14;
        case 0x43de18u: goto label_43de18;
        case 0x43de1cu: goto label_43de1c;
        case 0x43de20u: goto label_43de20;
        case 0x43de24u: goto label_43de24;
        case 0x43de28u: goto label_43de28;
        case 0x43de2cu: goto label_43de2c;
        case 0x43de30u: goto label_43de30;
        case 0x43de34u: goto label_43de34;
        case 0x43de38u: goto label_43de38;
        case 0x43de3cu: goto label_43de3c;
        case 0x43de40u: goto label_43de40;
        case 0x43de44u: goto label_43de44;
        case 0x43de48u: goto label_43de48;
        case 0x43de4cu: goto label_43de4c;
        case 0x43de50u: goto label_43de50;
        case 0x43de54u: goto label_43de54;
        case 0x43de58u: goto label_43de58;
        case 0x43de5cu: goto label_43de5c;
        case 0x43de60u: goto label_43de60;
        case 0x43de64u: goto label_43de64;
        case 0x43de68u: goto label_43de68;
        case 0x43de6cu: goto label_43de6c;
        case 0x43de70u: goto label_43de70;
        case 0x43de74u: goto label_43de74;
        case 0x43de78u: goto label_43de78;
        case 0x43de7cu: goto label_43de7c;
        case 0x43de80u: goto label_43de80;
        case 0x43de84u: goto label_43de84;
        case 0x43de88u: goto label_43de88;
        case 0x43de8cu: goto label_43de8c;
        case 0x43de90u: goto label_43de90;
        case 0x43de94u: goto label_43de94;
        case 0x43de98u: goto label_43de98;
        case 0x43de9cu: goto label_43de9c;
        case 0x43dea0u: goto label_43dea0;
        case 0x43dea4u: goto label_43dea4;
        case 0x43dea8u: goto label_43dea8;
        case 0x43deacu: goto label_43deac;
        case 0x43deb0u: goto label_43deb0;
        case 0x43deb4u: goto label_43deb4;
        case 0x43deb8u: goto label_43deb8;
        case 0x43debcu: goto label_43debc;
        case 0x43dec0u: goto label_43dec0;
        case 0x43dec4u: goto label_43dec4;
        case 0x43dec8u: goto label_43dec8;
        case 0x43deccu: goto label_43decc;
        case 0x43ded0u: goto label_43ded0;
        case 0x43ded4u: goto label_43ded4;
        case 0x43ded8u: goto label_43ded8;
        case 0x43dedcu: goto label_43dedc;
        case 0x43dee0u: goto label_43dee0;
        case 0x43dee4u: goto label_43dee4;
        case 0x43dee8u: goto label_43dee8;
        case 0x43deecu: goto label_43deec;
        case 0x43def0u: goto label_43def0;
        case 0x43def4u: goto label_43def4;
        case 0x43def8u: goto label_43def8;
        case 0x43defcu: goto label_43defc;
        case 0x43df00u: goto label_43df00;
        case 0x43df04u: goto label_43df04;
        case 0x43df08u: goto label_43df08;
        case 0x43df0cu: goto label_43df0c;
        case 0x43df10u: goto label_43df10;
        case 0x43df14u: goto label_43df14;
        case 0x43df18u: goto label_43df18;
        case 0x43df1cu: goto label_43df1c;
        case 0x43df20u: goto label_43df20;
        case 0x43df24u: goto label_43df24;
        case 0x43df28u: goto label_43df28;
        case 0x43df2cu: goto label_43df2c;
        default: break;
    }

    ctx->pc = 0x43dd30u;

label_43dd30:
    // 0x43dd30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x43dd30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_43dd34:
    // 0x43dd34: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x43dd34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_43dd38:
    // 0x43dd38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x43dd38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_43dd3c:
    // 0x43dd3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x43dd3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_43dd40:
    // 0x43dd40: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x43dd40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_43dd44:
    // 0x43dd44: 0x1220004c  beqz        $s1, . + 4 + (0x4C << 2)
label_43dd48:
    if (ctx->pc == 0x43DD48u) {
        ctx->pc = 0x43DD48u;
            // 0x43dd48: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43DD4Cu;
        goto label_43dd4c;
    }
    ctx->pc = 0x43DD44u;
    {
        const bool branch_taken_0x43dd44 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x43DD48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43DD44u;
            // 0x43dd48: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43dd44) {
            ctx->pc = 0x43DE78u;
            goto label_43de78;
        }
    }
    ctx->pc = 0x43DD4Cu;
label_43dd4c:
    // 0x43dd4c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x43dd4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_43dd50:
    // 0x43dd50: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x43dd50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_43dd54:
    // 0x43dd54: 0x2463d260  addiu       $v1, $v1, -0x2DA0
    ctx->pc = 0x43dd54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955616));
label_43dd58:
    // 0x43dd58: 0x3c050044  lui         $a1, 0x44
    ctx->pc = 0x43dd58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
label_43dd5c:
    // 0x43dd5c: 0x2442d298  addiu       $v0, $v0, -0x2D68
    ctx->pc = 0x43dd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955672));
label_43dd60:
    // 0x43dd60: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x43dd60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_43dd64:
    // 0x43dd64: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x43dd64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_43dd68:
    // 0x43dd68: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x43dd68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_43dd6c:
    // 0x43dd6c: 0xc0407c0  jal         func_101F00
label_43dd70:
    if (ctx->pc == 0x43DD70u) {
        ctx->pc = 0x43DD70u;
            // 0x43dd70: 0x24a5de90  addiu       $a1, $a1, -0x2170 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958736));
        ctx->pc = 0x43DD74u;
        goto label_43dd74;
    }
    ctx->pc = 0x43DD6Cu;
    SET_GPR_U32(ctx, 31, 0x43DD74u);
    ctx->pc = 0x43DD70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43DD6Cu;
            // 0x43dd70: 0x24a5de90  addiu       $a1, $a1, -0x2170 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958736));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43DD74u; }
        if (ctx->pc != 0x43DD74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43DD74u; }
        if (ctx->pc != 0x43DD74u) { return; }
    }
    ctx->pc = 0x43DD74u;
label_43dd74:
    // 0x43dd74: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x43dd74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_43dd78:
    // 0x43dd78: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_43dd7c:
    if (ctx->pc == 0x43DD7Cu) {
        ctx->pc = 0x43DD7Cu;
            // 0x43dd7c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x43DD80u;
        goto label_43dd80;
    }
    ctx->pc = 0x43DD78u;
    {
        const bool branch_taken_0x43dd78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x43dd78) {
            ctx->pc = 0x43DD7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x43DD78u;
            // 0x43dd7c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x43DD8Cu;
            goto label_43dd8c;
        }
    }
    ctx->pc = 0x43DD80u;
label_43dd80:
    // 0x43dd80: 0xc07507c  jal         func_1D41F0
label_43dd84:
    if (ctx->pc == 0x43DD84u) {
        ctx->pc = 0x43DD84u;
            // 0x43dd84: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->pc = 0x43DD88u;
        goto label_43dd88;
    }
    ctx->pc = 0x43DD80u;
    SET_GPR_U32(ctx, 31, 0x43DD88u);
    ctx->pc = 0x43DD84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43DD80u;
            // 0x43dd84: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43DD88u; }
        if (ctx->pc != 0x43DD88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43DD88u; }
        if (ctx->pc != 0x43DD88u) { return; }
    }
    ctx->pc = 0x43DD88u;
label_43dd88:
    // 0x43dd88: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x43dd88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_43dd8c:
    // 0x43dd8c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_43dd90:
    if (ctx->pc == 0x43DD90u) {
        ctx->pc = 0x43DD90u;
            // 0x43dd90: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x43DD94u;
        goto label_43dd94;
    }
    ctx->pc = 0x43DD8Cu;
    {
        const bool branch_taken_0x43dd8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x43dd8c) {
            ctx->pc = 0x43DD90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x43DD8Cu;
            // 0x43dd90: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x43DDBCu;
            goto label_43ddbc;
        }
    }
    ctx->pc = 0x43DD94u;
label_43dd94:
    // 0x43dd94: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_43dd98:
    if (ctx->pc == 0x43DD98u) {
        ctx->pc = 0x43DD9Cu;
        goto label_43dd9c;
    }
    ctx->pc = 0x43DD94u;
    {
        const bool branch_taken_0x43dd94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x43dd94) {
            ctx->pc = 0x43DDB8u;
            goto label_43ddb8;
        }
    }
    ctx->pc = 0x43DD9Cu;
label_43dd9c:
    // 0x43dd9c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_43dda0:
    if (ctx->pc == 0x43DDA0u) {
        ctx->pc = 0x43DDA4u;
        goto label_43dda4;
    }
    ctx->pc = 0x43DD9Cu;
    {
        const bool branch_taken_0x43dd9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x43dd9c) {
            ctx->pc = 0x43DDB8u;
            goto label_43ddb8;
        }
    }
    ctx->pc = 0x43DDA4u;
label_43dda4:
    // 0x43dda4: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x43dda4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_43dda8:
    // 0x43dda8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_43ddac:
    if (ctx->pc == 0x43DDACu) {
        ctx->pc = 0x43DDB0u;
        goto label_43ddb0;
    }
    ctx->pc = 0x43DDA8u;
    {
        const bool branch_taken_0x43dda8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x43dda8) {
            ctx->pc = 0x43DDB8u;
            goto label_43ddb8;
        }
    }
    ctx->pc = 0x43DDB0u;
label_43ddb0:
    // 0x43ddb0: 0xc0400a8  jal         func_1002A0
label_43ddb4:
    if (ctx->pc == 0x43DDB4u) {
        ctx->pc = 0x43DDB8u;
        goto label_43ddb8;
    }
    ctx->pc = 0x43DDB0u;
    SET_GPR_U32(ctx, 31, 0x43DDB8u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43DDB8u; }
        if (ctx->pc != 0x43DDB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43DDB8u; }
        if (ctx->pc != 0x43DDB8u) { return; }
    }
    ctx->pc = 0x43DDB8u;
label_43ddb8:
    // 0x43ddb8: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x43ddb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_43ddbc:
    // 0x43ddbc: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_43ddc0:
    if (ctx->pc == 0x43DDC0u) {
        ctx->pc = 0x43DDC0u;
            // 0x43ddc0: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x43DDC4u;
        goto label_43ddc4;
    }
    ctx->pc = 0x43DDBCu;
    {
        const bool branch_taken_0x43ddbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x43ddbc) {
            ctx->pc = 0x43DDC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x43DDBCu;
            // 0x43ddc0: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x43DDECu;
            goto label_43ddec;
        }
    }
    ctx->pc = 0x43DDC4u;
label_43ddc4:
    // 0x43ddc4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_43ddc8:
    if (ctx->pc == 0x43DDC8u) {
        ctx->pc = 0x43DDCCu;
        goto label_43ddcc;
    }
    ctx->pc = 0x43DDC4u;
    {
        const bool branch_taken_0x43ddc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x43ddc4) {
            ctx->pc = 0x43DDE8u;
            goto label_43dde8;
        }
    }
    ctx->pc = 0x43DDCCu;
label_43ddcc:
    // 0x43ddcc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_43ddd0:
    if (ctx->pc == 0x43DDD0u) {
        ctx->pc = 0x43DDD4u;
        goto label_43ddd4;
    }
    ctx->pc = 0x43DDCCu;
    {
        const bool branch_taken_0x43ddcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x43ddcc) {
            ctx->pc = 0x43DDE8u;
            goto label_43dde8;
        }
    }
    ctx->pc = 0x43DDD4u;
label_43ddd4:
    // 0x43ddd4: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x43ddd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_43ddd8:
    // 0x43ddd8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_43dddc:
    if (ctx->pc == 0x43DDDCu) {
        ctx->pc = 0x43DDE0u;
        goto label_43dde0;
    }
    ctx->pc = 0x43DDD8u;
    {
        const bool branch_taken_0x43ddd8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x43ddd8) {
            ctx->pc = 0x43DDE8u;
            goto label_43dde8;
        }
    }
    ctx->pc = 0x43DDE0u;
label_43dde0:
    // 0x43dde0: 0xc0400a8  jal         func_1002A0
label_43dde4:
    if (ctx->pc == 0x43DDE4u) {
        ctx->pc = 0x43DDE8u;
        goto label_43dde8;
    }
    ctx->pc = 0x43DDE0u;
    SET_GPR_U32(ctx, 31, 0x43DDE8u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43DDE8u; }
        if (ctx->pc != 0x43DDE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43DDE8u; }
        if (ctx->pc != 0x43DDE8u) { return; }
    }
    ctx->pc = 0x43DDE8u;
label_43dde8:
    // 0x43dde8: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x43dde8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_43ddec:
    // 0x43ddec: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_43ddf0:
    if (ctx->pc == 0x43DDF0u) {
        ctx->pc = 0x43DDF4u;
        goto label_43ddf4;
    }
    ctx->pc = 0x43DDECu;
    {
        const bool branch_taken_0x43ddec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x43ddec) {
            ctx->pc = 0x43DE08u;
            goto label_43de08;
        }
    }
    ctx->pc = 0x43DDF4u;
label_43ddf4:
    // 0x43ddf4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x43ddf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_43ddf8:
    // 0x43ddf8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x43ddf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_43ddfc:
    // 0x43ddfc: 0x2463d250  addiu       $v1, $v1, -0x2DB0
    ctx->pc = 0x43ddfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955600));
label_43de00:
    // 0x43de00: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x43de00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_43de04:
    // 0x43de04: 0xac400d00  sw          $zero, 0xD00($v0)
    ctx->pc = 0x43de04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3328), GPR_U32(ctx, 0));
label_43de08:
    // 0x43de08: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_43de0c:
    if (ctx->pc == 0x43DE0Cu) {
        ctx->pc = 0x43DE0Cu;
            // 0x43de0c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x43DE10u;
        goto label_43de10;
    }
    ctx->pc = 0x43DE08u;
    {
        const bool branch_taken_0x43de08 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x43de08) {
            ctx->pc = 0x43DE0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x43DE08u;
            // 0x43de0c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x43DE64u;
            goto label_43de64;
        }
    }
    ctx->pc = 0x43DE10u;
label_43de10:
    // 0x43de10: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x43de10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_43de14:
    // 0x43de14: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x43de14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_43de18:
    // 0x43de18: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x43de18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_43de1c:
    // 0x43de1c: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x43de1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_43de20:
    // 0x43de20: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_43de24:
    if (ctx->pc == 0x43DE24u) {
        ctx->pc = 0x43DE24u;
            // 0x43de24: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x43DE28u;
        goto label_43de28;
    }
    ctx->pc = 0x43DE20u;
    {
        const bool branch_taken_0x43de20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x43de20) {
            ctx->pc = 0x43DE24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x43DE20u;
            // 0x43de24: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x43DE3Cu;
            goto label_43de3c;
        }
    }
    ctx->pc = 0x43DE28u;
label_43de28:
    // 0x43de28: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x43de28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_43de2c:
    // 0x43de2c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x43de2cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_43de30:
    // 0x43de30: 0x320f809  jalr        $t9
label_43de34:
    if (ctx->pc == 0x43DE34u) {
        ctx->pc = 0x43DE34u;
            // 0x43de34: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x43DE38u;
        goto label_43de38;
    }
    ctx->pc = 0x43DE30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x43DE38u);
        ctx->pc = 0x43DE34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43DE30u;
            // 0x43de34: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x43DE38u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x43DE38u; }
            if (ctx->pc != 0x43DE38u) { return; }
        }
        }
    }
    ctx->pc = 0x43DE38u;
label_43de38:
    // 0x43de38: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x43de38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_43de3c:
    // 0x43de3c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_43de40:
    if (ctx->pc == 0x43DE40u) {
        ctx->pc = 0x43DE40u;
            // 0x43de40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43DE44u;
        goto label_43de44;
    }
    ctx->pc = 0x43DE3Cu;
    {
        const bool branch_taken_0x43de3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x43de3c) {
            ctx->pc = 0x43DE40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x43DE3Cu;
            // 0x43de40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x43DE58u;
            goto label_43de58;
        }
    }
    ctx->pc = 0x43DE44u;
label_43de44:
    // 0x43de44: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x43de44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_43de48:
    // 0x43de48: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x43de48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_43de4c:
    // 0x43de4c: 0x320f809  jalr        $t9
label_43de50:
    if (ctx->pc == 0x43DE50u) {
        ctx->pc = 0x43DE50u;
            // 0x43de50: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x43DE54u;
        goto label_43de54;
    }
    ctx->pc = 0x43DE4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x43DE54u);
        ctx->pc = 0x43DE50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43DE4Cu;
            // 0x43de50: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x43DE54u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x43DE54u; }
            if (ctx->pc != 0x43DE54u) { return; }
        }
        }
    }
    ctx->pc = 0x43DE54u;
label_43de54:
    // 0x43de54: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x43de54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_43de58:
    // 0x43de58: 0xc075bf8  jal         func_1D6FE0
label_43de5c:
    if (ctx->pc == 0x43DE5Cu) {
        ctx->pc = 0x43DE5Cu;
            // 0x43de5c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43DE60u;
        goto label_43de60;
    }
    ctx->pc = 0x43DE58u;
    SET_GPR_U32(ctx, 31, 0x43DE60u);
    ctx->pc = 0x43DE5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43DE58u;
            // 0x43de5c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43DE60u; }
        if (ctx->pc != 0x43DE60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43DE60u; }
        if (ctx->pc != 0x43DE60u) { return; }
    }
    ctx->pc = 0x43DE60u;
label_43de60:
    // 0x43de60: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x43de60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_43de64:
    // 0x43de64: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x43de64u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_43de68:
    // 0x43de68: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_43de6c:
    if (ctx->pc == 0x43DE6Cu) {
        ctx->pc = 0x43DE6Cu;
            // 0x43de6c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43DE70u;
        goto label_43de70;
    }
    ctx->pc = 0x43DE68u;
    {
        const bool branch_taken_0x43de68 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x43de68) {
            ctx->pc = 0x43DE6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x43DE68u;
            // 0x43de6c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x43DE7Cu;
            goto label_43de7c;
        }
    }
    ctx->pc = 0x43DE70u;
label_43de70:
    // 0x43de70: 0xc0400a8  jal         func_1002A0
label_43de74:
    if (ctx->pc == 0x43DE74u) {
        ctx->pc = 0x43DE74u;
            // 0x43de74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43DE78u;
        goto label_43de78;
    }
    ctx->pc = 0x43DE70u;
    SET_GPR_U32(ctx, 31, 0x43DE78u);
    ctx->pc = 0x43DE74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43DE70u;
            // 0x43de74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43DE78u; }
        if (ctx->pc != 0x43DE78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43DE78u; }
        if (ctx->pc != 0x43DE78u) { return; }
    }
    ctx->pc = 0x43DE78u;
label_43de78:
    // 0x43de78: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x43de78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_43de7c:
    // 0x43de7c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x43de7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_43de80:
    // 0x43de80: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x43de80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_43de84:
    // 0x43de84: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x43de84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_43de88:
    // 0x43de88: 0x3e00008  jr          $ra
label_43de8c:
    if (ctx->pc == 0x43DE8Cu) {
        ctx->pc = 0x43DE8Cu;
            // 0x43de8c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x43DE90u;
        goto label_43de90;
    }
    ctx->pc = 0x43DE88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43DE8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43DE88u;
            // 0x43de8c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x43DE90u;
label_43de90:
    // 0x43de90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x43de90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_43de94:
    // 0x43de94: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x43de94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_43de98:
    // 0x43de98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x43de98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_43de9c:
    // 0x43de9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x43de9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_43dea0:
    // 0x43dea0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x43dea0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_43dea4:
    // 0x43dea4: 0x1200001c  beqz        $s0, . + 4 + (0x1C << 2)
label_43dea8:
    if (ctx->pc == 0x43DEA8u) {
        ctx->pc = 0x43DEA8u;
            // 0x43dea8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43DEACu;
        goto label_43deac;
    }
    ctx->pc = 0x43DEA4u;
    {
        const bool branch_taken_0x43dea4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x43DEA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43DEA4u;
            // 0x43dea8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43dea4) {
            ctx->pc = 0x43DF18u;
            goto label_43df18;
        }
    }
    ctx->pc = 0x43DEACu;
label_43deac:
    // 0x43deac: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x43deacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_43deb0:
    // 0x43deb0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x43deb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_43deb4:
    // 0x43deb4: 0x2463d1a0  addiu       $v1, $v1, -0x2E60
    ctx->pc = 0x43deb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955424));
label_43deb8:
    // 0x43deb8: 0x2442d1e0  addiu       $v0, $v0, -0x2E20
    ctx->pc = 0x43deb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955488));
label_43debc:
    // 0x43debc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x43debcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_43dec0:
    // 0x43dec0: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x43dec0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_43dec4:
    // 0x43dec4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x43dec4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_43dec8:
    // 0x43dec8: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x43dec8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_43decc:
    // 0x43decc: 0x320f809  jalr        $t9
label_43ded0:
    if (ctx->pc == 0x43DED0u) {
        ctx->pc = 0x43DED4u;
        goto label_43ded4;
    }
    ctx->pc = 0x43DECCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x43DED4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x43DED4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x43DED4u; }
            if (ctx->pc != 0x43DED4u) { return; }
        }
        }
    }
    ctx->pc = 0x43DED4u;
label_43ded4:
    // 0x43ded4: 0x5200000b  beql        $s0, $zero, . + 4 + (0xB << 2)
label_43ded8:
    if (ctx->pc == 0x43DED8u) {
        ctx->pc = 0x43DED8u;
            // 0x43ded8: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->pc = 0x43DEDCu;
        goto label_43dedc;
    }
    ctx->pc = 0x43DED4u;
    {
        const bool branch_taken_0x43ded4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x43ded4) {
            ctx->pc = 0x43DED8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x43DED4u;
            // 0x43ded8: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x43DF04u;
            goto label_43df04;
        }
    }
    ctx->pc = 0x43DEDCu;
label_43dedc:
    // 0x43dedc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x43dedcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_43dee0:
    // 0x43dee0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x43dee0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_43dee4:
    // 0x43dee4: 0x24638470  addiu       $v1, $v1, -0x7B90
    ctx->pc = 0x43dee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935664));
label_43dee8:
    // 0x43dee8: 0x244284b0  addiu       $v0, $v0, -0x7B50
    ctx->pc = 0x43dee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935728));
label_43deec:
    // 0x43deec: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x43deecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_43def0:
    // 0x43def0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x43def0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_43def4:
    // 0x43def4: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x43def4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_43def8:
    // 0x43def8: 0xc0aee40  jal         func_2BB900
label_43defc:
    if (ctx->pc == 0x43DEFCu) {
        ctx->pc = 0x43DEFCu;
            // 0x43defc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43DF00u;
        goto label_43df00;
    }
    ctx->pc = 0x43DEF8u;
    SET_GPR_U32(ctx, 31, 0x43DF00u);
    ctx->pc = 0x43DEFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43DEF8u;
            // 0x43defc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB900u;
    if (runtime->hasFunction(0x2BB900u)) {
        auto targetFn = runtime->lookupFunction(0x2BB900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43DF00u; }
        if (ctx->pc != 0x43DF00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB900_0x2bb900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43DF00u; }
        if (ctx->pc != 0x43DF00u) { return; }
    }
    ctx->pc = 0x43DF00u;
label_43df00:
    // 0x43df00: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x43df00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_43df04:
    // 0x43df04: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x43df04u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_43df08:
    // 0x43df08: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_43df0c:
    if (ctx->pc == 0x43DF0Cu) {
        ctx->pc = 0x43DF0Cu;
            // 0x43df0c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43DF10u;
        goto label_43df10;
    }
    ctx->pc = 0x43DF08u;
    {
        const bool branch_taken_0x43df08 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x43df08) {
            ctx->pc = 0x43DF0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x43DF08u;
            // 0x43df0c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x43DF1Cu;
            goto label_43df1c;
        }
    }
    ctx->pc = 0x43DF10u;
label_43df10:
    // 0x43df10: 0xc0400a8  jal         func_1002A0
label_43df14:
    if (ctx->pc == 0x43DF14u) {
        ctx->pc = 0x43DF14u;
            // 0x43df14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43DF18u;
        goto label_43df18;
    }
    ctx->pc = 0x43DF10u;
    SET_GPR_U32(ctx, 31, 0x43DF18u);
    ctx->pc = 0x43DF14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43DF10u;
            // 0x43df14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43DF18u; }
        if (ctx->pc != 0x43DF18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43DF18u; }
        if (ctx->pc != 0x43DF18u) { return; }
    }
    ctx->pc = 0x43DF18u;
label_43df18:
    // 0x43df18: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x43df18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_43df1c:
    // 0x43df1c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x43df1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_43df20:
    // 0x43df20: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x43df20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_43df24:
    // 0x43df24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x43df24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_43df28:
    // 0x43df28: 0x3e00008  jr          $ra
label_43df2c:
    if (ctx->pc == 0x43DF2Cu) {
        ctx->pc = 0x43DF2Cu;
            // 0x43df2c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x43DF30u;
        goto label_fallthrough_0x43df28;
    }
    ctx->pc = 0x43DF28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43DF2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43DF28u;
            // 0x43df2c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x43df28:
    ctx->pc = 0x43DF30u;
}
