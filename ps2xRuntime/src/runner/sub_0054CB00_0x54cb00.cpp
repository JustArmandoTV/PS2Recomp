#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0054CB00
// Address: 0x54cb00 - 0x54cf10
void sub_0054CB00_0x54cb00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0054CB00_0x54cb00");
#endif

    switch (ctx->pc) {
        case 0x54cb00u: goto label_54cb00;
        case 0x54cb04u: goto label_54cb04;
        case 0x54cb08u: goto label_54cb08;
        case 0x54cb0cu: goto label_54cb0c;
        case 0x54cb10u: goto label_54cb10;
        case 0x54cb14u: goto label_54cb14;
        case 0x54cb18u: goto label_54cb18;
        case 0x54cb1cu: goto label_54cb1c;
        case 0x54cb20u: goto label_54cb20;
        case 0x54cb24u: goto label_54cb24;
        case 0x54cb28u: goto label_54cb28;
        case 0x54cb2cu: goto label_54cb2c;
        case 0x54cb30u: goto label_54cb30;
        case 0x54cb34u: goto label_54cb34;
        case 0x54cb38u: goto label_54cb38;
        case 0x54cb3cu: goto label_54cb3c;
        case 0x54cb40u: goto label_54cb40;
        case 0x54cb44u: goto label_54cb44;
        case 0x54cb48u: goto label_54cb48;
        case 0x54cb4cu: goto label_54cb4c;
        case 0x54cb50u: goto label_54cb50;
        case 0x54cb54u: goto label_54cb54;
        case 0x54cb58u: goto label_54cb58;
        case 0x54cb5cu: goto label_54cb5c;
        case 0x54cb60u: goto label_54cb60;
        case 0x54cb64u: goto label_54cb64;
        case 0x54cb68u: goto label_54cb68;
        case 0x54cb6cu: goto label_54cb6c;
        case 0x54cb70u: goto label_54cb70;
        case 0x54cb74u: goto label_54cb74;
        case 0x54cb78u: goto label_54cb78;
        case 0x54cb7cu: goto label_54cb7c;
        case 0x54cb80u: goto label_54cb80;
        case 0x54cb84u: goto label_54cb84;
        case 0x54cb88u: goto label_54cb88;
        case 0x54cb8cu: goto label_54cb8c;
        case 0x54cb90u: goto label_54cb90;
        case 0x54cb94u: goto label_54cb94;
        case 0x54cb98u: goto label_54cb98;
        case 0x54cb9cu: goto label_54cb9c;
        case 0x54cba0u: goto label_54cba0;
        case 0x54cba4u: goto label_54cba4;
        case 0x54cba8u: goto label_54cba8;
        case 0x54cbacu: goto label_54cbac;
        case 0x54cbb0u: goto label_54cbb0;
        case 0x54cbb4u: goto label_54cbb4;
        case 0x54cbb8u: goto label_54cbb8;
        case 0x54cbbcu: goto label_54cbbc;
        case 0x54cbc0u: goto label_54cbc0;
        case 0x54cbc4u: goto label_54cbc4;
        case 0x54cbc8u: goto label_54cbc8;
        case 0x54cbccu: goto label_54cbcc;
        case 0x54cbd0u: goto label_54cbd0;
        case 0x54cbd4u: goto label_54cbd4;
        case 0x54cbd8u: goto label_54cbd8;
        case 0x54cbdcu: goto label_54cbdc;
        case 0x54cbe0u: goto label_54cbe0;
        case 0x54cbe4u: goto label_54cbe4;
        case 0x54cbe8u: goto label_54cbe8;
        case 0x54cbecu: goto label_54cbec;
        case 0x54cbf0u: goto label_54cbf0;
        case 0x54cbf4u: goto label_54cbf4;
        case 0x54cbf8u: goto label_54cbf8;
        case 0x54cbfcu: goto label_54cbfc;
        case 0x54cc00u: goto label_54cc00;
        case 0x54cc04u: goto label_54cc04;
        case 0x54cc08u: goto label_54cc08;
        case 0x54cc0cu: goto label_54cc0c;
        case 0x54cc10u: goto label_54cc10;
        case 0x54cc14u: goto label_54cc14;
        case 0x54cc18u: goto label_54cc18;
        case 0x54cc1cu: goto label_54cc1c;
        case 0x54cc20u: goto label_54cc20;
        case 0x54cc24u: goto label_54cc24;
        case 0x54cc28u: goto label_54cc28;
        case 0x54cc2cu: goto label_54cc2c;
        case 0x54cc30u: goto label_54cc30;
        case 0x54cc34u: goto label_54cc34;
        case 0x54cc38u: goto label_54cc38;
        case 0x54cc3cu: goto label_54cc3c;
        case 0x54cc40u: goto label_54cc40;
        case 0x54cc44u: goto label_54cc44;
        case 0x54cc48u: goto label_54cc48;
        case 0x54cc4cu: goto label_54cc4c;
        case 0x54cc50u: goto label_54cc50;
        case 0x54cc54u: goto label_54cc54;
        case 0x54cc58u: goto label_54cc58;
        case 0x54cc5cu: goto label_54cc5c;
        case 0x54cc60u: goto label_54cc60;
        case 0x54cc64u: goto label_54cc64;
        case 0x54cc68u: goto label_54cc68;
        case 0x54cc6cu: goto label_54cc6c;
        case 0x54cc70u: goto label_54cc70;
        case 0x54cc74u: goto label_54cc74;
        case 0x54cc78u: goto label_54cc78;
        case 0x54cc7cu: goto label_54cc7c;
        case 0x54cc80u: goto label_54cc80;
        case 0x54cc84u: goto label_54cc84;
        case 0x54cc88u: goto label_54cc88;
        case 0x54cc8cu: goto label_54cc8c;
        case 0x54cc90u: goto label_54cc90;
        case 0x54cc94u: goto label_54cc94;
        case 0x54cc98u: goto label_54cc98;
        case 0x54cc9cu: goto label_54cc9c;
        case 0x54cca0u: goto label_54cca0;
        case 0x54cca4u: goto label_54cca4;
        case 0x54cca8u: goto label_54cca8;
        case 0x54ccacu: goto label_54ccac;
        case 0x54ccb0u: goto label_54ccb0;
        case 0x54ccb4u: goto label_54ccb4;
        case 0x54ccb8u: goto label_54ccb8;
        case 0x54ccbcu: goto label_54ccbc;
        case 0x54ccc0u: goto label_54ccc0;
        case 0x54ccc4u: goto label_54ccc4;
        case 0x54ccc8u: goto label_54ccc8;
        case 0x54ccccu: goto label_54cccc;
        case 0x54ccd0u: goto label_54ccd0;
        case 0x54ccd4u: goto label_54ccd4;
        case 0x54ccd8u: goto label_54ccd8;
        case 0x54ccdcu: goto label_54ccdc;
        case 0x54cce0u: goto label_54cce0;
        case 0x54cce4u: goto label_54cce4;
        case 0x54cce8u: goto label_54cce8;
        case 0x54ccecu: goto label_54ccec;
        case 0x54ccf0u: goto label_54ccf0;
        case 0x54ccf4u: goto label_54ccf4;
        case 0x54ccf8u: goto label_54ccf8;
        case 0x54ccfcu: goto label_54ccfc;
        case 0x54cd00u: goto label_54cd00;
        case 0x54cd04u: goto label_54cd04;
        case 0x54cd08u: goto label_54cd08;
        case 0x54cd0cu: goto label_54cd0c;
        case 0x54cd10u: goto label_54cd10;
        case 0x54cd14u: goto label_54cd14;
        case 0x54cd18u: goto label_54cd18;
        case 0x54cd1cu: goto label_54cd1c;
        case 0x54cd20u: goto label_54cd20;
        case 0x54cd24u: goto label_54cd24;
        case 0x54cd28u: goto label_54cd28;
        case 0x54cd2cu: goto label_54cd2c;
        case 0x54cd30u: goto label_54cd30;
        case 0x54cd34u: goto label_54cd34;
        case 0x54cd38u: goto label_54cd38;
        case 0x54cd3cu: goto label_54cd3c;
        case 0x54cd40u: goto label_54cd40;
        case 0x54cd44u: goto label_54cd44;
        case 0x54cd48u: goto label_54cd48;
        case 0x54cd4cu: goto label_54cd4c;
        case 0x54cd50u: goto label_54cd50;
        case 0x54cd54u: goto label_54cd54;
        case 0x54cd58u: goto label_54cd58;
        case 0x54cd5cu: goto label_54cd5c;
        case 0x54cd60u: goto label_54cd60;
        case 0x54cd64u: goto label_54cd64;
        case 0x54cd68u: goto label_54cd68;
        case 0x54cd6cu: goto label_54cd6c;
        case 0x54cd70u: goto label_54cd70;
        case 0x54cd74u: goto label_54cd74;
        case 0x54cd78u: goto label_54cd78;
        case 0x54cd7cu: goto label_54cd7c;
        case 0x54cd80u: goto label_54cd80;
        case 0x54cd84u: goto label_54cd84;
        case 0x54cd88u: goto label_54cd88;
        case 0x54cd8cu: goto label_54cd8c;
        case 0x54cd90u: goto label_54cd90;
        case 0x54cd94u: goto label_54cd94;
        case 0x54cd98u: goto label_54cd98;
        case 0x54cd9cu: goto label_54cd9c;
        case 0x54cda0u: goto label_54cda0;
        case 0x54cda4u: goto label_54cda4;
        case 0x54cda8u: goto label_54cda8;
        case 0x54cdacu: goto label_54cdac;
        case 0x54cdb0u: goto label_54cdb0;
        case 0x54cdb4u: goto label_54cdb4;
        case 0x54cdb8u: goto label_54cdb8;
        case 0x54cdbcu: goto label_54cdbc;
        case 0x54cdc0u: goto label_54cdc0;
        case 0x54cdc4u: goto label_54cdc4;
        case 0x54cdc8u: goto label_54cdc8;
        case 0x54cdccu: goto label_54cdcc;
        case 0x54cdd0u: goto label_54cdd0;
        case 0x54cdd4u: goto label_54cdd4;
        case 0x54cdd8u: goto label_54cdd8;
        case 0x54cddcu: goto label_54cddc;
        case 0x54cde0u: goto label_54cde0;
        case 0x54cde4u: goto label_54cde4;
        case 0x54cde8u: goto label_54cde8;
        case 0x54cdecu: goto label_54cdec;
        case 0x54cdf0u: goto label_54cdf0;
        case 0x54cdf4u: goto label_54cdf4;
        case 0x54cdf8u: goto label_54cdf8;
        case 0x54cdfcu: goto label_54cdfc;
        case 0x54ce00u: goto label_54ce00;
        case 0x54ce04u: goto label_54ce04;
        case 0x54ce08u: goto label_54ce08;
        case 0x54ce0cu: goto label_54ce0c;
        case 0x54ce10u: goto label_54ce10;
        case 0x54ce14u: goto label_54ce14;
        case 0x54ce18u: goto label_54ce18;
        case 0x54ce1cu: goto label_54ce1c;
        case 0x54ce20u: goto label_54ce20;
        case 0x54ce24u: goto label_54ce24;
        case 0x54ce28u: goto label_54ce28;
        case 0x54ce2cu: goto label_54ce2c;
        case 0x54ce30u: goto label_54ce30;
        case 0x54ce34u: goto label_54ce34;
        case 0x54ce38u: goto label_54ce38;
        case 0x54ce3cu: goto label_54ce3c;
        case 0x54ce40u: goto label_54ce40;
        case 0x54ce44u: goto label_54ce44;
        case 0x54ce48u: goto label_54ce48;
        case 0x54ce4cu: goto label_54ce4c;
        case 0x54ce50u: goto label_54ce50;
        case 0x54ce54u: goto label_54ce54;
        case 0x54ce58u: goto label_54ce58;
        case 0x54ce5cu: goto label_54ce5c;
        case 0x54ce60u: goto label_54ce60;
        case 0x54ce64u: goto label_54ce64;
        case 0x54ce68u: goto label_54ce68;
        case 0x54ce6cu: goto label_54ce6c;
        case 0x54ce70u: goto label_54ce70;
        case 0x54ce74u: goto label_54ce74;
        case 0x54ce78u: goto label_54ce78;
        case 0x54ce7cu: goto label_54ce7c;
        case 0x54ce80u: goto label_54ce80;
        case 0x54ce84u: goto label_54ce84;
        case 0x54ce88u: goto label_54ce88;
        case 0x54ce8cu: goto label_54ce8c;
        case 0x54ce90u: goto label_54ce90;
        case 0x54ce94u: goto label_54ce94;
        case 0x54ce98u: goto label_54ce98;
        case 0x54ce9cu: goto label_54ce9c;
        case 0x54cea0u: goto label_54cea0;
        case 0x54cea4u: goto label_54cea4;
        case 0x54cea8u: goto label_54cea8;
        case 0x54ceacu: goto label_54ceac;
        case 0x54ceb0u: goto label_54ceb0;
        case 0x54ceb4u: goto label_54ceb4;
        case 0x54ceb8u: goto label_54ceb8;
        case 0x54cebcu: goto label_54cebc;
        case 0x54cec0u: goto label_54cec0;
        case 0x54cec4u: goto label_54cec4;
        case 0x54cec8u: goto label_54cec8;
        case 0x54ceccu: goto label_54cecc;
        case 0x54ced0u: goto label_54ced0;
        case 0x54ced4u: goto label_54ced4;
        case 0x54ced8u: goto label_54ced8;
        case 0x54cedcu: goto label_54cedc;
        case 0x54cee0u: goto label_54cee0;
        case 0x54cee4u: goto label_54cee4;
        case 0x54cee8u: goto label_54cee8;
        case 0x54ceecu: goto label_54ceec;
        case 0x54cef0u: goto label_54cef0;
        case 0x54cef4u: goto label_54cef4;
        case 0x54cef8u: goto label_54cef8;
        case 0x54cefcu: goto label_54cefc;
        case 0x54cf00u: goto label_54cf00;
        case 0x54cf04u: goto label_54cf04;
        case 0x54cf08u: goto label_54cf08;
        case 0x54cf0cu: goto label_54cf0c;
        default: break;
    }

    ctx->pc = 0x54cb00u;

label_54cb00:
    // 0x54cb00: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x54cb00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_54cb04:
    // 0x54cb04: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x54cb04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_54cb08:
    // 0x54cb08: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x54cb08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_54cb0c:
    // 0x54cb0c: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x54cb0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_54cb10:
    // 0x54cb10: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x54cb10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_54cb14:
    // 0x54cb14: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x54cb14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_54cb18:
    // 0x54cb18: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x54cb18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_54cb1c:
    // 0x54cb1c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x54cb1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_54cb20:
    // 0x54cb20: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x54cb20u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_54cb24:
    // 0x54cb24: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x54cb24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_54cb28:
    // 0x54cb28: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x54cb28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_54cb2c:
    // 0x54cb2c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x54cb2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_54cb30:
    // 0x54cb30: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x54cb30u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_54cb34:
    // 0x54cb34: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x54cb34u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_54cb38:
    // 0x54cb38: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x54cb38u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_54cb3c:
    // 0x54cb3c: 0x8c5289f0  lw          $s2, -0x7610($v0)
    ctx->pc = 0x54cb3cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_54cb40:
    // 0x54cb40: 0x8c660ec8  lw          $a2, 0xEC8($v1)
    ctx->pc = 0x54cb40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3784)));
label_54cb44:
    // 0x54cb44: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x54cb44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_54cb48:
    // 0x54cb48: 0x9450db6a  lhu         $s0, -0x2496($v0)
    ctx->pc = 0x54cb48u;
    SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957930)));
label_54cb4c:
    // 0x54cb4c: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x54cb4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_54cb50:
    // 0x54cb50: 0x9471db68  lhu         $s1, -0x2498($v1)
    ctx->pc = 0x54cb50u;
    SET_GPR_U32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294957928)));
label_54cb54:
    // 0x54cb54: 0x8cd30008  lw          $s3, 0x8($a2)
    ctx->pc = 0x54cb54u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_54cb58:
    // 0x54cb58: 0x8c820054  lw          $v0, 0x54($a0)
    ctx->pc = 0x54cb58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_54cb5c:
    // 0x54cb5c: 0x8c440130  lw          $a0, 0x130($v0)
    ctx->pc = 0x54cb5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_54cb60:
    // 0x54cb60: 0xc0506ac  jal         func_141AB0
label_54cb64:
    if (ctx->pc == 0x54CB64u) {
        ctx->pc = 0x54CB64u;
            // 0x54cb64: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x54CB68u;
        goto label_54cb68;
    }
    ctx->pc = 0x54CB60u;
    SET_GPR_U32(ctx, 31, 0x54CB68u);
    ctx->pc = 0x54CB64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54CB60u;
            // 0x54cb64: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54CB68u; }
        if (ctx->pc != 0x54CB68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54CB68u; }
        if (ctx->pc != 0x54CB68u) { return; }
    }
    ctx->pc = 0x54CB68u;
label_54cb68:
    // 0x54cb68: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x54cb68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_54cb6c:
    // 0x54cb6c: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x54cb6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_54cb70:
    // 0x54cb70: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x54cb70u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_54cb74:
    // 0x54cb74: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x54cb74u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_54cb78:
    // 0x54cb78: 0x320f809  jalr        $t9
label_54cb7c:
    if (ctx->pc == 0x54CB7Cu) {
        ctx->pc = 0x54CB7Cu;
            // 0x54cb7c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x54CB80u;
        goto label_54cb80;
    }
    ctx->pc = 0x54CB78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x54CB80u);
        ctx->pc = 0x54CB7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54CB78u;
            // 0x54cb7c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x54CB80u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x54CB80u; }
            if (ctx->pc != 0x54CB80u) { return; }
        }
        }
    }
    ctx->pc = 0x54CB80u;
label_54cb80:
    // 0x54cb80: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x54cb80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_54cb84:
    // 0x54cb84: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x54cb84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_54cb88:
    // 0x54cb88: 0x8e430018  lw          $v1, 0x18($s2)
    ctx->pc = 0x54cb88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_54cb8c:
    // 0x54cb8c: 0x24a5ec30  addiu       $a1, $a1, -0x13D0
    ctx->pc = 0x54cb8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962224));
label_54cb90:
    // 0x54cb90: 0xc4b50008  lwc1        $f21, 0x8($a1)
    ctx->pc = 0x54cb90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_54cb94:
    // 0x54cb94: 0x2442fe7c  addiu       $v0, $v0, -0x184
    ctx->pc = 0x54cb94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966908));
label_54cb98:
    // 0x54cb98: 0x29043  sra         $s2, $v0, 1
    ctx->pc = 0x54cb98u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 2), 1));
label_54cb9c:
    // 0x54cb9c: 0x2462fda0  addiu       $v0, $v1, -0x260
    ctx->pc = 0x54cb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966688));
label_54cba0:
    // 0x54cba0: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x54cba0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_54cba4:
    // 0x54cba4: 0x62a823  subu        $s5, $v1, $v0
    ctx->pc = 0x54cba4u;
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_54cba8:
    // 0x54cba8: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x54cba8u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54cbac:
    // 0x54cbac: 0x0  nop
    ctx->pc = 0x54cbacu;
    // NOP
label_54cbb0:
    // 0x54cbb0: 0x468003a0  cvt.s.w     $f14, $f0
    ctx->pc = 0x54cbb0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
label_54cbb4:
    // 0x54cbb4: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x54cbb4u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54cbb8:
    // 0x54cbb8: 0x0  nop
    ctx->pc = 0x54cbb8u;
    // NOP
label_54cbbc:
    // 0x54cbbc: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x54cbbcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
label_54cbc0:
    // 0x54cbc0: 0xc4b4000c  lwc1        $f20, 0xC($a1)
    ctx->pc = 0x54cbc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_54cbc4:
    // 0x54cbc4: 0x46157301  sub.s       $f12, $f14, $f21
    ctx->pc = 0x54cbc4u;
    ctx->f[12] = FPU_SUB_S(ctx->f[14], ctx->f[21]);
label_54cbc8:
    // 0x54cbc8: 0x6200004  bltz        $s1, . + 4 + (0x4 << 2)
label_54cbcc:
    if (ctx->pc == 0x54CBCCu) {
        ctx->pc = 0x54CBCCu;
            // 0x54cbcc: 0x46146bc0  add.s       $f15, $f13, $f20 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[13], ctx->f[20]);
        ctx->pc = 0x54CBD0u;
        goto label_54cbd0;
    }
    ctx->pc = 0x54CBC8u;
    {
        const bool branch_taken_0x54cbc8 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x54CBCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54CBC8u;
            // 0x54cbcc: 0x46146bc0  add.s       $f15, $f13, $f20 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[13], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x54cbc8) {
            ctx->pc = 0x54CBDCu;
            goto label_54cbdc;
        }
    }
    ctx->pc = 0x54CBD0u;
label_54cbd0:
    // 0x54cbd0: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x54cbd0u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54cbd4:
    // 0x54cbd4: 0x10000008  b           . + 4 + (0x8 << 2)
label_54cbd8:
    if (ctx->pc == 0x54CBD8u) {
        ctx->pc = 0x54CBD8u;
            // 0x54cbd8: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x54CBDCu;
        goto label_54cbdc;
    }
    ctx->pc = 0x54CBD4u;
    {
        const bool branch_taken_0x54cbd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54CBD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54CBD4u;
            // 0x54cbd8: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x54cbd4) {
            ctx->pc = 0x54CBF8u;
            goto label_54cbf8;
        }
    }
    ctx->pc = 0x54CBDCu;
label_54cbdc:
    // 0x54cbdc: 0x111842  srl         $v1, $s1, 1
    ctx->pc = 0x54cbdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
label_54cbe0:
    // 0x54cbe0: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x54cbe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_54cbe4:
    // 0x54cbe4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x54cbe4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_54cbe8:
    // 0x54cbe8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54cbe8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54cbec:
    // 0x54cbec: 0x0  nop
    ctx->pc = 0x54cbecu;
    // NOP
label_54cbf0:
    // 0x54cbf0: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x54cbf0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_54cbf4:
    // 0x54cbf4: 0x46108400  add.s       $f16, $f16, $f16
    ctx->pc = 0x54cbf4u;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
label_54cbf8:
    // 0x54cbf8: 0x6020004  bltzl       $s0, . + 4 + (0x4 << 2)
label_54cbfc:
    if (ctx->pc == 0x54CBFCu) {
        ctx->pc = 0x54CBFCu;
            // 0x54cbfc: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->pc = 0x54CC00u;
        goto label_54cc00;
    }
    ctx->pc = 0x54CBF8u;
    {
        const bool branch_taken_0x54cbf8 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x54cbf8) {
            ctx->pc = 0x54CBFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x54CBF8u;
            // 0x54cbfc: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x54CC0Cu;
            goto label_54cc0c;
        }
    }
    ctx->pc = 0x54CC00u;
label_54cc00:
    // 0x54cc00: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x54cc00u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54cc04:
    // 0x54cc04: 0x10000007  b           . + 4 + (0x7 << 2)
label_54cc08:
    if (ctx->pc == 0x54CC08u) {
        ctx->pc = 0x54CC08u;
            // 0x54cc08: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x54CC0Cu;
        goto label_54cc0c;
    }
    ctx->pc = 0x54CC04u;
    {
        const bool branch_taken_0x54cc04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54CC08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54CC04u;
            // 0x54cc08: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x54cc04) {
            ctx->pc = 0x54CC24u;
            goto label_54cc24;
        }
    }
    ctx->pc = 0x54CC0Cu;
label_54cc0c:
    // 0x54cc0c: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x54cc0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_54cc10:
    // 0x54cc10: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x54cc10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_54cc14:
    // 0x54cc14: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54cc14u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54cc18:
    // 0x54cc18: 0x0  nop
    ctx->pc = 0x54cc18u;
    // NOP
label_54cc1c:
    // 0x54cc1c: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x54cc1cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_54cc20:
    // 0x54cc20: 0x46118c40  add.s       $f17, $f17, $f17
    ctx->pc = 0x54cc20u;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[17]);
label_54cc24:
    // 0x54cc24: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x54cc24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_54cc28:
    // 0x54cc28: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x54cc28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_54cc2c:
    // 0x54cc2c: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x54cc2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_54cc30:
    // 0x54cc30: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x54cc30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_54cc34:
    // 0x54cc34: 0xc0bc284  jal         func_2F0A10
label_54cc38:
    if (ctx->pc == 0x54CC38u) {
        ctx->pc = 0x54CC38u;
            // 0x54cc38: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x54CC3Cu;
        goto label_54cc3c;
    }
    ctx->pc = 0x54CC34u;
    SET_GPR_U32(ctx, 31, 0x54CC3Cu);
    ctx->pc = 0x54CC38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54CC34u;
            // 0x54cc38: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54CC3Cu; }
        if (ctx->pc != 0x54CC3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54CC3Cu; }
        if (ctx->pc != 0x54CC3Cu) { return; }
    }
    ctx->pc = 0x54CC3Cu;
label_54cc3c:
    // 0x54cc3c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x54cc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_54cc40:
    // 0x54cc40: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x54cc40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_54cc44:
    // 0x54cc44: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x54cc44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_54cc48:
    // 0x54cc48: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x54cc48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_54cc4c:
    // 0x54cc4c: 0x320f809  jalr        $t9
label_54cc50:
    if (ctx->pc == 0x54CC50u) {
        ctx->pc = 0x54CC54u;
        goto label_54cc54;
    }
    ctx->pc = 0x54CC4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x54CC54u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x54CC54u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x54CC54u; }
            if (ctx->pc != 0x54CC54u) { return; }
        }
        }
    }
    ctx->pc = 0x54CC54u;
label_54cc54:
    // 0x54cc54: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x54cc54u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54cc58:
    // 0x54cc58: 0x8e820054  lw          $v0, 0x54($s4)
    ctx->pc = 0x54cc58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
label_54cc5c:
    // 0x54cc5c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x54cc5cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_54cc60:
    // 0x54cc60: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x54cc60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_54cc64:
    // 0x54cc64: 0x3c160067  lui         $s6, 0x67
    ctx->pc = 0x54cc64u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)103 << 16));
label_54cc68:
    // 0x54cc68: 0x3c064100  lui         $a2, 0x4100
    ctx->pc = 0x54cc68u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16640 << 16));
label_54cc6c:
    // 0x54cc6c: 0x8c440130  lw          $a0, 0x130($v0)
    ctx->pc = 0x54cc6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_54cc70:
    // 0x54cc70: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x54cc70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_54cc74:
    // 0x54cc74: 0x26d6e080  addiu       $s6, $s6, -0x1F80
    ctx->pc = 0x54cc74u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294959232));
label_54cc78:
    // 0x54cc78: 0x46150041  sub.s       $f1, $f0, $f21
    ctx->pc = 0x54cc78u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
label_54cc7c:
    // 0x54cc7c: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x54cc7cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54cc80:
    // 0x54cc80: 0x0  nop
    ctx->pc = 0x54cc80u;
    // NOP
label_54cc84:
    // 0x54cc84: 0x46010540  add.s       $f21, $f0, $f1
    ctx->pc = 0x54cc84u;
    ctx->f[21] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_54cc88:
    // 0x54cc88: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x54cc88u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54cc8c:
    // 0x54cc8c: 0x0  nop
    ctx->pc = 0x54cc8cu;
    // NOP
label_54cc90:
    // 0x54cc90: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x54cc90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_54cc94:
    // 0x54cc94: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x54cc94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54cc98:
    // 0x54cc98: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x54cc98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_54cc9c:
    // 0x54cc9c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x54cc9cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_54cca0:
    // 0x54cca0: 0xc0506ac  jal         func_141AB0
label_54cca4:
    if (ctx->pc == 0x54CCA4u) {
        ctx->pc = 0x54CCA4u;
            // 0x54cca4: 0x4614151c  madd.s      $f20, $f2, $f20 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[20]));
        ctx->pc = 0x54CCA8u;
        goto label_54cca8;
    }
    ctx->pc = 0x54CCA0u;
    SET_GPR_U32(ctx, 31, 0x54CCA8u);
    ctx->pc = 0x54CCA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54CCA0u;
            // 0x54cca4: 0x4614151c  madd.s      $f20, $f2, $f20 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[20]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54CCA8u; }
        if (ctx->pc != 0x54CCA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54CCA8u; }
        if (ctx->pc != 0x54CCA8u) { return; }
    }
    ctx->pc = 0x54CCA8u;
label_54cca8:
    // 0x54cca8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x54cca8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_54ccac:
    // 0x54ccac: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x54ccacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_54ccb0:
    // 0x54ccb0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x54ccb0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_54ccb4:
    // 0x54ccb4: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x54ccb4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_54ccb8:
    // 0x54ccb8: 0x320f809  jalr        $t9
label_54ccbc:
    if (ctx->pc == 0x54CCBCu) {
        ctx->pc = 0x54CCBCu;
            // 0x54ccbc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x54CCC0u;
        goto label_54ccc0;
    }
    ctx->pc = 0x54CCB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x54CCC0u);
        ctx->pc = 0x54CCBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54CCB8u;
            // 0x54ccbc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x54CCC0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x54CCC0u; }
            if (ctx->pc != 0x54CCC0u) { return; }
        }
        }
    }
    ctx->pc = 0x54CCC0u;
label_54ccc0:
    // 0x54ccc0: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x54ccc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_54ccc4:
    // 0x54ccc4: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x54ccc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_54ccc8:
    // 0x54ccc8: 0xc440db70  lwc1        $f0, -0x2490($v0)
    ctx->pc = 0x54ccc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294957936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_54cccc:
    // 0x54cccc: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x54ccccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_54ccd0:
    // 0x54ccd0: 0x24a5e100  addiu       $a1, $a1, -0x1F00
    ctx->pc = 0x54ccd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959360));
label_54ccd4:
    // 0x54ccd4: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x54ccd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_54ccd8:
    // 0x54ccd8: 0xc462db74  lwc1        $f2, -0x248C($v1)
    ctx->pc = 0x54ccd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294957940)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_54ccdc:
    // 0x54ccdc: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x54ccdcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_54cce0:
    // 0x54cce0: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x54cce0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_54cce4:
    // 0x54cce4: 0xc441db78  lwc1        $f1, -0x2488($v0)
    ctx->pc = 0x54cce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294957944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_54cce8:
    // 0x54cce8: 0x8c950004  lw          $s5, 0x4($a0)
    ctx->pc = 0x54cce8u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_54ccec:
    // 0x54ccec: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x54ccecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_54ccf0:
    // 0x54ccf0: 0xe7a20094  swc1        $f2, 0x94($sp)
    ctx->pc = 0x54ccf0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_54ccf4:
    // 0x54ccf4: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x54ccf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_54ccf8:
    // 0x54ccf8: 0xc440db7c  lwc1        $f0, -0x2484($v0)
    ctx->pc = 0x54ccf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294957948)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_54ccfc:
    // 0x54ccfc: 0xe7a10098  swc1        $f1, 0x98($sp)
    ctx->pc = 0x54ccfcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_54cd00:
    // 0x54cd00: 0xc4b60008  lwc1        $f22, 0x8($a1)
    ctx->pc = 0x54cd00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_54cd04:
    // 0x54cd04: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x54cd04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_54cd08:
    // 0x54cd08: 0xc441db80  lwc1        $f1, -0x2480($v0)
    ctx->pc = 0x54cd08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294957952)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_54cd0c:
    // 0x54cd0c: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x54cd0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
label_54cd10:
    // 0x54cd10: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x54cd10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_54cd14:
    // 0x54cd14: 0xc440db84  lwc1        $f0, -0x247C($v0)
    ctx->pc = 0x54cd14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294957956)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_54cd18:
    // 0x54cd18: 0xe7a100a0  swc1        $f1, 0xA0($sp)
    ctx->pc = 0x54cd18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_54cd1c:
    // 0x54cd1c: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x54cd1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_54cd20:
    // 0x54cd20: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x54cd20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_54cd24:
    // 0x54cd24: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x54cd24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_54cd28:
    // 0x54cd28: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x54cd28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_54cd2c:
    // 0x54cd2c: 0x6200004  bltz        $s1, . + 4 + (0x4 << 2)
label_54cd30:
    if (ctx->pc == 0x54CD30u) {
        ctx->pc = 0x54CD30u;
            // 0x54cd30: 0x46000842  mul.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x54CD34u;
        goto label_54cd34;
    }
    ctx->pc = 0x54CD2Cu;
    {
        const bool branch_taken_0x54cd2c = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x54CD30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54CD2Cu;
            // 0x54cd30: 0x46000842  mul.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x54cd2c) {
            ctx->pc = 0x54CD40u;
            goto label_54cd40;
        }
    }
    ctx->pc = 0x54CD34u;
label_54cd34:
    // 0x54cd34: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x54cd34u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54cd38:
    // 0x54cd38: 0x10000008  b           . + 4 + (0x8 << 2)
label_54cd3c:
    if (ctx->pc == 0x54CD3Cu) {
        ctx->pc = 0x54CD3Cu;
            // 0x54cd3c: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x54CD40u;
        goto label_54cd40;
    }
    ctx->pc = 0x54CD38u;
    {
        const bool branch_taken_0x54cd38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54CD3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54CD38u;
            // 0x54cd3c: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x54cd38) {
            ctx->pc = 0x54CD5Cu;
            goto label_54cd5c;
        }
    }
    ctx->pc = 0x54CD40u;
label_54cd40:
    // 0x54cd40: 0x111842  srl         $v1, $s1, 1
    ctx->pc = 0x54cd40u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
label_54cd44:
    // 0x54cd44: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x54cd44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_54cd48:
    // 0x54cd48: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x54cd48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_54cd4c:
    // 0x54cd4c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54cd4cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54cd50:
    // 0x54cd50: 0x0  nop
    ctx->pc = 0x54cd50u;
    // NOP
label_54cd54:
    // 0x54cd54: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x54cd54u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_54cd58:
    // 0x54cd58: 0x46108400  add.s       $f16, $f16, $f16
    ctx->pc = 0x54cd58u;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
label_54cd5c:
    // 0x54cd5c: 0x6020004  bltzl       $s0, . + 4 + (0x4 << 2)
label_54cd60:
    if (ctx->pc == 0x54CD60u) {
        ctx->pc = 0x54CD60u;
            // 0x54cd60: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->pc = 0x54CD64u;
        goto label_54cd64;
    }
    ctx->pc = 0x54CD5Cu;
    {
        const bool branch_taken_0x54cd5c = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x54cd5c) {
            ctx->pc = 0x54CD60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x54CD5Cu;
            // 0x54cd60: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x54CD70u;
            goto label_54cd70;
        }
    }
    ctx->pc = 0x54CD64u;
label_54cd64:
    // 0x54cd64: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x54cd64u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54cd68:
    // 0x54cd68: 0x10000007  b           . + 4 + (0x7 << 2)
label_54cd6c:
    if (ctx->pc == 0x54CD6Cu) {
        ctx->pc = 0x54CD6Cu;
            // 0x54cd6c: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x54CD70u;
        goto label_54cd70;
    }
    ctx->pc = 0x54CD68u;
    {
        const bool branch_taken_0x54cd68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54CD6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54CD68u;
            // 0x54cd6c: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x54cd68) {
            ctx->pc = 0x54CD88u;
            goto label_54cd88;
        }
    }
    ctx->pc = 0x54CD70u;
label_54cd70:
    // 0x54cd70: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x54cd70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_54cd74:
    // 0x54cd74: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x54cd74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_54cd78:
    // 0x54cd78: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54cd78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54cd7c:
    // 0x54cd7c: 0x0  nop
    ctx->pc = 0x54cd7cu;
    // NOP
label_54cd80:
    // 0x54cd80: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x54cd80u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_54cd84:
    // 0x54cd84: 0x46118c40  add.s       $f17, $f17, $f17
    ctx->pc = 0x54cd84u;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[17]);
label_54cd88:
    // 0x54cd88: 0x4601a341  sub.s       $f13, $f20, $f1
    ctx->pc = 0x54cd88u;
    ctx->f[13] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
label_54cd8c:
    // 0x54cd8c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x54cd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_54cd90:
    // 0x54cd90: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x54cd90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_54cd94:
    // 0x54cd94: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x54cd94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_54cd98:
    // 0x54cd98: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x54cd98u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_54cd9c:
    // 0x54cd9c: 0x4601a3c0  add.s       $f15, $f20, $f1
    ctx->pc = 0x54cd9cu;
    ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
label_54cda0:
    // 0x54cda0: 0x4616ab80  add.s       $f14, $f21, $f22
    ctx->pc = 0x54cda0u;
    ctx->f[14] = FPU_ADD_S(ctx->f[21], ctx->f[22]);
label_54cda4:
    // 0x54cda4: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x54cda4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_54cda8:
    // 0x54cda8: 0xc0bc284  jal         func_2F0A10
label_54cdac:
    if (ctx->pc == 0x54CDACu) {
        ctx->pc = 0x54CDACu;
            // 0x54cdac: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x54CDB0u;
        goto label_54cdb0;
    }
    ctx->pc = 0x54CDA8u;
    SET_GPR_U32(ctx, 31, 0x54CDB0u);
    ctx->pc = 0x54CDACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54CDA8u;
            // 0x54cdac: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54CDB0u; }
        if (ctx->pc != 0x54CDB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54CDB0u; }
        if (ctx->pc != 0x54CDB0u) { return; }
    }
    ctx->pc = 0x54CDB0u;
label_54cdb0:
    // 0x54cdb0: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x54cdb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
label_54cdb4:
    // 0x54cdb4: 0x3c023f40  lui         $v0, 0x3F40
    ctx->pc = 0x54cdb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16192 << 16));
label_54cdb8:
    // 0x54cdb8: 0x2463e2a0  addiu       $v1, $v1, -0x1D60
    ctx->pc = 0x54cdb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959776));
label_54cdbc:
    // 0x54cdbc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x54cdbcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_54cdc0:
    // 0x54cdc0: 0x4616ad40  add.s       $f21, $f21, $f22
    ctx->pc = 0x54cdc0u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[22]);
label_54cdc4:
    // 0x54cdc4: 0x27b20090  addiu       $s2, $sp, 0x90
    ctx->pc = 0x54cdc4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_54cdc8:
    // 0x54cdc8: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x54cdc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_54cdcc:
    // 0x54cdcc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x54cdccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54cdd0:
    // 0x54cdd0: 0x0  nop
    ctx->pc = 0x54cdd0u;
    // NOP
label_54cdd4:
    // 0x54cdd4: 0x46010582  mul.s       $f22, $f0, $f1
    ctx->pc = 0x54cdd4u;
    ctx->f[22] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_54cdd8:
    // 0x54cdd8: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x54cdd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_54cddc:
    // 0x54cddc: 0x3a620005  xori        $v0, $s3, 0x5
    ctx->pc = 0x54cddcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)5);
label_54cde0:
    // 0x54cde0: 0x328300ff  andi        $v1, $s4, 0xFF
    ctx->pc = 0x54cde0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
label_54cde4:
    // 0x54cde4: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x54cde4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_54cde8:
    // 0x54cde8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x54cde8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_54cdec:
    // 0x54cdec: 0x2a4001b  divu        $zero, $s5, $a0
    ctx->pc = 0x54cdecu;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 21) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 21) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,21); } }
label_54cdf0:
    // 0x54cdf0: 0x2812  mflo        $a1
    ctx->pc = 0x54cdf0u;
    SET_GPR_U64(ctx, 5, ctx->lo);
label_54cdf4:
    // 0x54cdf4: 0xa42018  mult        $a0, $a1, $a0
    ctx->pc = 0x54cdf4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_54cdf8:
    // 0x54cdf8: 0x5102a  slt         $v0, $zero, $a1
    ctx->pc = 0x54cdf8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_54cdfc:
    // 0x54cdfc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x54cdfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_54ce00:
    // 0x54ce00: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
label_54ce04:
    if (ctx->pc == 0x54CE04u) {
        ctx->pc = 0x54CE04u;
            // 0x54ce04: 0x2a4a823  subu        $s5, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->pc = 0x54CE08u;
        goto label_54ce08;
    }
    ctx->pc = 0x54CE00u;
    {
        const bool branch_taken_0x54ce00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x54CE04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54CE00u;
            // 0x54ce04: 0x2a4a823  subu        $s5, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x54ce00) {
            ctx->pc = 0x54CEB0u;
            goto label_54ceb0;
        }
    }
    ctx->pc = 0x54CE08u;
label_54ce08:
    // 0x54ce08: 0x24a20022  addiu       $v0, $a1, 0x22
    ctx->pc = 0x54ce08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 34));
label_54ce0c:
    // 0x54ce0c: 0x64140001  daddiu      $s4, $zero, 0x1
    ctx->pc = 0x54ce0cu;
    SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_54ce10:
    // 0x54ce10: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x54ce10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_54ce14:
    // 0x54ce14: 0x2c32821  addu        $a1, $s6, $v1
    ctx->pc = 0x54ce14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
label_54ce18:
    // 0x54ce18: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x54ce18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_54ce1c:
    // 0x54ce1c: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x54ce1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_54ce20:
    // 0x54ce20: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x54ce20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_54ce24:
    // 0x54ce24: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x54ce24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_54ce28:
    // 0x54ce28: 0x6200004  bltz        $s1, . + 4 + (0x4 << 2)
label_54ce2c:
    if (ctx->pc == 0x54CE2Cu) {
        ctx->pc = 0x54CE2Cu;
            // 0x54ce2c: 0x46000842  mul.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x54CE30u;
        goto label_54ce30;
    }
    ctx->pc = 0x54CE28u;
    {
        const bool branch_taken_0x54ce28 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x54CE2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54CE28u;
            // 0x54ce2c: 0x46000842  mul.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x54ce28) {
            ctx->pc = 0x54CE3Cu;
            goto label_54ce3c;
        }
    }
    ctx->pc = 0x54CE30u;
label_54ce30:
    // 0x54ce30: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x54ce30u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54ce34:
    // 0x54ce34: 0x10000008  b           . + 4 + (0x8 << 2)
label_54ce38:
    if (ctx->pc == 0x54CE38u) {
        ctx->pc = 0x54CE38u;
            // 0x54ce38: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x54CE3Cu;
        goto label_54ce3c;
    }
    ctx->pc = 0x54CE34u;
    {
        const bool branch_taken_0x54ce34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54CE38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54CE34u;
            // 0x54ce38: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x54ce34) {
            ctx->pc = 0x54CE58u;
            goto label_54ce58;
        }
    }
    ctx->pc = 0x54CE3Cu;
label_54ce3c:
    // 0x54ce3c: 0x111842  srl         $v1, $s1, 1
    ctx->pc = 0x54ce3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
label_54ce40:
    // 0x54ce40: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x54ce40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_54ce44:
    // 0x54ce44: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x54ce44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_54ce48:
    // 0x54ce48: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54ce48u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54ce4c:
    // 0x54ce4c: 0x0  nop
    ctx->pc = 0x54ce4cu;
    // NOP
label_54ce50:
    // 0x54ce50: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x54ce50u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_54ce54:
    // 0x54ce54: 0x46108400  add.s       $f16, $f16, $f16
    ctx->pc = 0x54ce54u;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
label_54ce58:
    // 0x54ce58: 0x6020004  bltzl       $s0, . + 4 + (0x4 << 2)
label_54ce5c:
    if (ctx->pc == 0x54CE5Cu) {
        ctx->pc = 0x54CE5Cu;
            // 0x54ce5c: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->pc = 0x54CE60u;
        goto label_54ce60;
    }
    ctx->pc = 0x54CE58u;
    {
        const bool branch_taken_0x54ce58 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x54ce58) {
            ctx->pc = 0x54CE5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x54CE58u;
            // 0x54ce5c: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x54CE6Cu;
            goto label_54ce6c;
        }
    }
    ctx->pc = 0x54CE60u;
label_54ce60:
    // 0x54ce60: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x54ce60u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54ce64:
    // 0x54ce64: 0x10000007  b           . + 4 + (0x7 << 2)
label_54ce68:
    if (ctx->pc == 0x54CE68u) {
        ctx->pc = 0x54CE68u;
            // 0x54ce68: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x54CE6Cu;
        goto label_54ce6c;
    }
    ctx->pc = 0x54CE64u;
    {
        const bool branch_taken_0x54ce64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54CE68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54CE64u;
            // 0x54ce68: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x54ce64) {
            ctx->pc = 0x54CE84u;
            goto label_54ce84;
        }
    }
    ctx->pc = 0x54CE6Cu;
label_54ce6c:
    // 0x54ce6c: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x54ce6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_54ce70:
    // 0x54ce70: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x54ce70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_54ce74:
    // 0x54ce74: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54ce74u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54ce78:
    // 0x54ce78: 0x0  nop
    ctx->pc = 0x54ce78u;
    // NOP
label_54ce7c:
    // 0x54ce7c: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x54ce7cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_54ce80:
    // 0x54ce80: 0x46118c40  add.s       $f17, $f17, $f17
    ctx->pc = 0x54ce80u;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[17]);
label_54ce84:
    // 0x54ce84: 0x4602ab80  add.s       $f14, $f21, $f2
    ctx->pc = 0x54ce84u;
    ctx->f[14] = FPU_ADD_S(ctx->f[21], ctx->f[2]);
label_54ce88:
    // 0x54ce88: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x54ce88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_54ce8c:
    // 0x54ce8c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x54ce8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_54ce90:
    // 0x54ce90: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x54ce90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_54ce94:
    // 0x54ce94: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x54ce94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_54ce98:
    // 0x54ce98: 0x4601a341  sub.s       $f13, $f20, $f1
    ctx->pc = 0x54ce98u;
    ctx->f[13] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
label_54ce9c:
    // 0x54ce9c: 0x4601a3c0  add.s       $f15, $f20, $f1
    ctx->pc = 0x54ce9cu;
    ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
label_54cea0:
    // 0x54cea0: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x54cea0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_54cea4:
    // 0x54cea4: 0xc0bc284  jal         func_2F0A10
label_54cea8:
    if (ctx->pc == 0x54CEA8u) {
        ctx->pc = 0x54CEA8u;
            // 0x54cea8: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x54CEACu;
        goto label_54ceac;
    }
    ctx->pc = 0x54CEA4u;
    SET_GPR_U32(ctx, 31, 0x54CEACu);
    ctx->pc = 0x54CEA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54CEA4u;
            // 0x54cea8: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54CEACu; }
        if (ctx->pc != 0x54CEACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54CEACu; }
        if (ctx->pc != 0x54CEACu) { return; }
    }
    ctx->pc = 0x54CEACu;
label_54ceac:
    // 0x54ceac: 0x0  nop
    ctx->pc = 0x54ceacu;
    // NOP
label_54ceb0:
    // 0x54ceb0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x54ceb0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_54ceb4:
    // 0x54ceb4: 0x4616ad40  add.s       $f21, $f21, $f22
    ctx->pc = 0x54ceb4u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[22]);
label_54ceb8:
    // 0x54ceb8: 0x2a620006  slti        $v0, $s3, 0x6
    ctx->pc = 0x54ceb8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)6) ? 1 : 0);
label_54cebc:
    // 0x54cebc: 0x1440ffc6  bnez        $v0, . + 4 + (-0x3A << 2)
label_54cec0:
    if (ctx->pc == 0x54CEC0u) {
        ctx->pc = 0x54CEC0u;
            // 0x54cec0: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x54CEC4u;
        goto label_54cec4;
    }
    ctx->pc = 0x54CEBCu;
    {
        const bool branch_taken_0x54cebc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x54CEC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54CEBCu;
            // 0x54cec0: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x54cebc) {
            ctx->pc = 0x54CDD8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_54cdd8;
        }
    }
    ctx->pc = 0x54CEC4u;
label_54cec4:
    // 0x54cec4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x54cec4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_54cec8:
    // 0x54cec8: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x54cec8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_54cecc:
    // 0x54cecc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x54ceccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_54ced0:
    // 0x54ced0: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x54ced0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_54ced4:
    // 0x54ced4: 0x320f809  jalr        $t9
label_54ced8:
    if (ctx->pc == 0x54CED8u) {
        ctx->pc = 0x54CEDCu;
        goto label_54cedc;
    }
    ctx->pc = 0x54CED4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x54CEDCu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x54CEDCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x54CEDCu; }
            if (ctx->pc != 0x54CEDCu) { return; }
        }
        }
    }
    ctx->pc = 0x54CEDCu;
label_54cedc:
    // 0x54cedc: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x54cedcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_54cee0:
    // 0x54cee0: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x54cee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_54cee4:
    // 0x54cee4: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x54cee4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_54cee8:
    // 0x54cee8: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x54cee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_54ceec:
    // 0x54ceec: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x54ceecu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_54cef0:
    // 0x54cef0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x54cef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_54cef4:
    // 0x54cef4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x54cef4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_54cef8:
    // 0x54cef8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x54cef8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_54cefc:
    // 0x54cefc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x54cefcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_54cf00:
    // 0x54cf00: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x54cf00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_54cf04:
    // 0x54cf04: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x54cf04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_54cf08:
    // 0x54cf08: 0x3e00008  jr          $ra
label_54cf0c:
    if (ctx->pc == 0x54CF0Cu) {
        ctx->pc = 0x54CF0Cu;
            // 0x54cf0c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x54CF10u;
        goto label_fallthrough_0x54cf08;
    }
    ctx->pc = 0x54CF08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x54CF0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54CF08u;
            // 0x54cf0c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x54cf08:
    ctx->pc = 0x54CF10u;
}
