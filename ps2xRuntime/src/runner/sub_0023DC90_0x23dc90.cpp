#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0023DC90
// Address: 0x23dc90 - 0x23de20
void sub_0023DC90_0x23dc90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023DC90_0x23dc90");
#endif

    switch (ctx->pc) {
        case 0x23dc90u: goto label_23dc90;
        case 0x23dc94u: goto label_23dc94;
        case 0x23dc98u: goto label_23dc98;
        case 0x23dc9cu: goto label_23dc9c;
        case 0x23dca0u: goto label_23dca0;
        case 0x23dca4u: goto label_23dca4;
        case 0x23dca8u: goto label_23dca8;
        case 0x23dcacu: goto label_23dcac;
        case 0x23dcb0u: goto label_23dcb0;
        case 0x23dcb4u: goto label_23dcb4;
        case 0x23dcb8u: goto label_23dcb8;
        case 0x23dcbcu: goto label_23dcbc;
        case 0x23dcc0u: goto label_23dcc0;
        case 0x23dcc4u: goto label_23dcc4;
        case 0x23dcc8u: goto label_23dcc8;
        case 0x23dcccu: goto label_23dccc;
        case 0x23dcd0u: goto label_23dcd0;
        case 0x23dcd4u: goto label_23dcd4;
        case 0x23dcd8u: goto label_23dcd8;
        case 0x23dcdcu: goto label_23dcdc;
        case 0x23dce0u: goto label_23dce0;
        case 0x23dce4u: goto label_23dce4;
        case 0x23dce8u: goto label_23dce8;
        case 0x23dcecu: goto label_23dcec;
        case 0x23dcf0u: goto label_23dcf0;
        case 0x23dcf4u: goto label_23dcf4;
        case 0x23dcf8u: goto label_23dcf8;
        case 0x23dcfcu: goto label_23dcfc;
        case 0x23dd00u: goto label_23dd00;
        case 0x23dd04u: goto label_23dd04;
        case 0x23dd08u: goto label_23dd08;
        case 0x23dd0cu: goto label_23dd0c;
        case 0x23dd10u: goto label_23dd10;
        case 0x23dd14u: goto label_23dd14;
        case 0x23dd18u: goto label_23dd18;
        case 0x23dd1cu: goto label_23dd1c;
        case 0x23dd20u: goto label_23dd20;
        case 0x23dd24u: goto label_23dd24;
        case 0x23dd28u: goto label_23dd28;
        case 0x23dd2cu: goto label_23dd2c;
        case 0x23dd30u: goto label_23dd30;
        case 0x23dd34u: goto label_23dd34;
        case 0x23dd38u: goto label_23dd38;
        case 0x23dd3cu: goto label_23dd3c;
        case 0x23dd40u: goto label_23dd40;
        case 0x23dd44u: goto label_23dd44;
        case 0x23dd48u: goto label_23dd48;
        case 0x23dd4cu: goto label_23dd4c;
        case 0x23dd50u: goto label_23dd50;
        case 0x23dd54u: goto label_23dd54;
        case 0x23dd58u: goto label_23dd58;
        case 0x23dd5cu: goto label_23dd5c;
        case 0x23dd60u: goto label_23dd60;
        case 0x23dd64u: goto label_23dd64;
        case 0x23dd68u: goto label_23dd68;
        case 0x23dd6cu: goto label_23dd6c;
        case 0x23dd70u: goto label_23dd70;
        case 0x23dd74u: goto label_23dd74;
        case 0x23dd78u: goto label_23dd78;
        case 0x23dd7cu: goto label_23dd7c;
        case 0x23dd80u: goto label_23dd80;
        case 0x23dd84u: goto label_23dd84;
        case 0x23dd88u: goto label_23dd88;
        case 0x23dd8cu: goto label_23dd8c;
        case 0x23dd90u: goto label_23dd90;
        case 0x23dd94u: goto label_23dd94;
        case 0x23dd98u: goto label_23dd98;
        case 0x23dd9cu: goto label_23dd9c;
        case 0x23dda0u: goto label_23dda0;
        case 0x23dda4u: goto label_23dda4;
        case 0x23dda8u: goto label_23dda8;
        case 0x23ddacu: goto label_23ddac;
        case 0x23ddb0u: goto label_23ddb0;
        case 0x23ddb4u: goto label_23ddb4;
        case 0x23ddb8u: goto label_23ddb8;
        case 0x23ddbcu: goto label_23ddbc;
        case 0x23ddc0u: goto label_23ddc0;
        case 0x23ddc4u: goto label_23ddc4;
        case 0x23ddc8u: goto label_23ddc8;
        case 0x23ddccu: goto label_23ddcc;
        case 0x23ddd0u: goto label_23ddd0;
        case 0x23ddd4u: goto label_23ddd4;
        case 0x23ddd8u: goto label_23ddd8;
        case 0x23dddcu: goto label_23dddc;
        case 0x23dde0u: goto label_23dde0;
        case 0x23dde4u: goto label_23dde4;
        case 0x23dde8u: goto label_23dde8;
        case 0x23ddecu: goto label_23ddec;
        case 0x23ddf0u: goto label_23ddf0;
        case 0x23ddf4u: goto label_23ddf4;
        case 0x23ddf8u: goto label_23ddf8;
        case 0x23ddfcu: goto label_23ddfc;
        case 0x23de00u: goto label_23de00;
        case 0x23de04u: goto label_23de04;
        case 0x23de08u: goto label_23de08;
        case 0x23de0cu: goto label_23de0c;
        case 0x23de10u: goto label_23de10;
        case 0x23de14u: goto label_23de14;
        case 0x23de18u: goto label_23de18;
        case 0x23de1cu: goto label_23de1c;
        default: break;
    }

    ctx->pc = 0x23dc90u;

label_23dc90:
    // 0x23dc90: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x23dc90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_23dc94:
    // 0x23dc94: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x23dc94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_23dc98:
    // 0x23dc98: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x23dc98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_23dc9c:
    // 0x23dc9c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x23dc9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_23dca0:
    // 0x23dca0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x23dca0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23dca4:
    // 0x23dca4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x23dca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_23dca8:
    // 0x23dca8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x23dca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_23dcac:
    // 0x23dcac: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x23dcacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_23dcb0:
    // 0x23dcb0: 0x10600053  beqz        $v1, . + 4 + (0x53 << 2)
label_23dcb4:
    if (ctx->pc == 0x23DCB4u) {
        ctx->pc = 0x23DCB4u;
            // 0x23dcb4: 0x24b10010  addiu       $s1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->pc = 0x23DCB8u;
        goto label_23dcb8;
    }
    ctx->pc = 0x23DCB0u;
    {
        const bool branch_taken_0x23dcb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DCB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23DCB0u;
            // 0x23dcb4: 0x24b10010  addiu       $s1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dcb0) {
            ctx->pc = 0x23DE00u;
            goto label_23de00;
        }
    }
    ctx->pc = 0x23DCB8u;
label_23dcb8:
    // 0x23dcb8: 0x8e700318  lw          $s0, 0x318($s3)
    ctx->pc = 0x23dcb8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 792)));
label_23dcbc:
    // 0x23dcbc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x23dcbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_23dcc0:
    // 0x23dcc0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x23dcc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_23dcc4:
    // 0x23dcc4: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x23dcc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_23dcc8:
    // 0x23dcc8: 0xafa30058  sw          $v1, 0x58($sp)
    ctx->pc = 0x23dcc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 3));
label_23dccc:
    // 0x23dccc: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x23dcccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_23dcd0:
    // 0x23dcd0: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x23dcd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
label_23dcd4:
    // 0x23dcd4: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x23dcd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_23dcd8:
    // 0x23dcd8: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x23dcd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
label_23dcdc:
    // 0x23dcdc: 0x622824  and         $a1, $v1, $v0
    ctx->pc = 0x23dcdcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_23dce0:
    // 0x23dce0: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x23dce0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
label_23dce4:
    // 0x23dce4: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x23dce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_23dce8:
    // 0x23dce8: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x23dce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_23dcec:
    // 0x23dcec: 0x453021  addu        $a2, $v0, $a1
    ctx->pc = 0x23dcecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_23dcf0:
    // 0x23dcf0: 0x66082b  sltu        $at, $v1, $a2
    ctx->pc = 0x23dcf0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_23dcf4:
    // 0x23dcf4: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_23dcf8:
    if (ctx->pc == 0x23DCF8u) {
        ctx->pc = 0x23DCF8u;
            // 0x23dcf8: 0x27b20050  addiu       $s2, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x23DCFCu;
        goto label_23dcfc;
    }
    ctx->pc = 0x23DCF4u;
    {
        const bool branch_taken_0x23dcf4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x23DCF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23DCF4u;
            // 0x23dcf8: 0x27b20050  addiu       $s2, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dcf4) {
            ctx->pc = 0x23DD04u;
            goto label_23dd04;
        }
    }
    ctx->pc = 0x23DCFCu;
label_23dcfc:
    // 0x23dcfc: 0x10000005  b           . + 4 + (0x5 << 2)
label_23dd00:
    if (ctx->pc == 0x23DD00u) {
        ctx->pc = 0x23DD00u;
            // 0x23dd00: 0xac86000c  sw          $a2, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
        ctx->pc = 0x23DD04u;
        goto label_23dd04;
    }
    ctx->pc = 0x23DCFCu;
    {
        const bool branch_taken_0x23dcfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DD00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23DCFCu;
            // 0x23dd00: 0xac86000c  sw          $a2, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dcfc) {
            ctx->pc = 0x23DD14u;
            goto label_23dd14;
        }
    }
    ctx->pc = 0x23DD04u;
label_23dd04:
    // 0x23dd04: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x23dd04u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_23dd08:
    // 0x23dd08: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x23dd08u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_23dd0c:
    // 0x23dd0c: 0x320f809  jalr        $t9
label_23dd10:
    if (ctx->pc == 0x23DD10u) {
        ctx->pc = 0x23DD14u;
        goto label_23dd14;
    }
    ctx->pc = 0x23DD0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x23DD14u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x23DD14u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23DD14u; }
            if (ctx->pc != 0x23DD14u) { return; }
        }
        }
    }
    ctx->pc = 0x23DD14u;
label_23dd14:
    // 0x23dd14: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x23dd14u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_23dd18:
    // 0x23dd18: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x23dd18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_23dd1c:
    // 0x23dd1c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x23dd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_23dd20:
    // 0x23dd20: 0x2021825  or          $v1, $s0, $v0
    ctx->pc = 0x23dd20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_23dd24:
    // 0x23dd24: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x23dd24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_23dd28:
    // 0x23dd28: 0xae430008  sw          $v1, 0x8($s2)
    ctx->pc = 0x23dd28u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
label_23dd2c:
    // 0x23dd2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23dd2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23dd30:
    // 0x23dd30: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x23dd30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_23dd34:
    // 0x23dd34: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x23dd34u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
label_23dd38:
    // 0x23dd38: 0x8e62006c  lw          $v0, 0x6C($s3)
    ctx->pc = 0x23dd38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 108)));
label_23dd3c:
    // 0x23dd3c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x23dd3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_23dd40:
    // 0x23dd40: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x23dd40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_23dd44:
    // 0x23dd44: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x23dd44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_23dd48:
    // 0x23dd48: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x23dd48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_23dd4c:
    // 0x23dd4c: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x23dd4cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_23dd50:
    // 0x23dd50: 0x320f809  jalr        $t9
label_23dd54:
    if (ctx->pc == 0x23DD54u) {
        ctx->pc = 0x23DD54u;
            // 0x23dd54: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x23DD58u;
        goto label_23dd58;
    }
    ctx->pc = 0x23DD50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x23DD58u);
        ctx->pc = 0x23DD54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23DD50u;
            // 0x23dd54: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x23DD58u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23DD58u; }
            if (ctx->pc != 0x23DD58u) { return; }
        }
        }
    }
    ctx->pc = 0x23DD58u;
label_23dd58:
    // 0x23dd58: 0x8e640054  lw          $a0, 0x54($s3)
    ctx->pc = 0x23dd58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
label_23dd5c:
    // 0x23dd5c: 0x26250014  addiu       $a1, $s1, 0x14
    ctx->pc = 0x23dd5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
label_23dd60:
    // 0x23dd60: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x23dd60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_23dd64:
    // 0x23dd64: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x23dd64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_23dd68:
    // 0x23dd68: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x23dd68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_23dd6c:
    // 0x23dd6c: 0x320f809  jalr        $t9
label_23dd70:
    if (ctx->pc == 0x23DD70u) {
        ctx->pc = 0x23DD70u;
            // 0x23dd70: 0x27a70050  addiu       $a3, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x23DD74u;
        goto label_23dd74;
    }
    ctx->pc = 0x23DD6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x23DD74u);
        ctx->pc = 0x23DD70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23DD6Cu;
            // 0x23dd70: 0x27a70050  addiu       $a3, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x23DD74u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23DD74u; }
            if (ctx->pc != 0x23DD74u) { return; }
        }
        }
    }
    ctx->pc = 0x23DD74u;
label_23dd74:
    // 0x23dd74: 0x8fa60054  lw          $a2, 0x54($sp)
    ctx->pc = 0x23dd74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_23dd78:
    // 0x23dd78: 0x18c00008  blez        $a2, . + 4 + (0x8 << 2)
label_23dd7c:
    if (ctx->pc == 0x23DD7Cu) {
        ctx->pc = 0x23DD80u;
        goto label_23dd80;
    }
    ctx->pc = 0x23DD78u;
    {
        const bool branch_taken_0x23dd78 = (GPR_S32(ctx, 6) <= 0);
        if (branch_taken_0x23dd78) {
            ctx->pc = 0x23DD9Cu;
            goto label_23dd9c;
        }
    }
    ctx->pc = 0x23DD80u;
label_23dd80:
    // 0x23dd80: 0x8e670070  lw          $a3, 0x70($s3)
    ctx->pc = 0x23dd80u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
label_23dd84:
    // 0x23dd84: 0x50e00003  beql        $a3, $zero, . + 4 + (0x3 << 2)
label_23dd88:
    if (ctx->pc == 0x23DD88u) {
        ctx->pc = 0x23DD88u;
            // 0x23dd88: 0x8e640058  lw          $a0, 0x58($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
        ctx->pc = 0x23DD8Cu;
        goto label_23dd8c;
    }
    ctx->pc = 0x23DD84u;
    {
        const bool branch_taken_0x23dd84 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x23dd84) {
            ctx->pc = 0x23DD88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23DD84u;
            // 0x23dd88: 0x8e640058  lw          $a0, 0x58($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23DD94u;
            goto label_23dd94;
        }
    }
    ctx->pc = 0x23DD8Cu;
label_23dd8c:
    // 0x23dd8c: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x23dd8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
label_23dd90:
    // 0x23dd90: 0x8e640058  lw          $a0, 0x58($s3)
    ctx->pc = 0x23dd90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_23dd94:
    // 0x23dd94: 0xc07fb38  jal         func_1FECE0
label_23dd98:
    if (ctx->pc == 0x23DD98u) {
        ctx->pc = 0x23DD98u;
            // 0x23dd98: 0x8fa50050  lw          $a1, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x23DD9Cu;
        goto label_23dd9c;
    }
    ctx->pc = 0x23DD94u;
    SET_GPR_U32(ctx, 31, 0x23DD9Cu);
    ctx->pc = 0x23DD98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23DD94u;
            // 0x23dd98: 0x8fa50050  lw          $a1, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FECE0u;
    if (runtime->hasFunction(0x1FECE0u)) {
        auto targetFn = runtime->lookupFunction(0x1FECE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23DD9Cu; }
        if (ctx->pc != 0x23DD9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FECE0_0x1fece0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23DD9Cu; }
        if (ctx->pc != 0x23DD9Cu) { return; }
    }
    ctx->pc = 0x23DD9Cu;
label_23dd9c:
    // 0x23dd9c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x23dd9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_23dda0:
    // 0x23dda0: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x23dda0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_23dda4:
    // 0x23dda4: 0x8c64ea40  lw          $a0, -0x15C0($v1)
    ctx->pc = 0x23dda4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961728)));
label_23dda8:
    // 0x23dda8: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x23dda8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
label_23ddac:
    // 0x23ddac: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x23ddacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_23ddb0:
    // 0x23ddb0: 0x54a30006  bnel        $a1, $v1, . + 4 + (0x6 << 2)
label_23ddb4:
    if (ctx->pc == 0x23DDB4u) {
        ctx->pc = 0x23DDB4u;
            // 0x23ddb4: 0x8fa40058  lw          $a0, 0x58($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
        ctx->pc = 0x23DDB8u;
        goto label_23ddb8;
    }
    ctx->pc = 0x23DDB0u;
    {
        const bool branch_taken_0x23ddb0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x23ddb0) {
            ctx->pc = 0x23DDB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23DDB0u;
            // 0x23ddb4: 0x8fa40058  lw          $a0, 0x58($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23DDCCu;
            goto label_23ddcc;
        }
    }
    ctx->pc = 0x23DDB8u;
label_23ddb8:
    // 0x23ddb8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x23ddb8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_23ddbc:
    // 0x23ddbc: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x23ddbcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_23ddc0:
    // 0x23ddc0: 0x320f809  jalr        $t9
label_23ddc4:
    if (ctx->pc == 0x23DDC4u) {
        ctx->pc = 0x23DDC8u;
        goto label_23ddc8;
    }
    ctx->pc = 0x23DDC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x23DDC8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x23DDC8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23DDC8u; }
            if (ctx->pc != 0x23DDC8u) { return; }
        }
        }
    }
    ctx->pc = 0x23DDC8u;
label_23ddc8:
    // 0x23ddc8: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x23ddc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_23ddcc:
    // 0x23ddcc: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x23ddccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_23ddd0:
    // 0x23ddd0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x23ddd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_23ddd4:
    // 0x23ddd4: 0x5460000b  bnel        $v1, $zero, . + 4 + (0xB << 2)
label_23ddd8:
    if (ctx->pc == 0x23DDD8u) {
        ctx->pc = 0x23DDD8u;
            // 0x23ddd8: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x23DDDCu;
        goto label_23dddc;
    }
    ctx->pc = 0x23DDD4u;
    {
        const bool branch_taken_0x23ddd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x23ddd4) {
            ctx->pc = 0x23DDD8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23DDD4u;
            // 0x23ddd8: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23DE04u;
            goto label_23de04;
        }
    }
    ctx->pc = 0x23DDDCu;
label_23dddc:
    // 0x23dddc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x23dddcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_23dde0:
    // 0x23dde0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x23dde0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_23dde4:
    // 0x23dde4: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x23dde4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_23dde8:
    // 0x23dde8: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x23dde8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_23ddec:
    // 0x23ddec: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x23ddecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_23ddf0:
    // 0x23ddf0: 0x310bc  dsll32      $v0, $v1, 2
    ctx->pc = 0x23ddf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 2));
label_23ddf4:
    // 0x23ddf4: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x23ddf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_23ddf8:
    // 0x23ddf8: 0xc0a7ab4  jal         func_29EAD0
label_23ddfc:
    if (ctx->pc == 0x23DDFCu) {
        ctx->pc = 0x23DDFCu;
            // 0x23ddfc: 0x230c0  sll         $a2, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->pc = 0x23DE00u;
        goto label_23de00;
    }
    ctx->pc = 0x23DDF8u;
    SET_GPR_U32(ctx, 31, 0x23DE00u);
    ctx->pc = 0x23DDFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23DDF8u;
            // 0x23ddfc: 0x230c0  sll         $a2, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23DE00u; }
        if (ctx->pc != 0x23DE00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23DE00u; }
        if (ctx->pc != 0x23DE00u) { return; }
    }
    ctx->pc = 0x23DE00u;
label_23de00:
    // 0x23de00: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x23de00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_23de04:
    // 0x23de04: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x23de04u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_23de08:
    // 0x23de08: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x23de08u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_23de0c:
    // 0x23de0c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x23de0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_23de10:
    // 0x23de10: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x23de10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_23de14:
    // 0x23de14: 0x3e00008  jr          $ra
label_23de18:
    if (ctx->pc == 0x23DE18u) {
        ctx->pc = 0x23DE18u;
            // 0x23de18: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x23DE1Cu;
        goto label_23de1c;
    }
    ctx->pc = 0x23DE14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23DE18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23DE14u;
            // 0x23de18: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23DE1Cu;
label_23de1c:
    // 0x23de1c: 0x0  nop
    ctx->pc = 0x23de1cu;
    // NOP
}
