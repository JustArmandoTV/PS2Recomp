#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002CAD10
// Address: 0x2cad10 - 0x2caff0
void sub_002CAD10_0x2cad10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CAD10_0x2cad10");
#endif

    switch (ctx->pc) {
        case 0x2cad10u: goto label_2cad10;
        case 0x2cad14u: goto label_2cad14;
        case 0x2cad18u: goto label_2cad18;
        case 0x2cad1cu: goto label_2cad1c;
        case 0x2cad20u: goto label_2cad20;
        case 0x2cad24u: goto label_2cad24;
        case 0x2cad28u: goto label_2cad28;
        case 0x2cad2cu: goto label_2cad2c;
        case 0x2cad30u: goto label_2cad30;
        case 0x2cad34u: goto label_2cad34;
        case 0x2cad38u: goto label_2cad38;
        case 0x2cad3cu: goto label_2cad3c;
        case 0x2cad40u: goto label_2cad40;
        case 0x2cad44u: goto label_2cad44;
        case 0x2cad48u: goto label_2cad48;
        case 0x2cad4cu: goto label_2cad4c;
        case 0x2cad50u: goto label_2cad50;
        case 0x2cad54u: goto label_2cad54;
        case 0x2cad58u: goto label_2cad58;
        case 0x2cad5cu: goto label_2cad5c;
        case 0x2cad60u: goto label_2cad60;
        case 0x2cad64u: goto label_2cad64;
        case 0x2cad68u: goto label_2cad68;
        case 0x2cad6cu: goto label_2cad6c;
        case 0x2cad70u: goto label_2cad70;
        case 0x2cad74u: goto label_2cad74;
        case 0x2cad78u: goto label_2cad78;
        case 0x2cad7cu: goto label_2cad7c;
        case 0x2cad80u: goto label_2cad80;
        case 0x2cad84u: goto label_2cad84;
        case 0x2cad88u: goto label_2cad88;
        case 0x2cad8cu: goto label_2cad8c;
        case 0x2cad90u: goto label_2cad90;
        case 0x2cad94u: goto label_2cad94;
        case 0x2cad98u: goto label_2cad98;
        case 0x2cad9cu: goto label_2cad9c;
        case 0x2cada0u: goto label_2cada0;
        case 0x2cada4u: goto label_2cada4;
        case 0x2cada8u: goto label_2cada8;
        case 0x2cadacu: goto label_2cadac;
        case 0x2cadb0u: goto label_2cadb0;
        case 0x2cadb4u: goto label_2cadb4;
        case 0x2cadb8u: goto label_2cadb8;
        case 0x2cadbcu: goto label_2cadbc;
        case 0x2cadc0u: goto label_2cadc0;
        case 0x2cadc4u: goto label_2cadc4;
        case 0x2cadc8u: goto label_2cadc8;
        case 0x2cadccu: goto label_2cadcc;
        case 0x2cadd0u: goto label_2cadd0;
        case 0x2cadd4u: goto label_2cadd4;
        case 0x2cadd8u: goto label_2cadd8;
        case 0x2caddcu: goto label_2caddc;
        case 0x2cade0u: goto label_2cade0;
        case 0x2cade4u: goto label_2cade4;
        case 0x2cade8u: goto label_2cade8;
        case 0x2cadecu: goto label_2cadec;
        case 0x2cadf0u: goto label_2cadf0;
        case 0x2cadf4u: goto label_2cadf4;
        case 0x2cadf8u: goto label_2cadf8;
        case 0x2cadfcu: goto label_2cadfc;
        case 0x2cae00u: goto label_2cae00;
        case 0x2cae04u: goto label_2cae04;
        case 0x2cae08u: goto label_2cae08;
        case 0x2cae0cu: goto label_2cae0c;
        case 0x2cae10u: goto label_2cae10;
        case 0x2cae14u: goto label_2cae14;
        case 0x2cae18u: goto label_2cae18;
        case 0x2cae1cu: goto label_2cae1c;
        case 0x2cae20u: goto label_2cae20;
        case 0x2cae24u: goto label_2cae24;
        case 0x2cae28u: goto label_2cae28;
        case 0x2cae2cu: goto label_2cae2c;
        case 0x2cae30u: goto label_2cae30;
        case 0x2cae34u: goto label_2cae34;
        case 0x2cae38u: goto label_2cae38;
        case 0x2cae3cu: goto label_2cae3c;
        case 0x2cae40u: goto label_2cae40;
        case 0x2cae44u: goto label_2cae44;
        case 0x2cae48u: goto label_2cae48;
        case 0x2cae4cu: goto label_2cae4c;
        case 0x2cae50u: goto label_2cae50;
        case 0x2cae54u: goto label_2cae54;
        case 0x2cae58u: goto label_2cae58;
        case 0x2cae5cu: goto label_2cae5c;
        case 0x2cae60u: goto label_2cae60;
        case 0x2cae64u: goto label_2cae64;
        case 0x2cae68u: goto label_2cae68;
        case 0x2cae6cu: goto label_2cae6c;
        case 0x2cae70u: goto label_2cae70;
        case 0x2cae74u: goto label_2cae74;
        case 0x2cae78u: goto label_2cae78;
        case 0x2cae7cu: goto label_2cae7c;
        case 0x2cae80u: goto label_2cae80;
        case 0x2cae84u: goto label_2cae84;
        case 0x2cae88u: goto label_2cae88;
        case 0x2cae8cu: goto label_2cae8c;
        case 0x2cae90u: goto label_2cae90;
        case 0x2cae94u: goto label_2cae94;
        case 0x2cae98u: goto label_2cae98;
        case 0x2cae9cu: goto label_2cae9c;
        case 0x2caea0u: goto label_2caea0;
        case 0x2caea4u: goto label_2caea4;
        case 0x2caea8u: goto label_2caea8;
        case 0x2caeacu: goto label_2caeac;
        case 0x2caeb0u: goto label_2caeb0;
        case 0x2caeb4u: goto label_2caeb4;
        case 0x2caeb8u: goto label_2caeb8;
        case 0x2caebcu: goto label_2caebc;
        case 0x2caec0u: goto label_2caec0;
        case 0x2caec4u: goto label_2caec4;
        case 0x2caec8u: goto label_2caec8;
        case 0x2caeccu: goto label_2caecc;
        case 0x2caed0u: goto label_2caed0;
        case 0x2caed4u: goto label_2caed4;
        case 0x2caed8u: goto label_2caed8;
        case 0x2caedcu: goto label_2caedc;
        case 0x2caee0u: goto label_2caee0;
        case 0x2caee4u: goto label_2caee4;
        case 0x2caee8u: goto label_2caee8;
        case 0x2caeecu: goto label_2caeec;
        case 0x2caef0u: goto label_2caef0;
        case 0x2caef4u: goto label_2caef4;
        case 0x2caef8u: goto label_2caef8;
        case 0x2caefcu: goto label_2caefc;
        case 0x2caf00u: goto label_2caf00;
        case 0x2caf04u: goto label_2caf04;
        case 0x2caf08u: goto label_2caf08;
        case 0x2caf0cu: goto label_2caf0c;
        case 0x2caf10u: goto label_2caf10;
        case 0x2caf14u: goto label_2caf14;
        case 0x2caf18u: goto label_2caf18;
        case 0x2caf1cu: goto label_2caf1c;
        case 0x2caf20u: goto label_2caf20;
        case 0x2caf24u: goto label_2caf24;
        case 0x2caf28u: goto label_2caf28;
        case 0x2caf2cu: goto label_2caf2c;
        case 0x2caf30u: goto label_2caf30;
        case 0x2caf34u: goto label_2caf34;
        case 0x2caf38u: goto label_2caf38;
        case 0x2caf3cu: goto label_2caf3c;
        case 0x2caf40u: goto label_2caf40;
        case 0x2caf44u: goto label_2caf44;
        case 0x2caf48u: goto label_2caf48;
        case 0x2caf4cu: goto label_2caf4c;
        case 0x2caf50u: goto label_2caf50;
        case 0x2caf54u: goto label_2caf54;
        case 0x2caf58u: goto label_2caf58;
        case 0x2caf5cu: goto label_2caf5c;
        case 0x2caf60u: goto label_2caf60;
        case 0x2caf64u: goto label_2caf64;
        case 0x2caf68u: goto label_2caf68;
        case 0x2caf6cu: goto label_2caf6c;
        case 0x2caf70u: goto label_2caf70;
        case 0x2caf74u: goto label_2caf74;
        case 0x2caf78u: goto label_2caf78;
        case 0x2caf7cu: goto label_2caf7c;
        case 0x2caf80u: goto label_2caf80;
        case 0x2caf84u: goto label_2caf84;
        case 0x2caf88u: goto label_2caf88;
        case 0x2caf8cu: goto label_2caf8c;
        case 0x2caf90u: goto label_2caf90;
        case 0x2caf94u: goto label_2caf94;
        case 0x2caf98u: goto label_2caf98;
        case 0x2caf9cu: goto label_2caf9c;
        case 0x2cafa0u: goto label_2cafa0;
        case 0x2cafa4u: goto label_2cafa4;
        case 0x2cafa8u: goto label_2cafa8;
        case 0x2cafacu: goto label_2cafac;
        case 0x2cafb0u: goto label_2cafb0;
        case 0x2cafb4u: goto label_2cafb4;
        case 0x2cafb8u: goto label_2cafb8;
        case 0x2cafbcu: goto label_2cafbc;
        case 0x2cafc0u: goto label_2cafc0;
        case 0x2cafc4u: goto label_2cafc4;
        case 0x2cafc8u: goto label_2cafc8;
        case 0x2cafccu: goto label_2cafcc;
        case 0x2cafd0u: goto label_2cafd0;
        case 0x2cafd4u: goto label_2cafd4;
        case 0x2cafd8u: goto label_2cafd8;
        case 0x2cafdcu: goto label_2cafdc;
        case 0x2cafe0u: goto label_2cafe0;
        case 0x2cafe4u: goto label_2cafe4;
        case 0x2cafe8u: goto label_2cafe8;
        case 0x2cafecu: goto label_2cafec;
        default: break;
    }

    ctx->pc = 0x2cad10u;

label_2cad10:
    // 0x2cad10: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2cad10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_2cad14:
    // 0x2cad14: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2cad14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_2cad18:
    // 0x2cad18: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2cad18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_2cad1c:
    // 0x2cad1c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2cad1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2cad20:
    // 0x2cad20: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2cad20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2cad24:
    // 0x2cad24: 0x34468a92  ori         $a2, $v0, 0x8A92
    ctx->pc = 0x2cad24u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35474);
label_2cad28:
    // 0x2cad28: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2cad28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2cad2c:
    // 0x2cad2c: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x2cad2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2cad30:
    // 0x2cad30: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2cad30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2cad34:
    // 0x2cad34: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2cad34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2cad38:
    // 0x2cad38: 0xc0aeaf4  jal         func_2BABD0
label_2cad3c:
    if (ctx->pc == 0x2CAD3Cu) {
        ctx->pc = 0x2CAD3Cu;
            // 0x2cad3c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x2CAD40u;
        goto label_2cad40;
    }
    ctx->pc = 0x2CAD38u;
    SET_GPR_U32(ctx, 31, 0x2CAD40u);
    ctx->pc = 0x2CAD3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CAD38u;
            // 0x2cad3c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BABD0u;
    if (runtime->hasFunction(0x2BABD0u)) {
        auto targetFn = runtime->lookupFunction(0x2BABD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CAD40u; }
        if (ctx->pc != 0x2CAD40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BABD0_0x2babd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CAD40u; }
        if (ctx->pc != 0x2CAD40u) { return; }
    }
    ctx->pc = 0x2CAD40u;
label_2cad40:
    // 0x2cad40: 0xc0b2d0c  jal         func_2CB430
label_2cad44:
    if (ctx->pc == 0x2CAD44u) {
        ctx->pc = 0x2CAD44u;
            // 0x2cad44: 0x26240064  addiu       $a0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x2CAD48u;
        goto label_2cad48;
    }
    ctx->pc = 0x2CAD40u;
    SET_GPR_U32(ctx, 31, 0x2CAD48u);
    ctx->pc = 0x2CAD44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CAD40u;
            // 0x2cad44: 0x26240064  addiu       $a0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CB430u;
    if (runtime->hasFunction(0x2CB430u)) {
        auto targetFn = runtime->lookupFunction(0x2CB430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CAD48u; }
        if (ctx->pc != 0x2CAD48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CB430_0x2cb430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CAD48u; }
        if (ctx->pc != 0x2CAD48u) { return; }
    }
    ctx->pc = 0x2CAD48u;
label_2cad48:
    // 0x2cad48: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2cad48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2cad4c:
    // 0x2cad4c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2cad4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2cad50:
    // 0x2cad50: 0x24630220  addiu       $v1, $v1, 0x220
    ctx->pc = 0x2cad50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 544));
label_2cad54:
    // 0x2cad54: 0x24420258  addiu       $v0, $v0, 0x258
    ctx->pc = 0x2cad54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 600));
label_2cad58:
    // 0x2cad58: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2cad58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_2cad5c:
    // 0x2cad5c: 0x2624006c  addiu       $a0, $s1, 0x6C
    ctx->pc = 0x2cad5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_2cad60:
    // 0x2cad60: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x2cad60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_2cad64:
    // 0x2cad64: 0xc0b2d04  jal         func_2CB410
label_2cad68:
    if (ctx->pc == 0x2CAD68u) {
        ctx->pc = 0x2CAD68u;
            // 0x2cad68: 0xae200068  sw          $zero, 0x68($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 0));
        ctx->pc = 0x2CAD6Cu;
        goto label_2cad6c;
    }
    ctx->pc = 0x2CAD64u;
    SET_GPR_U32(ctx, 31, 0x2CAD6Cu);
    ctx->pc = 0x2CAD68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CAD64u;
            // 0x2cad68: 0xae200068  sw          $zero, 0x68($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CB410u;
    if (runtime->hasFunction(0x2CB410u)) {
        auto targetFn = runtime->lookupFunction(0x2CB410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CAD6Cu; }
        if (ctx->pc != 0x2CAD6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CB410_0x2cb410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CAD6Cu; }
        if (ctx->pc != 0x2CAD6Cu) { return; }
    }
    ctx->pc = 0x2CAD6Cu;
label_2cad6c:
    // 0x2cad6c: 0xc0b2d04  jal         func_2CB410
label_2cad70:
    if (ctx->pc == 0x2CAD70u) {
        ctx->pc = 0x2CAD70u;
            // 0x2cad70: 0x26240078  addiu       $a0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x2CAD74u;
        goto label_2cad74;
    }
    ctx->pc = 0x2CAD6Cu;
    SET_GPR_U32(ctx, 31, 0x2CAD74u);
    ctx->pc = 0x2CAD70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CAD6Cu;
            // 0x2cad70: 0x26240078  addiu       $a0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CB410u;
    if (runtime->hasFunction(0x2CB410u)) {
        auto targetFn = runtime->lookupFunction(0x2CB410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CAD74u; }
        if (ctx->pc != 0x2CAD74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CB410_0x2cb410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CAD74u; }
        if (ctx->pc != 0x2CAD74u) { return; }
    }
    ctx->pc = 0x2CAD74u;
label_2cad74:
    // 0x2cad74: 0xc0b2cf0  jal         func_2CB3C0
label_2cad78:
    if (ctx->pc == 0x2CAD78u) {
        ctx->pc = 0x2CAD78u;
            // 0x2cad78: 0x26240084  addiu       $a0, $s1, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
        ctx->pc = 0x2CAD7Cu;
        goto label_2cad7c;
    }
    ctx->pc = 0x2CAD74u;
    SET_GPR_U32(ctx, 31, 0x2CAD7Cu);
    ctx->pc = 0x2CAD78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CAD74u;
            // 0x2cad78: 0x26240084  addiu       $a0, $s1, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CB3C0u;
    if (runtime->hasFunction(0x2CB3C0u)) {
        auto targetFn = runtime->lookupFunction(0x2CB3C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CAD7Cu; }
        if (ctx->pc != 0x2CAD7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CB3C0_0x2cb3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CAD7Cu; }
        if (ctx->pc != 0x2CAD7Cu) { return; }
    }
    ctx->pc = 0x2CAD7Cu;
label_2cad7c:
    // 0x2cad7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2cad7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2cad80:
    // 0x2cad80: 0xc0aeac0  jal         func_2BAB00
label_2cad84:
    if (ctx->pc == 0x2CAD84u) {
        ctx->pc = 0x2CAD84u;
            // 0x2cad84: 0xae2000cc  sw          $zero, 0xCC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 204), GPR_U32(ctx, 0));
        ctx->pc = 0x2CAD88u;
        goto label_2cad88;
    }
    ctx->pc = 0x2CAD80u;
    SET_GPR_U32(ctx, 31, 0x2CAD88u);
    ctx->pc = 0x2CAD84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CAD80u;
            // 0x2cad84: 0xae2000cc  sw          $zero, 0xCC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 204), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BAB00u;
    if (runtime->hasFunction(0x2BAB00u)) {
        auto targetFn = runtime->lookupFunction(0x2BAB00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CAD88u; }
        if (ctx->pc != 0x2CAD88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BAB00_0x2bab00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CAD88u; }
        if (ctx->pc != 0x2CAD88u) { return; }
    }
    ctx->pc = 0x2CAD88u;
label_2cad88:
    // 0x2cad88: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2cad88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cad8c:
    // 0x2cad8c: 0x12000020  beqz        $s0, . + 4 + (0x20 << 2)
label_2cad90:
    if (ctx->pc == 0x2CAD90u) {
        ctx->pc = 0x2CAD94u;
        goto label_2cad94;
    }
    ctx->pc = 0x2CAD8Cu;
    {
        const bool branch_taken_0x2cad8c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cad8c) {
            ctx->pc = 0x2CAE10u;
            goto label_2cae10;
        }
    }
    ctx->pc = 0x2CAD94u;
label_2cad94:
    // 0x2cad94: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2cad94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_2cad98:
    // 0x2cad98: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2cad98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_2cad9c:
    // 0x2cad9c: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2cad9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_2cada0:
    // 0x2cada0: 0xc040138  jal         func_1004E0
label_2cada4:
    if (ctx->pc == 0x2CADA4u) {
        ctx->pc = 0x2CADA4u;
            // 0x2cada4: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x2CADA8u;
        goto label_2cada8;
    }
    ctx->pc = 0x2CADA0u;
    SET_GPR_U32(ctx, 31, 0x2CADA8u);
    ctx->pc = 0x2CADA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CADA0u;
            // 0x2cada4: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CADA8u; }
        if (ctx->pc != 0x2CADA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CADA8u; }
        if (ctx->pc != 0x2CADA8u) { return; }
    }
    ctx->pc = 0x2CADA8u;
label_2cada8:
    // 0x2cada8: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x2cada8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_2cadac:
    // 0x2cadac: 0x3c06002d  lui         $a2, 0x2D
    ctx->pc = 0x2cadacu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)45 << 16));
label_2cadb0:
    // 0x2cadb0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2cadb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cadb4:
    // 0x2cadb4: 0x24a5b230  addiu       $a1, $a1, -0x4DD0
    ctx->pc = 0x2cadb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947376));
label_2cadb8:
    // 0x2cadb8: 0x24c6b180  addiu       $a2, $a2, -0x4E80
    ctx->pc = 0x2cadb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294947200));
label_2cadbc:
    // 0x2cadbc: 0x240700a0  addiu       $a3, $zero, 0xA0
    ctx->pc = 0x2cadbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
label_2cadc0:
    // 0x2cadc0: 0xc040840  jal         func_102100
label_2cadc4:
    if (ctx->pc == 0x2CADC4u) {
        ctx->pc = 0x2CADC4u;
            // 0x2cadc4: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CADC8u;
        goto label_2cadc8;
    }
    ctx->pc = 0x2CADC0u;
    SET_GPR_U32(ctx, 31, 0x2CADC8u);
    ctx->pc = 0x2CADC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CADC0u;
            // 0x2cadc4: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CADC8u; }
        if (ctx->pc != 0x2CADC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CADC8u; }
        if (ctx->pc != 0x2CADC8u) { return; }
    }
    ctx->pc = 0x2CADC8u;
label_2cadc8:
    // 0x2cadc8: 0xae220068  sw          $v0, 0x68($s1)
    ctx->pc = 0x2cadc8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 2));
label_2cadcc:
    // 0x2cadcc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2cadccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cadd0:
    // 0x2cadd0: 0x2624006c  addiu       $a0, $s1, 0x6C
    ctx->pc = 0x2cadd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_2cadd4:
    // 0x2cadd4: 0xc0b2c5c  jal         func_2CB170
label_2cadd8:
    if (ctx->pc == 0x2CADD8u) {
        ctx->pc = 0x2CADD8u;
            // 0x2cadd8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CADDCu;
        goto label_2caddc;
    }
    ctx->pc = 0x2CADD4u;
    SET_GPR_U32(ctx, 31, 0x2CADDCu);
    ctx->pc = 0x2CADD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CADD4u;
            // 0x2cadd8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CB170u;
    if (runtime->hasFunction(0x2CB170u)) {
        auto targetFn = runtime->lookupFunction(0x2CB170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CADDCu; }
        if (ctx->pc != 0x2CADDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CB170_0x2cb170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CADDCu; }
        if (ctx->pc != 0x2CADDCu) { return; }
    }
    ctx->pc = 0x2CADDCu;
label_2caddc:
    // 0x2caddc: 0x26240078  addiu       $a0, $s1, 0x78
    ctx->pc = 0x2caddcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_2cade0:
    // 0x2cade0: 0xc0b2c5c  jal         func_2CB170
label_2cade4:
    if (ctx->pc == 0x2CADE4u) {
        ctx->pc = 0x2CADE4u;
            // 0x2cade4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CADE8u;
        goto label_2cade8;
    }
    ctx->pc = 0x2CADE0u;
    SET_GPR_U32(ctx, 31, 0x2CADE8u);
    ctx->pc = 0x2CADE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CADE0u;
            // 0x2cade4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CB170u;
    if (runtime->hasFunction(0x2CB170u)) {
        auto targetFn = runtime->lookupFunction(0x2CB170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CADE8u; }
        if (ctx->pc != 0x2CADE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CB170_0x2cb170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CADE8u; }
        if (ctx->pc != 0x2CADE8u) { return; }
    }
    ctx->pc = 0x2CADE8u;
label_2cade8:
    // 0x2cade8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2cade8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2cadec:
    // 0x2cadec: 0x26240078  addiu       $a0, $s1, 0x78
    ctx->pc = 0x2cadecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_2cadf0:
    // 0x2cadf0: 0x27a5005c  addiu       $a1, $sp, 0x5C
    ctx->pc = 0x2cadf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_2cadf4:
    // 0x2cadf4: 0xc0b2c54  jal         func_2CB150
label_2cadf8:
    if (ctx->pc == 0x2CADF8u) {
        ctx->pc = 0x2CADF8u;
            // 0x2cadf8: 0xafb3005c  sw          $s3, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 19));
        ctx->pc = 0x2CADFCu;
        goto label_2cadfc;
    }
    ctx->pc = 0x2CADF4u;
    SET_GPR_U32(ctx, 31, 0x2CADFCu);
    ctx->pc = 0x2CADF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CADF4u;
            // 0x2cadf8: 0xafb3005c  sw          $s3, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CB150u;
    if (runtime->hasFunction(0x2CB150u)) {
        auto targetFn = runtime->lookupFunction(0x2CB150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CADFCu; }
        if (ctx->pc != 0x2CADFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CB150_0x2cb150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CADFCu; }
        if (ctx->pc != 0x2CADFCu) { return; }
    }
    ctx->pc = 0x2CADFCu;
label_2cadfc:
    // 0x2cadfc: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2cadfcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2cae00:
    // 0x2cae00: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x2cae00u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_2cae04:
    // 0x2cae04: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_2cae08:
    if (ctx->pc == 0x2CAE08u) {
        ctx->pc = 0x2CAE08u;
            // 0x2cae08: 0x267300a0  addiu       $s3, $s3, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 160));
        ctx->pc = 0x2CAE0Cu;
        goto label_2cae0c;
    }
    ctx->pc = 0x2CAE04u;
    {
        const bool branch_taken_0x2cae04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CAE08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CAE04u;
            // 0x2cae08: 0x267300a0  addiu       $s3, $s3, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cae04) {
            ctx->pc = 0x2CADECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2cadec;
        }
    }
    ctx->pc = 0x2CAE0Cu;
label_2cae0c:
    // 0x2cae0c: 0x0  nop
    ctx->pc = 0x2cae0cu;
    // NOP
label_2cae10:
    // 0x2cae10: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2cae10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2cae14:
    // 0x2cae14: 0x24426540  addiu       $v0, $v0, 0x6540
    ctx->pc = 0x2cae14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25920));
label_2cae18:
    // 0x2cae18: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2cae18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2cae1c:
    // 0x2cae1c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2cae1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2cae20:
    // 0x2cae20: 0x24426578  addiu       $v0, $v0, 0x6578
    ctx->pc = 0x2cae20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25976));
label_2cae24:
    // 0x2cae24: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x2cae24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_2cae28:
    // 0x2cae28: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2cae28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2cae2c:
    // 0x2cae2c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2cae2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2cae30:
    // 0x2cae30: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2cae30u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2cae34:
    // 0x2cae34: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2cae34u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2cae38:
    // 0x2cae38: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2cae38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2cae3c:
    // 0x2cae3c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2cae3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2cae40:
    // 0x2cae40: 0x3e00008  jr          $ra
label_2cae44:
    if (ctx->pc == 0x2CAE44u) {
        ctx->pc = 0x2CAE44u;
            // 0x2cae44: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x2CAE48u;
        goto label_2cae48;
    }
    ctx->pc = 0x2CAE40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CAE44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CAE40u;
            // 0x2cae44: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CAE48u;
label_2cae48:
    // 0x2cae48: 0x0  nop
    ctx->pc = 0x2cae48u;
    // NOP
label_2cae4c:
    // 0x2cae4c: 0x0  nop
    ctx->pc = 0x2cae4cu;
    // NOP
label_2cae50:
    // 0x2cae50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2cae50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2cae54:
    // 0x2cae54: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2cae54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2cae58:
    // 0x2cae58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2cae58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2cae5c:
    // 0x2cae5c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2cae5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2cae60:
    // 0x2cae60: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2cae60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2cae64:
    // 0x2cae64: 0x12200059  beqz        $s1, . + 4 + (0x59 << 2)
label_2cae68:
    if (ctx->pc == 0x2CAE68u) {
        ctx->pc = 0x2CAE68u;
            // 0x2cae68: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CAE6Cu;
        goto label_2cae6c;
    }
    ctx->pc = 0x2CAE64u;
    {
        const bool branch_taken_0x2cae64 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CAE68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CAE64u;
            // 0x2cae68: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cae64) {
            ctx->pc = 0x2CAFCCu;
            goto label_2cafcc;
        }
    }
    ctx->pc = 0x2CAE6Cu;
label_2cae6c:
    // 0x2cae6c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2cae6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2cae70:
    // 0x2cae70: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2cae70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2cae74:
    // 0x2cae74: 0x24630220  addiu       $v1, $v1, 0x220
    ctx->pc = 0x2cae74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 544));
label_2cae78:
    // 0x2cae78: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x2cae78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_2cae7c:
    // 0x2cae7c: 0x24420258  addiu       $v0, $v0, 0x258
    ctx->pc = 0x2cae7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 600));
label_2cae80:
    // 0x2cae80: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2cae80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_2cae84:
    // 0x2cae84: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x2cae84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_2cae88:
    // 0x2cae88: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x2cae88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_2cae8c:
    // 0x2cae8c: 0xc0407c0  jal         func_101F00
label_2cae90:
    if (ctx->pc == 0x2CAE90u) {
        ctx->pc = 0x2CAE90u;
            // 0x2cae90: 0x24a5b180  addiu       $a1, $a1, -0x4E80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947200));
        ctx->pc = 0x2CAE94u;
        goto label_2cae94;
    }
    ctx->pc = 0x2CAE8Cu;
    SET_GPR_U32(ctx, 31, 0x2CAE94u);
    ctx->pc = 0x2CAE90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CAE8Cu;
            // 0x2cae90: 0x24a5b180  addiu       $a1, $a1, -0x4E80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947200));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CAE94u; }
        if (ctx->pc != 0x2CAE94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CAE94u; }
        if (ctx->pc != 0x2CAE94u) { return; }
    }
    ctx->pc = 0x2CAE94u;
label_2cae94:
    // 0x2cae94: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x2cae94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_2cae98:
    // 0x2cae98: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
label_2cae9c:
    if (ctx->pc == 0x2CAE9Cu) {
        ctx->pc = 0x2CAE9Cu;
            // 0x2cae9c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x2CAEA0u;
        goto label_2caea0;
    }
    ctx->pc = 0x2CAE98u;
    {
        const bool branch_taken_0x2cae98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cae98) {
            ctx->pc = 0x2CAE9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CAE98u;
            // 0x2cae9c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CAEE0u;
            goto label_2caee0;
        }
    }
    ctx->pc = 0x2CAEA0u;
label_2caea0:
    // 0x2caea0: 0x262200c4  addiu       $v0, $s1, 0xC4
    ctx->pc = 0x2caea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 196));
label_2caea4:
    // 0x2caea4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_2caea8:
    if (ctx->pc == 0x2CAEA8u) {
        ctx->pc = 0x2CAEA8u;
            // 0x2caea8: 0x262200a4  addiu       $v0, $s1, 0xA4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 164));
        ctx->pc = 0x2CAEACu;
        goto label_2caeac;
    }
    ctx->pc = 0x2CAEA4u;
    {
        const bool branch_taken_0x2caea4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2caea4) {
            ctx->pc = 0x2CAEA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CAEA4u;
            // 0x2caea8: 0x262200a4  addiu       $v0, $s1, 0xA4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 164));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CAEB8u;
            goto label_2caeb8;
        }
    }
    ctx->pc = 0x2CAEACu;
label_2caeac:
    // 0x2caeac: 0xc07507c  jal         func_1D41F0
label_2caeb0:
    if (ctx->pc == 0x2CAEB0u) {
        ctx->pc = 0x2CAEB0u;
            // 0x2caeb0: 0x8e2400c8  lw          $a0, 0xC8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 200)));
        ctx->pc = 0x2CAEB4u;
        goto label_2caeb4;
    }
    ctx->pc = 0x2CAEACu;
    SET_GPR_U32(ctx, 31, 0x2CAEB4u);
    ctx->pc = 0x2CAEB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CAEACu;
            // 0x2caeb0: 0x8e2400c8  lw          $a0, 0xC8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 200)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CAEB4u; }
        if (ctx->pc != 0x2CAEB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CAEB4u; }
        if (ctx->pc != 0x2CAEB4u) { return; }
    }
    ctx->pc = 0x2CAEB4u;
label_2caeb4:
    // 0x2caeb4: 0x262200a4  addiu       $v0, $s1, 0xA4
    ctx->pc = 0x2caeb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 164));
label_2caeb8:
    // 0x2caeb8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_2caebc:
    if (ctx->pc == 0x2CAEBCu) {
        ctx->pc = 0x2CAEBCu;
            // 0x2caebc: 0x26220084  addiu       $v0, $s1, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
        ctx->pc = 0x2CAEC0u;
        goto label_2caec0;
    }
    ctx->pc = 0x2CAEB8u;
    {
        const bool branch_taken_0x2caeb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2caeb8) {
            ctx->pc = 0x2CAEBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CAEB8u;
            // 0x2caebc: 0x26220084  addiu       $v0, $s1, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CAECCu;
            goto label_2caecc;
        }
    }
    ctx->pc = 0x2CAEC0u;
label_2caec0:
    // 0x2caec0: 0xc07507c  jal         func_1D41F0
label_2caec4:
    if (ctx->pc == 0x2CAEC4u) {
        ctx->pc = 0x2CAEC4u;
            // 0x2caec4: 0x8e2400a8  lw          $a0, 0xA8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 168)));
        ctx->pc = 0x2CAEC8u;
        goto label_2caec8;
    }
    ctx->pc = 0x2CAEC0u;
    SET_GPR_U32(ctx, 31, 0x2CAEC8u);
    ctx->pc = 0x2CAEC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CAEC0u;
            // 0x2caec4: 0x8e2400a8  lw          $a0, 0xA8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 168)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CAEC8u; }
        if (ctx->pc != 0x2CAEC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CAEC8u; }
        if (ctx->pc != 0x2CAEC8u) { return; }
    }
    ctx->pc = 0x2CAEC8u;
label_2caec8:
    // 0x2caec8: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x2caec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_2caecc:
    // 0x2caecc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2caed0:
    if (ctx->pc == 0x2CAED0u) {
        ctx->pc = 0x2CAED4u;
        goto label_2caed4;
    }
    ctx->pc = 0x2CAECCu;
    {
        const bool branch_taken_0x2caecc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2caecc) {
            ctx->pc = 0x2CAEDCu;
            goto label_2caedc;
        }
    }
    ctx->pc = 0x2CAED4u;
label_2caed4:
    // 0x2caed4: 0xc07507c  jal         func_1D41F0
label_2caed8:
    if (ctx->pc == 0x2CAED8u) {
        ctx->pc = 0x2CAED8u;
            // 0x2caed8: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->pc = 0x2CAEDCu;
        goto label_2caedc;
    }
    ctx->pc = 0x2CAED4u;
    SET_GPR_U32(ctx, 31, 0x2CAEDCu);
    ctx->pc = 0x2CAED8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CAED4u;
            // 0x2caed8: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CAEDCu; }
        if (ctx->pc != 0x2CAEDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CAEDCu; }
        if (ctx->pc != 0x2CAEDCu) { return; }
    }
    ctx->pc = 0x2CAEDCu;
label_2caedc:
    // 0x2caedc: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x2caedcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_2caee0:
    // 0x2caee0: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_2caee4:
    if (ctx->pc == 0x2CAEE4u) {
        ctx->pc = 0x2CAEE4u;
            // 0x2caee4: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x2CAEE8u;
        goto label_2caee8;
    }
    ctx->pc = 0x2CAEE0u;
    {
        const bool branch_taken_0x2caee0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2caee0) {
            ctx->pc = 0x2CAEE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CAEE0u;
            // 0x2caee4: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CAF10u;
            goto label_2caf10;
        }
    }
    ctx->pc = 0x2CAEE8u;
label_2caee8:
    // 0x2caee8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2caeec:
    if (ctx->pc == 0x2CAEECu) {
        ctx->pc = 0x2CAEF0u;
        goto label_2caef0;
    }
    ctx->pc = 0x2CAEE8u;
    {
        const bool branch_taken_0x2caee8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2caee8) {
            ctx->pc = 0x2CAF0Cu;
            goto label_2caf0c;
        }
    }
    ctx->pc = 0x2CAEF0u;
label_2caef0:
    // 0x2caef0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2caef4:
    if (ctx->pc == 0x2CAEF4u) {
        ctx->pc = 0x2CAEF8u;
        goto label_2caef8;
    }
    ctx->pc = 0x2CAEF0u;
    {
        const bool branch_taken_0x2caef0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2caef0) {
            ctx->pc = 0x2CAF0Cu;
            goto label_2caf0c;
        }
    }
    ctx->pc = 0x2CAEF8u;
label_2caef8:
    // 0x2caef8: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x2caef8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_2caefc:
    // 0x2caefc: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2caf00:
    if (ctx->pc == 0x2CAF00u) {
        ctx->pc = 0x2CAF04u;
        goto label_2caf04;
    }
    ctx->pc = 0x2CAEFCu;
    {
        const bool branch_taken_0x2caefc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2caefc) {
            ctx->pc = 0x2CAF0Cu;
            goto label_2caf0c;
        }
    }
    ctx->pc = 0x2CAF04u;
label_2caf04:
    // 0x2caf04: 0xc0400a8  jal         func_1002A0
label_2caf08:
    if (ctx->pc == 0x2CAF08u) {
        ctx->pc = 0x2CAF0Cu;
        goto label_2caf0c;
    }
    ctx->pc = 0x2CAF04u;
    SET_GPR_U32(ctx, 31, 0x2CAF0Cu);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CAF0Cu; }
        if (ctx->pc != 0x2CAF0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CAF0Cu; }
        if (ctx->pc != 0x2CAF0Cu) { return; }
    }
    ctx->pc = 0x2CAF0Cu;
label_2caf0c:
    // 0x2caf0c: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x2caf0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_2caf10:
    // 0x2caf10: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_2caf14:
    if (ctx->pc == 0x2CAF14u) {
        ctx->pc = 0x2CAF14u;
            // 0x2caf14: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x2CAF18u;
        goto label_2caf18;
    }
    ctx->pc = 0x2CAF10u;
    {
        const bool branch_taken_0x2caf10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2caf10) {
            ctx->pc = 0x2CAF14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CAF10u;
            // 0x2caf14: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CAF40u;
            goto label_2caf40;
        }
    }
    ctx->pc = 0x2CAF18u;
label_2caf18:
    // 0x2caf18: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2caf1c:
    if (ctx->pc == 0x2CAF1Cu) {
        ctx->pc = 0x2CAF20u;
        goto label_2caf20;
    }
    ctx->pc = 0x2CAF18u;
    {
        const bool branch_taken_0x2caf18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2caf18) {
            ctx->pc = 0x2CAF3Cu;
            goto label_2caf3c;
        }
    }
    ctx->pc = 0x2CAF20u;
label_2caf20:
    // 0x2caf20: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2caf24:
    if (ctx->pc == 0x2CAF24u) {
        ctx->pc = 0x2CAF28u;
        goto label_2caf28;
    }
    ctx->pc = 0x2CAF20u;
    {
        const bool branch_taken_0x2caf20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2caf20) {
            ctx->pc = 0x2CAF3Cu;
            goto label_2caf3c;
        }
    }
    ctx->pc = 0x2CAF28u;
label_2caf28:
    // 0x2caf28: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x2caf28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_2caf2c:
    // 0x2caf2c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2caf30:
    if (ctx->pc == 0x2CAF30u) {
        ctx->pc = 0x2CAF34u;
        goto label_2caf34;
    }
    ctx->pc = 0x2CAF2Cu;
    {
        const bool branch_taken_0x2caf2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2caf2c) {
            ctx->pc = 0x2CAF3Cu;
            goto label_2caf3c;
        }
    }
    ctx->pc = 0x2CAF34u;
label_2caf34:
    // 0x2caf34: 0xc0400a8  jal         func_1002A0
label_2caf38:
    if (ctx->pc == 0x2CAF38u) {
        ctx->pc = 0x2CAF3Cu;
        goto label_2caf3c;
    }
    ctx->pc = 0x2CAF34u;
    SET_GPR_U32(ctx, 31, 0x2CAF3Cu);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CAF3Cu; }
        if (ctx->pc != 0x2CAF3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CAF3Cu; }
        if (ctx->pc != 0x2CAF3Cu) { return; }
    }
    ctx->pc = 0x2CAF3Cu;
label_2caf3c:
    // 0x2caf3c: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x2caf3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_2caf40:
    // 0x2caf40: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2caf44:
    if (ctx->pc == 0x2CAF44u) {
        ctx->pc = 0x2CAF48u;
        goto label_2caf48;
    }
    ctx->pc = 0x2CAF40u;
    {
        const bool branch_taken_0x2caf40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2caf40) {
            ctx->pc = 0x2CAF5Cu;
            goto label_2caf5c;
        }
    }
    ctx->pc = 0x2CAF48u;
label_2caf48:
    // 0x2caf48: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2caf48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2caf4c:
    // 0x2caf4c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2caf4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_2caf50:
    // 0x2caf50: 0x24630208  addiu       $v1, $v1, 0x208
    ctx->pc = 0x2caf50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 520));
label_2caf54:
    // 0x2caf54: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x2caf54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_2caf58:
    // 0x2caf58: 0xac400e18  sw          $zero, 0xE18($v0)
    ctx->pc = 0x2caf58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3608), GPR_U32(ctx, 0));
label_2caf5c:
    // 0x2caf5c: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_2caf60:
    if (ctx->pc == 0x2CAF60u) {
        ctx->pc = 0x2CAF60u;
            // 0x2caf60: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x2CAF64u;
        goto label_2caf64;
    }
    ctx->pc = 0x2CAF5Cu;
    {
        const bool branch_taken_0x2caf5c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2caf5c) {
            ctx->pc = 0x2CAF60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CAF5Cu;
            // 0x2caf60: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CAFB8u;
            goto label_2cafb8;
        }
    }
    ctx->pc = 0x2CAF64u;
label_2caf64:
    // 0x2caf64: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2caf64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2caf68:
    // 0x2caf68: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x2caf68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_2caf6c:
    // 0x2caf6c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2caf6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2caf70:
    // 0x2caf70: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x2caf70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_2caf74:
    // 0x2caf74: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2caf78:
    if (ctx->pc == 0x2CAF78u) {
        ctx->pc = 0x2CAF78u;
            // 0x2caf78: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x2CAF7Cu;
        goto label_2caf7c;
    }
    ctx->pc = 0x2CAF74u;
    {
        const bool branch_taken_0x2caf74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2caf74) {
            ctx->pc = 0x2CAF78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CAF74u;
            // 0x2caf78: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CAF90u;
            goto label_2caf90;
        }
    }
    ctx->pc = 0x2CAF7Cu;
label_2caf7c:
    // 0x2caf7c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2caf7cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2caf80:
    // 0x2caf80: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2caf80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2caf84:
    // 0x2caf84: 0x320f809  jalr        $t9
label_2caf88:
    if (ctx->pc == 0x2CAF88u) {
        ctx->pc = 0x2CAF88u;
            // 0x2caf88: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2CAF8Cu;
        goto label_2caf8c;
    }
    ctx->pc = 0x2CAF84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2CAF8Cu);
        ctx->pc = 0x2CAF88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CAF84u;
            // 0x2caf88: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2CAF8Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2CAF8Cu; }
            if (ctx->pc != 0x2CAF8Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2CAF8Cu;
label_2caf8c:
    // 0x2caf8c: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x2caf8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_2caf90:
    // 0x2caf90: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2caf94:
    if (ctx->pc == 0x2CAF94u) {
        ctx->pc = 0x2CAF94u;
            // 0x2caf94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CAF98u;
        goto label_2caf98;
    }
    ctx->pc = 0x2CAF90u;
    {
        const bool branch_taken_0x2caf90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2caf90) {
            ctx->pc = 0x2CAF94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CAF90u;
            // 0x2caf94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CAFACu;
            goto label_2cafac;
        }
    }
    ctx->pc = 0x2CAF98u;
label_2caf98:
    // 0x2caf98: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2caf98u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2caf9c:
    // 0x2caf9c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2caf9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2cafa0:
    // 0x2cafa0: 0x320f809  jalr        $t9
label_2cafa4:
    if (ctx->pc == 0x2CAFA4u) {
        ctx->pc = 0x2CAFA4u;
            // 0x2cafa4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2CAFA8u;
        goto label_2cafa8;
    }
    ctx->pc = 0x2CAFA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2CAFA8u);
        ctx->pc = 0x2CAFA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CAFA0u;
            // 0x2cafa4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2CAFA8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2CAFA8u; }
            if (ctx->pc != 0x2CAFA8u) { return; }
        }
        }
    }
    ctx->pc = 0x2CAFA8u;
label_2cafa8:
    // 0x2cafa8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2cafa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2cafac:
    // 0x2cafac: 0xc075bf8  jal         func_1D6FE0
label_2cafb0:
    if (ctx->pc == 0x2CAFB0u) {
        ctx->pc = 0x2CAFB0u;
            // 0x2cafb0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CAFB4u;
        goto label_2cafb4;
    }
    ctx->pc = 0x2CAFACu;
    SET_GPR_U32(ctx, 31, 0x2CAFB4u);
    ctx->pc = 0x2CAFB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CAFACu;
            // 0x2cafb0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CAFB4u; }
        if (ctx->pc != 0x2CAFB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CAFB4u; }
        if (ctx->pc != 0x2CAFB4u) { return; }
    }
    ctx->pc = 0x2CAFB4u;
label_2cafb4:
    // 0x2cafb4: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2cafb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2cafb8:
    // 0x2cafb8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2cafb8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2cafbc:
    // 0x2cafbc: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2cafc0:
    if (ctx->pc == 0x2CAFC0u) {
        ctx->pc = 0x2CAFC0u;
            // 0x2cafc0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CAFC4u;
        goto label_2cafc4;
    }
    ctx->pc = 0x2CAFBCu;
    {
        const bool branch_taken_0x2cafbc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2cafbc) {
            ctx->pc = 0x2CAFC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CAFBCu;
            // 0x2cafc0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CAFD0u;
            goto label_2cafd0;
        }
    }
    ctx->pc = 0x2CAFC4u;
label_2cafc4:
    // 0x2cafc4: 0xc0400a8  jal         func_1002A0
label_2cafc8:
    if (ctx->pc == 0x2CAFC8u) {
        ctx->pc = 0x2CAFC8u;
            // 0x2cafc8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CAFCCu;
        goto label_2cafcc;
    }
    ctx->pc = 0x2CAFC4u;
    SET_GPR_U32(ctx, 31, 0x2CAFCCu);
    ctx->pc = 0x2CAFC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CAFC4u;
            // 0x2cafc8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CAFCCu; }
        if (ctx->pc != 0x2CAFCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CAFCCu; }
        if (ctx->pc != 0x2CAFCCu) { return; }
    }
    ctx->pc = 0x2CAFCCu;
label_2cafcc:
    // 0x2cafcc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2cafccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2cafd0:
    // 0x2cafd0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2cafd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2cafd4:
    // 0x2cafd4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2cafd4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2cafd8:
    // 0x2cafd8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2cafd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2cafdc:
    // 0x2cafdc: 0x3e00008  jr          $ra
label_2cafe0:
    if (ctx->pc == 0x2CAFE0u) {
        ctx->pc = 0x2CAFE0u;
            // 0x2cafe0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2CAFE4u;
        goto label_2cafe4;
    }
    ctx->pc = 0x2CAFDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CAFE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CAFDCu;
            // 0x2cafe0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CAFE4u;
label_2cafe4:
    // 0x2cafe4: 0x0  nop
    ctx->pc = 0x2cafe4u;
    // NOP
label_2cafe8:
    // 0x2cafe8: 0x0  nop
    ctx->pc = 0x2cafe8u;
    // NOP
label_2cafec:
    // 0x2cafec: 0x0  nop
    ctx->pc = 0x2cafecu;
    // NOP
}
