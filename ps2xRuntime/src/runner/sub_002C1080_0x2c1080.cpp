#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C1080
// Address: 0x2c1080 - 0x2c1320
void sub_002C1080_0x2c1080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C1080_0x2c1080");
#endif

    switch (ctx->pc) {
        case 0x2c1080u: goto label_2c1080;
        case 0x2c1084u: goto label_2c1084;
        case 0x2c1088u: goto label_2c1088;
        case 0x2c108cu: goto label_2c108c;
        case 0x2c1090u: goto label_2c1090;
        case 0x2c1094u: goto label_2c1094;
        case 0x2c1098u: goto label_2c1098;
        case 0x2c109cu: goto label_2c109c;
        case 0x2c10a0u: goto label_2c10a0;
        case 0x2c10a4u: goto label_2c10a4;
        case 0x2c10a8u: goto label_2c10a8;
        case 0x2c10acu: goto label_2c10ac;
        case 0x2c10b0u: goto label_2c10b0;
        case 0x2c10b4u: goto label_2c10b4;
        case 0x2c10b8u: goto label_2c10b8;
        case 0x2c10bcu: goto label_2c10bc;
        case 0x2c10c0u: goto label_2c10c0;
        case 0x2c10c4u: goto label_2c10c4;
        case 0x2c10c8u: goto label_2c10c8;
        case 0x2c10ccu: goto label_2c10cc;
        case 0x2c10d0u: goto label_2c10d0;
        case 0x2c10d4u: goto label_2c10d4;
        case 0x2c10d8u: goto label_2c10d8;
        case 0x2c10dcu: goto label_2c10dc;
        case 0x2c10e0u: goto label_2c10e0;
        case 0x2c10e4u: goto label_2c10e4;
        case 0x2c10e8u: goto label_2c10e8;
        case 0x2c10ecu: goto label_2c10ec;
        case 0x2c10f0u: goto label_2c10f0;
        case 0x2c10f4u: goto label_2c10f4;
        case 0x2c10f8u: goto label_2c10f8;
        case 0x2c10fcu: goto label_2c10fc;
        case 0x2c1100u: goto label_2c1100;
        case 0x2c1104u: goto label_2c1104;
        case 0x2c1108u: goto label_2c1108;
        case 0x2c110cu: goto label_2c110c;
        case 0x2c1110u: goto label_2c1110;
        case 0x2c1114u: goto label_2c1114;
        case 0x2c1118u: goto label_2c1118;
        case 0x2c111cu: goto label_2c111c;
        case 0x2c1120u: goto label_2c1120;
        case 0x2c1124u: goto label_2c1124;
        case 0x2c1128u: goto label_2c1128;
        case 0x2c112cu: goto label_2c112c;
        case 0x2c1130u: goto label_2c1130;
        case 0x2c1134u: goto label_2c1134;
        case 0x2c1138u: goto label_2c1138;
        case 0x2c113cu: goto label_2c113c;
        case 0x2c1140u: goto label_2c1140;
        case 0x2c1144u: goto label_2c1144;
        case 0x2c1148u: goto label_2c1148;
        case 0x2c114cu: goto label_2c114c;
        case 0x2c1150u: goto label_2c1150;
        case 0x2c1154u: goto label_2c1154;
        case 0x2c1158u: goto label_2c1158;
        case 0x2c115cu: goto label_2c115c;
        case 0x2c1160u: goto label_2c1160;
        case 0x2c1164u: goto label_2c1164;
        case 0x2c1168u: goto label_2c1168;
        case 0x2c116cu: goto label_2c116c;
        case 0x2c1170u: goto label_2c1170;
        case 0x2c1174u: goto label_2c1174;
        case 0x2c1178u: goto label_2c1178;
        case 0x2c117cu: goto label_2c117c;
        case 0x2c1180u: goto label_2c1180;
        case 0x2c1184u: goto label_2c1184;
        case 0x2c1188u: goto label_2c1188;
        case 0x2c118cu: goto label_2c118c;
        case 0x2c1190u: goto label_2c1190;
        case 0x2c1194u: goto label_2c1194;
        case 0x2c1198u: goto label_2c1198;
        case 0x2c119cu: goto label_2c119c;
        case 0x2c11a0u: goto label_2c11a0;
        case 0x2c11a4u: goto label_2c11a4;
        case 0x2c11a8u: goto label_2c11a8;
        case 0x2c11acu: goto label_2c11ac;
        case 0x2c11b0u: goto label_2c11b0;
        case 0x2c11b4u: goto label_2c11b4;
        case 0x2c11b8u: goto label_2c11b8;
        case 0x2c11bcu: goto label_2c11bc;
        case 0x2c11c0u: goto label_2c11c0;
        case 0x2c11c4u: goto label_2c11c4;
        case 0x2c11c8u: goto label_2c11c8;
        case 0x2c11ccu: goto label_2c11cc;
        case 0x2c11d0u: goto label_2c11d0;
        case 0x2c11d4u: goto label_2c11d4;
        case 0x2c11d8u: goto label_2c11d8;
        case 0x2c11dcu: goto label_2c11dc;
        case 0x2c11e0u: goto label_2c11e0;
        case 0x2c11e4u: goto label_2c11e4;
        case 0x2c11e8u: goto label_2c11e8;
        case 0x2c11ecu: goto label_2c11ec;
        case 0x2c11f0u: goto label_2c11f0;
        case 0x2c11f4u: goto label_2c11f4;
        case 0x2c11f8u: goto label_2c11f8;
        case 0x2c11fcu: goto label_2c11fc;
        case 0x2c1200u: goto label_2c1200;
        case 0x2c1204u: goto label_2c1204;
        case 0x2c1208u: goto label_2c1208;
        case 0x2c120cu: goto label_2c120c;
        case 0x2c1210u: goto label_2c1210;
        case 0x2c1214u: goto label_2c1214;
        case 0x2c1218u: goto label_2c1218;
        case 0x2c121cu: goto label_2c121c;
        case 0x2c1220u: goto label_2c1220;
        case 0x2c1224u: goto label_2c1224;
        case 0x2c1228u: goto label_2c1228;
        case 0x2c122cu: goto label_2c122c;
        case 0x2c1230u: goto label_2c1230;
        case 0x2c1234u: goto label_2c1234;
        case 0x2c1238u: goto label_2c1238;
        case 0x2c123cu: goto label_2c123c;
        case 0x2c1240u: goto label_2c1240;
        case 0x2c1244u: goto label_2c1244;
        case 0x2c1248u: goto label_2c1248;
        case 0x2c124cu: goto label_2c124c;
        case 0x2c1250u: goto label_2c1250;
        case 0x2c1254u: goto label_2c1254;
        case 0x2c1258u: goto label_2c1258;
        case 0x2c125cu: goto label_2c125c;
        case 0x2c1260u: goto label_2c1260;
        case 0x2c1264u: goto label_2c1264;
        case 0x2c1268u: goto label_2c1268;
        case 0x2c126cu: goto label_2c126c;
        case 0x2c1270u: goto label_2c1270;
        case 0x2c1274u: goto label_2c1274;
        case 0x2c1278u: goto label_2c1278;
        case 0x2c127cu: goto label_2c127c;
        case 0x2c1280u: goto label_2c1280;
        case 0x2c1284u: goto label_2c1284;
        case 0x2c1288u: goto label_2c1288;
        case 0x2c128cu: goto label_2c128c;
        case 0x2c1290u: goto label_2c1290;
        case 0x2c1294u: goto label_2c1294;
        case 0x2c1298u: goto label_2c1298;
        case 0x2c129cu: goto label_2c129c;
        case 0x2c12a0u: goto label_2c12a0;
        case 0x2c12a4u: goto label_2c12a4;
        case 0x2c12a8u: goto label_2c12a8;
        case 0x2c12acu: goto label_2c12ac;
        case 0x2c12b0u: goto label_2c12b0;
        case 0x2c12b4u: goto label_2c12b4;
        case 0x2c12b8u: goto label_2c12b8;
        case 0x2c12bcu: goto label_2c12bc;
        case 0x2c12c0u: goto label_2c12c0;
        case 0x2c12c4u: goto label_2c12c4;
        case 0x2c12c8u: goto label_2c12c8;
        case 0x2c12ccu: goto label_2c12cc;
        case 0x2c12d0u: goto label_2c12d0;
        case 0x2c12d4u: goto label_2c12d4;
        case 0x2c12d8u: goto label_2c12d8;
        case 0x2c12dcu: goto label_2c12dc;
        case 0x2c12e0u: goto label_2c12e0;
        case 0x2c12e4u: goto label_2c12e4;
        case 0x2c12e8u: goto label_2c12e8;
        case 0x2c12ecu: goto label_2c12ec;
        case 0x2c12f0u: goto label_2c12f0;
        case 0x2c12f4u: goto label_2c12f4;
        case 0x2c12f8u: goto label_2c12f8;
        case 0x2c12fcu: goto label_2c12fc;
        case 0x2c1300u: goto label_2c1300;
        case 0x2c1304u: goto label_2c1304;
        case 0x2c1308u: goto label_2c1308;
        case 0x2c130cu: goto label_2c130c;
        case 0x2c1310u: goto label_2c1310;
        case 0x2c1314u: goto label_2c1314;
        case 0x2c1318u: goto label_2c1318;
        case 0x2c131cu: goto label_2c131c;
        default: break;
    }

    ctx->pc = 0x2c1080u;

label_2c1080:
    // 0x2c1080: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2c1080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_2c1084:
    // 0x2c1084: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2c1084u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_2c1088:
    // 0x2c1088: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2c1088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_2c108c:
    // 0x2c108c: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x2c108cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2c1090:
    // 0x2c1090: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2c1090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2c1094:
    // 0x2c1094: 0x34468a88  ori         $a2, $v0, 0x8A88
    ctx->pc = 0x2c1094u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35464);
label_2c1098:
    // 0x2c1098: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2c1098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2c109c:
    // 0x2c109c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c109cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2c10a0:
    // 0x2c10a0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c10a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c10a4:
    // 0x2c10a4: 0xc0aeaf4  jal         func_2BABD0
label_2c10a8:
    if (ctx->pc == 0x2C10A8u) {
        ctx->pc = 0x2C10A8u;
            // 0x2c10a8: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x2C10ACu;
        goto label_2c10ac;
    }
    ctx->pc = 0x2C10A4u;
    SET_GPR_U32(ctx, 31, 0x2C10ACu);
    ctx->pc = 0x2C10A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C10A4u;
            // 0x2c10a8: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BABD0u;
    if (runtime->hasFunction(0x2BABD0u)) {
        auto targetFn = runtime->lookupFunction(0x2BABD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C10ACu; }
        if (ctx->pc != 0x2C10ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BABD0_0x2babd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C10ACu; }
        if (ctx->pc != 0x2C10ACu) { return; }
    }
    ctx->pc = 0x2C10ACu;
label_2c10ac:
    // 0x2c10ac: 0xc0b055c  jal         func_2C1570
label_2c10b0:
    if (ctx->pc == 0x2C10B0u) {
        ctx->pc = 0x2C10B0u;
            // 0x2c10b0: 0x26240064  addiu       $a0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x2C10B4u;
        goto label_2c10b4;
    }
    ctx->pc = 0x2C10ACu;
    SET_GPR_U32(ctx, 31, 0x2C10B4u);
    ctx->pc = 0x2C10B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C10ACu;
            // 0x2c10b0: 0x26240064  addiu       $a0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C1570u;
    if (runtime->hasFunction(0x2C1570u)) {
        auto targetFn = runtime->lookupFunction(0x2C1570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C10B4u; }
        if (ctx->pc != 0x2C10B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C1570_0x2c1570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C10B4u; }
        if (ctx->pc != 0x2C10B4u) { return; }
    }
    ctx->pc = 0x2C10B4u;
label_2c10b4:
    // 0x2c10b4: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c10b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2c10b8:
    // 0x2c10b8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c10b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2c10bc:
    // 0x2c10bc: 0x24631760  addiu       $v1, $v1, 0x1760
    ctx->pc = 0x2c10bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5984));
label_2c10c0:
    // 0x2c10c0: 0x24421798  addiu       $v0, $v0, 0x1798
    ctx->pc = 0x2c10c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6040));
label_2c10c4:
    // 0x2c10c4: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2c10c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_2c10c8:
    // 0x2c10c8: 0x2624006c  addiu       $a0, $s1, 0x6C
    ctx->pc = 0x2c10c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_2c10cc:
    // 0x2c10cc: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x2c10ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_2c10d0:
    // 0x2c10d0: 0xc0b0554  jal         func_2C1550
label_2c10d4:
    if (ctx->pc == 0x2C10D4u) {
        ctx->pc = 0x2C10D4u;
            // 0x2c10d4: 0xae200068  sw          $zero, 0x68($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 0));
        ctx->pc = 0x2C10D8u;
        goto label_2c10d8;
    }
    ctx->pc = 0x2C10D0u;
    SET_GPR_U32(ctx, 31, 0x2C10D8u);
    ctx->pc = 0x2C10D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C10D0u;
            // 0x2c10d4: 0xae200068  sw          $zero, 0x68($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C1550u;
    if (runtime->hasFunction(0x2C1550u)) {
        auto targetFn = runtime->lookupFunction(0x2C1550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C10D8u; }
        if (ctx->pc != 0x2C10D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C1550_0x2c1550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C10D8u; }
        if (ctx->pc != 0x2C10D8u) { return; }
    }
    ctx->pc = 0x2C10D8u;
label_2c10d8:
    // 0x2c10d8: 0xc0b0554  jal         func_2C1550
label_2c10dc:
    if (ctx->pc == 0x2C10DCu) {
        ctx->pc = 0x2C10DCu;
            // 0x2c10dc: 0x26240078  addiu       $a0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x2C10E0u;
        goto label_2c10e0;
    }
    ctx->pc = 0x2C10D8u;
    SET_GPR_U32(ctx, 31, 0x2C10E0u);
    ctx->pc = 0x2C10DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C10D8u;
            // 0x2c10dc: 0x26240078  addiu       $a0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C1550u;
    if (runtime->hasFunction(0x2C1550u)) {
        auto targetFn = runtime->lookupFunction(0x2C1550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C10E0u; }
        if (ctx->pc != 0x2C10E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C1550_0x2c1550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C10E0u; }
        if (ctx->pc != 0x2C10E0u) { return; }
    }
    ctx->pc = 0x2C10E0u;
label_2c10e0:
    // 0x2c10e0: 0xc0b0548  jal         func_2C1520
label_2c10e4:
    if (ctx->pc == 0x2C10E4u) {
        ctx->pc = 0x2C10E4u;
            // 0x2c10e4: 0x26240084  addiu       $a0, $s1, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
        ctx->pc = 0x2C10E8u;
        goto label_2c10e8;
    }
    ctx->pc = 0x2C10E0u;
    SET_GPR_U32(ctx, 31, 0x2C10E8u);
    ctx->pc = 0x2C10E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C10E0u;
            // 0x2c10e4: 0x26240084  addiu       $a0, $s1, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C1520u;
    if (runtime->hasFunction(0x2C1520u)) {
        auto targetFn = runtime->lookupFunction(0x2C1520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C10E8u; }
        if (ctx->pc != 0x2C10E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C1520_0x2c1520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C10E8u; }
        if (ctx->pc != 0x2C10E8u) { return; }
    }
    ctx->pc = 0x2C10E8u;
label_2c10e8:
    // 0x2c10e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c10e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c10ec:
    // 0x2c10ec: 0xc0aeac0  jal         func_2BAB00
label_2c10f0:
    if (ctx->pc == 0x2C10F0u) {
        ctx->pc = 0x2C10F0u;
            // 0x2c10f0: 0xae2000a4  sw          $zero, 0xA4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 164), GPR_U32(ctx, 0));
        ctx->pc = 0x2C10F4u;
        goto label_2c10f4;
    }
    ctx->pc = 0x2C10ECu;
    SET_GPR_U32(ctx, 31, 0x2C10F4u);
    ctx->pc = 0x2C10F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C10ECu;
            // 0x2c10f0: 0xae2000a4  sw          $zero, 0xA4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 164), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BAB00u;
    if (runtime->hasFunction(0x2BAB00u)) {
        auto targetFn = runtime->lookupFunction(0x2BAB00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C10F4u; }
        if (ctx->pc != 0x2C10F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BAB00_0x2bab00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C10F4u; }
        if (ctx->pc != 0x2C10F4u) { return; }
    }
    ctx->pc = 0x2C10F4u;
label_2c10f4:
    // 0x2c10f4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c10f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c10f8:
    // 0x2c10f8: 0x1200001f  beqz        $s0, . + 4 + (0x1F << 2)
label_2c10fc:
    if (ctx->pc == 0x2C10FCu) {
        ctx->pc = 0x2C1100u;
        goto label_2c1100;
    }
    ctx->pc = 0x2C10F8u;
    {
        const bool branch_taken_0x2c10f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c10f8) {
            ctx->pc = 0x2C1178u;
            goto label_2c1178;
        }
    }
    ctx->pc = 0x2C1100u;
label_2c1100:
    // 0x2c1100: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x2c1100u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_2c1104:
    // 0x2c1104: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2c1104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_2c1108:
    // 0x2c1108: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2c1108u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_2c110c:
    // 0x2c110c: 0xc040138  jal         func_1004E0
label_2c1110:
    if (ctx->pc == 0x2C1110u) {
        ctx->pc = 0x2C1110u;
            // 0x2c1110: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x2C1114u;
        goto label_2c1114;
    }
    ctx->pc = 0x2C110Cu;
    SET_GPR_U32(ctx, 31, 0x2C1114u);
    ctx->pc = 0x2C1110u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C110Cu;
            // 0x2c1110: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1114u; }
        if (ctx->pc != 0x2C1114u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1114u; }
        if (ctx->pc != 0x2C1114u) { return; }
    }
    ctx->pc = 0x2C1114u;
label_2c1114:
    // 0x2c1114: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x2c1114u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
label_2c1118:
    // 0x2c1118: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x2c1118u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
label_2c111c:
    // 0x2c111c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c111cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c1120:
    // 0x2c1120: 0x24a51420  addiu       $a1, $a1, 0x1420
    ctx->pc = 0x2c1120u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5152));
label_2c1124:
    // 0x2c1124: 0x24c6bbe0  addiu       $a2, $a2, -0x4420
    ctx->pc = 0x2c1124u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949856));
label_2c1128:
    // 0x2c1128: 0x24070120  addiu       $a3, $zero, 0x120
    ctx->pc = 0x2c1128u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
label_2c112c:
    // 0x2c112c: 0xc040840  jal         func_102100
label_2c1130:
    if (ctx->pc == 0x2C1130u) {
        ctx->pc = 0x2C1130u;
            // 0x2c1130: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C1134u;
        goto label_2c1134;
    }
    ctx->pc = 0x2C112Cu;
    SET_GPR_U32(ctx, 31, 0x2C1134u);
    ctx->pc = 0x2C1130u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C112Cu;
            // 0x2c1130: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1134u; }
        if (ctx->pc != 0x2C1134u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1134u; }
        if (ctx->pc != 0x2C1134u) { return; }
    }
    ctx->pc = 0x2C1134u;
label_2c1134:
    // 0x2c1134: 0xae220068  sw          $v0, 0x68($s1)
    ctx->pc = 0x2c1134u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 2));
label_2c1138:
    // 0x2c1138: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2c1138u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c113c:
    // 0x2c113c: 0x2624006c  addiu       $a0, $s1, 0x6C
    ctx->pc = 0x2c113cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_2c1140:
    // 0x2c1140: 0xc0b0504  jal         func_2C1410
label_2c1144:
    if (ctx->pc == 0x2C1144u) {
        ctx->pc = 0x2C1144u;
            // 0x2c1144: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C1148u;
        goto label_2c1148;
    }
    ctx->pc = 0x2C1140u;
    SET_GPR_U32(ctx, 31, 0x2C1148u);
    ctx->pc = 0x2C1144u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1140u;
            // 0x2c1144: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C1410u;
    if (runtime->hasFunction(0x2C1410u)) {
        auto targetFn = runtime->lookupFunction(0x2C1410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1148u; }
        if (ctx->pc != 0x2C1148u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C1410_0x2c1410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1148u; }
        if (ctx->pc != 0x2C1148u) { return; }
    }
    ctx->pc = 0x2C1148u;
label_2c1148:
    // 0x2c1148: 0x26240078  addiu       $a0, $s1, 0x78
    ctx->pc = 0x2c1148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_2c114c:
    // 0x2c114c: 0xc0b0504  jal         func_2C1410
label_2c1150:
    if (ctx->pc == 0x2C1150u) {
        ctx->pc = 0x2C1150u;
            // 0x2c1150: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C1154u;
        goto label_2c1154;
    }
    ctx->pc = 0x2C114Cu;
    SET_GPR_U32(ctx, 31, 0x2C1154u);
    ctx->pc = 0x2C1150u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C114Cu;
            // 0x2c1150: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C1410u;
    if (runtime->hasFunction(0x2C1410u)) {
        auto targetFn = runtime->lookupFunction(0x2C1410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1154u; }
        if (ctx->pc != 0x2C1154u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C1410_0x2c1410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1154u; }
        if (ctx->pc != 0x2C1154u) { return; }
    }
    ctx->pc = 0x2C1154u;
label_2c1154:
    // 0x2c1154: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2c1154u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c1158:
    // 0x2c1158: 0x26240078  addiu       $a0, $s1, 0x78
    ctx->pc = 0x2c1158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_2c115c:
    // 0x2c115c: 0x27a5005c  addiu       $a1, $sp, 0x5C
    ctx->pc = 0x2c115cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_2c1160:
    // 0x2c1160: 0xc0b04fc  jal         func_2C13F0
label_2c1164:
    if (ctx->pc == 0x2C1164u) {
        ctx->pc = 0x2C1164u;
            // 0x2c1164: 0xafb3005c  sw          $s3, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 19));
        ctx->pc = 0x2C1168u;
        goto label_2c1168;
    }
    ctx->pc = 0x2C1160u;
    SET_GPR_U32(ctx, 31, 0x2C1168u);
    ctx->pc = 0x2C1164u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1160u;
            // 0x2c1164: 0xafb3005c  sw          $s3, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C13F0u;
    if (runtime->hasFunction(0x2C13F0u)) {
        auto targetFn = runtime->lookupFunction(0x2C13F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1168u; }
        if (ctx->pc != 0x2C1168u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C13F0_0x2c13f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1168u; }
        if (ctx->pc != 0x2C1168u) { return; }
    }
    ctx->pc = 0x2C1168u;
label_2c1168:
    // 0x2c1168: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2c1168u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2c116c:
    // 0x2c116c: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x2c116cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_2c1170:
    // 0x2c1170: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_2c1174:
    if (ctx->pc == 0x2C1174u) {
        ctx->pc = 0x2C1174u;
            // 0x2c1174: 0x26730120  addiu       $s3, $s3, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 288));
        ctx->pc = 0x2C1178u;
        goto label_2c1178;
    }
    ctx->pc = 0x2C1170u;
    {
        const bool branch_taken_0x2c1170 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C1174u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1170u;
            // 0x2c1174: 0x26730120  addiu       $s3, $s3, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1170) {
            ctx->pc = 0x2C1158u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2c1158;
        }
    }
    ctx->pc = 0x2C1178u;
label_2c1178:
    // 0x2c1178: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2c1178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_2c117c:
    // 0x2c117c: 0x2442a510  addiu       $v0, $v0, -0x5AF0
    ctx->pc = 0x2c117cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944016));
label_2c1180:
    // 0x2c1180: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2c1180u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2c1184:
    // 0x2c1184: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2c1184u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_2c1188:
    // 0x2c1188: 0x2442a548  addiu       $v0, $v0, -0x5AB8
    ctx->pc = 0x2c1188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944072));
label_2c118c:
    // 0x2c118c: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x2c118cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_2c1190:
    // 0x2c1190: 0xae2000ac  sw          $zero, 0xAC($s1)
    ctx->pc = 0x2c1190u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 172), GPR_U32(ctx, 0));
label_2c1194:
    // 0x2c1194: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2c1194u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c1198:
    // 0x2c1198: 0xae2000b0  sw          $zero, 0xB0($s1)
    ctx->pc = 0x2c1198u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 0));
label_2c119c:
    // 0x2c119c: 0xae2000b4  sw          $zero, 0xB4($s1)
    ctx->pc = 0x2c119cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 0));
label_2c11a0:
    // 0x2c11a0: 0xae2000bc  sw          $zero, 0xBC($s1)
    ctx->pc = 0x2c11a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 188), GPR_U32(ctx, 0));
label_2c11a4:
    // 0x2c11a4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2c11a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2c11a8:
    // 0x2c11a8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2c11a8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2c11ac:
    // 0x2c11ac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2c11acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2c11b0:
    // 0x2c11b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c11b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2c11b4:
    // 0x2c11b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c11b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2c11b8:
    // 0x2c11b8: 0x3e00008  jr          $ra
label_2c11bc:
    if (ctx->pc == 0x2C11BCu) {
        ctx->pc = 0x2C11BCu;
            // 0x2c11bc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x2C11C0u;
        goto label_2c11c0;
    }
    ctx->pc = 0x2C11B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C11BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C11B8u;
            // 0x2c11bc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C11C0u;
label_2c11c0:
    // 0x2c11c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c11c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2c11c4:
    // 0x2c11c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2c11c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2c11c8:
    // 0x2c11c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c11c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2c11cc:
    // 0x2c11cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c11ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2c11d0:
    // 0x2c11d0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c11d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c11d4:
    // 0x2c11d4: 0x1220004c  beqz        $s1, . + 4 + (0x4C << 2)
label_2c11d8:
    if (ctx->pc == 0x2C11D8u) {
        ctx->pc = 0x2C11D8u;
            // 0x2c11d8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C11DCu;
        goto label_2c11dc;
    }
    ctx->pc = 0x2C11D4u;
    {
        const bool branch_taken_0x2c11d4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C11D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C11D4u;
            // 0x2c11d8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c11d4) {
            ctx->pc = 0x2C1308u;
            goto label_2c1308;
        }
    }
    ctx->pc = 0x2C11DCu;
label_2c11dc:
    // 0x2c11dc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c11dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2c11e0:
    // 0x2c11e0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c11e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2c11e4:
    // 0x2c11e4: 0x24631760  addiu       $v1, $v1, 0x1760
    ctx->pc = 0x2c11e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5984));
label_2c11e8:
    // 0x2c11e8: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x2c11e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
label_2c11ec:
    // 0x2c11ec: 0x24421798  addiu       $v0, $v0, 0x1798
    ctx->pc = 0x2c11ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6040));
label_2c11f0:
    // 0x2c11f0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2c11f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_2c11f4:
    // 0x2c11f4: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x2c11f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_2c11f8:
    // 0x2c11f8: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x2c11f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_2c11fc:
    // 0x2c11fc: 0xc0407c0  jal         func_101F00
label_2c1200:
    if (ctx->pc == 0x2C1200u) {
        ctx->pc = 0x2C1200u;
            // 0x2c1200: 0x24a5bbe0  addiu       $a1, $a1, -0x4420 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949856));
        ctx->pc = 0x2C1204u;
        goto label_2c1204;
    }
    ctx->pc = 0x2C11FCu;
    SET_GPR_U32(ctx, 31, 0x2C1204u);
    ctx->pc = 0x2C1200u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C11FCu;
            // 0x2c1200: 0x24a5bbe0  addiu       $a1, $a1, -0x4420 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949856));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1204u; }
        if (ctx->pc != 0x2C1204u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1204u; }
        if (ctx->pc != 0x2C1204u) { return; }
    }
    ctx->pc = 0x2C1204u;
label_2c1204:
    // 0x2c1204: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x2c1204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_2c1208:
    // 0x2c1208: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_2c120c:
    if (ctx->pc == 0x2C120Cu) {
        ctx->pc = 0x2C120Cu;
            // 0x2c120c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x2C1210u;
        goto label_2c1210;
    }
    ctx->pc = 0x2C1208u;
    {
        const bool branch_taken_0x2c1208 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c1208) {
            ctx->pc = 0x2C120Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1208u;
            // 0x2c120c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C121Cu;
            goto label_2c121c;
        }
    }
    ctx->pc = 0x2C1210u;
label_2c1210:
    // 0x2c1210: 0xc07507c  jal         func_1D41F0
label_2c1214:
    if (ctx->pc == 0x2C1214u) {
        ctx->pc = 0x2C1214u;
            // 0x2c1214: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->pc = 0x2C1218u;
        goto label_2c1218;
    }
    ctx->pc = 0x2C1210u;
    SET_GPR_U32(ctx, 31, 0x2C1218u);
    ctx->pc = 0x2C1214u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1210u;
            // 0x2c1214: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1218u; }
        if (ctx->pc != 0x2C1218u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1218u; }
        if (ctx->pc != 0x2C1218u) { return; }
    }
    ctx->pc = 0x2C1218u;
label_2c1218:
    // 0x2c1218: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x2c1218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_2c121c:
    // 0x2c121c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_2c1220:
    if (ctx->pc == 0x2C1220u) {
        ctx->pc = 0x2C1220u;
            // 0x2c1220: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x2C1224u;
        goto label_2c1224;
    }
    ctx->pc = 0x2C121Cu;
    {
        const bool branch_taken_0x2c121c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c121c) {
            ctx->pc = 0x2C1220u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C121Cu;
            // 0x2c1220: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C124Cu;
            goto label_2c124c;
        }
    }
    ctx->pc = 0x2C1224u;
label_2c1224:
    // 0x2c1224: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2c1228:
    if (ctx->pc == 0x2C1228u) {
        ctx->pc = 0x2C122Cu;
        goto label_2c122c;
    }
    ctx->pc = 0x2C1224u;
    {
        const bool branch_taken_0x2c1224 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c1224) {
            ctx->pc = 0x2C1248u;
            goto label_2c1248;
        }
    }
    ctx->pc = 0x2C122Cu;
label_2c122c:
    // 0x2c122c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2c1230:
    if (ctx->pc == 0x2C1230u) {
        ctx->pc = 0x2C1234u;
        goto label_2c1234;
    }
    ctx->pc = 0x2C122Cu;
    {
        const bool branch_taken_0x2c122c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c122c) {
            ctx->pc = 0x2C1248u;
            goto label_2c1248;
        }
    }
    ctx->pc = 0x2C1234u;
label_2c1234:
    // 0x2c1234: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x2c1234u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_2c1238:
    // 0x2c1238: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2c123c:
    if (ctx->pc == 0x2C123Cu) {
        ctx->pc = 0x2C1240u;
        goto label_2c1240;
    }
    ctx->pc = 0x2C1238u;
    {
        const bool branch_taken_0x2c1238 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c1238) {
            ctx->pc = 0x2C1248u;
            goto label_2c1248;
        }
    }
    ctx->pc = 0x2C1240u;
label_2c1240:
    // 0x2c1240: 0xc0400a8  jal         func_1002A0
label_2c1244:
    if (ctx->pc == 0x2C1244u) {
        ctx->pc = 0x2C1248u;
        goto label_2c1248;
    }
    ctx->pc = 0x2C1240u;
    SET_GPR_U32(ctx, 31, 0x2C1248u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1248u; }
        if (ctx->pc != 0x2C1248u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1248u; }
        if (ctx->pc != 0x2C1248u) { return; }
    }
    ctx->pc = 0x2C1248u;
label_2c1248:
    // 0x2c1248: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x2c1248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_2c124c:
    // 0x2c124c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_2c1250:
    if (ctx->pc == 0x2C1250u) {
        ctx->pc = 0x2C1250u;
            // 0x2c1250: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x2C1254u;
        goto label_2c1254;
    }
    ctx->pc = 0x2C124Cu;
    {
        const bool branch_taken_0x2c124c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c124c) {
            ctx->pc = 0x2C1250u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C124Cu;
            // 0x2c1250: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C127Cu;
            goto label_2c127c;
        }
    }
    ctx->pc = 0x2C1254u;
label_2c1254:
    // 0x2c1254: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2c1258:
    if (ctx->pc == 0x2C1258u) {
        ctx->pc = 0x2C125Cu;
        goto label_2c125c;
    }
    ctx->pc = 0x2C1254u;
    {
        const bool branch_taken_0x2c1254 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c1254) {
            ctx->pc = 0x2C1278u;
            goto label_2c1278;
        }
    }
    ctx->pc = 0x2C125Cu;
label_2c125c:
    // 0x2c125c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2c1260:
    if (ctx->pc == 0x2C1260u) {
        ctx->pc = 0x2C1264u;
        goto label_2c1264;
    }
    ctx->pc = 0x2C125Cu;
    {
        const bool branch_taken_0x2c125c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c125c) {
            ctx->pc = 0x2C1278u;
            goto label_2c1278;
        }
    }
    ctx->pc = 0x2C1264u;
label_2c1264:
    // 0x2c1264: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x2c1264u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_2c1268:
    // 0x2c1268: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2c126c:
    if (ctx->pc == 0x2C126Cu) {
        ctx->pc = 0x2C1270u;
        goto label_2c1270;
    }
    ctx->pc = 0x2C1268u;
    {
        const bool branch_taken_0x2c1268 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c1268) {
            ctx->pc = 0x2C1278u;
            goto label_2c1278;
        }
    }
    ctx->pc = 0x2C1270u;
label_2c1270:
    // 0x2c1270: 0xc0400a8  jal         func_1002A0
label_2c1274:
    if (ctx->pc == 0x2C1274u) {
        ctx->pc = 0x2C1278u;
        goto label_2c1278;
    }
    ctx->pc = 0x2C1270u;
    SET_GPR_U32(ctx, 31, 0x2C1278u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1278u; }
        if (ctx->pc != 0x2C1278u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1278u; }
        if (ctx->pc != 0x2C1278u) { return; }
    }
    ctx->pc = 0x2C1278u;
label_2c1278:
    // 0x2c1278: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x2c1278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_2c127c:
    // 0x2c127c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2c1280:
    if (ctx->pc == 0x2C1280u) {
        ctx->pc = 0x2C1284u;
        goto label_2c1284;
    }
    ctx->pc = 0x2C127Cu;
    {
        const bool branch_taken_0x2c127c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c127c) {
            ctx->pc = 0x2C1298u;
            goto label_2c1298;
        }
    }
    ctx->pc = 0x2C1284u;
label_2c1284:
    // 0x2c1284: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c1284u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2c1288:
    // 0x2c1288: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2c1288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_2c128c:
    // 0x2c128c: 0x24631748  addiu       $v1, $v1, 0x1748
    ctx->pc = 0x2c128cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5960));
label_2c1290:
    // 0x2c1290: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x2c1290u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_2c1294:
    // 0x2c1294: 0xac400dc0  sw          $zero, 0xDC0($v0)
    ctx->pc = 0x2c1294u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3520), GPR_U32(ctx, 0));
label_2c1298:
    // 0x2c1298: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_2c129c:
    if (ctx->pc == 0x2C129Cu) {
        ctx->pc = 0x2C129Cu;
            // 0x2c129c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x2C12A0u;
        goto label_2c12a0;
    }
    ctx->pc = 0x2C1298u;
    {
        const bool branch_taken_0x2c1298 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c1298) {
            ctx->pc = 0x2C129Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1298u;
            // 0x2c129c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C12F4u;
            goto label_2c12f4;
        }
    }
    ctx->pc = 0x2C12A0u;
label_2c12a0:
    // 0x2c12a0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c12a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2c12a4:
    // 0x2c12a4: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x2c12a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_2c12a8:
    // 0x2c12a8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2c12a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2c12ac:
    // 0x2c12ac: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x2c12acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_2c12b0:
    // 0x2c12b0: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2c12b4:
    if (ctx->pc == 0x2C12B4u) {
        ctx->pc = 0x2C12B4u;
            // 0x2c12b4: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x2C12B8u;
        goto label_2c12b8;
    }
    ctx->pc = 0x2C12B0u;
    {
        const bool branch_taken_0x2c12b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c12b0) {
            ctx->pc = 0x2C12B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C12B0u;
            // 0x2c12b4: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C12CCu;
            goto label_2c12cc;
        }
    }
    ctx->pc = 0x2C12B8u;
label_2c12b8:
    // 0x2c12b8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2c12b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2c12bc:
    // 0x2c12bc: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2c12bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2c12c0:
    // 0x2c12c0: 0x320f809  jalr        $t9
label_2c12c4:
    if (ctx->pc == 0x2C12C4u) {
        ctx->pc = 0x2C12C4u;
            // 0x2c12c4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2C12C8u;
        goto label_2c12c8;
    }
    ctx->pc = 0x2C12C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2C12C8u);
        ctx->pc = 0x2C12C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C12C0u;
            // 0x2c12c4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2C12C8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2C12C8u; }
            if (ctx->pc != 0x2C12C8u) { return; }
        }
        }
    }
    ctx->pc = 0x2C12C8u;
label_2c12c8:
    // 0x2c12c8: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x2c12c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_2c12cc:
    // 0x2c12cc: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2c12d0:
    if (ctx->pc == 0x2C12D0u) {
        ctx->pc = 0x2C12D0u;
            // 0x2c12d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C12D4u;
        goto label_2c12d4;
    }
    ctx->pc = 0x2C12CCu;
    {
        const bool branch_taken_0x2c12cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c12cc) {
            ctx->pc = 0x2C12D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C12CCu;
            // 0x2c12d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C12E8u;
            goto label_2c12e8;
        }
    }
    ctx->pc = 0x2C12D4u;
label_2c12d4:
    // 0x2c12d4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2c12d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2c12d8:
    // 0x2c12d8: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2c12d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2c12dc:
    // 0x2c12dc: 0x320f809  jalr        $t9
label_2c12e0:
    if (ctx->pc == 0x2C12E0u) {
        ctx->pc = 0x2C12E0u;
            // 0x2c12e0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2C12E4u;
        goto label_2c12e4;
    }
    ctx->pc = 0x2C12DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2C12E4u);
        ctx->pc = 0x2C12E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C12DCu;
            // 0x2c12e0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2C12E4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2C12E4u; }
            if (ctx->pc != 0x2C12E4u) { return; }
        }
        }
    }
    ctx->pc = 0x2C12E4u;
label_2c12e4:
    // 0x2c12e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c12e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c12e8:
    // 0x2c12e8: 0xc075bf8  jal         func_1D6FE0
label_2c12ec:
    if (ctx->pc == 0x2C12ECu) {
        ctx->pc = 0x2C12ECu;
            // 0x2c12ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C12F0u;
        goto label_2c12f0;
    }
    ctx->pc = 0x2C12E8u;
    SET_GPR_U32(ctx, 31, 0x2C12F0u);
    ctx->pc = 0x2C12ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C12E8u;
            // 0x2c12ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C12F0u; }
        if (ctx->pc != 0x2C12F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C12F0u; }
        if (ctx->pc != 0x2C12F0u) { return; }
    }
    ctx->pc = 0x2C12F0u;
label_2c12f0:
    // 0x2c12f0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2c12f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2c12f4:
    // 0x2c12f4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c12f4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2c12f8:
    // 0x2c12f8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2c12fc:
    if (ctx->pc == 0x2C12FCu) {
        ctx->pc = 0x2C12FCu;
            // 0x2c12fc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C1300u;
        goto label_2c1300;
    }
    ctx->pc = 0x2C12F8u;
    {
        const bool branch_taken_0x2c12f8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2c12f8) {
            ctx->pc = 0x2C12FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C12F8u;
            // 0x2c12fc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C130Cu;
            goto label_2c130c;
        }
    }
    ctx->pc = 0x2C1300u;
label_2c1300:
    // 0x2c1300: 0xc0400a8  jal         func_1002A0
label_2c1304:
    if (ctx->pc == 0x2C1304u) {
        ctx->pc = 0x2C1304u;
            // 0x2c1304: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C1308u;
        goto label_2c1308;
    }
    ctx->pc = 0x2C1300u;
    SET_GPR_U32(ctx, 31, 0x2C1308u);
    ctx->pc = 0x2C1304u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1300u;
            // 0x2c1304: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1308u; }
        if (ctx->pc != 0x2C1308u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1308u; }
        if (ctx->pc != 0x2C1308u) { return; }
    }
    ctx->pc = 0x2C1308u;
label_2c1308:
    // 0x2c1308: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2c1308u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c130c:
    // 0x2c130c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c130cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2c1310:
    // 0x2c1310: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c1310u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2c1314:
    // 0x2c1314: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c1314u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2c1318:
    // 0x2c1318: 0x3e00008  jr          $ra
label_2c131c:
    if (ctx->pc == 0x2C131Cu) {
        ctx->pc = 0x2C131Cu;
            // 0x2c131c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2C1320u;
        goto label_fallthrough_0x2c1318;
    }
    ctx->pc = 0x2C1318u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C131Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1318u;
            // 0x2c131c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2c1318:
    ctx->pc = 0x2C1320u;
}
