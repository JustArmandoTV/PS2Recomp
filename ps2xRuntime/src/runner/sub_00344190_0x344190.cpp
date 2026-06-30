#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00344190
// Address: 0x344190 - 0x3443a0
void sub_00344190_0x344190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00344190_0x344190");
#endif

    switch (ctx->pc) {
        case 0x344190u: goto label_344190;
        case 0x344194u: goto label_344194;
        case 0x344198u: goto label_344198;
        case 0x34419cu: goto label_34419c;
        case 0x3441a0u: goto label_3441a0;
        case 0x3441a4u: goto label_3441a4;
        case 0x3441a8u: goto label_3441a8;
        case 0x3441acu: goto label_3441ac;
        case 0x3441b0u: goto label_3441b0;
        case 0x3441b4u: goto label_3441b4;
        case 0x3441b8u: goto label_3441b8;
        case 0x3441bcu: goto label_3441bc;
        case 0x3441c0u: goto label_3441c0;
        case 0x3441c4u: goto label_3441c4;
        case 0x3441c8u: goto label_3441c8;
        case 0x3441ccu: goto label_3441cc;
        case 0x3441d0u: goto label_3441d0;
        case 0x3441d4u: goto label_3441d4;
        case 0x3441d8u: goto label_3441d8;
        case 0x3441dcu: goto label_3441dc;
        case 0x3441e0u: goto label_3441e0;
        case 0x3441e4u: goto label_3441e4;
        case 0x3441e8u: goto label_3441e8;
        case 0x3441ecu: goto label_3441ec;
        case 0x3441f0u: goto label_3441f0;
        case 0x3441f4u: goto label_3441f4;
        case 0x3441f8u: goto label_3441f8;
        case 0x3441fcu: goto label_3441fc;
        case 0x344200u: goto label_344200;
        case 0x344204u: goto label_344204;
        case 0x344208u: goto label_344208;
        case 0x34420cu: goto label_34420c;
        case 0x344210u: goto label_344210;
        case 0x344214u: goto label_344214;
        case 0x344218u: goto label_344218;
        case 0x34421cu: goto label_34421c;
        case 0x344220u: goto label_344220;
        case 0x344224u: goto label_344224;
        case 0x344228u: goto label_344228;
        case 0x34422cu: goto label_34422c;
        case 0x344230u: goto label_344230;
        case 0x344234u: goto label_344234;
        case 0x344238u: goto label_344238;
        case 0x34423cu: goto label_34423c;
        case 0x344240u: goto label_344240;
        case 0x344244u: goto label_344244;
        case 0x344248u: goto label_344248;
        case 0x34424cu: goto label_34424c;
        case 0x344250u: goto label_344250;
        case 0x344254u: goto label_344254;
        case 0x344258u: goto label_344258;
        case 0x34425cu: goto label_34425c;
        case 0x344260u: goto label_344260;
        case 0x344264u: goto label_344264;
        case 0x344268u: goto label_344268;
        case 0x34426cu: goto label_34426c;
        case 0x344270u: goto label_344270;
        case 0x344274u: goto label_344274;
        case 0x344278u: goto label_344278;
        case 0x34427cu: goto label_34427c;
        case 0x344280u: goto label_344280;
        case 0x344284u: goto label_344284;
        case 0x344288u: goto label_344288;
        case 0x34428cu: goto label_34428c;
        case 0x344290u: goto label_344290;
        case 0x344294u: goto label_344294;
        case 0x344298u: goto label_344298;
        case 0x34429cu: goto label_34429c;
        case 0x3442a0u: goto label_3442a0;
        case 0x3442a4u: goto label_3442a4;
        case 0x3442a8u: goto label_3442a8;
        case 0x3442acu: goto label_3442ac;
        case 0x3442b0u: goto label_3442b0;
        case 0x3442b4u: goto label_3442b4;
        case 0x3442b8u: goto label_3442b8;
        case 0x3442bcu: goto label_3442bc;
        case 0x3442c0u: goto label_3442c0;
        case 0x3442c4u: goto label_3442c4;
        case 0x3442c8u: goto label_3442c8;
        case 0x3442ccu: goto label_3442cc;
        case 0x3442d0u: goto label_3442d0;
        case 0x3442d4u: goto label_3442d4;
        case 0x3442d8u: goto label_3442d8;
        case 0x3442dcu: goto label_3442dc;
        case 0x3442e0u: goto label_3442e0;
        case 0x3442e4u: goto label_3442e4;
        case 0x3442e8u: goto label_3442e8;
        case 0x3442ecu: goto label_3442ec;
        case 0x3442f0u: goto label_3442f0;
        case 0x3442f4u: goto label_3442f4;
        case 0x3442f8u: goto label_3442f8;
        case 0x3442fcu: goto label_3442fc;
        case 0x344300u: goto label_344300;
        case 0x344304u: goto label_344304;
        case 0x344308u: goto label_344308;
        case 0x34430cu: goto label_34430c;
        case 0x344310u: goto label_344310;
        case 0x344314u: goto label_344314;
        case 0x344318u: goto label_344318;
        case 0x34431cu: goto label_34431c;
        case 0x344320u: goto label_344320;
        case 0x344324u: goto label_344324;
        case 0x344328u: goto label_344328;
        case 0x34432cu: goto label_34432c;
        case 0x344330u: goto label_344330;
        case 0x344334u: goto label_344334;
        case 0x344338u: goto label_344338;
        case 0x34433cu: goto label_34433c;
        case 0x344340u: goto label_344340;
        case 0x344344u: goto label_344344;
        case 0x344348u: goto label_344348;
        case 0x34434cu: goto label_34434c;
        case 0x344350u: goto label_344350;
        case 0x344354u: goto label_344354;
        case 0x344358u: goto label_344358;
        case 0x34435cu: goto label_34435c;
        case 0x344360u: goto label_344360;
        case 0x344364u: goto label_344364;
        case 0x344368u: goto label_344368;
        case 0x34436cu: goto label_34436c;
        case 0x344370u: goto label_344370;
        case 0x344374u: goto label_344374;
        case 0x344378u: goto label_344378;
        case 0x34437cu: goto label_34437c;
        case 0x344380u: goto label_344380;
        case 0x344384u: goto label_344384;
        case 0x344388u: goto label_344388;
        case 0x34438cu: goto label_34438c;
        case 0x344390u: goto label_344390;
        case 0x344394u: goto label_344394;
        case 0x344398u: goto label_344398;
        case 0x34439cu: goto label_34439c;
        default: break;
    }

    ctx->pc = 0x344190u;

label_344190:
    // 0x344190: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x344190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_344194:
    // 0x344194: 0x3c020007  lui         $v0, 0x7
    ctx->pc = 0x344194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7 << 16));
label_344198:
    // 0x344198: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x344198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_34419c:
    // 0x34419c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x34419cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3441a0:
    // 0x3441a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3441a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3441a4:
    // 0x3441a4: 0x34458d98  ori         $a1, $v0, 0x8D98
    ctx->pc = 0x3441a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36248);
label_3441a8:
    // 0x3441a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3441a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3441ac:
    // 0x3441ac: 0xc10ca68  jal         func_4329A0
label_3441b0:
    if (ctx->pc == 0x3441B0u) {
        ctx->pc = 0x3441B0u;
            // 0x3441b0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3441B4u;
        goto label_3441b4;
    }
    ctx->pc = 0x3441ACu;
    SET_GPR_U32(ctx, 31, 0x3441B4u);
    ctx->pc = 0x3441B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3441ACu;
            // 0x3441b0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3441B4u; }
        if (ctx->pc != 0x3441B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3441B4u; }
        if (ctx->pc != 0x3441B4u) { return; }
    }
    ctx->pc = 0x3441B4u;
label_3441b4:
    // 0x3441b4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3441b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3441b8:
    // 0x3441b8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x3441b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_3441bc:
    // 0x3441bc: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x3441bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
label_3441c0:
    // 0x3441c0: 0x246356b0  addiu       $v1, $v1, 0x56B0
    ctx->pc = 0x3441c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22192));
label_3441c4:
    // 0x3441c4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3441c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_3441c8:
    // 0x3441c8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3441c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3441cc:
    // 0x3441cc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3441ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_3441d0:
    // 0x3441d0: 0x8c4289f0  lw          $v0, -0x7610($v0)
    ctx->pc = 0x3441d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_3441d4:
    // 0x3441d4: 0x90420029  lbu         $v0, 0x29($v0)
    ctx->pc = 0x3441d4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 41)));
label_3441d8:
    // 0x3441d8: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
label_3441dc:
    if (ctx->pc == 0x3441DCu) {
        ctx->pc = 0x3441DCu;
            // 0x3441dc: 0x24037000  addiu       $v1, $zero, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28672));
        ctx->pc = 0x3441E0u;
        goto label_3441e0;
    }
    ctx->pc = 0x3441D8u;
    {
        const bool branch_taken_0x3441d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3441d8) {
            ctx->pc = 0x3441DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3441D8u;
            // 0x3441dc: 0x24037000  addiu       $v1, $zero, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28672));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34420Cu;
            goto label_34420c;
        }
    }
    ctx->pc = 0x3441E0u;
label_3441e0:
    // 0x3441e0: 0x24037200  addiu       $v1, $zero, 0x7200
    ctx->pc = 0x3441e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 29184));
label_3441e4:
    // 0x3441e4: 0x24021c00  addiu       $v0, $zero, 0x1C00
    ctx->pc = 0x3441e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7168));
label_3441e8:
    // 0x3441e8: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x3441e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_3441ec:
    // 0x3441ec: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x3441ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_3441f0:
    // 0x3441f0: 0xae020058  sw          $v0, 0x58($s0)
    ctx->pc = 0x3441f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
label_3441f4:
    // 0x3441f4: 0x24630d90  addiu       $v1, $v1, 0xD90
    ctx->pc = 0x3441f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3472));
label_3441f8:
    // 0x3441f8: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x3441f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_3441fc:
    // 0x3441fc: 0x24420ef0  addiu       $v0, $v0, 0xEF0
    ctx->pc = 0x3441fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3824));
label_344200:
    // 0x344200: 0xae030060  sw          $v1, 0x60($s0)
    ctx->pc = 0x344200u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 3));
label_344204:
    // 0x344204: 0x1000000a  b           . + 4 + (0xA << 2)
label_344208:
    if (ctx->pc == 0x344208u) {
        ctx->pc = 0x344208u;
            // 0x344208: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x34420Cu;
        goto label_34420c;
    }
    ctx->pc = 0x344204u;
    {
        const bool branch_taken_0x344204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x344208u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x344204u;
            // 0x344208: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344204) {
            ctx->pc = 0x344230u;
            goto label_344230;
        }
    }
    ctx->pc = 0x34420Cu;
label_34420c:
    // 0x34420c: 0x24022000  addiu       $v0, $zero, 0x2000
    ctx->pc = 0x34420cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
label_344210:
    // 0x344210: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x344210u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_344214:
    // 0x344214: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x344214u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_344218:
    // 0x344218: 0xae020058  sw          $v0, 0x58($s0)
    ctx->pc = 0x344218u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
label_34421c:
    // 0x34421c: 0x24630e40  addiu       $v1, $v1, 0xE40
    ctx->pc = 0x34421cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3648));
label_344220:
    // 0x344220: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x344220u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_344224:
    // 0x344224: 0x24420fa0  addiu       $v0, $v0, 0xFA0
    ctx->pc = 0x344224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4000));
label_344228:
    // 0x344228: 0xae030060  sw          $v1, 0x60($s0)
    ctx->pc = 0x344228u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 3));
label_34422c:
    // 0x34422c: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x34422cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
label_344230:
    // 0x344230: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x344230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_344234:
    // 0x344234: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x344234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_344238:
    // 0x344238: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x344238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_34423c:
    // 0x34423c: 0xae02005c  sw          $v0, 0x5C($s0)
    ctx->pc = 0x34423cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 2));
label_344240:
    // 0x344240: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x344240u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_344244:
    // 0x344244: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x344244u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_344248:
    // 0x344248: 0x320f809  jalr        $t9
label_34424c:
    if (ctx->pc == 0x34424Cu) {
        ctx->pc = 0x34424Cu;
            // 0x34424c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x344250u;
        goto label_344250;
    }
    ctx->pc = 0x344248u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x344250u);
        ctx->pc = 0x34424Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x344248u;
            // 0x34424c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x344250u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x344250u; }
            if (ctx->pc != 0x344250u) { return; }
        }
        }
    }
    ctx->pc = 0x344250u;
label_344250:
    // 0x344250: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x344250u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_344254:
    // 0x344254: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x344254u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_344258:
    // 0x344258: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x344258u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_34425c:
    // 0x34425c: 0x3e00008  jr          $ra
label_344260:
    if (ctx->pc == 0x344260u) {
        ctx->pc = 0x344260u;
            // 0x344260: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x344264u;
        goto label_344264;
    }
    ctx->pc = 0x34425Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x344260u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34425Cu;
            // 0x344260: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x344264u;
label_344264:
    // 0x344264: 0x0  nop
    ctx->pc = 0x344264u;
    // NOP
label_344268:
    // 0x344268: 0x0  nop
    ctx->pc = 0x344268u;
    // NOP
label_34426c:
    // 0x34426c: 0x0  nop
    ctx->pc = 0x34426cu;
    // NOP
label_344270:
    // 0x344270: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x344270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_344274:
    // 0x344274: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x344274u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_344278:
    // 0x344278: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x344278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_34427c:
    // 0x34427c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x34427cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_344280:
    // 0x344280: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x344280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_344284:
    // 0x344284: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x344284u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_344288:
    // 0x344288: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x344288u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_34428c:
    // 0x34428c: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x34428cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_344290:
    // 0x344290: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_344294:
    if (ctx->pc == 0x344294u) {
        ctx->pc = 0x344294u;
            // 0x344294: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x344298u;
        goto label_344298;
    }
    ctx->pc = 0x344290u;
    {
        const bool branch_taken_0x344290 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x344294u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x344290u;
            // 0x344294: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344290) {
            ctx->pc = 0x3442A4u;
            goto label_3442a4;
        }
    }
    ctx->pc = 0x344298u;
label_344298:
    // 0x344298: 0x90630c75  lbu         $v1, 0xC75($v1)
    ctx->pc = 0x344298u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3189)));
label_34429c:
    // 0x34429c: 0x50600039  beql        $v1, $zero, . + 4 + (0x39 << 2)
label_3442a0:
    if (ctx->pc == 0x3442A0u) {
        ctx->pc = 0x3442A0u;
            // 0x3442a0: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x3442A4u;
        goto label_3442a4;
    }
    ctx->pc = 0x34429Cu;
    {
        const bool branch_taken_0x34429c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x34429c) {
            ctx->pc = 0x3442A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34429Cu;
            // 0x3442a0: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x344384u;
            goto label_344384;
        }
    }
    ctx->pc = 0x3442A4u;
label_3442a4:
    // 0x3442a4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3442a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3442a8:
    // 0x3442a8: 0x9e060054  lwu         $a2, 0x54($s0)
    ctx->pc = 0x3442a8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_3442ac:
    // 0x3442ac: 0x9c453ea0  lwu         $a1, 0x3EA0($v0)
    ctx->pc = 0x3442acu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 16032)));
label_3442b0:
    // 0x3442b0: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x3442b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
label_3442b4:
    // 0x3442b4: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x3442b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
label_3442b8:
    // 0x3442b8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x3442b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_3442bc:
    // 0x3442bc: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x3442bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
label_3442c0:
    // 0x3442c0: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x3442c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
label_3442c4:
    // 0x3442c4: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x3442c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_3442c8:
    // 0x3442c8: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x3442c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_3442cc:
    // 0x3442cc: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x3442ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_3442d0:
    // 0x3442d0: 0xdc4557f0  ld          $a1, 0x57F0($v0)
    ctx->pc = 0x3442d0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 22512)));
label_3442d4:
    // 0x3442d4: 0x70041389  pcpyld      $v0, $zero, $a0
    ctx->pc = 0x3442d4u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 4)));
label_3442d8:
    // 0x3442d8: 0xc22025  or          $a0, $a2, $v0
    ctx->pc = 0x3442d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_3442dc:
    // 0x3442dc: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x3442dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_3442e0:
    // 0x3442e0: 0xfc64ce70  sd          $a0, -0x3190($v1)
    ctx->pc = 0x3442e0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 4294954608), GPR_U64(ctx, 4));
label_3442e4:
    // 0x3442e4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3442e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3442e8:
    // 0x3442e8: 0xc0574d8  jal         func_15D360
label_3442ec:
    if (ctx->pc == 0x3442ECu) {
        ctx->pc = 0x3442ECu;
            // 0x3442ec: 0xfc45ce78  sd          $a1, -0x3188($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 4294954616), GPR_U64(ctx, 5));
        ctx->pc = 0x3442F0u;
        goto label_3442f0;
    }
    ctx->pc = 0x3442E8u;
    SET_GPR_U32(ctx, 31, 0x3442F0u);
    ctx->pc = 0x3442ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3442E8u;
            // 0x3442ec: 0xfc45ce78  sd          $a1, -0x3188($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 4294954616), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D360u;
    if (runtime->hasFunction(0x15D360u)) {
        auto targetFn = runtime->lookupFunction(0x15D360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3442F0u; }
        if (ctx->pc != 0x3442F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D360_0x15d360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3442F0u; }
        if (ctx->pc != 0x3442F0u) { return; }
    }
    ctx->pc = 0x3442F0u;
label_3442f0:
    // 0x3442f0: 0x92030058  lbu         $v1, 0x58($s0)
    ctx->pc = 0x3442f0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 88)));
label_3442f4:
    // 0x3442f4: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
label_3442f8:
    if (ctx->pc == 0x3442F8u) {
        ctx->pc = 0x3442FCu;
        goto label_3442fc;
    }
    ctx->pc = 0x3442F4u;
    {
        const bool branch_taken_0x3442f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3442f4) {
            ctx->pc = 0x344380u;
            goto label_344380;
        }
    }
    ctx->pc = 0x3442FCu;
label_3442fc:
    // 0x3442fc: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3442fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_344300:
    // 0x344300: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x344300u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_344304:
    // 0x344304: 0x8c6389f0  lw          $v1, -0x7610($v1)
    ctx->pc = 0x344304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937072)));
label_344308:
    // 0x344308: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x344308u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_34430c:
    // 0x34430c: 0x8c4289e0  lw          $v0, -0x7620($v0)
    ctx->pc = 0x34430cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_344310:
    // 0x344310: 0xc461001c  lwc1        $f1, 0x1C($v1)
    ctx->pc = 0x344310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_344314:
    // 0x344314: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x344314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_344318:
    // 0x344318: 0x8c590008  lw          $t9, 0x8($v0)
    ctx->pc = 0x344318u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_34431c:
    // 0x34431c: 0x24510004  addiu       $s1, $v0, 0x4
    ctx->pc = 0x34431cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_344320:
    // 0x344320: 0x46800d20  cvt.s.w     $f20, $f1
    ctx->pc = 0x344320u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
label_344324:
    // 0x344324: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x344324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_344328:
    // 0x344328: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x344328u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_34432c:
    // 0x34432c: 0x320f809  jalr        $t9
label_344330:
    if (ctx->pc == 0x344330u) {
        ctx->pc = 0x344330u;
            // 0x344330: 0x46800560  cvt.s.w     $f21, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x344334u;
        goto label_344334;
    }
    ctx->pc = 0x34432Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x344334u);
        ctx->pc = 0x344330u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34432Cu;
            // 0x344330: 0x46800560  cvt.s.w     $f21, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x344334u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x344334u; }
            if (ctx->pc != 0x344334u) { return; }
        }
        }
    }
    ctx->pc = 0x344334u;
label_344334:
    // 0x344334: 0x8e390004  lw          $t9, 0x4($s1)
    ctx->pc = 0x344334u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_344338:
    // 0x344338: 0x3c03c080  lui         $v1, 0xC080
    ctx->pc = 0x344338u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49280 << 16));
label_34433c:
    // 0x34433c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x34433cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_344340:
    // 0x344340: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x344340u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_344344:
    // 0x344344: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x344344u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_344348:
    // 0x344348: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x344348u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_34434c:
    // 0x34434c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x34434cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_344350:
    // 0x344350: 0x4600ab86  mov.s       $f14, $f21
    ctx->pc = 0x344350u;
    ctx->f[14] = FPU_MOV_S(ctx->f[21]);
label_344354:
    // 0x344354: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x344354u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
label_344358:
    // 0x344358: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x344358u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_34435c:
    // 0x34435c: 0x44828000  mtc1        $v0, $f16
    ctx->pc = 0x34435cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
label_344360:
    // 0x344360: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x344360u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_344364:
    // 0x344364: 0x320f809  jalr        $t9
label_344368:
    if (ctx->pc == 0x344368u) {
        ctx->pc = 0x344368u;
            // 0x344368: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x34436Cu;
        goto label_34436c;
    }
    ctx->pc = 0x344364u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x34436Cu);
        ctx->pc = 0x344368u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x344364u;
            // 0x344368: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x34436Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x34436Cu; }
            if (ctx->pc != 0x34436Cu) { return; }
        }
        }
    }
    ctx->pc = 0x34436Cu;
label_34436c:
    // 0x34436c: 0x8e390004  lw          $t9, 0x4($s1)
    ctx->pc = 0x34436cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_344370:
    // 0x344370: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x344370u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_344374:
    // 0x344374: 0x320f809  jalr        $t9
label_344378:
    if (ctx->pc == 0x344378u) {
        ctx->pc = 0x344378u;
            // 0x344378: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x34437Cu;
        goto label_34437c;
    }
    ctx->pc = 0x344374u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x34437Cu);
        ctx->pc = 0x344378u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x344374u;
            // 0x344378: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x34437Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x34437Cu; }
            if (ctx->pc != 0x34437Cu) { return; }
        }
        }
    }
    ctx->pc = 0x34437Cu;
label_34437c:
    // 0x34437c: 0xa2000058  sb          $zero, 0x58($s0)
    ctx->pc = 0x34437cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 88), (uint8_t)GPR_U32(ctx, 0));
label_344380:
    // 0x344380: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x344380u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_344384:
    // 0x344384: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x344384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_344388:
    // 0x344388: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x344388u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_34438c:
    // 0x34438c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x34438cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_344390:
    // 0x344390: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x344390u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_344394:
    // 0x344394: 0x3e00008  jr          $ra
label_344398:
    if (ctx->pc == 0x344398u) {
        ctx->pc = 0x344398u;
            // 0x344398: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x34439Cu;
        goto label_34439c;
    }
    ctx->pc = 0x344394u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x344398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x344394u;
            // 0x344398: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x34439Cu;
label_34439c:
    // 0x34439c: 0x0  nop
    ctx->pc = 0x34439cu;
    // NOP
}
