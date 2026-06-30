#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00185EF8
// Address: 0x185ef8 - 0x186140
void sub_00185EF8_0x185ef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00185EF8_0x185ef8");
#endif

    switch (ctx->pc) {
        case 0x185ef8u: goto label_185ef8;
        case 0x185efcu: goto label_185efc;
        case 0x185f00u: goto label_185f00;
        case 0x185f04u: goto label_185f04;
        case 0x185f08u: goto label_185f08;
        case 0x185f0cu: goto label_185f0c;
        case 0x185f10u: goto label_185f10;
        case 0x185f14u: goto label_185f14;
        case 0x185f18u: goto label_185f18;
        case 0x185f1cu: goto label_185f1c;
        case 0x185f20u: goto label_185f20;
        case 0x185f24u: goto label_185f24;
        case 0x185f28u: goto label_185f28;
        case 0x185f2cu: goto label_185f2c;
        case 0x185f30u: goto label_185f30;
        case 0x185f34u: goto label_185f34;
        case 0x185f38u: goto label_185f38;
        case 0x185f3cu: goto label_185f3c;
        case 0x185f40u: goto label_185f40;
        case 0x185f44u: goto label_185f44;
        case 0x185f48u: goto label_185f48;
        case 0x185f4cu: goto label_185f4c;
        case 0x185f50u: goto label_185f50;
        case 0x185f54u: goto label_185f54;
        case 0x185f58u: goto label_185f58;
        case 0x185f5cu: goto label_185f5c;
        case 0x185f60u: goto label_185f60;
        case 0x185f64u: goto label_185f64;
        case 0x185f68u: goto label_185f68;
        case 0x185f6cu: goto label_185f6c;
        case 0x185f70u: goto label_185f70;
        case 0x185f74u: goto label_185f74;
        case 0x185f78u: goto label_185f78;
        case 0x185f7cu: goto label_185f7c;
        case 0x185f80u: goto label_185f80;
        case 0x185f84u: goto label_185f84;
        case 0x185f88u: goto label_185f88;
        case 0x185f8cu: goto label_185f8c;
        case 0x185f90u: goto label_185f90;
        case 0x185f94u: goto label_185f94;
        case 0x185f98u: goto label_185f98;
        case 0x185f9cu: goto label_185f9c;
        case 0x185fa0u: goto label_185fa0;
        case 0x185fa4u: goto label_185fa4;
        case 0x185fa8u: goto label_185fa8;
        case 0x185facu: goto label_185fac;
        case 0x185fb0u: goto label_185fb0;
        case 0x185fb4u: goto label_185fb4;
        case 0x185fb8u: goto label_185fb8;
        case 0x185fbcu: goto label_185fbc;
        case 0x185fc0u: goto label_185fc0;
        case 0x185fc4u: goto label_185fc4;
        case 0x185fc8u: goto label_185fc8;
        case 0x185fccu: goto label_185fcc;
        case 0x185fd0u: goto label_185fd0;
        case 0x185fd4u: goto label_185fd4;
        case 0x185fd8u: goto label_185fd8;
        case 0x185fdcu: goto label_185fdc;
        case 0x185fe0u: goto label_185fe0;
        case 0x185fe4u: goto label_185fe4;
        case 0x185fe8u: goto label_185fe8;
        case 0x185fecu: goto label_185fec;
        case 0x185ff0u: goto label_185ff0;
        case 0x185ff4u: goto label_185ff4;
        case 0x185ff8u: goto label_185ff8;
        case 0x185ffcu: goto label_185ffc;
        case 0x186000u: goto label_186000;
        case 0x186004u: goto label_186004;
        case 0x186008u: goto label_186008;
        case 0x18600cu: goto label_18600c;
        case 0x186010u: goto label_186010;
        case 0x186014u: goto label_186014;
        case 0x186018u: goto label_186018;
        case 0x18601cu: goto label_18601c;
        case 0x186020u: goto label_186020;
        case 0x186024u: goto label_186024;
        case 0x186028u: goto label_186028;
        case 0x18602cu: goto label_18602c;
        case 0x186030u: goto label_186030;
        case 0x186034u: goto label_186034;
        case 0x186038u: goto label_186038;
        case 0x18603cu: goto label_18603c;
        case 0x186040u: goto label_186040;
        case 0x186044u: goto label_186044;
        case 0x186048u: goto label_186048;
        case 0x18604cu: goto label_18604c;
        case 0x186050u: goto label_186050;
        case 0x186054u: goto label_186054;
        case 0x186058u: goto label_186058;
        case 0x18605cu: goto label_18605c;
        case 0x186060u: goto label_186060;
        case 0x186064u: goto label_186064;
        case 0x186068u: goto label_186068;
        case 0x18606cu: goto label_18606c;
        case 0x186070u: goto label_186070;
        case 0x186074u: goto label_186074;
        case 0x186078u: goto label_186078;
        case 0x18607cu: goto label_18607c;
        case 0x186080u: goto label_186080;
        case 0x186084u: goto label_186084;
        case 0x186088u: goto label_186088;
        case 0x18608cu: goto label_18608c;
        case 0x186090u: goto label_186090;
        case 0x186094u: goto label_186094;
        case 0x186098u: goto label_186098;
        case 0x18609cu: goto label_18609c;
        case 0x1860a0u: goto label_1860a0;
        case 0x1860a4u: goto label_1860a4;
        case 0x1860a8u: goto label_1860a8;
        case 0x1860acu: goto label_1860ac;
        case 0x1860b0u: goto label_1860b0;
        case 0x1860b4u: goto label_1860b4;
        case 0x1860b8u: goto label_1860b8;
        case 0x1860bcu: goto label_1860bc;
        case 0x1860c0u: goto label_1860c0;
        case 0x1860c4u: goto label_1860c4;
        case 0x1860c8u: goto label_1860c8;
        case 0x1860ccu: goto label_1860cc;
        case 0x1860d0u: goto label_1860d0;
        case 0x1860d4u: goto label_1860d4;
        case 0x1860d8u: goto label_1860d8;
        case 0x1860dcu: goto label_1860dc;
        case 0x1860e0u: goto label_1860e0;
        case 0x1860e4u: goto label_1860e4;
        case 0x1860e8u: goto label_1860e8;
        case 0x1860ecu: goto label_1860ec;
        case 0x1860f0u: goto label_1860f0;
        case 0x1860f4u: goto label_1860f4;
        case 0x1860f8u: goto label_1860f8;
        case 0x1860fcu: goto label_1860fc;
        case 0x186100u: goto label_186100;
        case 0x186104u: goto label_186104;
        case 0x186108u: goto label_186108;
        case 0x18610cu: goto label_18610c;
        case 0x186110u: goto label_186110;
        case 0x186114u: goto label_186114;
        case 0x186118u: goto label_186118;
        case 0x18611cu: goto label_18611c;
        case 0x186120u: goto label_186120;
        case 0x186124u: goto label_186124;
        case 0x186128u: goto label_186128;
        case 0x18612cu: goto label_18612c;
        case 0x186130u: goto label_186130;
        case 0x186134u: goto label_186134;
        case 0x186138u: goto label_186138;
        case 0x18613cu: goto label_18613c;
        default: break;
    }

    ctx->pc = 0x185ef8u;

label_185ef8:
    // 0x185ef8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x185ef8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_185efc:
    // 0x185efc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x185efcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_185f00:
    // 0x185f00: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x185f00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_185f04:
    // 0x185f04: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x185f04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_185f08:
    // 0x185f08: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x185f08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_185f0c:
    // 0x185f0c: 0x1600000a  bnez        $s0, . + 4 + (0xA << 2)
label_185f10:
    if (ctx->pc == 0x185F10u) {
        ctx->pc = 0x185F10u;
            // 0x185f10: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->pc = 0x185F14u;
        goto label_185f14;
    }
    ctx->pc = 0x185F0Cu;
    {
        const bool branch_taken_0x185f0c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x185F10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185F0Cu;
            // 0x185f10: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185f0c) {
            ctx->pc = 0x185F38u;
            goto label_185f38;
        }
    }
    ctx->pc = 0x185F14u;
label_185f14:
    // 0x185f14: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x185f14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_185f18:
    // 0x185f18: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x185f18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
label_185f1c:
    // 0x185f1c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x185f1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_185f20:
    // 0x185f20: 0x24847c10  addiu       $a0, $a0, 0x7C10
    ctx->pc = 0x185f20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31760));
label_185f24:
    // 0x185f24: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x185f24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_185f28:
    // 0x185f28: 0x24a57ae8  addiu       $a1, $a1, 0x7AE8
    ctx->pc = 0x185f28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31464));
label_185f2c:
    // 0x185f2c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x185f2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_185f30:
    // 0x185f30: 0x806151c  j           func_185470
label_185f34:
    if (ctx->pc == 0x185F34u) {
        ctx->pc = 0x185F34u;
            // 0x185f34: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x185F38u;
        goto label_185f38;
    }
    ctx->pc = 0x185F30u;
    ctx->pc = 0x185F34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185F30u;
            // 0x185f34: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x185470u;
    if (runtime->hasFunction(0x185470u)) {
        auto targetFn = runtime->lookupFunction(0x185470u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00185470_0x185470(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x185F38u;
label_185f38:
    // 0x185f38: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x185f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_185f3c:
    // 0x185f3c: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_185f40:
    if (ctx->pc == 0x185F40u) {
        ctx->pc = 0x185F40u;
            // 0x185f40: 0x8e060020  lw          $a2, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->pc = 0x185F44u;
        goto label_185f44;
    }
    ctx->pc = 0x185F3Cu;
    {
        const bool branch_taken_0x185f3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x185f3c) {
            ctx->pc = 0x185F40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x185F3Cu;
            // 0x185f40: 0x8e060020  lw          $a2, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x185F68u;
            goto label_185f68;
        }
    }
    ctx->pc = 0x185F44u;
label_185f44:
    // 0x185f44: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x185f44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_185f48:
    // 0x185f48: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x185f48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
label_185f4c:
    // 0x185f4c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x185f4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_185f50:
    // 0x185f50: 0x24847c20  addiu       $a0, $a0, 0x7C20
    ctx->pc = 0x185f50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31776));
label_185f54:
    // 0x185f54: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x185f54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_185f58:
    // 0x185f58: 0x24a57b68  addiu       $a1, $a1, 0x7B68
    ctx->pc = 0x185f58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31592));
label_185f5c:
    // 0x185f5c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x185f5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_185f60:
    // 0x185f60: 0x806151c  j           func_185470
label_185f64:
    if (ctx->pc == 0x185F64u) {
        ctx->pc = 0x185F64u;
            // 0x185f64: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x185F68u;
        goto label_185f68;
    }
    ctx->pc = 0x185F60u;
    ctx->pc = 0x185F64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185F60u;
            // 0x185f64: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x185470u;
    if (runtime->hasFunction(0x185470u)) {
        auto targetFn = runtime->lookupFunction(0x185470u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00185470_0x185470(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x185F68u;
label_185f68:
    // 0x185f68: 0x54c0000b  bnel        $a2, $zero, . + 4 + (0xB << 2)
label_185f6c:
    if (ctx->pc == 0x185F6Cu) {
        ctx->pc = 0x185F6Cu;
            // 0x185f6c: 0x8e270004  lw          $a3, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->pc = 0x185F70u;
        goto label_185f70;
    }
    ctx->pc = 0x185F68u;
    {
        const bool branch_taken_0x185f68 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x185f68) {
            ctx->pc = 0x185F6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x185F68u;
            // 0x185f6c: 0x8e270004  lw          $a3, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x185F98u;
            goto label_185f98;
        }
    }
    ctx->pc = 0x185F70u;
label_185f70:
    // 0x185f70: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x185f70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_185f74:
    // 0x185f74: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x185f74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
label_185f78:
    // 0x185f78: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x185f78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_185f7c:
    // 0x185f7c: 0x24847c30  addiu       $a0, $a0, 0x7C30
    ctx->pc = 0x185f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31792));
label_185f80:
    // 0x185f80: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x185f80u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_185f84:
    // 0x185f84: 0x24a57bd8  addiu       $a1, $a1, 0x7BD8
    ctx->pc = 0x185f84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31704));
label_185f88:
    // 0x185f88: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x185f88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_185f8c:
    // 0x185f8c: 0x806151c  j           func_185470
label_185f90:
    if (ctx->pc == 0x185F90u) {
        ctx->pc = 0x185F90u;
            // 0x185f90: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x185F94u;
        goto label_185f94;
    }
    ctx->pc = 0x185F8Cu;
    ctx->pc = 0x185F90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185F8Cu;
            // 0x185f90: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x185470u;
    if (runtime->hasFunction(0x185470u)) {
        auto targetFn = runtime->lookupFunction(0x185470u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00185470_0x185470(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x185F94u;
label_185f94:
    // 0x185f94: 0x0  nop
    ctx->pc = 0x185f94u;
    // NOP
label_185f98:
    // 0x185f98: 0x58e0004a  blezl       $a3, . + 4 + (0x4A << 2)
label_185f9c:
    if (ctx->pc == 0x185F9Cu) {
        ctx->pc = 0x185F9Cu;
            // 0x185f9c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x185FA0u;
        goto label_185fa0;
    }
    ctx->pc = 0x185F98u;
    {
        const bool branch_taken_0x185f98 = (GPR_S32(ctx, 7) <= 0);
        if (branch_taken_0x185f98) {
            ctx->pc = 0x185F9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x185F98u;
            // 0x185f9c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1860C4u;
            goto label_1860c4;
        }
    }
    ctx->pc = 0x185FA0u;
label_185fa0:
    // 0x185fa0: 0x8e280000  lw          $t0, 0x0($s1)
    ctx->pc = 0x185fa0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_185fa4:
    // 0x185fa4: 0x51000047  beql        $t0, $zero, . + 4 + (0x47 << 2)
label_185fa8:
    if (ctx->pc == 0x185FA8u) {
        ctx->pc = 0x185FA8u;
            // 0x185fa8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x185FACu;
        goto label_185fac;
    }
    ctx->pc = 0x185FA4u;
    {
        const bool branch_taken_0x185fa4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x185fa4) {
            ctx->pc = 0x185FA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x185FA4u;
            // 0x185fa8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1860C4u;
            goto label_1860c4;
        }
    }
    ctx->pc = 0x185FACu;
label_185fac:
    // 0x185fac: 0x14a0001e  bnez        $a1, . + 4 + (0x1E << 2)
label_185fb0:
    if (ctx->pc == 0x185FB0u) {
        ctx->pc = 0x185FB0u;
            // 0x185fb0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x185FB4u;
        goto label_185fb4;
    }
    ctx->pc = 0x185FACu;
    {
        const bool branch_taken_0x185fac = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x185FB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185FACu;
            // 0x185fb0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185fac) {
            ctx->pc = 0x186028u;
            goto label_186028;
        }
    }
    ctx->pc = 0x185FB4u;
label_185fb4:
    // 0x185fb4: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x185fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_185fb8:
    // 0x185fb8: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
label_185fbc:
    if (ctx->pc == 0x185FBCu) {
        ctx->pc = 0x185FBCu;
            // 0x185fbc: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->pc = 0x185FC0u;
        goto label_185fc0;
    }
    ctx->pc = 0x185FB8u;
    {
        const bool branch_taken_0x185fb8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x185fb8) {
            ctx->pc = 0x185FBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x185FB8u;
            // 0x185fbc: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x185FC0u;
            goto label_185fc0;
        }
    }
    ctx->pc = 0x185FC0u;
label_185fc0:
    // 0x185fc0: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x185fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_185fc4:
    // 0x185fc4: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x185fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_185fc8:
    // 0x185fc8: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x185fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_185fcc:
    // 0x185fcc: 0x1031823  subu        $v1, $t0, $v1
    ctx->pc = 0x185fccu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_185fd0:
    // 0x185fd0: 0x46001a  div         $zero, $v0, $a2
    ctx->pc = 0x185fd0u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_185fd4:
    // 0x185fd4: 0x7066001a  div1        $zero, $v1, $a2
    ctx->pc = 0x185fd4u;
    { int32_t divisor = GPR_S32(ctx, 6); int32_t dividend = GPR_S32(ctx, 3); if (divisor != 0) {     if (divisor == -1 && dividend == INT32_MIN) {         ctx->lo1 = (uint64_t)(int64_t)INT32_MIN; ctx->hi1 = 0;     } else {         ctx->lo1 = (uint64_t)(int64_t)(dividend / divisor);         ctx->hi1 = (uint64_t)(int64_t)(dividend % divisor);     } } else {     ctx->lo1 = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi1 = (uint64_t)(int64_t)dividend; } }
label_185fd8:
    // 0x185fd8: 0x2010  mfhi        $a0
    ctx->pc = 0x185fd8u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_185fdc:
    // 0x185fdc: 0x70002810  mfhi1       $a1
    ctx->pc = 0x185fdcu;
    SET_GPR_U64(ctx, 5, ctx->hi1);
label_185fe0:
    // 0x185fe0: 0x54850007  bnel        $a0, $a1, . + 4 + (0x7 << 2)
label_185fe4:
    if (ctx->pc == 0x185FE4u) {
        ctx->pc = 0x185FE4u;
            // 0x185fe4: 0x8e020038  lw          $v0, 0x38($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
        ctx->pc = 0x185FE8u;
        goto label_185fe8;
    }
    ctx->pc = 0x185FE0u;
    {
        const bool branch_taken_0x185fe0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        if (branch_taken_0x185fe0) {
            ctx->pc = 0x185FE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x185FE0u;
            // 0x185fe4: 0x8e020038  lw          $v0, 0x38($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x186000u;
            goto label_186000;
        }
    }
    ctx->pc = 0x185FE8u;
label_185fe8:
    // 0x185fe8: 0xae040014  sw          $a0, 0x14($s0)
    ctx->pc = 0x185fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 4));
label_185fec:
    // 0x185fec: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x185fecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_185ff0:
    // 0x185ff0: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x185ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_185ff4:
    // 0x185ff4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x185ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_185ff8:
    // 0x185ff8: 0x10000006  b           . + 4 + (0x6 << 2)
label_185ffc:
    if (ctx->pc == 0x185FFCu) {
        ctx->pc = 0x185FFCu;
            // 0x185ffc: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->pc = 0x186000u;
        goto label_186000;
    }
    ctx->pc = 0x185FF8u;
    {
        const bool branch_taken_0x185ff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185FFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185FF8u;
            // 0x185ffc: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185ff8) {
            ctx->pc = 0x186014u;
            goto label_186014;
        }
    }
    ctx->pc = 0x186000u;
label_186000:
    // 0x186000: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_186004:
    if (ctx->pc == 0x186004u) {
        ctx->pc = 0x186004u;
            // 0x186004: 0x8e020028  lw          $v0, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->pc = 0x186008u;
        goto label_186008;
    }
    ctx->pc = 0x186000u;
    {
        const bool branch_taken_0x186000 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x186000) {
            ctx->pc = 0x186004u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x186000u;
            // 0x186004: 0x8e020028  lw          $v0, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18601Cu;
            goto label_18601c;
        }
    }
    ctx->pc = 0x186008u;
label_186008:
    // 0x186008: 0x8e04003c  lw          $a0, 0x3C($s0)
    ctx->pc = 0x186008u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_18600c:
    // 0x18600c: 0x40f809  jalr        $v0
label_186010:
    if (ctx->pc == 0x186010u) {
        ctx->pc = 0x186010u;
            // 0x186010: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->pc = 0x186014u;
        goto label_186014;
    }
    ctx->pc = 0x18600Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x186014u);
        ctx->pc = 0x186010u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18600Cu;
            // 0x186010: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x186014u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x186014u; }
            if (ctx->pc != 0x186014u) { return; }
        }
        }
    }
    ctx->pc = 0x186014u;
label_186014:
    // 0x186014: 0x8e270004  lw          $a3, 0x4($s1)
    ctx->pc = 0x186014u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_186018:
    // 0x186018: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x186018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_18601c:
    // 0x18601c: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x18601cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_186020:
    // 0x186020: 0x10000027  b           . + 4 + (0x27 << 2)
label_186024:
    if (ctx->pc == 0x186024u) {
        ctx->pc = 0x186024u;
            // 0x186024: 0xae020028  sw          $v0, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
        ctx->pc = 0x186028u;
        goto label_186028;
    }
    ctx->pc = 0x186020u;
    {
        const bool branch_taken_0x186020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186024u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186020u;
            // 0x186024: 0xae020028  sw          $v0, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186020) {
            ctx->pc = 0x1860C0u;
            goto label_1860c0;
        }
    }
    ctx->pc = 0x186028u;
label_186028:
    // 0x186028: 0x54a2001f  bnel        $a1, $v0, . + 4 + (0x1F << 2)
label_18602c:
    if (ctx->pc == 0x18602Cu) {
        ctx->pc = 0x18602Cu;
            // 0x18602c: 0x8e020038  lw          $v0, 0x38($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
        ctx->pc = 0x186030u;
        goto label_186030;
    }
    ctx->pc = 0x186028u;
    {
        const bool branch_taken_0x186028 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x186028) {
            ctx->pc = 0x18602Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x186028u;
            // 0x18602c: 0x8e020038  lw          $v0, 0x38($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1860A8u;
            goto label_1860a8;
        }
    }
    ctx->pc = 0x186030u;
label_186030:
    // 0x186030: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x186030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_186034:
    // 0x186034: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
label_186038:
    if (ctx->pc == 0x186038u) {
        ctx->pc = 0x186038u;
            // 0x186038: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->pc = 0x18603Cu;
        goto label_18603c;
    }
    ctx->pc = 0x186034u;
    {
        const bool branch_taken_0x186034 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x186034) {
            ctx->pc = 0x186038u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x186034u;
            // 0x186038: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x18603Cu;
            goto label_18603c;
        }
    }
    ctx->pc = 0x18603Cu;
label_18603c:
    // 0x18603c: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x18603cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_186040:
    // 0x186040: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x186040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_186044:
    // 0x186044: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x186044u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_186048:
    // 0x186048: 0x1042023  subu        $a0, $t0, $a0
    ctx->pc = 0x186048u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
label_18604c:
    // 0x18604c: 0x46001a  div         $zero, $v0, $a2
    ctx->pc = 0x18604cu;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_186050:
    // 0x186050: 0x7086001a  div1        $zero, $a0, $a2
    ctx->pc = 0x186050u;
    { int32_t divisor = GPR_S32(ctx, 6); int32_t dividend = GPR_S32(ctx, 4); if (divisor != 0) {     if (divisor == -1 && dividend == INT32_MIN) {         ctx->lo1 = (uint64_t)(int64_t)INT32_MIN; ctx->hi1 = 0;     } else {         ctx->lo1 = (uint64_t)(int64_t)(dividend / divisor);         ctx->hi1 = (uint64_t)(int64_t)(dividend % divisor);     } } else {     ctx->lo1 = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi1 = (uint64_t)(int64_t)dividend; } }
label_186054:
    // 0x186054: 0x1010  mfhi        $v0
    ctx->pc = 0x186054u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_186058:
    // 0x186058: 0x70001810  mfhi1       $v1
    ctx->pc = 0x186058u;
    SET_GPR_U64(ctx, 3, ctx->hi1);
label_18605c:
    // 0x18605c: 0x54430008  bnel        $v0, $v1, . + 4 + (0x8 << 2)
label_186060:
    if (ctx->pc == 0x186060u) {
        ctx->pc = 0x186060u;
            // 0x186060: 0x8e020038  lw          $v0, 0x38($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
        ctx->pc = 0x186064u;
        goto label_186064;
    }
    ctx->pc = 0x18605Cu;
    {
        const bool branch_taken_0x18605c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x18605c) {
            ctx->pc = 0x186060u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18605Cu;
            // 0x186060: 0x8e020038  lw          $v0, 0x38($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x186080u;
            goto label_186080;
        }
    }
    ctx->pc = 0x186064u;
label_186064:
    // 0x186064: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x186064u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
label_186068:
    // 0x186068: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x186068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_18606c:
    // 0x18606c: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x18606cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_186070:
    // 0x186070: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x186070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_186074:
    // 0x186074: 0x10000007  b           . + 4 + (0x7 << 2)
label_186078:
    if (ctx->pc == 0x186078u) {
        ctx->pc = 0x186078u;
            // 0x186078: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->pc = 0x18607Cu;
        goto label_18607c;
    }
    ctx->pc = 0x186074u;
    {
        const bool branch_taken_0x186074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186078u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186074u;
            // 0x186078: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186074) {
            ctx->pc = 0x186094u;
            goto label_186094;
        }
    }
    ctx->pc = 0x18607Cu;
label_18607c:
    // 0x18607c: 0x0  nop
    ctx->pc = 0x18607cu;
    // NOP
label_186080:
    // 0x186080: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_186084:
    if (ctx->pc == 0x186084u) {
        ctx->pc = 0x186084u;
            // 0x186084: 0x8e020030  lw          $v0, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->pc = 0x186088u;
        goto label_186088;
    }
    ctx->pc = 0x186080u;
    {
        const bool branch_taken_0x186080 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x186080) {
            ctx->pc = 0x186084u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x186080u;
            // 0x186084: 0x8e020030  lw          $v0, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18609Cu;
            goto label_18609c;
        }
    }
    ctx->pc = 0x186088u;
label_186088:
    // 0x186088: 0x8e04003c  lw          $a0, 0x3C($s0)
    ctx->pc = 0x186088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_18608c:
    // 0x18608c: 0x40f809  jalr        $v0
label_186090:
    if (ctx->pc == 0x186090u) {
        ctx->pc = 0x186090u;
            // 0x186090: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->pc = 0x186094u;
        goto label_186094;
    }
    ctx->pc = 0x18608Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x186094u);
        ctx->pc = 0x186090u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18608Cu;
            // 0x186090: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x186094u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x186094u; }
            if (ctx->pc != 0x186094u) { return; }
        }
        }
    }
    ctx->pc = 0x186094u;
label_186094:
    // 0x186094: 0x8e270004  lw          $a3, 0x4($s1)
    ctx->pc = 0x186094u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_186098:
    // 0x186098: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x186098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_18609c:
    // 0x18609c: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x18609cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_1860a0:
    // 0x1860a0: 0x10000007  b           . + 4 + (0x7 << 2)
label_1860a4:
    if (ctx->pc == 0x1860A4u) {
        ctx->pc = 0x1860A4u;
            // 0x1860a4: 0xae020030  sw          $v0, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
        ctx->pc = 0x1860A8u;
        goto label_1860a8;
    }
    ctx->pc = 0x1860A0u;
    {
        const bool branch_taken_0x1860a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1860A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1860A0u;
            // 0x1860a4: 0xae020030  sw          $v0, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1860a0) {
            ctx->pc = 0x1860C0u;
            goto label_1860c0;
        }
    }
    ctx->pc = 0x1860A8u;
label_1860a8:
    // 0x1860a8: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x1860a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_1860ac:
    // 0x1860ac: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1860b0:
    if (ctx->pc == 0x1860B0u) {
        ctx->pc = 0x1860B0u;
            // 0x1860b0: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->pc = 0x1860B4u;
        goto label_1860b4;
    }
    ctx->pc = 0x1860ACu;
    {
        const bool branch_taken_0x1860ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1860B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1860ACu;
            // 0x1860b0: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1860ac) {
            ctx->pc = 0x1860C0u;
            goto label_1860c0;
        }
    }
    ctx->pc = 0x1860B4u;
label_1860b4:
    // 0x1860b4: 0x8e04003c  lw          $a0, 0x3C($s0)
    ctx->pc = 0x1860b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_1860b8:
    // 0x1860b8: 0x40f809  jalr        $v0
label_1860bc:
    if (ctx->pc == 0x1860BCu) {
        ctx->pc = 0x1860BCu;
            // 0x1860bc: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->pc = 0x1860C0u;
        goto label_1860c0;
    }
    ctx->pc = 0x1860B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1860C0u);
        ctx->pc = 0x1860BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1860B8u;
            // 0x1860bc: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1860C0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1860C0u; }
            if (ctx->pc != 0x1860C0u) { return; }
        }
        }
    }
    ctx->pc = 0x1860C0u;
label_1860c0:
    // 0x1860c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1860c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1860c4:
    // 0x1860c4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1860c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1860c8:
    // 0x1860c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1860c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1860cc:
    // 0x1860cc: 0x3e00008  jr          $ra
label_1860d0:
    if (ctx->pc == 0x1860D0u) {
        ctx->pc = 0x1860D0u;
            // 0x1860d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1860D4u;
        goto label_1860d4;
    }
    ctx->pc = 0x1860CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1860D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1860CCu;
            // 0x1860d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1860D4u;
label_1860d4:
    // 0x1860d4: 0x0  nop
    ctx->pc = 0x1860d4u;
    // NOP
label_1860d8:
    // 0x1860d8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1860d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1860dc:
    // 0x1860dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1860dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1860e0:
    // 0x1860e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1860e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1860e4:
    // 0x1860e4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1860e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1860e8:
    // 0x1860e8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1860e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1860ec:
    // 0x1860ec: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1860ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1860f0:
    // 0x1860f0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1860f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1860f4:
    // 0x1860f4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1860f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_1860f8:
    // 0x1860f8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1860f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1860fc:
    // 0x1860fc: 0xc06127c  jal         func_1849F0
label_186100:
    if (ctx->pc == 0x186100u) {
        ctx->pc = 0x186100u;
            // 0x186100: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x186104u;
        goto label_186104;
    }
    ctx->pc = 0x1860FCu;
    SET_GPR_U32(ctx, 31, 0x186104u);
    ctx->pc = 0x186100u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1860FCu;
            // 0x186100: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1849F0u;
    if (runtime->hasFunction(0x1849F0u)) {
        auto targetFn = runtime->lookupFunction(0x1849F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186104u; }
        if (ctx->pc != 0x186104u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001849F0_0x1849f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186104u; }
        if (ctx->pc != 0x186104u) { return; }
    }
    ctx->pc = 0x186104u;
label_186104:
    // 0x186104: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x186104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_186108:
    // 0x186108: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x186108u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18610c:
    // 0x18610c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x18610cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_186110:
    // 0x186110: 0xc061850  jal         func_186140
label_186114:
    if (ctx->pc == 0x186114u) {
        ctx->pc = 0x186114u;
            // 0x186114: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x186118u;
        goto label_186118;
    }
    ctx->pc = 0x186110u;
    SET_GPR_U32(ctx, 31, 0x186118u);
    ctx->pc = 0x186114u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186110u;
            // 0x186114: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186140u;
    if (runtime->hasFunction(0x186140u)) {
        auto targetFn = runtime->lookupFunction(0x186140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186118u; }
        if (ctx->pc != 0x186118u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00186140_0x186140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186118u; }
        if (ctx->pc != 0x186118u) { return; }
    }
    ctx->pc = 0x186118u;
label_186118:
    // 0x186118: 0xc061282  jal         func_184A08
label_18611c:
    if (ctx->pc == 0x18611Cu) {
        ctx->pc = 0x18611Cu;
            // 0x18611c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x186120u;
        goto label_186120;
    }
    ctx->pc = 0x186118u;
    SET_GPR_U32(ctx, 31, 0x186120u);
    ctx->pc = 0x18611Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186118u;
            // 0x18611c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x184A08u;
    if (runtime->hasFunction(0x184A08u)) {
        auto targetFn = runtime->lookupFunction(0x184A08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186120u; }
        if (ctx->pc != 0x186120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00184A08_0x184a08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186120u; }
        if (ctx->pc != 0x186120u) { return; }
    }
    ctx->pc = 0x186120u;
label_186120:
    // 0x186120: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x186120u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_186124:
    // 0x186124: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x186124u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_186128:
    // 0x186128: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x186128u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_18612c:
    // 0x18612c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x18612cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_186130:
    // 0x186130: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x186130u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_186134:
    // 0x186134: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x186134u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_186138:
    // 0x186138: 0x3e00008  jr          $ra
label_18613c:
    if (ctx->pc == 0x18613Cu) {
        ctx->pc = 0x18613Cu;
            // 0x18613c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x186140u;
        goto label_fallthrough_0x186138;
    }
    ctx->pc = 0x186138u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18613Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186138u;
            // 0x18613c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x186138:
    ctx->pc = 0x186140u;
}
