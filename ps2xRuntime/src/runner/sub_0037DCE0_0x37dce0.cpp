#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0037DCE0
// Address: 0x37dce0 - 0x37df80
void sub_0037DCE0_0x37dce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037DCE0_0x37dce0");
#endif

    switch (ctx->pc) {
        case 0x37dce0u: goto label_37dce0;
        case 0x37dce4u: goto label_37dce4;
        case 0x37dce8u: goto label_37dce8;
        case 0x37dcecu: goto label_37dcec;
        case 0x37dcf0u: goto label_37dcf0;
        case 0x37dcf4u: goto label_37dcf4;
        case 0x37dcf8u: goto label_37dcf8;
        case 0x37dcfcu: goto label_37dcfc;
        case 0x37dd00u: goto label_37dd00;
        case 0x37dd04u: goto label_37dd04;
        case 0x37dd08u: goto label_37dd08;
        case 0x37dd0cu: goto label_37dd0c;
        case 0x37dd10u: goto label_37dd10;
        case 0x37dd14u: goto label_37dd14;
        case 0x37dd18u: goto label_37dd18;
        case 0x37dd1cu: goto label_37dd1c;
        case 0x37dd20u: goto label_37dd20;
        case 0x37dd24u: goto label_37dd24;
        case 0x37dd28u: goto label_37dd28;
        case 0x37dd2cu: goto label_37dd2c;
        case 0x37dd30u: goto label_37dd30;
        case 0x37dd34u: goto label_37dd34;
        case 0x37dd38u: goto label_37dd38;
        case 0x37dd3cu: goto label_37dd3c;
        case 0x37dd40u: goto label_37dd40;
        case 0x37dd44u: goto label_37dd44;
        case 0x37dd48u: goto label_37dd48;
        case 0x37dd4cu: goto label_37dd4c;
        case 0x37dd50u: goto label_37dd50;
        case 0x37dd54u: goto label_37dd54;
        case 0x37dd58u: goto label_37dd58;
        case 0x37dd5cu: goto label_37dd5c;
        case 0x37dd60u: goto label_37dd60;
        case 0x37dd64u: goto label_37dd64;
        case 0x37dd68u: goto label_37dd68;
        case 0x37dd6cu: goto label_37dd6c;
        case 0x37dd70u: goto label_37dd70;
        case 0x37dd74u: goto label_37dd74;
        case 0x37dd78u: goto label_37dd78;
        case 0x37dd7cu: goto label_37dd7c;
        case 0x37dd80u: goto label_37dd80;
        case 0x37dd84u: goto label_37dd84;
        case 0x37dd88u: goto label_37dd88;
        case 0x37dd8cu: goto label_37dd8c;
        case 0x37dd90u: goto label_37dd90;
        case 0x37dd94u: goto label_37dd94;
        case 0x37dd98u: goto label_37dd98;
        case 0x37dd9cu: goto label_37dd9c;
        case 0x37dda0u: goto label_37dda0;
        case 0x37dda4u: goto label_37dda4;
        case 0x37dda8u: goto label_37dda8;
        case 0x37ddacu: goto label_37ddac;
        case 0x37ddb0u: goto label_37ddb0;
        case 0x37ddb4u: goto label_37ddb4;
        case 0x37ddb8u: goto label_37ddb8;
        case 0x37ddbcu: goto label_37ddbc;
        case 0x37ddc0u: goto label_37ddc0;
        case 0x37ddc4u: goto label_37ddc4;
        case 0x37ddc8u: goto label_37ddc8;
        case 0x37ddccu: goto label_37ddcc;
        case 0x37ddd0u: goto label_37ddd0;
        case 0x37ddd4u: goto label_37ddd4;
        case 0x37ddd8u: goto label_37ddd8;
        case 0x37dddcu: goto label_37dddc;
        case 0x37dde0u: goto label_37dde0;
        case 0x37dde4u: goto label_37dde4;
        case 0x37dde8u: goto label_37dde8;
        case 0x37ddecu: goto label_37ddec;
        case 0x37ddf0u: goto label_37ddf0;
        case 0x37ddf4u: goto label_37ddf4;
        case 0x37ddf8u: goto label_37ddf8;
        case 0x37ddfcu: goto label_37ddfc;
        case 0x37de00u: goto label_37de00;
        case 0x37de04u: goto label_37de04;
        case 0x37de08u: goto label_37de08;
        case 0x37de0cu: goto label_37de0c;
        case 0x37de10u: goto label_37de10;
        case 0x37de14u: goto label_37de14;
        case 0x37de18u: goto label_37de18;
        case 0x37de1cu: goto label_37de1c;
        case 0x37de20u: goto label_37de20;
        case 0x37de24u: goto label_37de24;
        case 0x37de28u: goto label_37de28;
        case 0x37de2cu: goto label_37de2c;
        case 0x37de30u: goto label_37de30;
        case 0x37de34u: goto label_37de34;
        case 0x37de38u: goto label_37de38;
        case 0x37de3cu: goto label_37de3c;
        case 0x37de40u: goto label_37de40;
        case 0x37de44u: goto label_37de44;
        case 0x37de48u: goto label_37de48;
        case 0x37de4cu: goto label_37de4c;
        case 0x37de50u: goto label_37de50;
        case 0x37de54u: goto label_37de54;
        case 0x37de58u: goto label_37de58;
        case 0x37de5cu: goto label_37de5c;
        case 0x37de60u: goto label_37de60;
        case 0x37de64u: goto label_37de64;
        case 0x37de68u: goto label_37de68;
        case 0x37de6cu: goto label_37de6c;
        case 0x37de70u: goto label_37de70;
        case 0x37de74u: goto label_37de74;
        case 0x37de78u: goto label_37de78;
        case 0x37de7cu: goto label_37de7c;
        case 0x37de80u: goto label_37de80;
        case 0x37de84u: goto label_37de84;
        case 0x37de88u: goto label_37de88;
        case 0x37de8cu: goto label_37de8c;
        case 0x37de90u: goto label_37de90;
        case 0x37de94u: goto label_37de94;
        case 0x37de98u: goto label_37de98;
        case 0x37de9cu: goto label_37de9c;
        case 0x37dea0u: goto label_37dea0;
        case 0x37dea4u: goto label_37dea4;
        case 0x37dea8u: goto label_37dea8;
        case 0x37deacu: goto label_37deac;
        case 0x37deb0u: goto label_37deb0;
        case 0x37deb4u: goto label_37deb4;
        case 0x37deb8u: goto label_37deb8;
        case 0x37debcu: goto label_37debc;
        case 0x37dec0u: goto label_37dec0;
        case 0x37dec4u: goto label_37dec4;
        case 0x37dec8u: goto label_37dec8;
        case 0x37deccu: goto label_37decc;
        case 0x37ded0u: goto label_37ded0;
        case 0x37ded4u: goto label_37ded4;
        case 0x37ded8u: goto label_37ded8;
        case 0x37dedcu: goto label_37dedc;
        case 0x37dee0u: goto label_37dee0;
        case 0x37dee4u: goto label_37dee4;
        case 0x37dee8u: goto label_37dee8;
        case 0x37deecu: goto label_37deec;
        case 0x37def0u: goto label_37def0;
        case 0x37def4u: goto label_37def4;
        case 0x37def8u: goto label_37def8;
        case 0x37defcu: goto label_37defc;
        case 0x37df00u: goto label_37df00;
        case 0x37df04u: goto label_37df04;
        case 0x37df08u: goto label_37df08;
        case 0x37df0cu: goto label_37df0c;
        case 0x37df10u: goto label_37df10;
        case 0x37df14u: goto label_37df14;
        case 0x37df18u: goto label_37df18;
        case 0x37df1cu: goto label_37df1c;
        case 0x37df20u: goto label_37df20;
        case 0x37df24u: goto label_37df24;
        case 0x37df28u: goto label_37df28;
        case 0x37df2cu: goto label_37df2c;
        case 0x37df30u: goto label_37df30;
        case 0x37df34u: goto label_37df34;
        case 0x37df38u: goto label_37df38;
        case 0x37df3cu: goto label_37df3c;
        case 0x37df40u: goto label_37df40;
        case 0x37df44u: goto label_37df44;
        case 0x37df48u: goto label_37df48;
        case 0x37df4cu: goto label_37df4c;
        case 0x37df50u: goto label_37df50;
        case 0x37df54u: goto label_37df54;
        case 0x37df58u: goto label_37df58;
        case 0x37df5cu: goto label_37df5c;
        case 0x37df60u: goto label_37df60;
        case 0x37df64u: goto label_37df64;
        case 0x37df68u: goto label_37df68;
        case 0x37df6cu: goto label_37df6c;
        case 0x37df70u: goto label_37df70;
        case 0x37df74u: goto label_37df74;
        case 0x37df78u: goto label_37df78;
        case 0x37df7cu: goto label_37df7c;
        default: break;
    }

    ctx->pc = 0x37dce0u;

label_37dce0:
    // 0x37dce0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x37dce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_37dce4:
    // 0x37dce4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x37dce4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_37dce8:
    // 0x37dce8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x37dce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_37dcec:
    // 0x37dcec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x37dcecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_37dcf0:
    // 0x37dcf0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x37dcf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_37dcf4:
    // 0x37dcf4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x37dcf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_37dcf8:
    // 0x37dcf8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x37dcf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_37dcfc:
    // 0x37dcfc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x37dcfcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_37dd00:
    // 0x37dd00: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x37dd00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_37dd04:
    // 0x37dd04: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x37dd04u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_37dd08:
    // 0x37dd08: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x37dd08u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_37dd0c:
    // 0x37dd0c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x37dd0cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_37dd10:
    // 0x37dd10: 0x8c8300d8  lw          $v1, 0xD8($a0)
    ctx->pc = 0x37dd10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 216)));
label_37dd14:
    // 0x37dd14: 0x8c5189e0  lw          $s1, -0x7620($v0)
    ctx->pc = 0x37dd14u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_37dd18:
    // 0x37dd18: 0x2463ffe7  addiu       $v1, $v1, -0x19
    ctx->pc = 0x37dd18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967271));
label_37dd1c:
    // 0x37dd1c: 0x8c8400dc  lw          $a0, 0xDC($a0)
    ctx->pc = 0x37dd1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
label_37dd20:
    // 0x37dd20: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x37dd20u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_37dd24:
    // 0x37dd24: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x37dd24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_37dd28:
    // 0x37dd28: 0x46800560  cvt.s.w     $f21, $f0
    ctx->pc = 0x37dd28u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
label_37dd2c:
    // 0x37dd2c: 0x2483ffd3  addiu       $v1, $a0, -0x2D
    ctx->pc = 0x37dd2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967251));
label_37dd30:
    // 0x37dd30: 0x8c4460a8  lw          $a0, 0x60A8($v0)
    ctx->pc = 0x37dd30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24744)));
label_37dd34:
    // 0x37dd34: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x37dd34u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_37dd38:
    // 0x37dd38: 0xc0506ac  jal         func_141AB0
label_37dd3c:
    if (ctx->pc == 0x37DD3Cu) {
        ctx->pc = 0x37DD3Cu;
            // 0x37dd3c: 0x46800520  cvt.s.w     $f20, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x37DD40u;
        goto label_37dd40;
    }
    ctx->pc = 0x37DD38u;
    SET_GPR_U32(ctx, 31, 0x37DD40u);
    ctx->pc = 0x37DD3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37DD38u;
            // 0x37dd3c: 0x46800520  cvt.s.w     $f20, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37DD40u; }
        if (ctx->pc != 0x37DD40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37DD40u; }
        if (ctx->pc != 0x37DD40u) { return; }
    }
    ctx->pc = 0x37DD40u;
label_37dd40:
    // 0x37dd40: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x37dd40u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_37dd44:
    // 0x37dd44: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x37dd44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_37dd48:
    // 0x37dd48: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x37dd48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_37dd4c:
    // 0x37dd4c: 0x320f809  jalr        $t9
label_37dd50:
    if (ctx->pc == 0x37DD50u) {
        ctx->pc = 0x37DD50u;
            // 0x37dd50: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x37DD54u;
        goto label_37dd54;
    }
    ctx->pc = 0x37DD4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x37DD54u);
        ctx->pc = 0x37DD50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37DD4Cu;
            // 0x37dd50: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x37DD54u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x37DD54u; }
            if (ctx->pc != 0x37DD54u) { return; }
        }
        }
    }
    ctx->pc = 0x37DD54u;
label_37dd54:
    // 0x37dd54: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x37dd54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_37dd58:
    // 0x37dd58: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x37dd58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_37dd5c:
    // 0x37dd5c: 0x24a55800  addiu       $a1, $a1, 0x5800
    ctx->pc = 0x37dd5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22528));
label_37dd60:
    // 0x37dd60: 0x84445730  lh          $a0, 0x5730($v0)
    ctx->pc = 0x37dd60u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 22320)));
label_37dd64:
    // 0x37dd64: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x37dd64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37dd68:
    // 0x37dd68: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x37dd68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_37dd6c:
    // 0x37dd6c: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x37dd6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_37dd70:
    // 0x37dd70: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x37dd70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37dd74:
    // 0x37dd74: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x37dd74u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_37dd78:
    // 0x37dd78: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x37dd78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_37dd7c:
    // 0x37dd7c: 0x4600a3c0  add.s       $f15, $f20, $f0
    ctx->pc = 0x37dd7cu;
    ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_37dd80:
    // 0x37dd80: 0x84435732  lh          $v1, 0x5732($v0)
    ctx->pc = 0x37dd80u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 22322)));
label_37dd84:
    // 0x37dd84: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x37dd84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_37dd88:
    // 0x37dd88: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x37dd88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_37dd8c:
    // 0x37dd8c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x37dd8cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_37dd90:
    // 0x37dd90: 0x46801420  cvt.s.w     $f16, $f2
    ctx->pc = 0x37dd90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_37dd94:
    // 0x37dd94: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x37dd94u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_37dd98:
    // 0x37dd98: 0x4601ab80  add.s       $f14, $f21, $f1
    ctx->pc = 0x37dd98u;
    ctx->f[14] = FPU_ADD_S(ctx->f[21], ctx->f[1]);
label_37dd9c:
    // 0x37dd9c: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x37dd9cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_37dda0:
    // 0x37dda0: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x37dda0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_37dda4:
    // 0x37dda4: 0xc0bc284  jal         func_2F0A10
label_37dda8:
    if (ctx->pc == 0x37DDA8u) {
        ctx->pc = 0x37DDA8u;
            // 0x37dda8: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x37DDACu;
        goto label_37ddac;
    }
    ctx->pc = 0x37DDA4u;
    SET_GPR_U32(ctx, 31, 0x37DDACu);
    ctx->pc = 0x37DDA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37DDA4u;
            // 0x37dda8: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37DDACu; }
        if (ctx->pc != 0x37DDACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37DDACu; }
        if (ctx->pc != 0x37DDACu) { return; }
    }
    ctx->pc = 0x37DDACu;
label_37ddac:
    // 0x37ddac: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x37ddacu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_37ddb0:
    // 0x37ddb0: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x37ddb0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_37ddb4:
    // 0x37ddb4: 0x320f809  jalr        $t9
label_37ddb8:
    if (ctx->pc == 0x37DDB8u) {
        ctx->pc = 0x37DDB8u;
            // 0x37ddb8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x37DDBCu;
        goto label_37ddbc;
    }
    ctx->pc = 0x37DDB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x37DDBCu);
        ctx->pc = 0x37DDB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37DDB4u;
            // 0x37ddb8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x37DDBCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x37DDBCu; }
            if (ctx->pc != 0x37DDBCu) { return; }
        }
        }
    }
    ctx->pc = 0x37DDBCu;
label_37ddbc:
    // 0x37ddbc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x37ddbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_37ddc0:
    // 0x37ddc0: 0x8e5000dc  lw          $s0, 0xDC($s2)
    ctx->pc = 0x37ddc0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
label_37ddc4:
    // 0x37ddc4: 0x8c420eac  lw          $v0, 0xEAC($v0)
    ctx->pc = 0x37ddc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3756)));
label_37ddc8:
    // 0x37ddc8: 0x8c530080  lw          $s3, 0x80($v0)
    ctx->pc = 0x37ddc8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
label_37ddcc:
    // 0x37ddcc: 0xc157054  jal         func_55C150
label_37ddd0:
    if (ctx->pc == 0x37DDD0u) {
        ctx->pc = 0x37DDD0u;
            // 0x37ddd0: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x37DDD4u;
        goto label_37ddd4;
    }
    ctx->pc = 0x37DDCCu;
    SET_GPR_U32(ctx, 31, 0x37DDD4u);
    ctx->pc = 0x37DDD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37DDCCu;
            // 0x37ddd0: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x55C150u;
    if (runtime->hasFunction(0x55C150u)) {
        auto targetFn = runtime->lookupFunction(0x55C150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37DDD4u; }
        if (ctx->pc != 0x37DDD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0055C150_0x55c150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37DDD4u; }
        if (ctx->pc != 0x37DDD4u) { return; }
    }
    ctx->pc = 0x37DDD4u;
label_37ddd4:
    // 0x37ddd4: 0x44930800  mtc1        $s3, $f1
    ctx->pc = 0x37ddd4u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_37ddd8:
    // 0x37ddd8: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x37ddd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_37dddc:
    // 0x37dddc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x37dddcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_37dde0:
    // 0x37dde0: 0x8e4400b0  lw          $a0, 0xB0($s2)
    ctx->pc = 0x37dde0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
label_37dde4:
    // 0x37dde4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x37dde4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_37dde8:
    // 0x37dde8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x37dde8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_37ddec:
    // 0x37ddec: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x37ddecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_37ddf0:
    // 0x37ddf0: 0xc440a21c  lwc1        $f0, -0x5DE4($v0)
    ctx->pc = 0x37ddf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294943260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37ddf4:
    // 0x37ddf4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x37ddf4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_37ddf8:
    // 0x37ddf8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x37ddf8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_37ddfc:
    // 0x37ddfc: 0x44130000  mfc1        $s3, $f0
    ctx->pc = 0x37ddfcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 19, bits); }
label_37de00:
    // 0x37de00: 0xc156fc8  jal         func_55BF20
label_37de04:
    if (ctx->pc == 0x37DE04u) {
        ctx->pc = 0x37DE04u;
            // 0x37de04: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x37DE08u;
        goto label_37de08;
    }
    ctx->pc = 0x37DE00u;
    SET_GPR_U32(ctx, 31, 0x37DE08u);
    ctx->pc = 0x37DE04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37DE00u;
            // 0x37de04: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x55BF20u;
    if (runtime->hasFunction(0x55BF20u)) {
        auto targetFn = runtime->lookupFunction(0x55BF20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37DE08u; }
        if (ctx->pc != 0x37DE08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0055BF20_0x55bf20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37DE08u; }
        if (ctx->pc != 0x37DE08u) { return; }
    }
    ctx->pc = 0x37DE08u;
label_37de08:
    // 0x37de08: 0x44930800  mtc1        $s3, $f1
    ctx->pc = 0x37de08u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_37de0c:
    // 0x37de0c: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x37de0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_37de10:
    // 0x37de10: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x37de10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_37de14:
    // 0x37de14: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x37de14u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_37de18:
    // 0x37de18: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x37de18u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_37de1c:
    // 0x37de1c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x37de1cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_37de20:
    // 0x37de20: 0x0  nop
    ctx->pc = 0x37de20u;
    // NOP
label_37de24:
    // 0x37de24: 0x2442ffe8  addiu       $v0, $v0, -0x18
    ctx->pc = 0x37de24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967272));
label_37de28:
    // 0x37de28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x37de28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_37de2c:
    // 0x37de2c: 0x0  nop
    ctx->pc = 0x37de2cu;
    // NOP
label_37de30:
    // 0x37de30: 0x46800560  cvt.s.w     $f21, $f0
    ctx->pc = 0x37de30u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
label_37de34:
    // 0x37de34: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x37de34u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_37de38:
    // 0x37de38: 0x0  nop
    ctx->pc = 0x37de38u;
    // NOP
label_37de3c:
    // 0x37de3c: 0x46800520  cvt.s.w     $f20, $f0
    ctx->pc = 0x37de3cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
label_37de40:
    // 0x37de40: 0xc157054  jal         func_55C150
label_37de44:
    if (ctx->pc == 0x37DE44u) {
        ctx->pc = 0x37DE44u;
            // 0x37de44: 0x4600ad86  mov.s       $f22, $f21 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x37DE48u;
        goto label_37de48;
    }
    ctx->pc = 0x37DE40u;
    SET_GPR_U32(ctx, 31, 0x37DE48u);
    ctx->pc = 0x37DE44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37DE40u;
            // 0x37de44: 0x4600ad86  mov.s       $f22, $f21 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x55C150u;
    if (runtime->hasFunction(0x55C150u)) {
        auto targetFn = runtime->lookupFunction(0x55C150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37DE48u; }
        if (ctx->pc != 0x37DE48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0055C150_0x55c150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37DE48u; }
        if (ctx->pc != 0x37DE48u) { return; }
    }
    ctx->pc = 0x37DE48u;
label_37de48:
    // 0x37de48: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x37de48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_37de4c:
    // 0x37de4c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x37de4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37de50:
    // 0x37de50: 0x8c441d08  lw          $a0, 0x1D08($v0)
    ctx->pc = 0x37de50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7432)));
label_37de54:
    // 0x37de54: 0xc0506ac  jal         func_141AB0
label_37de58:
    if (ctx->pc == 0x37DE58u) {
        ctx->pc = 0x37DE58u;
            // 0x37de58: 0x4600ad40  add.s       $f21, $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->pc = 0x37DE5Cu;
        goto label_37de5c;
    }
    ctx->pc = 0x37DE54u;
    SET_GPR_U32(ctx, 31, 0x37DE5Cu);
    ctx->pc = 0x37DE58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37DE54u;
            // 0x37de58: 0x4600ad40  add.s       $f21, $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37DE5Cu; }
        if (ctx->pc != 0x37DE5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37DE5Cu; }
        if (ctx->pc != 0x37DE5Cu) { return; }
    }
    ctx->pc = 0x37DE5Cu;
label_37de5c:
    // 0x37de5c: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x37de5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_37de60:
    // 0x37de60: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x37de60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_37de64:
    // 0x37de64: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x37de64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_37de68:
    // 0x37de68: 0x320f809  jalr        $t9
label_37de6c:
    if (ctx->pc == 0x37DE6Cu) {
        ctx->pc = 0x37DE6Cu;
            // 0x37de6c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x37DE70u;
        goto label_37de70;
    }
    ctx->pc = 0x37DE68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x37DE70u);
        ctx->pc = 0x37DE6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37DE68u;
            // 0x37de6c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x37DE70u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x37DE70u; }
            if (ctx->pc != 0x37DE70u) { return; }
        }
        }
    }
    ctx->pc = 0x37DE70u;
label_37de70:
    // 0x37de70: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x37de70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_37de74:
    // 0x37de74: 0x3c100067  lui         $s0, 0x67
    ctx->pc = 0x37de74u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)103 << 16));
label_37de78:
    // 0x37de78: 0x84442100  lh          $a0, 0x2100($v0)
    ctx->pc = 0x37de78u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8448)));
label_37de7c:
    // 0x37de7c: 0x2610a210  addiu       $s0, $s0, -0x5DF0
    ctx->pc = 0x37de7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294943248));
label_37de80:
    // 0x37de80: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x37de80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_37de84:
    // 0x37de84: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x37de84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
label_37de88:
    // 0x37de88: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x37de88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37de8c:
    // 0x37de8c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x37de8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_37de90:
    // 0x37de90: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x37de90u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_37de94:
    // 0x37de94: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x37de94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_37de98:
    // 0x37de98: 0x46801420  cvt.s.w     $f16, $f2
    ctx->pc = 0x37de98u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_37de9c:
    // 0x37de9c: 0x84482102  lh          $t0, 0x2102($v0)
    ctx->pc = 0x37de9cu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8450)));
label_37dea0:
    // 0x37dea0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x37dea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_37dea4:
    // 0x37dea4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x37dea4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37dea8:
    // 0x37dea8: 0x3c0223ff  lui         $v0, 0x23FF
    ctx->pc = 0x37dea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9215 << 16));
label_37deac:
    // 0x37deac: 0x344623ff  ori         $a2, $v0, 0x23FF
    ctx->pc = 0x37deacu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9215);
label_37deb0:
    // 0x37deb0: 0x44881000  mtc1        $t0, $f2
    ctx->pc = 0x37deb0u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_37deb4:
    // 0x37deb4: 0x0  nop
    ctx->pc = 0x37deb4u;
    // NOP
label_37deb8:
    // 0x37deb8: 0x46801460  cvt.s.w     $f17, $f2
    ctx->pc = 0x37deb8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_37debc:
    // 0x37debc: 0x4601a341  sub.s       $f13, $f20, $f1
    ctx->pc = 0x37debcu;
    ctx->f[13] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
label_37dec0:
    // 0x37dec0: 0x4600ab80  add.s       $f14, $f21, $f0
    ctx->pc = 0x37dec0u;
    ctx->f[14] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
label_37dec4:
    // 0x37dec4: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x37dec4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_37dec8:
    // 0x37dec8: 0x44839000  mtc1        $v1, $f18
    ctx->pc = 0x37dec8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_37decc:
    // 0x37decc: 0xc0bc284  jal         func_2F0A10
label_37ded0:
    if (ctx->pc == 0x37DED0u) {
        ctx->pc = 0x37DED0u;
            // 0x37ded0: 0x4600a3c6  mov.s       $f15, $f20 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x37DED4u;
        goto label_37ded4;
    }
    ctx->pc = 0x37DECCu;
    SET_GPR_U32(ctx, 31, 0x37DED4u);
    ctx->pc = 0x37DED0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37DECCu;
            // 0x37ded0: 0x4600a3c6  mov.s       $f15, $f20 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37DED4u; }
        if (ctx->pc != 0x37DED4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37DED4u; }
        if (ctx->pc != 0x37DED4u) { return; }
    }
    ctx->pc = 0x37DED4u;
label_37ded4:
    // 0x37ded4: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x37ded4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37ded8:
    // 0x37ded8: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x37ded8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_37dedc:
    // 0x37dedc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x37dedcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_37dee0:
    // 0x37dee0: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x37dee0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_37dee4:
    // 0x37dee4: 0x320f809  jalr        $t9
label_37dee8:
    if (ctx->pc == 0x37DEE8u) {
        ctx->pc = 0x37DEE8u;
            // 0x37dee8: 0x4600ad40  add.s       $f21, $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->pc = 0x37DEECu;
        goto label_37deec;
    }
    ctx->pc = 0x37DEE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x37DEECu);
        ctx->pc = 0x37DEE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37DEE4u;
            // 0x37dee8: 0x4600ad40  add.s       $f21, $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x37DEECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x37DEECu; }
            if (ctx->pc != 0x37DEECu) { return; }
        }
        }
    }
    ctx->pc = 0x37DEECu;
label_37deec:
    // 0x37deec: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x37deecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_37def0:
    // 0x37def0: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x37def0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
label_37def4:
    // 0x37def4: 0xc4409c9c  lwc1        $f0, -0x6364($v0)
    ctx->pc = 0x37def4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294941852)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37def8:
    // 0x37def8: 0x8e4400b0  lw          $a0, 0xB0($s2)
    ctx->pc = 0x37def8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
label_37defc:
    // 0x37defc: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x37defcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_37df00:
    // 0x37df00: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x37df00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_37df04:
    // 0x37df04: 0x44837800  mtc1        $v1, $f15
    ctx->pc = 0x37df04u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_37df08:
    // 0x37df08: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x37df08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_37df0c:
    // 0x37df0c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x37df0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_37df10:
    // 0x37df10: 0x3c0223ff  lui         $v0, 0x23FF
    ctx->pc = 0x37df10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9215 << 16));
label_37df14:
    // 0x37df14: 0x4600a341  sub.s       $f13, $f20, $f0
    ctx->pc = 0x37df14u;
    ctx->f[13] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_37df18:
    // 0x37df18: 0xc156fdc  jal         func_55BF70
label_37df1c:
    if (ctx->pc == 0x37DF1Cu) {
        ctx->pc = 0x37DF1Cu;
            // 0x37df1c: 0x344623ff  ori         $a2, $v0, 0x23FF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9215);
        ctx->pc = 0x37DF20u;
        goto label_37df20;
    }
    ctx->pc = 0x37DF18u;
    SET_GPR_U32(ctx, 31, 0x37DF20u);
    ctx->pc = 0x37DF1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37DF18u;
            // 0x37df1c: 0x344623ff  ori         $a2, $v0, 0x23FF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9215);
        ctx->in_delay_slot = false;
    ctx->pc = 0x55BF70u;
    if (runtime->hasFunction(0x55BF70u)) {
        auto targetFn = runtime->lookupFunction(0x55BF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37DF20u; }
        if (ctx->pc != 0x37DF20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0055BF70_0x55bf70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37DF20u; }
        if (ctx->pc != 0x37DF20u) { return; }
    }
    ctx->pc = 0x37DF20u;
label_37df20:
    // 0x37df20: 0x3c0241c0  lui         $v0, 0x41C0
    ctx->pc = 0x37df20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16832 << 16));
label_37df24:
    // 0x37df24: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x37df24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
label_37df28:
    // 0x37df28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x37df28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_37df2c:
    // 0x37df2c: 0x8e4400a0  lw          $a0, 0xA0($s2)
    ctx->pc = 0x37df2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
label_37df30:
    // 0x37df30: 0x4600a341  sub.s       $f13, $f20, $f0
    ctx->pc = 0x37df30u;
    ctx->f[13] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_37df34:
    // 0x37df34: 0x3c0223ff  lui         $v0, 0x23FF
    ctx->pc = 0x37df34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9215 << 16));
label_37df38:
    // 0x37df38: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x37df38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_37df3c:
    // 0x37df3c: 0x344623ff  ori         $a2, $v0, 0x23FF
    ctx->pc = 0x37df3cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9215);
label_37df40:
    // 0x37df40: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x37df40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37df44:
    // 0x37df44: 0xc64e00bc  lwc1        $f14, 0xBC($s2)
    ctx->pc = 0x37df44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_37df48:
    // 0x37df48: 0x44837800  mtc1        $v1, $f15
    ctx->pc = 0x37df48u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_37df4c:
    // 0x37df4c: 0xc15706c  jal         func_55C1B0
label_37df50:
    if (ctx->pc == 0x37DF50u) {
        ctx->pc = 0x37DF50u;
            // 0x37df50: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->pc = 0x37DF54u;
        goto label_37df54;
    }
    ctx->pc = 0x37DF4Cu;
    SET_GPR_U32(ctx, 31, 0x37DF54u);
    ctx->pc = 0x37DF50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37DF4Cu;
            // 0x37df50: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x55C1B0u;
    if (runtime->hasFunction(0x55C1B0u)) {
        auto targetFn = runtime->lookupFunction(0x55C1B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37DF54u; }
        if (ctx->pc != 0x37DF54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0055C1B0_0x55c1b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37DF54u; }
        if (ctx->pc != 0x37DF54u) { return; }
    }
    ctx->pc = 0x37DF54u;
label_37df54:
    // 0x37df54: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x37df54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_37df58:
    // 0x37df58: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x37df58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_37df5c:
    // 0x37df5c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x37df5cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_37df60:
    // 0x37df60: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x37df60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_37df64:
    // 0x37df64: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x37df64u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_37df68:
    // 0x37df68: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x37df68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_37df6c:
    // 0x37df6c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x37df6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_37df70:
    // 0x37df70: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x37df70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_37df74:
    // 0x37df74: 0x3e00008  jr          $ra
label_37df78:
    if (ctx->pc == 0x37DF78u) {
        ctx->pc = 0x37DF78u;
            // 0x37df78: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x37DF7Cu;
        goto label_37df7c;
    }
    ctx->pc = 0x37DF74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37DF78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37DF74u;
            // 0x37df78: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x37DF7Cu;
label_37df7c:
    // 0x37df7c: 0x0  nop
    ctx->pc = 0x37df7cu;
    // NOP
}
