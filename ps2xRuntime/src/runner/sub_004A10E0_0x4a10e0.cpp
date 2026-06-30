#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004A10E0
// Address: 0x4a10e0 - 0x4a1300
void sub_004A10E0_0x4a10e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A10E0_0x4a10e0");
#endif

    switch (ctx->pc) {
        case 0x4a10e0u: goto label_4a10e0;
        case 0x4a10e4u: goto label_4a10e4;
        case 0x4a10e8u: goto label_4a10e8;
        case 0x4a10ecu: goto label_4a10ec;
        case 0x4a10f0u: goto label_4a10f0;
        case 0x4a10f4u: goto label_4a10f4;
        case 0x4a10f8u: goto label_4a10f8;
        case 0x4a10fcu: goto label_4a10fc;
        case 0x4a1100u: goto label_4a1100;
        case 0x4a1104u: goto label_4a1104;
        case 0x4a1108u: goto label_4a1108;
        case 0x4a110cu: goto label_4a110c;
        case 0x4a1110u: goto label_4a1110;
        case 0x4a1114u: goto label_4a1114;
        case 0x4a1118u: goto label_4a1118;
        case 0x4a111cu: goto label_4a111c;
        case 0x4a1120u: goto label_4a1120;
        case 0x4a1124u: goto label_4a1124;
        case 0x4a1128u: goto label_4a1128;
        case 0x4a112cu: goto label_4a112c;
        case 0x4a1130u: goto label_4a1130;
        case 0x4a1134u: goto label_4a1134;
        case 0x4a1138u: goto label_4a1138;
        case 0x4a113cu: goto label_4a113c;
        case 0x4a1140u: goto label_4a1140;
        case 0x4a1144u: goto label_4a1144;
        case 0x4a1148u: goto label_4a1148;
        case 0x4a114cu: goto label_4a114c;
        case 0x4a1150u: goto label_4a1150;
        case 0x4a1154u: goto label_4a1154;
        case 0x4a1158u: goto label_4a1158;
        case 0x4a115cu: goto label_4a115c;
        case 0x4a1160u: goto label_4a1160;
        case 0x4a1164u: goto label_4a1164;
        case 0x4a1168u: goto label_4a1168;
        case 0x4a116cu: goto label_4a116c;
        case 0x4a1170u: goto label_4a1170;
        case 0x4a1174u: goto label_4a1174;
        case 0x4a1178u: goto label_4a1178;
        case 0x4a117cu: goto label_4a117c;
        case 0x4a1180u: goto label_4a1180;
        case 0x4a1184u: goto label_4a1184;
        case 0x4a1188u: goto label_4a1188;
        case 0x4a118cu: goto label_4a118c;
        case 0x4a1190u: goto label_4a1190;
        case 0x4a1194u: goto label_4a1194;
        case 0x4a1198u: goto label_4a1198;
        case 0x4a119cu: goto label_4a119c;
        case 0x4a11a0u: goto label_4a11a0;
        case 0x4a11a4u: goto label_4a11a4;
        case 0x4a11a8u: goto label_4a11a8;
        case 0x4a11acu: goto label_4a11ac;
        case 0x4a11b0u: goto label_4a11b0;
        case 0x4a11b4u: goto label_4a11b4;
        case 0x4a11b8u: goto label_4a11b8;
        case 0x4a11bcu: goto label_4a11bc;
        case 0x4a11c0u: goto label_4a11c0;
        case 0x4a11c4u: goto label_4a11c4;
        case 0x4a11c8u: goto label_4a11c8;
        case 0x4a11ccu: goto label_4a11cc;
        case 0x4a11d0u: goto label_4a11d0;
        case 0x4a11d4u: goto label_4a11d4;
        case 0x4a11d8u: goto label_4a11d8;
        case 0x4a11dcu: goto label_4a11dc;
        case 0x4a11e0u: goto label_4a11e0;
        case 0x4a11e4u: goto label_4a11e4;
        case 0x4a11e8u: goto label_4a11e8;
        case 0x4a11ecu: goto label_4a11ec;
        case 0x4a11f0u: goto label_4a11f0;
        case 0x4a11f4u: goto label_4a11f4;
        case 0x4a11f8u: goto label_4a11f8;
        case 0x4a11fcu: goto label_4a11fc;
        case 0x4a1200u: goto label_4a1200;
        case 0x4a1204u: goto label_4a1204;
        case 0x4a1208u: goto label_4a1208;
        case 0x4a120cu: goto label_4a120c;
        case 0x4a1210u: goto label_4a1210;
        case 0x4a1214u: goto label_4a1214;
        case 0x4a1218u: goto label_4a1218;
        case 0x4a121cu: goto label_4a121c;
        case 0x4a1220u: goto label_4a1220;
        case 0x4a1224u: goto label_4a1224;
        case 0x4a1228u: goto label_4a1228;
        case 0x4a122cu: goto label_4a122c;
        case 0x4a1230u: goto label_4a1230;
        case 0x4a1234u: goto label_4a1234;
        case 0x4a1238u: goto label_4a1238;
        case 0x4a123cu: goto label_4a123c;
        case 0x4a1240u: goto label_4a1240;
        case 0x4a1244u: goto label_4a1244;
        case 0x4a1248u: goto label_4a1248;
        case 0x4a124cu: goto label_4a124c;
        case 0x4a1250u: goto label_4a1250;
        case 0x4a1254u: goto label_4a1254;
        case 0x4a1258u: goto label_4a1258;
        case 0x4a125cu: goto label_4a125c;
        case 0x4a1260u: goto label_4a1260;
        case 0x4a1264u: goto label_4a1264;
        case 0x4a1268u: goto label_4a1268;
        case 0x4a126cu: goto label_4a126c;
        case 0x4a1270u: goto label_4a1270;
        case 0x4a1274u: goto label_4a1274;
        case 0x4a1278u: goto label_4a1278;
        case 0x4a127cu: goto label_4a127c;
        case 0x4a1280u: goto label_4a1280;
        case 0x4a1284u: goto label_4a1284;
        case 0x4a1288u: goto label_4a1288;
        case 0x4a128cu: goto label_4a128c;
        case 0x4a1290u: goto label_4a1290;
        case 0x4a1294u: goto label_4a1294;
        case 0x4a1298u: goto label_4a1298;
        case 0x4a129cu: goto label_4a129c;
        case 0x4a12a0u: goto label_4a12a0;
        case 0x4a12a4u: goto label_4a12a4;
        case 0x4a12a8u: goto label_4a12a8;
        case 0x4a12acu: goto label_4a12ac;
        case 0x4a12b0u: goto label_4a12b0;
        case 0x4a12b4u: goto label_4a12b4;
        case 0x4a12b8u: goto label_4a12b8;
        case 0x4a12bcu: goto label_4a12bc;
        case 0x4a12c0u: goto label_4a12c0;
        case 0x4a12c4u: goto label_4a12c4;
        case 0x4a12c8u: goto label_4a12c8;
        case 0x4a12ccu: goto label_4a12cc;
        case 0x4a12d0u: goto label_4a12d0;
        case 0x4a12d4u: goto label_4a12d4;
        case 0x4a12d8u: goto label_4a12d8;
        case 0x4a12dcu: goto label_4a12dc;
        case 0x4a12e0u: goto label_4a12e0;
        case 0x4a12e4u: goto label_4a12e4;
        case 0x4a12e8u: goto label_4a12e8;
        case 0x4a12ecu: goto label_4a12ec;
        case 0x4a12f0u: goto label_4a12f0;
        case 0x4a12f4u: goto label_4a12f4;
        case 0x4a12f8u: goto label_4a12f8;
        case 0x4a12fcu: goto label_4a12fc;
        default: break;
    }

    ctx->pc = 0x4a10e0u;

label_4a10e0:
    // 0x4a10e0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4a10e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4a10e4:
    // 0x4a10e4: 0x3c0a006f  lui         $t2, 0x6F
    ctx->pc = 0x4a10e4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)111 << 16));
label_4a10e8:
    // 0x4a10e8: 0x8c67e3c0  lw          $a3, -0x1C40($v1)
    ctx->pc = 0x4a10e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_4a10ec:
    // 0x4a10ec: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4a10ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4a10f0:
    // 0x4a10f0: 0x76080  sll         $t4, $a3, 2
    ctx->pc = 0x4a10f0u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_4a10f4:
    // 0x4a10f4: 0x8c69e3d8  lw          $t1, -0x1C28($v1)
    ctx->pc = 0x4a10f4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960088)));
label_4a10f8:
    // 0x4a10f8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4a10f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4a10fc:
    // 0x4a10fc: 0x8c68e360  lw          $t0, -0x1CA0($v1)
    ctx->pc = 0x4a10fcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959968)));
label_4a1100:
    // 0x4a1100: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4a1100u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4a1104:
    // 0x4a1104: 0x8c67e3b0  lw          $a3, -0x1C50($v1)
    ctx->pc = 0x4a1104u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
label_4a1108:
    // 0x4a1108: 0x91980  sll         $v1, $t1, 6
    ctx->pc = 0x4a1108u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 6));
label_4a110c:
    // 0x4a110c: 0xec3821  addu        $a3, $a3, $t4
    ctx->pc = 0x4a110cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
label_4a1110:
    // 0x4a1110: 0x1035821  addu        $t3, $t0, $v1
    ctx->pc = 0x4a1110u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_4a1114:
    // 0x4a1114: 0x3c09006f  lui         $t1, 0x6F
    ctx->pc = 0x4a1114u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)111 << 16));
label_4a1118:
    // 0x4a1118: 0xaceb0000  sw          $t3, 0x0($a3)
    ctx->pc = 0x4a1118u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 11));
label_4a111c:
    // 0x4a111c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4a111cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4a1120:
    // 0x4a1120: 0xacab0000  sw          $t3, 0x0($a1)
    ctx->pc = 0x4a1120u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 11));
label_4a1124:
    // 0x4a1124: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x4a1124u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_4a1128:
    // 0x4a1128: 0x8d4be3d8  lw          $t3, -0x1C28($t2)
    ctx->pc = 0x4a1128u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294960088)));
label_4a112c:
    // 0x4a112c: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x4a112cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_4a1130:
    // 0x4a1130: 0x8d29e3b8  lw          $t1, -0x1C48($t1)
    ctx->pc = 0x4a1130u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294960056)));
label_4a1134:
    // 0x4a1134: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x4a1134u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
label_4a1138:
    // 0x4a1138: 0x8c6ae378  lw          $t2, -0x1C88($v1)
    ctx->pc = 0x4a1138u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
label_4a113c:
    // 0x4a113c: 0xb5880  sll         $t3, $t3, 2
    ctx->pc = 0x4a113cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
label_4a1140:
    // 0x4a1140: 0x12c4821  addu        $t1, $t1, $t4
    ctx->pc = 0x4a1140u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 12)));
label_4a1144:
    // 0x4a1144: 0x14b5021  addu        $t2, $t2, $t3
    ctx->pc = 0x4a1144u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
label_4a1148:
    // 0x4a1148: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4a1148u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4a114c:
    // 0x4a114c: 0xad2a0000  sw          $t2, 0x0($t1)
    ctx->pc = 0x4a114cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 10));
label_4a1150:
    // 0x4a1150: 0xacca0000  sw          $t2, 0x0($a2)
    ctx->pc = 0x4a1150u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 10));
label_4a1154:
    // 0x4a1154: 0x8c890028  lw          $t1, 0x28($a0)
    ctx->pc = 0x4a1154u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_4a1158:
    // 0x4a1158: 0x8d06e3d8  lw          $a2, -0x1C28($t0)
    ctx->pc = 0x4a1158u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294960088)));
label_4a115c:
    // 0x4a115c: 0x8ca4e3c0  lw          $a0, -0x1C40($a1)
    ctx->pc = 0x4a115cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294960064)));
label_4a1160:
    // 0x4a1160: 0xc92821  addu        $a1, $a2, $t1
    ctx->pc = 0x4a1160u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
label_4a1164:
    // 0x4a1164: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x4a1164u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_4a1168:
    // 0x4a1168: 0xace5e3d8  sw          $a1, -0x1C28($a3)
    ctx->pc = 0x4a1168u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294960088), GPR_U32(ctx, 5));
label_4a116c:
    // 0x4a116c: 0x3e00008  jr          $ra
label_4a1170:
    if (ctx->pc == 0x4A1170u) {
        ctx->pc = 0x4A1170u;
            // 0x4a1170: 0xac64e3c0  sw          $a0, -0x1C40($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 4));
        ctx->pc = 0x4A1174u;
        goto label_4a1174;
    }
    ctx->pc = 0x4A116Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A1170u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A116Cu;
            // 0x4a1170: 0xac64e3c0  sw          $a0, -0x1C40($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4A1174u;
label_4a1174:
    // 0x4a1174: 0x0  nop
    ctx->pc = 0x4a1174u;
    // NOP
label_4a1178:
    // 0x4a1178: 0x0  nop
    ctx->pc = 0x4a1178u;
    // NOP
label_4a117c:
    // 0x4a117c: 0x0  nop
    ctx->pc = 0x4a117cu;
    // NOP
label_4a1180:
    // 0x4a1180: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4a1180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4a1184:
    // 0x4a1184: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4a1184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4a1188:
    // 0x4a1188: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4a1188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_4a118c:
    // 0x4a118c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4a118cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4a1190:
    // 0x4a1190: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4a1190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4a1194:
    // 0x4a1194: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4a1194u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4a1198:
    // 0x4a1198: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4a1198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4a119c:
    // 0x4a119c: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x4a119cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_4a11a0:
    // 0x4a11a0: 0x10a3001f  beq         $a1, $v1, . + 4 + (0x1F << 2)
label_4a11a4:
    if (ctx->pc == 0x4A11A4u) {
        ctx->pc = 0x4A11A4u;
            // 0x4a11a4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A11A8u;
        goto label_4a11a8;
    }
    ctx->pc = 0x4A11A0u;
    {
        const bool branch_taken_0x4a11a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x4A11A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A11A0u;
            // 0x4a11a4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a11a0) {
            ctx->pc = 0x4A1220u;
            goto label_4a1220;
        }
    }
    ctx->pc = 0x4A11A8u;
label_4a11a8:
    // 0x4a11a8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4a11a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4a11ac:
    // 0x4a11ac: 0x50a30019  beql        $a1, $v1, . + 4 + (0x19 << 2)
label_4a11b0:
    if (ctx->pc == 0x4A11B0u) {
        ctx->pc = 0x4A11B0u;
            // 0x4a11b0: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x4A11B4u;
        goto label_4a11b4;
    }
    ctx->pc = 0x4A11ACu;
    {
        const bool branch_taken_0x4a11ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4a11ac) {
            ctx->pc = 0x4A11B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A11ACu;
            // 0x4a11b0: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A1214u;
            goto label_4a1214;
        }
    }
    ctx->pc = 0x4A11B4u;
label_4a11b4:
    // 0x4a11b4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4a11b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4a11b8:
    // 0x4a11b8: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_4a11bc:
    if (ctx->pc == 0x4A11BCu) {
        ctx->pc = 0x4A11C0u;
        goto label_4a11c0;
    }
    ctx->pc = 0x4A11B8u;
    {
        const bool branch_taken_0x4a11b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4a11b8) {
            ctx->pc = 0x4A11C8u;
            goto label_4a11c8;
        }
    }
    ctx->pc = 0x4A11C0u;
label_4a11c0:
    // 0x4a11c0: 0x10000025  b           . + 4 + (0x25 << 2)
label_4a11c4:
    if (ctx->pc == 0x4A11C4u) {
        ctx->pc = 0x4A11C8u;
        goto label_4a11c8;
    }
    ctx->pc = 0x4A11C0u;
    {
        const bool branch_taken_0x4a11c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a11c0) {
            ctx->pc = 0x4A1258u;
            goto label_4a1258;
        }
    }
    ctx->pc = 0x4A11C8u;
label_4a11c8:
    // 0x4a11c8: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x4a11c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_4a11cc:
    // 0x4a11cc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4a11ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4a11d0:
    // 0x4a11d0: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x4a11d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_4a11d4:
    // 0x4a11d4: 0x8c630cb4  lw          $v1, 0xCB4($v1)
    ctx->pc = 0x4a11d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3252)));
label_4a11d8:
    // 0x4a11d8: 0x1064001f  beq         $v1, $a0, . + 4 + (0x1F << 2)
label_4a11dc:
    if (ctx->pc == 0x4A11DCu) {
        ctx->pc = 0x4A11E0u;
        goto label_4a11e0;
    }
    ctx->pc = 0x4A11D8u;
    {
        const bool branch_taken_0x4a11d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x4a11d8) {
            ctx->pc = 0x4A1258u;
            goto label_4a1258;
        }
    }
    ctx->pc = 0x4A11E0u;
label_4a11e0:
    // 0x4a11e0: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x4a11e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_4a11e4:
    // 0x4a11e4: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x4a11e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_4a11e8:
    // 0x4a11e8: 0x8c653f70  lw          $a1, 0x3F70($v1)
    ctx->pc = 0x4a11e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16240)));
label_4a11ec:
    // 0x4a11ec: 0x8c860030  lw          $a2, 0x30($a0)
    ctx->pc = 0x4a11ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_4a11f0:
    // 0x4a11f0: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x4a11f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_4a11f4:
    // 0x4a11f4: 0x8cc40090  lw          $a0, 0x90($a2)
    ctx->pc = 0x4a11f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 144)));
label_4a11f8:
    // 0x4a11f8: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x4a11f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_4a11fc:
    // 0x4a11fc: 0xacc40090  sw          $a0, 0x90($a2)
    ctx->pc = 0x4a11fcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 144), GPR_U32(ctx, 4));
label_4a1200:
    // 0x4a1200: 0x8c643f78  lw          $a0, 0x3F78($v1)
    ctx->pc = 0x4a1200u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16248)));
label_4a1204:
    // 0x4a1204: 0x8cc30120  lw          $v1, 0x120($a2)
    ctx->pc = 0x4a1204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 288)));
label_4a1208:
    // 0x4a1208: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x4a1208u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_4a120c:
    // 0x4a120c: 0x10000012  b           . + 4 + (0x12 << 2)
label_4a1210:
    if (ctx->pc == 0x4A1210u) {
        ctx->pc = 0x4A1210u;
            // 0x4a1210: 0xacc30120  sw          $v1, 0x120($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 288), GPR_U32(ctx, 3));
        ctx->pc = 0x4A1214u;
        goto label_4a1214;
    }
    ctx->pc = 0x4A120Cu;
    {
        const bool branch_taken_0x4a120c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A1210u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A120Cu;
            // 0x4a1210: 0xacc30120  sw          $v1, 0x120($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 288), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a120c) {
            ctx->pc = 0x4A1258u;
            goto label_4a1258;
        }
    }
    ctx->pc = 0x4A1214u;
label_4a1214:
    // 0x4a1214: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x4a1214u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_4a1218:
    // 0x4a1218: 0x320f809  jalr        $t9
label_4a121c:
    if (ctx->pc == 0x4A121Cu) {
        ctx->pc = 0x4A1220u;
        goto label_4a1220;
    }
    ctx->pc = 0x4A1218u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4A1220u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4A1220u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4A1220u; }
            if (ctx->pc != 0x4A1220u) { return; }
        }
        }
    }
    ctx->pc = 0x4A1220u;
label_4a1220:
    // 0x4a1220: 0x8e110070  lw          $s1, 0x70($s0)
    ctx->pc = 0x4a1220u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_4a1224:
    // 0x4a1224: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
label_4a1228:
    if (ctx->pc == 0x4A1228u) {
        ctx->pc = 0x4A122Cu;
        goto label_4a122c;
    }
    ctx->pc = 0x4A1224u;
    {
        const bool branch_taken_0x4a1224 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a1224) {
            ctx->pc = 0x4A1258u;
            goto label_4a1258;
        }
    }
    ctx->pc = 0x4A122Cu;
label_4a122c:
    // 0x4a122c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4a122cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a1230:
    // 0x4a1230: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4a1230u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a1234:
    // 0x4a1234: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x4a1234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_4a1238:
    // 0x4a1238: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x4a1238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_4a123c:
    // 0x4a123c: 0xc0e3658  jal         func_38D960
label_4a1240:
    if (ctx->pc == 0x4A1240u) {
        ctx->pc = 0x4A1240u;
            // 0x4a1240: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x4A1244u;
        goto label_4a1244;
    }
    ctx->pc = 0x4A123Cu;
    SET_GPR_U32(ctx, 31, 0x4A1244u);
    ctx->pc = 0x4A1240u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A123Cu;
            // 0x4a1240: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38D960u;
    if (runtime->hasFunction(0x38D960u)) {
        auto targetFn = runtime->lookupFunction(0x38D960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A1244u; }
        if (ctx->pc != 0x4A1244u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D960_0x38d960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A1244u; }
        if (ctx->pc != 0x4A1244u) { return; }
    }
    ctx->pc = 0x4A1244u;
label_4a1244:
    // 0x4a1244: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x4a1244u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_4a1248:
    // 0x4a1248: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x4a1248u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_4a124c:
    // 0x4a124c: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_4a1250:
    if (ctx->pc == 0x4A1250u) {
        ctx->pc = 0x4A1250u;
            // 0x4a1250: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x4A1254u;
        goto label_4a1254;
    }
    ctx->pc = 0x4A124Cu;
    {
        const bool branch_taken_0x4a124c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A1250u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A124Cu;
            // 0x4a1250: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a124c) {
            ctx->pc = 0x4A1234u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4a1234;
        }
    }
    ctx->pc = 0x4A1254u;
label_4a1254:
    // 0x4a1254: 0x0  nop
    ctx->pc = 0x4a1254u;
    // NOP
label_4a1258:
    // 0x4a1258: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4a1258u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4a125c:
    // 0x4a125c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4a125cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4a1260:
    // 0x4a1260: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4a1260u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4a1264:
    // 0x4a1264: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4a1264u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4a1268:
    // 0x4a1268: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4a1268u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4a126c:
    // 0x4a126c: 0x3e00008  jr          $ra
label_4a1270:
    if (ctx->pc == 0x4A1270u) {
        ctx->pc = 0x4A1270u;
            // 0x4a1270: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x4A1274u;
        goto label_4a1274;
    }
    ctx->pc = 0x4A126Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A1270u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A126Cu;
            // 0x4a1270: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4A1274u;
label_4a1274:
    // 0x4a1274: 0x0  nop
    ctx->pc = 0x4a1274u;
    // NOP
label_4a1278:
    // 0x4a1278: 0x0  nop
    ctx->pc = 0x4a1278u;
    // NOP
label_4a127c:
    // 0x4a127c: 0x0  nop
    ctx->pc = 0x4a127cu;
    // NOP
label_4a1280:
    // 0x4a1280: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4a1280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4a1284:
    // 0x4a1284: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4a1284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_4a1288:
    // 0x4a1288: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4a1288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4a128c:
    // 0x4a128c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4a128cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4a1290:
    // 0x4a1290: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4a1290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4a1294:
    // 0x4a1294: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4a1294u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4a1298:
    // 0x4a1298: 0x8c910070  lw          $s1, 0x70($a0)
    ctx->pc = 0x4a1298u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_4a129c:
    // 0x4a129c: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
label_4a12a0:
    if (ctx->pc == 0x4A12A0u) {
        ctx->pc = 0x4A12A0u;
            // 0x4a12a0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A12A4u;
        goto label_4a12a4;
    }
    ctx->pc = 0x4A129Cu;
    {
        const bool branch_taken_0x4a129c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A12A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A129Cu;
            // 0x4a12a0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a129c) {
            ctx->pc = 0x4A12D8u;
            goto label_4a12d8;
        }
    }
    ctx->pc = 0x4A12A4u;
label_4a12a4:
    // 0x4a12a4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4a12a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a12a8:
    // 0x4a12a8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4a12a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a12ac:
    // 0x4a12ac: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x4a12acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_4a12b0:
    // 0x4a12b0: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x4a12b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_4a12b4:
    // 0x4a12b4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4a12b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4a12b8:
    // 0x4a12b8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4a12b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4a12bc:
    // 0x4a12bc: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x4a12bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_4a12c0:
    // 0x4a12c0: 0x320f809  jalr        $t9
label_4a12c4:
    if (ctx->pc == 0x4A12C4u) {
        ctx->pc = 0x4A12C8u;
        goto label_4a12c8;
    }
    ctx->pc = 0x4A12C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4A12C8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4A12C8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4A12C8u; }
            if (ctx->pc != 0x4A12C8u) { return; }
        }
        }
    }
    ctx->pc = 0x4A12C8u;
label_4a12c8:
    // 0x4a12c8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x4a12c8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_4a12cc:
    // 0x4a12cc: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x4a12ccu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_4a12d0:
    // 0x4a12d0: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
label_4a12d4:
    if (ctx->pc == 0x4A12D4u) {
        ctx->pc = 0x4A12D4u;
            // 0x4a12d4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x4A12D8u;
        goto label_4a12d8;
    }
    ctx->pc = 0x4A12D0u;
    {
        const bool branch_taken_0x4a12d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A12D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A12D0u;
            // 0x4a12d4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a12d0) {
            ctx->pc = 0x4A12ACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4a12ac;
        }
    }
    ctx->pc = 0x4A12D8u;
label_4a12d8:
    // 0x4a12d8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4a12d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4a12dc:
    // 0x4a12dc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4a12dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4a12e0:
    // 0x4a12e0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4a12e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4a12e4:
    // 0x4a12e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4a12e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4a12e8:
    // 0x4a12e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4a12e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4a12ec:
    // 0x4a12ec: 0x3e00008  jr          $ra
label_4a12f0:
    if (ctx->pc == 0x4A12F0u) {
        ctx->pc = 0x4A12F0u;
            // 0x4a12f0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x4A12F4u;
        goto label_4a12f4;
    }
    ctx->pc = 0x4A12ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A12F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A12ECu;
            // 0x4a12f0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4A12F4u;
label_4a12f4:
    // 0x4a12f4: 0x0  nop
    ctx->pc = 0x4a12f4u;
    // NOP
label_4a12f8:
    // 0x4a12f8: 0x0  nop
    ctx->pc = 0x4a12f8u;
    // NOP
label_4a12fc:
    // 0x4a12fc: 0x0  nop
    ctx->pc = 0x4a12fcu;
    // NOP
}
