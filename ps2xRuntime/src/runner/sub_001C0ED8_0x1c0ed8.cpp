#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C0ED8
// Address: 0x1c0ed8 - 0x1c10b0
void sub_001C0ED8_0x1c0ed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C0ED8_0x1c0ed8");
#endif

    switch (ctx->pc) {
        case 0x1c0ed8u: goto label_1c0ed8;
        case 0x1c0edcu: goto label_1c0edc;
        case 0x1c0ee0u: goto label_1c0ee0;
        case 0x1c0ee4u: goto label_1c0ee4;
        case 0x1c0ee8u: goto label_1c0ee8;
        case 0x1c0eecu: goto label_1c0eec;
        case 0x1c0ef0u: goto label_1c0ef0;
        case 0x1c0ef4u: goto label_1c0ef4;
        case 0x1c0ef8u: goto label_1c0ef8;
        case 0x1c0efcu: goto label_1c0efc;
        case 0x1c0f00u: goto label_1c0f00;
        case 0x1c0f04u: goto label_1c0f04;
        case 0x1c0f08u: goto label_1c0f08;
        case 0x1c0f0cu: goto label_1c0f0c;
        case 0x1c0f10u: goto label_1c0f10;
        case 0x1c0f14u: goto label_1c0f14;
        case 0x1c0f18u: goto label_1c0f18;
        case 0x1c0f1cu: goto label_1c0f1c;
        case 0x1c0f20u: goto label_1c0f20;
        case 0x1c0f24u: goto label_1c0f24;
        case 0x1c0f28u: goto label_1c0f28;
        case 0x1c0f2cu: goto label_1c0f2c;
        case 0x1c0f30u: goto label_1c0f30;
        case 0x1c0f34u: goto label_1c0f34;
        case 0x1c0f38u: goto label_1c0f38;
        case 0x1c0f3cu: goto label_1c0f3c;
        case 0x1c0f40u: goto label_1c0f40;
        case 0x1c0f44u: goto label_1c0f44;
        case 0x1c0f48u: goto label_1c0f48;
        case 0x1c0f4cu: goto label_1c0f4c;
        case 0x1c0f50u: goto label_1c0f50;
        case 0x1c0f54u: goto label_1c0f54;
        case 0x1c0f58u: goto label_1c0f58;
        case 0x1c0f5cu: goto label_1c0f5c;
        case 0x1c0f60u: goto label_1c0f60;
        case 0x1c0f64u: goto label_1c0f64;
        case 0x1c0f68u: goto label_1c0f68;
        case 0x1c0f6cu: goto label_1c0f6c;
        case 0x1c0f70u: goto label_1c0f70;
        case 0x1c0f74u: goto label_1c0f74;
        case 0x1c0f78u: goto label_1c0f78;
        case 0x1c0f7cu: goto label_1c0f7c;
        case 0x1c0f80u: goto label_1c0f80;
        case 0x1c0f84u: goto label_1c0f84;
        case 0x1c0f88u: goto label_1c0f88;
        case 0x1c0f8cu: goto label_1c0f8c;
        case 0x1c0f90u: goto label_1c0f90;
        case 0x1c0f94u: goto label_1c0f94;
        case 0x1c0f98u: goto label_1c0f98;
        case 0x1c0f9cu: goto label_1c0f9c;
        case 0x1c0fa0u: goto label_1c0fa0;
        case 0x1c0fa4u: goto label_1c0fa4;
        case 0x1c0fa8u: goto label_1c0fa8;
        case 0x1c0facu: goto label_1c0fac;
        case 0x1c0fb0u: goto label_1c0fb0;
        case 0x1c0fb4u: goto label_1c0fb4;
        case 0x1c0fb8u: goto label_1c0fb8;
        case 0x1c0fbcu: goto label_1c0fbc;
        case 0x1c0fc0u: goto label_1c0fc0;
        case 0x1c0fc4u: goto label_1c0fc4;
        case 0x1c0fc8u: goto label_1c0fc8;
        case 0x1c0fccu: goto label_1c0fcc;
        case 0x1c0fd0u: goto label_1c0fd0;
        case 0x1c0fd4u: goto label_1c0fd4;
        case 0x1c0fd8u: goto label_1c0fd8;
        case 0x1c0fdcu: goto label_1c0fdc;
        case 0x1c0fe0u: goto label_1c0fe0;
        case 0x1c0fe4u: goto label_1c0fe4;
        case 0x1c0fe8u: goto label_1c0fe8;
        case 0x1c0fecu: goto label_1c0fec;
        case 0x1c0ff0u: goto label_1c0ff0;
        case 0x1c0ff4u: goto label_1c0ff4;
        case 0x1c0ff8u: goto label_1c0ff8;
        case 0x1c0ffcu: goto label_1c0ffc;
        case 0x1c1000u: goto label_1c1000;
        case 0x1c1004u: goto label_1c1004;
        case 0x1c1008u: goto label_1c1008;
        case 0x1c100cu: goto label_1c100c;
        case 0x1c1010u: goto label_1c1010;
        case 0x1c1014u: goto label_1c1014;
        case 0x1c1018u: goto label_1c1018;
        case 0x1c101cu: goto label_1c101c;
        case 0x1c1020u: goto label_1c1020;
        case 0x1c1024u: goto label_1c1024;
        case 0x1c1028u: goto label_1c1028;
        case 0x1c102cu: goto label_1c102c;
        case 0x1c1030u: goto label_1c1030;
        case 0x1c1034u: goto label_1c1034;
        case 0x1c1038u: goto label_1c1038;
        case 0x1c103cu: goto label_1c103c;
        case 0x1c1040u: goto label_1c1040;
        case 0x1c1044u: goto label_1c1044;
        case 0x1c1048u: goto label_1c1048;
        case 0x1c104cu: goto label_1c104c;
        case 0x1c1050u: goto label_1c1050;
        case 0x1c1054u: goto label_1c1054;
        case 0x1c1058u: goto label_1c1058;
        case 0x1c105cu: goto label_1c105c;
        case 0x1c1060u: goto label_1c1060;
        case 0x1c1064u: goto label_1c1064;
        case 0x1c1068u: goto label_1c1068;
        case 0x1c106cu: goto label_1c106c;
        case 0x1c1070u: goto label_1c1070;
        case 0x1c1074u: goto label_1c1074;
        case 0x1c1078u: goto label_1c1078;
        case 0x1c107cu: goto label_1c107c;
        case 0x1c1080u: goto label_1c1080;
        case 0x1c1084u: goto label_1c1084;
        case 0x1c1088u: goto label_1c1088;
        case 0x1c108cu: goto label_1c108c;
        case 0x1c1090u: goto label_1c1090;
        case 0x1c1094u: goto label_1c1094;
        case 0x1c1098u: goto label_1c1098;
        case 0x1c109cu: goto label_1c109c;
        case 0x1c10a0u: goto label_1c10a0;
        case 0x1c10a4u: goto label_1c10a4;
        case 0x1c10a8u: goto label_1c10a8;
        case 0x1c10acu: goto label_1c10ac;
        default: break;
    }

    ctx->pc = 0x1c0ed8u;

label_1c0ed8:
    // 0x1c0ed8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c0ed8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1c0edc:
    // 0x1c0edc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c0edcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1c0ee0:
    // 0x1c0ee0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c0ee0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c0ee4:
    // 0x1c0ee4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c0ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1c0ee8:
    // 0x1c0ee8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1c0ee8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1c0eec:
    // 0x1c0eec: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1c0eecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_1c0ef0:
    // 0x1c0ef0: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1c0ef0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1c0ef4:
    // 0x1c0ef4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c0ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1c0ef8:
    // 0x1c0ef8: 0x1600000f  bnez        $s0, . + 4 + (0xF << 2)
label_1c0efc:
    if (ctx->pc == 0x1C0EFCu) {
        ctx->pc = 0x1C0EFCu;
            // 0x1c0efc: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->pc = 0x1C0F00u;
        goto label_1c0f00;
    }
    ctx->pc = 0x1C0EF8u;
    {
        const bool branch_taken_0x1c0ef8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C0EFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0EF8u;
            // 0x1c0efc: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0ef8) {
            ctx->pc = 0x1C0F38u;
            goto label_1c0f38;
        }
    }
    ctx->pc = 0x1C0F00u;
label_1c0f00:
    // 0x1c0f00: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1c0f00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
label_1c0f04:
    // 0x1c0f04: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x1c0f04u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
label_1c0f08:
    // 0x1c0f08: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c0f08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c0f0c:
    // 0x1c0f0c: 0x2484b8c8  addiu       $a0, $a0, -0x4738
    ctx->pc = 0x1c0f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949064));
label_1c0f10:
    // 0x1c0f10: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c0f10u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1c0f14:
    // 0x1c0f14: 0x24c6b8f8  addiu       $a2, $a2, -0x4708
    ctx->pc = 0x1c0f14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949112));
label_1c0f18:
    // 0x1c0f18: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c0f18u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1c0f1c:
    // 0x1c0f1c: 0x2405016f  addiu       $a1, $zero, 0x16F
    ctx->pc = 0x1c0f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 367));
label_1c0f20:
    // 0x1c0f20: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1c0f20u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1c0f24:
    // 0x1c0f24: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c0f24u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c0f28:
    // 0x1c0f28: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c0f28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1c0f2c:
    // 0x1c0f2c: 0x2408ff9b  addiu       $t0, $zero, -0x65
    ctx->pc = 0x1c0f2cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967195));
label_1c0f30:
    // 0x1c0f30: 0x80711fe  j           func_1C47F8
label_1c0f34:
    if (ctx->pc == 0x1C0F34u) {
        ctx->pc = 0x1C0F34u;
            // 0x1c0f34: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1C0F38u;
        goto label_1c0f38;
    }
    ctx->pc = 0x1C0F30u;
    ctx->pc = 0x1C0F34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0F30u;
            // 0x1c0f34: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C47F8u;
    if (runtime->hasFunction(0x1C47F8u)) {
        auto targetFn = runtime->lookupFunction(0x1C47F8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001C47F8_0x1c47f8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1C0F38u;
label_1c0f38:
    // 0x1c0f38: 0x86110034  lh          $s1, 0x34($s0)
    ctx->pc = 0x1c0f38u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 52)));
label_1c0f3c:
    // 0x1c0f3c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c0f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c0f40:
    // 0x1c0f40: 0x1222000f  beq         $s1, $v0, . + 4 + (0xF << 2)
label_1c0f44:
    if (ctx->pc == 0x1C0F44u) {
        ctx->pc = 0x1C0F44u;
            // 0x1c0f44: 0x3c060064  lui         $a2, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
        ctx->pc = 0x1C0F48u;
        goto label_1c0f48;
    }
    ctx->pc = 0x1C0F40u;
    {
        const bool branch_taken_0x1c0f40 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C0F44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0F40u;
            // 0x1c0f44: 0x3c060064  lui         $a2, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0f40) {
            ctx->pc = 0x1C0F80u;
            goto label_1c0f80;
        }
    }
    ctx->pc = 0x1C0F48u;
label_1c0f48:
    // 0x1c0f48: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1c0f48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
label_1c0f4c:
    // 0x1c0f4c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c0f4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c0f50:
    // 0x1c0f50: 0x2484b8c8  addiu       $a0, $a0, -0x4738
    ctx->pc = 0x1c0f50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949064));
label_1c0f54:
    // 0x1c0f54: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c0f54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1c0f58:
    // 0x1c0f58: 0x24c6b8f8  addiu       $a2, $a2, -0x4708
    ctx->pc = 0x1c0f58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949112));
label_1c0f5c:
    // 0x1c0f5c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c0f5cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1c0f60:
    // 0x1c0f60: 0x24050172  addiu       $a1, $zero, 0x172
    ctx->pc = 0x1c0f60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 370));
label_1c0f64:
    // 0x1c0f64: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1c0f64u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1c0f68:
    // 0x1c0f68: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c0f68u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c0f6c:
    // 0x1c0f6c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c0f6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1c0f70:
    // 0x1c0f70: 0x2408ff9b  addiu       $t0, $zero, -0x65
    ctx->pc = 0x1c0f70u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967195));
label_1c0f74:
    // 0x1c0f74: 0x80711fe  j           func_1C47F8
label_1c0f78:
    if (ctx->pc == 0x1C0F78u) {
        ctx->pc = 0x1C0F78u;
            // 0x1c0f78: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1C0F7Cu;
        goto label_1c0f7c;
    }
    ctx->pc = 0x1C0F74u;
    ctx->pc = 0x1C0F78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0F74u;
            // 0x1c0f78: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C47F8u;
    if (runtime->hasFunction(0x1C47F8u)) {
        auto targetFn = runtime->lookupFunction(0x1C47F8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001C47F8_0x1c47f8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1C0F7Cu;
label_1c0f7c:
    // 0x1c0f7c: 0x0  nop
    ctx->pc = 0x1c0f7cu;
    // NOP
label_1c0f80:
    // 0x1c0f80: 0x86030036  lh          $v1, 0x36($s0)
    ctx->pc = 0x1c0f80u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 54)));
label_1c0f84:
    // 0x1c0f84: 0x10710043  beq         $v1, $s1, . + 4 + (0x43 << 2)
label_1c0f88:
    if (ctx->pc == 0x1C0F88u) {
        ctx->pc = 0x1C0F88u;
            // 0x1c0f88: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->pc = 0x1C0F8Cu;
        goto label_1c0f8c;
    }
    ctx->pc = 0x1C0F84u;
    {
        const bool branch_taken_0x1c0f84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        ctx->pc = 0x1C0F88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0F84u;
            // 0x1c0f88: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0f84) {
            ctx->pc = 0x1C1094u;
            goto label_1c1094;
        }
    }
    ctx->pc = 0x1C0F8Cu;
label_1c0f8c:
    // 0x1c0f8c: 0xc0702f8  jal         func_1C0BE0
label_1c0f90:
    if (ctx->pc == 0x1C0F90u) {
        ctx->pc = 0x1C0F90u;
            // 0x1c0f90: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C0F94u;
        goto label_1c0f94;
    }
    ctx->pc = 0x1C0F8Cu;
    SET_GPR_U32(ctx, 31, 0x1C0F94u);
    ctx->pc = 0x1C0F90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0F8Cu;
            // 0x1c0f90: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C0BE0u;
    if (runtime->hasFunction(0x1C0BE0u)) {
        auto targetFn = runtime->lookupFunction(0x1C0BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0F94u; }
        if (ctx->pc != 0x1C0F94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C0BE0_0x1c0be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0F94u; }
        if (ctx->pc != 0x1C0F94u) { return; }
    }
    ctx->pc = 0x1C0F94u;
label_1c0f94:
    // 0x1c0f94: 0x54510004  bnel        $v0, $s1, . + 4 + (0x4 << 2)
label_1c0f98:
    if (ctx->pc == 0x1C0F98u) {
        ctx->pc = 0x1C0F98u;
            // 0x1c0f98: 0x8e09001c  lw          $t1, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->pc = 0x1C0F9Cu;
        goto label_1c0f9c;
    }
    ctx->pc = 0x1C0F94u;
    {
        const bool branch_taken_0x1c0f94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x1c0f94) {
            ctx->pc = 0x1C0F98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0F94u;
            // 0x1c0f98: 0x8e09001c  lw          $t1, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C0FA8u;
            goto label_1c0fa8;
        }
    }
    ctx->pc = 0x1C0F9Cu;
label_1c0f9c:
    // 0x1c0f9c: 0x1000003d  b           . + 4 + (0x3D << 2)
label_1c0fa0:
    if (ctx->pc == 0x1C0FA0u) {
        ctx->pc = 0x1C0FA0u;
            // 0x1c0fa0: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->pc = 0x1C0FA4u;
        goto label_1c0fa4;
    }
    ctx->pc = 0x1C0F9Cu;
    {
        const bool branch_taken_0x1c0f9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0FA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0F9Cu;
            // 0x1c0fa0: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0f9c) {
            ctx->pc = 0x1C1094u;
            goto label_1c1094;
        }
    }
    ctx->pc = 0x1C0FA4u;
label_1c0fa4:
    // 0x1c0fa4: 0x0  nop
    ctx->pc = 0x1c0fa4u;
    // NOP
label_1c0fa8:
    // 0x1c0fa8: 0x5520000f  bnel        $t1, $zero, . + 4 + (0xF << 2)
label_1c0fac:
    if (ctx->pc == 0x1C0FACu) {
        ctx->pc = 0x1C0FACu;
            // 0x1c0fac: 0x85230014  lh          $v1, 0x14($t1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 20)));
        ctx->pc = 0x1C0FB0u;
        goto label_1c0fb0;
    }
    ctx->pc = 0x1C0FA8u;
    {
        const bool branch_taken_0x1c0fa8 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c0fa8) {
            ctx->pc = 0x1C0FACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0FA8u;
            // 0x1c0fac: 0x85230014  lh          $v1, 0x14($t1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 20)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C0FE8u;
            goto label_1c0fe8;
        }
    }
    ctx->pc = 0x1C0FB0u;
label_1c0fb0:
    // 0x1c0fb0: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1c0fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
label_1c0fb4:
    // 0x1c0fb4: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x1c0fb4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
label_1c0fb8:
    // 0x1c0fb8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c0fb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c0fbc:
    // 0x1c0fbc: 0x2484b8c8  addiu       $a0, $a0, -0x4738
    ctx->pc = 0x1c0fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949064));
label_1c0fc0:
    // 0x1c0fc0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c0fc0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1c0fc4:
    // 0x1c0fc4: 0x24c6b8f8  addiu       $a2, $a2, -0x4708
    ctx->pc = 0x1c0fc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949112));
label_1c0fc8:
    // 0x1c0fc8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c0fc8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1c0fcc:
    // 0x1c0fcc: 0x2405017f  addiu       $a1, $zero, 0x17F
    ctx->pc = 0x1c0fccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 383));
label_1c0fd0:
    // 0x1c0fd0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1c0fd0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1c0fd4:
    // 0x1c0fd4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c0fd4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c0fd8:
    // 0x1c0fd8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c0fd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1c0fdc:
    // 0x1c0fdc: 0x2408ff9b  addiu       $t0, $zero, -0x65
    ctx->pc = 0x1c0fdcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967195));
label_1c0fe0:
    // 0x1c0fe0: 0x80711fe  j           func_1C47F8
label_1c0fe4:
    if (ctx->pc == 0x1C0FE4u) {
        ctx->pc = 0x1C0FE4u;
            // 0x1c0fe4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1C0FE8u;
        goto label_1c0fe8;
    }
    ctx->pc = 0x1C0FE0u;
    ctx->pc = 0x1C0FE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0FE0u;
            // 0x1c0fe4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C47F8u;
    if (runtime->hasFunction(0x1C47F8u)) {
        auto targetFn = runtime->lookupFunction(0x1C47F8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001C47F8_0x1c47f8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1C0FE8u;
label_1c0fe8:
    // 0x1c0fe8: 0x1c60002a  bgtz        $v1, . + 4 + (0x2A << 2)
label_1c0fec:
    if (ctx->pc == 0x1C0FECu) {
        ctx->pc = 0x1C0FECu;
            // 0x1c0fec: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->pc = 0x1C0FF0u;
        goto label_1c0ff0;
    }
    ctx->pc = 0x1C0FE8u;
    {
        const bool branch_taken_0x1c0fe8 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x1C0FECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0FE8u;
            // 0x1c0fec: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0fe8) {
            ctx->pc = 0x1C1094u;
            goto label_1c1094;
        }
    }
    ctx->pc = 0x1C0FF0u;
label_1c0ff0:
    // 0x1c0ff0: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x1c0ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1c0ff4:
    // 0x1c0ff4: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1c0ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1c0ff8:
    // 0x1c0ff8: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x1c0ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_1c0ffc:
    // 0x1c0ffc: 0x823021  addu        $a2, $a0, $v0
    ctx->pc = 0x1c0ffcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1c1000:
    // 0x1c1000: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1c1000u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1c1004:
    // 0x1c1004: 0xc4102a  slt         $v0, $a2, $a0
    ctx->pc = 0x1c1004u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_1c1008:
    // 0x1c1008: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_1c100c:
    if (ctx->pc == 0x1C100Cu) {
        ctx->pc = 0x1C100Cu;
            // 0x1c100c: 0xa6110038  sh          $s1, 0x38($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 56), (uint16_t)GPR_U32(ctx, 17));
        ctx->pc = 0x1C1010u;
        goto label_1c1010;
    }
    ctx->pc = 0x1C1008u;
    {
        const bool branch_taken_0x1c1008 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1008) {
            ctx->pc = 0x1C100Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1008u;
            // 0x1c100c: 0xa6110038  sh          $s1, 0x38($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 56), (uint16_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C102Cu;
            goto label_1c102c;
        }
    }
    ctx->pc = 0x1C1010u;
label_1c1010:
    // 0x1c1010: 0xd21021  addu        $v0, $a2, $s2
    ctx->pc = 0x1c1010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
label_1c1014:
    // 0x1c1014: 0x861823  subu        $v1, $a0, $a2
    ctx->pc = 0x1c1014u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_1c1018:
    // 0x1c1018: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x1c1018u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1c101c:
    // 0x1c101c: 0x62900b  movn        $s2, $v1, $v0
    ctx->pc = 0x1c101cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 3));
label_1c1020:
    // 0x1c1020: 0x5e400005  bgtzl       $s2, . + 4 + (0x5 << 2)
label_1c1024:
    if (ctx->pc == 0x1C1024u) {
        ctx->pc = 0x1C1024u;
            // 0x1c1024: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->pc = 0x1C1028u;
        goto label_1c1028;
    }
    ctx->pc = 0x1C1020u;
    {
        const bool branch_taken_0x1c1020 = (GPR_S32(ctx, 18) > 0);
        if (branch_taken_0x1c1020) {
            ctx->pc = 0x1C1024u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1020u;
            // 0x1c1024: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C1038u;
            goto label_1c1038;
        }
    }
    ctx->pc = 0x1C1028u;
label_1c1028:
    // 0x1c1028: 0xa6110038  sh          $s1, 0x38($s0)
    ctx->pc = 0x1c1028u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 56), (uint16_t)GPR_U32(ctx, 17));
label_1c102c:
    // 0x1c102c: 0x10000019  b           . + 4 + (0x19 << 2)
label_1c1030:
    if (ctx->pc == 0x1C1030u) {
        ctx->pc = 0x1C1030u;
            // 0x1c1030: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C1034u;
        goto label_1c1034;
    }
    ctx->pc = 0x1C102Cu;
    {
        const bool branch_taken_0x1c102c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1030u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C102Cu;
            // 0x1c1030: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c102c) {
            ctx->pc = 0x1C1094u;
            goto label_1c1094;
        }
    }
    ctx->pc = 0x1C1034u;
label_1c1034:
    // 0x1c1034: 0x0  nop
    ctx->pc = 0x1c1034u;
    // NOP
label_1c1038:
    // 0x1c1038: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1c1038u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1c103c:
    // 0x1c103c: 0x8d250000  lw          $a1, 0x0($t1)
    ctx->pc = 0x1c103cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_1c1040:
    // 0x1c1040: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x1c1040u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1c1044:
    // 0x1c1044: 0x8c430038  lw          $v1, 0x38($v0)
    ctx->pc = 0x1c1044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_1c1048:
    // 0x1c1048: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x1c1048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_1c104c:
    // 0x1c104c: 0x40f809  jalr        $v0
label_1c1050:
    if (ctx->pc == 0x1C1050u) {
        ctx->pc = 0x1C1050u;
            // 0x1c1050: 0x8d240004  lw          $a0, 0x4($t1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
        ctx->pc = 0x1C1054u;
        goto label_1c1054;
    }
    ctx->pc = 0x1C104Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C1054u);
        ctx->pc = 0x1C1050u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C104Cu;
            // 0x1c1050: 0x8d240004  lw          $a0, 0x4($t1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1C1054u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1C1054u; }
            if (ctx->pc != 0x1C1054u) { return; }
        }
        }
    }
    ctx->pc = 0x1C1054u;
label_1c1054:
    // 0x1c1054: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1c1054u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c1058:
    // 0x1c1058: 0x460000e  bltz        $v1, . + 4 + (0xE << 2)
label_1c105c:
    if (ctx->pc == 0x1C105Cu) {
        ctx->pc = 0x1C105Cu;
            // 0x1c105c: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->pc = 0x1C1060u;
        goto label_1c1060;
    }
    ctx->pc = 0x1C1058u;
    {
        const bool branch_taken_0x1c1058 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1C105Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1058u;
            // 0x1c105c: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1058) {
            ctx->pc = 0x1C1094u;
            goto label_1c1094;
        }
    }
    ctx->pc = 0x1C1060u;
label_1c1060:
    // 0x1c1060: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_1c1064:
    if (ctx->pc == 0x1C1064u) {
        ctx->pc = 0x1C1064u;
            // 0x1c1064: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1C1068u;
        goto label_1c1068;
    }
    ctx->pc = 0x1C1060u;
    {
        const bool branch_taken_0x1c1060 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1060u;
            // 0x1c1064: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1060) {
            ctx->pc = 0x1C1088u;
            goto label_1c1088;
        }
    }
    ctx->pc = 0x1C1068u;
label_1c1068:
    // 0x1c1068: 0xae130030  sw          $s3, 0x30($s0)
    ctx->pc = 0x1c1068u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 19));
label_1c106c:
    // 0x1c106c: 0xae120020  sw          $s2, 0x20($s0)
    ctx->pc = 0x1c106cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 18));
label_1c1070:
    // 0x1c1070: 0xa6020038  sh          $v0, 0x38($s0)
    ctx->pc = 0x1c1070u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 56), (uint16_t)GPR_U32(ctx, 2));
label_1c1074:
    // 0x1c1074: 0xa6110036  sh          $s1, 0x36($s0)
    ctx->pc = 0x1c1074u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 54), (uint16_t)GPR_U32(ctx, 17));
label_1c1078:
    // 0x1c1078: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1c1078u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
label_1c107c:
    // 0x1c107c: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x1c107cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
label_1c1080:
    // 0x1c1080: 0x10000002  b           . + 4 + (0x2 << 2)
label_1c1084:
    if (ctx->pc == 0x1C1084u) {
        ctx->pc = 0x1C1084u;
            // 0x1c1084: 0xae03002c  sw          $v1, 0x2C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
        ctx->pc = 0x1C1088u;
        goto label_1c1088;
    }
    ctx->pc = 0x1C1080u;
    {
        const bool branch_taken_0x1c1080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1080u;
            // 0x1c1084: 0xae03002c  sw          $v1, 0x2C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1080) {
            ctx->pc = 0x1C108Cu;
            goto label_1c108c;
        }
    }
    ctx->pc = 0x1C1088u;
label_1c1088:
    // 0x1c1088: 0xa6110038  sh          $s1, 0x38($s0)
    ctx->pc = 0x1c1088u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 56), (uint16_t)GPR_U32(ctx, 17));
label_1c108c:
    // 0x1c108c: 0x2402ff34  addiu       $v0, $zero, -0xCC
    ctx->pc = 0x1c108cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967092));
label_1c1090:
    // 0x1c1090: 0x63100b  movn        $v0, $v1, $v1
    ctx->pc = 0x1c1090u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
label_1c1094:
    // 0x1c1094: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c1094u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c1098:
    // 0x1c1098: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c1098u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1c109c:
    // 0x1c109c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c109cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1c10a0:
    // 0x1c10a0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1c10a0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1c10a4:
    // 0x1c10a4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c10a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1c10a8:
    // 0x1c10a8: 0x3e00008  jr          $ra
label_1c10ac:
    if (ctx->pc == 0x1C10ACu) {
        ctx->pc = 0x1C10ACu;
            // 0x1c10ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1C10B0u;
        goto label_fallthrough_0x1c10a8;
    }
    ctx->pc = 0x1C10A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C10ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C10A8u;
            // 0x1c10ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1c10a8:
    ctx->pc = 0x1C10B0u;
}
