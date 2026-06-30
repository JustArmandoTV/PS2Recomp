#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00154160
// Address: 0x154160 - 0x1543e0
void sub_00154160_0x154160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00154160_0x154160");
#endif

    switch (ctx->pc) {
        case 0x154160u: goto label_154160;
        case 0x154164u: goto label_154164;
        case 0x154168u: goto label_154168;
        case 0x15416cu: goto label_15416c;
        case 0x154170u: goto label_154170;
        case 0x154174u: goto label_154174;
        case 0x154178u: goto label_154178;
        case 0x15417cu: goto label_15417c;
        case 0x154180u: goto label_154180;
        case 0x154184u: goto label_154184;
        case 0x154188u: goto label_154188;
        case 0x15418cu: goto label_15418c;
        case 0x154190u: goto label_154190;
        case 0x154194u: goto label_154194;
        case 0x154198u: goto label_154198;
        case 0x15419cu: goto label_15419c;
        case 0x1541a0u: goto label_1541a0;
        case 0x1541a4u: goto label_1541a4;
        case 0x1541a8u: goto label_1541a8;
        case 0x1541acu: goto label_1541ac;
        case 0x1541b0u: goto label_1541b0;
        case 0x1541b4u: goto label_1541b4;
        case 0x1541b8u: goto label_1541b8;
        case 0x1541bcu: goto label_1541bc;
        case 0x1541c0u: goto label_1541c0;
        case 0x1541c4u: goto label_1541c4;
        case 0x1541c8u: goto label_1541c8;
        case 0x1541ccu: goto label_1541cc;
        case 0x1541d0u: goto label_1541d0;
        case 0x1541d4u: goto label_1541d4;
        case 0x1541d8u: goto label_1541d8;
        case 0x1541dcu: goto label_1541dc;
        case 0x1541e0u: goto label_1541e0;
        case 0x1541e4u: goto label_1541e4;
        case 0x1541e8u: goto label_1541e8;
        case 0x1541ecu: goto label_1541ec;
        case 0x1541f0u: goto label_1541f0;
        case 0x1541f4u: goto label_1541f4;
        case 0x1541f8u: goto label_1541f8;
        case 0x1541fcu: goto label_1541fc;
        case 0x154200u: goto label_154200;
        case 0x154204u: goto label_154204;
        case 0x154208u: goto label_154208;
        case 0x15420cu: goto label_15420c;
        case 0x154210u: goto label_154210;
        case 0x154214u: goto label_154214;
        case 0x154218u: goto label_154218;
        case 0x15421cu: goto label_15421c;
        case 0x154220u: goto label_154220;
        case 0x154224u: goto label_154224;
        case 0x154228u: goto label_154228;
        case 0x15422cu: goto label_15422c;
        case 0x154230u: goto label_154230;
        case 0x154234u: goto label_154234;
        case 0x154238u: goto label_154238;
        case 0x15423cu: goto label_15423c;
        case 0x154240u: goto label_154240;
        case 0x154244u: goto label_154244;
        case 0x154248u: goto label_154248;
        case 0x15424cu: goto label_15424c;
        case 0x154250u: goto label_154250;
        case 0x154254u: goto label_154254;
        case 0x154258u: goto label_154258;
        case 0x15425cu: goto label_15425c;
        case 0x154260u: goto label_154260;
        case 0x154264u: goto label_154264;
        case 0x154268u: goto label_154268;
        case 0x15426cu: goto label_15426c;
        case 0x154270u: goto label_154270;
        case 0x154274u: goto label_154274;
        case 0x154278u: goto label_154278;
        case 0x15427cu: goto label_15427c;
        case 0x154280u: goto label_154280;
        case 0x154284u: goto label_154284;
        case 0x154288u: goto label_154288;
        case 0x15428cu: goto label_15428c;
        case 0x154290u: goto label_154290;
        case 0x154294u: goto label_154294;
        case 0x154298u: goto label_154298;
        case 0x15429cu: goto label_15429c;
        case 0x1542a0u: goto label_1542a0;
        case 0x1542a4u: goto label_1542a4;
        case 0x1542a8u: goto label_1542a8;
        case 0x1542acu: goto label_1542ac;
        case 0x1542b0u: goto label_1542b0;
        case 0x1542b4u: goto label_1542b4;
        case 0x1542b8u: goto label_1542b8;
        case 0x1542bcu: goto label_1542bc;
        case 0x1542c0u: goto label_1542c0;
        case 0x1542c4u: goto label_1542c4;
        case 0x1542c8u: goto label_1542c8;
        case 0x1542ccu: goto label_1542cc;
        case 0x1542d0u: goto label_1542d0;
        case 0x1542d4u: goto label_1542d4;
        case 0x1542d8u: goto label_1542d8;
        case 0x1542dcu: goto label_1542dc;
        case 0x1542e0u: goto label_1542e0;
        case 0x1542e4u: goto label_1542e4;
        case 0x1542e8u: goto label_1542e8;
        case 0x1542ecu: goto label_1542ec;
        case 0x1542f0u: goto label_1542f0;
        case 0x1542f4u: goto label_1542f4;
        case 0x1542f8u: goto label_1542f8;
        case 0x1542fcu: goto label_1542fc;
        case 0x154300u: goto label_154300;
        case 0x154304u: goto label_154304;
        case 0x154308u: goto label_154308;
        case 0x15430cu: goto label_15430c;
        case 0x154310u: goto label_154310;
        case 0x154314u: goto label_154314;
        case 0x154318u: goto label_154318;
        case 0x15431cu: goto label_15431c;
        case 0x154320u: goto label_154320;
        case 0x154324u: goto label_154324;
        case 0x154328u: goto label_154328;
        case 0x15432cu: goto label_15432c;
        case 0x154330u: goto label_154330;
        case 0x154334u: goto label_154334;
        case 0x154338u: goto label_154338;
        case 0x15433cu: goto label_15433c;
        case 0x154340u: goto label_154340;
        case 0x154344u: goto label_154344;
        case 0x154348u: goto label_154348;
        case 0x15434cu: goto label_15434c;
        case 0x154350u: goto label_154350;
        case 0x154354u: goto label_154354;
        case 0x154358u: goto label_154358;
        case 0x15435cu: goto label_15435c;
        case 0x154360u: goto label_154360;
        case 0x154364u: goto label_154364;
        case 0x154368u: goto label_154368;
        case 0x15436cu: goto label_15436c;
        case 0x154370u: goto label_154370;
        case 0x154374u: goto label_154374;
        case 0x154378u: goto label_154378;
        case 0x15437cu: goto label_15437c;
        case 0x154380u: goto label_154380;
        case 0x154384u: goto label_154384;
        case 0x154388u: goto label_154388;
        case 0x15438cu: goto label_15438c;
        case 0x154390u: goto label_154390;
        case 0x154394u: goto label_154394;
        case 0x154398u: goto label_154398;
        case 0x15439cu: goto label_15439c;
        case 0x1543a0u: goto label_1543a0;
        case 0x1543a4u: goto label_1543a4;
        case 0x1543a8u: goto label_1543a8;
        case 0x1543acu: goto label_1543ac;
        case 0x1543b0u: goto label_1543b0;
        case 0x1543b4u: goto label_1543b4;
        case 0x1543b8u: goto label_1543b8;
        case 0x1543bcu: goto label_1543bc;
        case 0x1543c0u: goto label_1543c0;
        case 0x1543c4u: goto label_1543c4;
        case 0x1543c8u: goto label_1543c8;
        case 0x1543ccu: goto label_1543cc;
        case 0x1543d0u: goto label_1543d0;
        case 0x1543d4u: goto label_1543d4;
        case 0x1543d8u: goto label_1543d8;
        case 0x1543dcu: goto label_1543dc;
        default: break;
    }

    ctx->pc = 0x154160u;

label_154160:
    // 0x154160: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x154160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_154164:
    // 0x154164: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x154164u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_154168:
    // 0x154168: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x154168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_15416c:
    // 0x15416c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x15416cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_154170:
    // 0x154170: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x154170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_154174:
    // 0x154174: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x154174u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_154178:
    // 0x154178: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x154178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_15417c:
    // 0x15417c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x15417cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_154180:
    // 0x154180: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x154180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_154184:
    // 0x154184: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x154184u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
label_154188:
    // 0x154188: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x154188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_15418c:
    // 0x15418c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x15418cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_154190:
    // 0x154190: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x154190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_154194:
    // 0x154194: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x154194u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_154198:
    // 0x154198: 0x8cb00008  lw          $s0, 0x8($a1)
    ctx->pc = 0x154198u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_15419c:
    // 0x15419c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x15419cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1541a0:
    // 0x1541a0: 0xac80579c  sw          $zero, 0x579C($a0)
    ctx->pc = 0x1541a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 22428), GPR_U32(ctx, 0));
label_1541a4:
    // 0x1541a4: 0xac605774  sw          $zero, 0x5774($v1)
    ctx->pc = 0x1541a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 22388), GPR_U32(ctx, 0));
label_1541a8:
    // 0x1541a8: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x1541a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1541ac:
    // 0x1541ac: 0xc3082a  slt         $at, $a2, $v1
    ctx->pc = 0x1541acu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1541b0:
    // 0x1541b0: 0x10200081  beqz        $at, . + 4 + (0x81 << 2)
label_1541b4:
    if (ctx->pc == 0x1541B4u) {
        ctx->pc = 0x1541B4u;
            // 0x1541b4: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1541B8u;
        goto label_1541b8;
    }
    ctx->pc = 0x1541B0u;
    {
        const bool branch_taken_0x1541b0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1541B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1541B0u;
            // 0x1541b4: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1541b0) {
            ctx->pc = 0x1543B8u;
            goto label_1543b8;
        }
    }
    ctx->pc = 0x1541B8u;
label_1541b8:
    // 0x1541b8: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x1541b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1541bc:
    // 0x1541bc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1541bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_1541c0:
    // 0x1541c0: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
label_1541c4:
    if (ctx->pc == 0x1541C4u) {
        ctx->pc = 0x1541C4u;
            // 0x1541c4: 0xac435770  sw          $v1, 0x5770($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 22384), GPR_U32(ctx, 3));
        ctx->pc = 0x1541C8u;
        goto label_1541c8;
    }
    ctx->pc = 0x1541C0u;
    {
        const bool branch_taken_0x1541c0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1541C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1541C0u;
            // 0x1541c4: 0xac435770  sw          $v1, 0x5770($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 22384), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1541c0) {
            ctx->pc = 0x1541D8u;
            goto label_1541d8;
        }
    }
    ctx->pc = 0x1541C8u;
label_1541c8:
    // 0x1541c8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1541c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1541cc:
    // 0x1541cc: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1541ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1541d0:
    // 0x1541d0: 0x8c550000  lw          $s5, 0x0($v0)
    ctx->pc = 0x1541d0u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1541d4:
    // 0x1541d4: 0x0  nop
    ctx->pc = 0x1541d4u;
    // NOP
label_1541d8:
    // 0x1541d8: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x1541d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1541dc:
    // 0x1541dc: 0xc05001c  jal         func_140070
label_1541e0:
    if (ctx->pc == 0x1541E0u) {
        ctx->pc = 0x1541E0u;
            // 0x1541e0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1541E4u;
        goto label_1541e4;
    }
    ctx->pc = 0x1541DCu;
    SET_GPR_U32(ctx, 31, 0x1541E4u);
    ctx->pc = 0x1541E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1541DCu;
            // 0x1541e0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140070u;
    if (runtime->hasFunction(0x140070u)) {
        auto targetFn = runtime->lookupFunction(0x140070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1541E4u; }
        if (ctx->pc != 0x1541E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00140070_0x140070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1541E4u; }
        if (ctx->pc != 0x1541E4u) { return; }
    }
    ctx->pc = 0x1541E4u;
label_1541e4:
    // 0x1541e4: 0x14400064  bnez        $v0, . + 4 + (0x64 << 2)
label_1541e8:
    if (ctx->pc == 0x1541E8u) {
        ctx->pc = 0x1541ECu;
        goto label_1541ec;
    }
    ctx->pc = 0x1541E4u;
    {
        const bool branch_taken_0x1541e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1541e4) {
            ctx->pc = 0x154378u;
            goto label_154378;
        }
    }
    ctx->pc = 0x1541ECu;
label_1541ec:
    // 0x1541ec: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1541ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_1541f0:
    // 0x1541f0: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x1541f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_1541f4:
    // 0x1541f4: 0x8c445760  lw          $a0, 0x5760($v0)
    ctx->pc = 0x1541f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22368)));
label_1541f8:
    // 0x1541f8: 0x3c08006c  lui         $t0, 0x6C
    ctx->pc = 0x1541f8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)108 << 16));
label_1541fc:
    // 0x1541fc: 0x3c06006c  lui         $a2, 0x6C
    ctx->pc = 0x1541fcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)108 << 16));
label_154200:
    // 0x154200: 0x3c07006c  lui         $a3, 0x6C
    ctx->pc = 0x154200u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)108 << 16));
label_154204:
    // 0x154204: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x154204u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
label_154208:
    // 0x154208: 0xac645764  sw          $a0, 0x5764($v1)
    ctx->pc = 0x154208u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 22372), GPR_U32(ctx, 4));
label_15420c:
    // 0x15420c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x15420cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_154210:
    // 0x154210: 0x8e0a0018  lw          $t2, 0x18($s0)
    ctx->pc = 0x154210u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_154214:
    // 0x154214: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x154214u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
label_154218:
    // 0x154218: 0x8c495768  lw          $t1, 0x5768($v0)
    ctx->pc = 0x154218u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22376)));
label_15421c:
    // 0x15421c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x15421cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_154220:
    // 0x154220: 0x24845760  addiu       $a0, $a0, 0x5760
    ctx->pc = 0x154220u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22368));
label_154224:
    // 0x154224: 0xad0a5760  sw          $t2, 0x5760($t0)
    ctx->pc = 0x154224u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 22368), GPR_U32(ctx, 10));
label_154228:
    // 0x154228: 0x8e880014  lw          $t0, 0x14($s4)
    ctx->pc = 0x154228u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_15422c:
    // 0x15422c: 0xa50c0  sll         $t2, $t2, 3
    ctx->pc = 0x15422cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
label_154230:
    // 0x154230: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x154230u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_154234:
    // 0x154234: 0xacc9576c  sw          $t1, 0x576C($a2)
    ctx->pc = 0x154234u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 22380), GPR_U32(ctx, 9));
label_154238:
    // 0x154238: 0x10a3021  addu        $a2, $t0, $t2
    ctx->pc = 0x154238u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
label_15423c:
    // 0x15423c: 0xace6577c  sw          $a2, 0x577C($a3)
    ctx->pc = 0x15423cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 22396), GPR_U32(ctx, 6));
label_154240:
    // 0x154240: 0x8e06001c  lw          $a2, 0x1C($s0)
    ctx->pc = 0x154240u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_154244:
    // 0x154244: 0xaca65768  sw          $a2, 0x5768($a1)
    ctx->pc = 0x154244u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 22376), GPR_U32(ctx, 6));
label_154248:
    // 0x154248: 0x8e85001c  lw          $a1, 0x1C($s4)
    ctx->pc = 0x154248u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
label_15424c:
    // 0x15424c: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x15424cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_154250:
    // 0x154250: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x154250u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_154254:
    // 0x154254: 0xac405798  sw          $zero, 0x5798($v0)
    ctx->pc = 0x154254u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22424), GPR_U32(ctx, 0));
label_154258:
    // 0x154258: 0xc05055c  jal         func_141570
label_15425c:
    if (ctx->pc == 0x15425Cu) {
        ctx->pc = 0x15425Cu;
            // 0x15425c: 0xac655780  sw          $a1, 0x5780($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 22400), GPR_U32(ctx, 5));
        ctx->pc = 0x154260u;
        goto label_154260;
    }
    ctx->pc = 0x154258u;
    SET_GPR_U32(ctx, 31, 0x154260u);
    ctx->pc = 0x15425Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x154258u;
            // 0x15425c: 0xac655780  sw          $a1, 0x5780($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 22400), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141570u;
    if (runtime->hasFunction(0x141570u)) {
        auto targetFn = runtime->lookupFunction(0x141570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154260u; }
        if (ctx->pc != 0x154260u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141570_0x141570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154260u; }
        if (ctx->pc != 0x154260u) { return; }
    }
    ctx->pc = 0x154260u;
label_154260:
    // 0x154260: 0x10400045  beqz        $v0, . + 4 + (0x45 << 2)
label_154264:
    if (ctx->pc == 0x154264u) {
        ctx->pc = 0x154268u;
        goto label_154268;
    }
    ctx->pc = 0x154260u;
    {
        const bool branch_taken_0x154260 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x154260) {
            ctx->pc = 0x154378u;
            goto label_154378;
        }
    }
    ctx->pc = 0x154268u;
label_154268:
    // 0x154268: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x154268u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_15426c:
    // 0x15426c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x15426cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_154270:
    // 0x154270: 0x8c445828  lw          $a0, 0x5828($v0)
    ctx->pc = 0x154270u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22568)));
label_154274:
    // 0x154274: 0x8c655824  lw          $a1, 0x5824($v1)
    ctx->pc = 0x154274u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 22564)));
label_154278:
    // 0x154278: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x154278u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_15427c:
    // 0x15427c: 0x8c4254d8  lw          $v0, 0x54D8($v0)
    ctx->pc = 0x15427cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21720)));
label_154280:
    // 0x154280: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x154280u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_154284:
    // 0x154284: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x154284u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
label_154288:
    // 0x154288: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_15428c:
    if (ctx->pc == 0x15428Cu) {
        ctx->pc = 0x15428Cu;
            // 0x15428c: 0xac645824  sw          $a0, 0x5824($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 22564), GPR_U32(ctx, 4));
        ctx->pc = 0x154290u;
        goto label_154290;
    }
    ctx->pc = 0x154288u;
    {
        const bool branch_taken_0x154288 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15428Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154288u;
            // 0x15428c: 0xac645824  sw          $a0, 0x5824($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 22564), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154288) {
            ctx->pc = 0x1542A0u;
            goto label_1542a0;
        }
    }
    ctx->pc = 0x154290u;
label_154290:
    // 0x154290: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x154290u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
label_154294:
    // 0x154294: 0xc04fe9c  jal         func_13FA70
label_154298:
    if (ctx->pc == 0x154298u) {
        ctx->pc = 0x154298u;
            // 0x154298: 0x24847b90  addiu       $a0, $a0, 0x7B90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31632));
        ctx->pc = 0x15429Cu;
        goto label_15429c;
    }
    ctx->pc = 0x154294u;
    SET_GPR_U32(ctx, 31, 0x15429Cu);
    ctx->pc = 0x154298u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x154294u;
            // 0x154298: 0x24847b90  addiu       $a0, $a0, 0x7B90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31632));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13FA70u;
    if (runtime->hasFunction(0x13FA70u)) {
        auto targetFn = runtime->lookupFunction(0x13FA70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15429Cu; }
        if (ctx->pc != 0x15429Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013FA70_0x13fa70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15429Cu; }
        if (ctx->pc != 0x15429Cu) { return; }
    }
    ctx->pc = 0x15429Cu;
label_15429c:
    // 0x15429c: 0x0  nop
    ctx->pc = 0x15429cu;
    // NOP
label_1542a0:
    // 0x1542a0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1542a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_1542a4:
    // 0x1542a4: 0x8c425828  lw          $v0, 0x5828($v0)
    ctx->pc = 0x1542a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22568)));
label_1542a8:
    // 0x1542a8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1542a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1542ac:
    // 0x1542ac: 0x3043001f  andi        $v1, $v0, 0x1F
    ctx->pc = 0x1542acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
label_1542b0:
    // 0x1542b0: 0x1065001d  beq         $v1, $a1, . + 4 + (0x1D << 2)
label_1542b4:
    if (ctx->pc == 0x1542B4u) {
        ctx->pc = 0x1542B8u;
        goto label_1542b8;
    }
    ctx->pc = 0x1542B0u;
    {
        const bool branch_taken_0x1542b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x1542b0) {
            ctx->pc = 0x154328u;
            goto label_154328;
        }
    }
    ctx->pc = 0x1542B8u;
label_1542b8:
    // 0x1542b8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1542b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1542bc:
    // 0x1542bc: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
label_1542c0:
    if (ctx->pc == 0x1542C0u) {
        ctx->pc = 0x1542C4u;
        goto label_1542c4;
    }
    ctx->pc = 0x1542BCu;
    {
        const bool branch_taken_0x1542bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1542bc) {
            ctx->pc = 0x154310u;
            goto label_154310;
        }
    }
    ctx->pc = 0x1542C4u;
label_1542c4:
    // 0x1542c4: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1542c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1542c8:
    // 0x1542c8: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
label_1542cc:
    if (ctx->pc == 0x1542CCu) {
        ctx->pc = 0x1542D0u;
        goto label_1542d0;
    }
    ctx->pc = 0x1542C8u;
    {
        const bool branch_taken_0x1542c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1542c8) {
            ctx->pc = 0x154300u;
            goto label_154300;
        }
    }
    ctx->pc = 0x1542D0u;
label_1542d0:
    // 0x1542d0: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1542d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1542d4:
    // 0x1542d4: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_1542d8:
    if (ctx->pc == 0x1542D8u) {
        ctx->pc = 0x1542DCu;
        goto label_1542dc;
    }
    ctx->pc = 0x1542D4u;
    {
        const bool branch_taken_0x1542d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1542d4) {
            ctx->pc = 0x1542E8u;
            goto label_1542e8;
        }
    }
    ctx->pc = 0x1542DCu;
label_1542dc:
    // 0x1542dc: 0x10000016  b           . + 4 + (0x16 << 2)
label_1542e0:
    if (ctx->pc == 0x1542E0u) {
        ctx->pc = 0x1542E4u;
        goto label_1542e4;
    }
    ctx->pc = 0x1542DCu;
    {
        const bool branch_taken_0x1542dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1542dc) {
            ctx->pc = 0x154338u;
            goto label_154338;
        }
    }
    ctx->pc = 0x1542E4u;
label_1542e4:
    // 0x1542e4: 0x0  nop
    ctx->pc = 0x1542e4u;
    // NOP
label_1542e8:
    // 0x1542e8: 0x8f828018  lw          $v0, -0x7FE8($gp)
    ctx->pc = 0x1542e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934552)));
label_1542ec:
    // 0x1542ec: 0x40f809  jalr        $v0
label_1542f0:
    if (ctx->pc == 0x1542F0u) {
        ctx->pc = 0x1542F0u;
            // 0x1542f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1542F4u;
        goto label_1542f4;
    }
    ctx->pc = 0x1542ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1542F4u);
        ctx->pc = 0x1542F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1542ECu;
            // 0x1542f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1542F4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1542F4u; }
            if (ctx->pc != 0x1542F4u) { return; }
        }
        }
    }
    ctx->pc = 0x1542F4u;
label_1542f4:
    // 0x1542f4: 0x10000010  b           . + 4 + (0x10 << 2)
label_1542f8:
    if (ctx->pc == 0x1542F8u) {
        ctx->pc = 0x1542FCu;
        goto label_1542fc;
    }
    ctx->pc = 0x1542F4u;
    {
        const bool branch_taken_0x1542f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1542f4) {
            ctx->pc = 0x154338u;
            goto label_154338;
        }
    }
    ctx->pc = 0x1542FCu;
label_1542fc:
    // 0x1542fc: 0x0  nop
    ctx->pc = 0x1542fcu;
    // NOP
label_154300:
    // 0x154300: 0xc04e550  jal         func_139540
label_154304:
    if (ctx->pc == 0x154304u) {
        ctx->pc = 0x154304u;
            // 0x154304: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x154308u;
        goto label_154308;
    }
    ctx->pc = 0x154300u;
    SET_GPR_U32(ctx, 31, 0x154308u);
    ctx->pc = 0x154304u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x154300u;
            // 0x154304: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139540u;
    if (runtime->hasFunction(0x139540u)) {
        auto targetFn = runtime->lookupFunction(0x139540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154308u; }
        if (ctx->pc != 0x154308u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139540_0x139540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154308u; }
        if (ctx->pc != 0x154308u) { return; }
    }
    ctx->pc = 0x154308u;
label_154308:
    // 0x154308: 0x1000000b  b           . + 4 + (0xB << 2)
label_15430c:
    if (ctx->pc == 0x15430Cu) {
        ctx->pc = 0x154310u;
        goto label_154310;
    }
    ctx->pc = 0x154308u;
    {
        const bool branch_taken_0x154308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x154308) {
            ctx->pc = 0x154338u;
            goto label_154338;
        }
    }
    ctx->pc = 0x154310u;
label_154310:
    // 0x154310: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x154310u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_154314:
    // 0x154314: 0x8f828018  lw          $v0, -0x7FE8($gp)
    ctx->pc = 0x154314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934552)));
label_154318:
    // 0x154318: 0x40f809  jalr        $v0
label_15431c:
    if (ctx->pc == 0x15431Cu) {
        ctx->pc = 0x15431Cu;
            // 0x15431c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x154320u;
        goto label_154320;
    }
    ctx->pc = 0x154318u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x154320u);
        ctx->pc = 0x15431Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154318u;
            // 0x15431c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x154320u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x154320u; }
            if (ctx->pc != 0x154320u) { return; }
        }
        }
    }
    ctx->pc = 0x154320u;
label_154320:
    // 0x154320: 0x10000005  b           . + 4 + (0x5 << 2)
label_154324:
    if (ctx->pc == 0x154324u) {
        ctx->pc = 0x154328u;
        goto label_154328;
    }
    ctx->pc = 0x154320u;
    {
        const bool branch_taken_0x154320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x154320) {
            ctx->pc = 0x154338u;
            goto label_154338;
        }
    }
    ctx->pc = 0x154328u;
label_154328:
    // 0x154328: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x154328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15432c:
    // 0x15432c: 0xc04e550  jal         func_139540
label_154330:
    if (ctx->pc == 0x154330u) {
        ctx->pc = 0x154330u;
            // 0x154330: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x154334u;
        goto label_154334;
    }
    ctx->pc = 0x15432Cu;
    SET_GPR_U32(ctx, 31, 0x154334u);
    ctx->pc = 0x154330u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15432Cu;
            // 0x154330: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139540u;
    if (runtime->hasFunction(0x139540u)) {
        auto targetFn = runtime->lookupFunction(0x139540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154334u; }
        if (ctx->pc != 0x154334u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139540_0x139540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154334u; }
        if (ctx->pc != 0x154334u) { return; }
    }
    ctx->pc = 0x154334u;
label_154334:
    // 0x154334: 0x0  nop
    ctx->pc = 0x154334u;
    // NOP
label_154338:
    // 0x154338: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x154338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_15433c:
    // 0x15433c: 0x8c445780  lw          $a0, 0x5780($v0)
    ctx->pc = 0x15433cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22400)));
label_154340:
    // 0x154340: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x154340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_154344:
    // 0x154344: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x154344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
label_154348:
    // 0x154348: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x154348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_15434c:
    // 0x15434c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_154350:
    if (ctx->pc == 0x154350u) {
        ctx->pc = 0x154354u;
        goto label_154354;
    }
    ctx->pc = 0x15434Cu;
    {
        const bool branch_taken_0x15434c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15434c) {
            ctx->pc = 0x154370u;
            goto label_154370;
        }
    }
    ctx->pc = 0x154354u;
label_154354:
    // 0x154354: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x154354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_154358:
    // 0x154358: 0x8e820024  lw          $v0, 0x24($s4)
    ctx->pc = 0x154358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_15435c:
    // 0x15435c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x15435cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_154360:
    // 0x154360: 0xc054484  jal         func_151210
label_154364:
    if (ctx->pc == 0x154364u) {
        ctx->pc = 0x154364u;
            // 0x154364: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x154368u;
        goto label_154368;
    }
    ctx->pc = 0x154360u;
    SET_GPR_U32(ctx, 31, 0x154368u);
    ctx->pc = 0x154364u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x154360u;
            // 0x154364: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151210u;
    if (runtime->hasFunction(0x151210u)) {
        auto targetFn = runtime->lookupFunction(0x151210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154368u; }
        if (ctx->pc != 0x154368u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00151210_0x151210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154368u; }
        if (ctx->pc != 0x154368u) { return; }
    }
    ctx->pc = 0x154368u;
label_154368:
    // 0x154368: 0x10000003  b           . + 4 + (0x3 << 2)
label_15436c:
    if (ctx->pc == 0x15436Cu) {
        ctx->pc = 0x154370u;
        goto label_154370;
    }
    ctx->pc = 0x154368u;
    {
        const bool branch_taken_0x154368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x154368) {
            ctx->pc = 0x154378u;
            goto label_154378;
        }
    }
    ctx->pc = 0x154370u;
label_154370:
    // 0x154370: 0xc04fdf4  jal         func_13F7D0
label_154374:
    if (ctx->pc == 0x154374u) {
        ctx->pc = 0x154378u;
        goto label_154378;
    }
    ctx->pc = 0x154370u;
    SET_GPR_U32(ctx, 31, 0x154378u);
    ctx->pc = 0x13F7D0u;
    if (runtime->hasFunction(0x13F7D0u)) {
        auto targetFn = runtime->lookupFunction(0x13F7D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154378u; }
        if (ctx->pc != 0x154378u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013F7D0_0x13f7d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154378u; }
        if (ctx->pc != 0x154378u) { return; }
    }
    ctx->pc = 0x154378u;
label_154378:
    // 0x154378: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x154378u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_15437c:
    // 0x15437c: 0x8c63579c  lw          $v1, 0x579C($v1)
    ctx->pc = 0x15437cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 22428)));
label_154380:
    // 0x154380: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_154384:
    if (ctx->pc == 0x154384u) {
        ctx->pc = 0x154388u;
        goto label_154388;
    }
    ctx->pc = 0x154380u;
    {
        const bool branch_taken_0x154380 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x154380) {
            ctx->pc = 0x1543A0u;
            goto label_1543a0;
        }
    }
    ctx->pc = 0x154388u;
label_154388:
    // 0x154388: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x154388u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
label_15438c:
    // 0x15438c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x15438cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_154390:
    // 0x154390: 0x8c845774  lw          $a0, 0x5774($a0)
    ctx->pc = 0x154390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 22388)));
label_154394:
    // 0x154394: 0x26100024  addiu       $s0, $s0, 0x24
    ctx->pc = 0x154394u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
label_154398:
    // 0x154398: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x154398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_15439c:
    // 0x15439c: 0xac645774  sw          $a0, 0x5774($v1)
    ctx->pc = 0x15439cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 22388), GPR_U32(ctx, 4));
label_1543a0:
    // 0x1543a0: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x1543a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_1543a4:
    // 0x1543a4: 0x8c645774  lw          $a0, 0x5774($v1)
    ctx->pc = 0x1543a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 22388)));
label_1543a8:
    // 0x1543a8: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x1543a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_1543ac:
    // 0x1543ac: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x1543acu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1543b0:
    // 0x1543b0: 0x5460ff82  bnel        $v1, $zero, . + 4 + (-0x7E << 2)
label_1543b4:
    if (ctx->pc == 0x1543B4u) {
        ctx->pc = 0x1543B4u;
            // 0x1543b4: 0x8e030010  lw          $v1, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->pc = 0x1543B8u;
        goto label_1543b8;
    }
    ctx->pc = 0x1543B0u;
    {
        const bool branch_taken_0x1543b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1543b0) {
            ctx->pc = 0x1543B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1543B0u;
            // 0x1543b4: 0x8e030010  lw          $v1, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1541BCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1541bc;
        }
    }
    ctx->pc = 0x1543B8u;
label_1543b8:
    // 0x1543b8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1543b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1543bc:
    // 0x1543bc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1543bcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1543c0:
    // 0x1543c0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1543c0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1543c4:
    // 0x1543c4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1543c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1543c8:
    // 0x1543c8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1543c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1543cc:
    // 0x1543cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1543ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1543d0:
    // 0x1543d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1543d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1543d4:
    // 0x1543d4: 0x3e00008  jr          $ra
label_1543d8:
    if (ctx->pc == 0x1543D8u) {
        ctx->pc = 0x1543D8u;
            // 0x1543d8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x1543DCu;
        goto label_1543dc;
    }
    ctx->pc = 0x1543D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1543D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1543D4u;
            // 0x1543d8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1543DCu;
label_1543dc:
    // 0x1543dc: 0x0  nop
    ctx->pc = 0x1543dcu;
    // NOP
}
