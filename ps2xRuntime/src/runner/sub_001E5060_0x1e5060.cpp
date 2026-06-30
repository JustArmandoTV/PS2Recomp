#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E5060
// Address: 0x1e5060 - 0x1e5370
void sub_001E5060_0x1e5060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E5060_0x1e5060");
#endif

    switch (ctx->pc) {
        case 0x1e5060u: goto label_1e5060;
        case 0x1e5064u: goto label_1e5064;
        case 0x1e5068u: goto label_1e5068;
        case 0x1e506cu: goto label_1e506c;
        case 0x1e5070u: goto label_1e5070;
        case 0x1e5074u: goto label_1e5074;
        case 0x1e5078u: goto label_1e5078;
        case 0x1e507cu: goto label_1e507c;
        case 0x1e5080u: goto label_1e5080;
        case 0x1e5084u: goto label_1e5084;
        case 0x1e5088u: goto label_1e5088;
        case 0x1e508cu: goto label_1e508c;
        case 0x1e5090u: goto label_1e5090;
        case 0x1e5094u: goto label_1e5094;
        case 0x1e5098u: goto label_1e5098;
        case 0x1e509cu: goto label_1e509c;
        case 0x1e50a0u: goto label_1e50a0;
        case 0x1e50a4u: goto label_1e50a4;
        case 0x1e50a8u: goto label_1e50a8;
        case 0x1e50acu: goto label_1e50ac;
        case 0x1e50b0u: goto label_1e50b0;
        case 0x1e50b4u: goto label_1e50b4;
        case 0x1e50b8u: goto label_1e50b8;
        case 0x1e50bcu: goto label_1e50bc;
        case 0x1e50c0u: goto label_1e50c0;
        case 0x1e50c4u: goto label_1e50c4;
        case 0x1e50c8u: goto label_1e50c8;
        case 0x1e50ccu: goto label_1e50cc;
        case 0x1e50d0u: goto label_1e50d0;
        case 0x1e50d4u: goto label_1e50d4;
        case 0x1e50d8u: goto label_1e50d8;
        case 0x1e50dcu: goto label_1e50dc;
        case 0x1e50e0u: goto label_1e50e0;
        case 0x1e50e4u: goto label_1e50e4;
        case 0x1e50e8u: goto label_1e50e8;
        case 0x1e50ecu: goto label_1e50ec;
        case 0x1e50f0u: goto label_1e50f0;
        case 0x1e50f4u: goto label_1e50f4;
        case 0x1e50f8u: goto label_1e50f8;
        case 0x1e50fcu: goto label_1e50fc;
        case 0x1e5100u: goto label_1e5100;
        case 0x1e5104u: goto label_1e5104;
        case 0x1e5108u: goto label_1e5108;
        case 0x1e510cu: goto label_1e510c;
        case 0x1e5110u: goto label_1e5110;
        case 0x1e5114u: goto label_1e5114;
        case 0x1e5118u: goto label_1e5118;
        case 0x1e511cu: goto label_1e511c;
        case 0x1e5120u: goto label_1e5120;
        case 0x1e5124u: goto label_1e5124;
        case 0x1e5128u: goto label_1e5128;
        case 0x1e512cu: goto label_1e512c;
        case 0x1e5130u: goto label_1e5130;
        case 0x1e5134u: goto label_1e5134;
        case 0x1e5138u: goto label_1e5138;
        case 0x1e513cu: goto label_1e513c;
        case 0x1e5140u: goto label_1e5140;
        case 0x1e5144u: goto label_1e5144;
        case 0x1e5148u: goto label_1e5148;
        case 0x1e514cu: goto label_1e514c;
        case 0x1e5150u: goto label_1e5150;
        case 0x1e5154u: goto label_1e5154;
        case 0x1e5158u: goto label_1e5158;
        case 0x1e515cu: goto label_1e515c;
        case 0x1e5160u: goto label_1e5160;
        case 0x1e5164u: goto label_1e5164;
        case 0x1e5168u: goto label_1e5168;
        case 0x1e516cu: goto label_1e516c;
        case 0x1e5170u: goto label_1e5170;
        case 0x1e5174u: goto label_1e5174;
        case 0x1e5178u: goto label_1e5178;
        case 0x1e517cu: goto label_1e517c;
        case 0x1e5180u: goto label_1e5180;
        case 0x1e5184u: goto label_1e5184;
        case 0x1e5188u: goto label_1e5188;
        case 0x1e518cu: goto label_1e518c;
        case 0x1e5190u: goto label_1e5190;
        case 0x1e5194u: goto label_1e5194;
        case 0x1e5198u: goto label_1e5198;
        case 0x1e519cu: goto label_1e519c;
        case 0x1e51a0u: goto label_1e51a0;
        case 0x1e51a4u: goto label_1e51a4;
        case 0x1e51a8u: goto label_1e51a8;
        case 0x1e51acu: goto label_1e51ac;
        case 0x1e51b0u: goto label_1e51b0;
        case 0x1e51b4u: goto label_1e51b4;
        case 0x1e51b8u: goto label_1e51b8;
        case 0x1e51bcu: goto label_1e51bc;
        case 0x1e51c0u: goto label_1e51c0;
        case 0x1e51c4u: goto label_1e51c4;
        case 0x1e51c8u: goto label_1e51c8;
        case 0x1e51ccu: goto label_1e51cc;
        case 0x1e51d0u: goto label_1e51d0;
        case 0x1e51d4u: goto label_1e51d4;
        case 0x1e51d8u: goto label_1e51d8;
        case 0x1e51dcu: goto label_1e51dc;
        case 0x1e51e0u: goto label_1e51e0;
        case 0x1e51e4u: goto label_1e51e4;
        case 0x1e51e8u: goto label_1e51e8;
        case 0x1e51ecu: goto label_1e51ec;
        case 0x1e51f0u: goto label_1e51f0;
        case 0x1e51f4u: goto label_1e51f4;
        case 0x1e51f8u: goto label_1e51f8;
        case 0x1e51fcu: goto label_1e51fc;
        case 0x1e5200u: goto label_1e5200;
        case 0x1e5204u: goto label_1e5204;
        case 0x1e5208u: goto label_1e5208;
        case 0x1e520cu: goto label_1e520c;
        case 0x1e5210u: goto label_1e5210;
        case 0x1e5214u: goto label_1e5214;
        case 0x1e5218u: goto label_1e5218;
        case 0x1e521cu: goto label_1e521c;
        case 0x1e5220u: goto label_1e5220;
        case 0x1e5224u: goto label_1e5224;
        case 0x1e5228u: goto label_1e5228;
        case 0x1e522cu: goto label_1e522c;
        case 0x1e5230u: goto label_1e5230;
        case 0x1e5234u: goto label_1e5234;
        case 0x1e5238u: goto label_1e5238;
        case 0x1e523cu: goto label_1e523c;
        case 0x1e5240u: goto label_1e5240;
        case 0x1e5244u: goto label_1e5244;
        case 0x1e5248u: goto label_1e5248;
        case 0x1e524cu: goto label_1e524c;
        case 0x1e5250u: goto label_1e5250;
        case 0x1e5254u: goto label_1e5254;
        case 0x1e5258u: goto label_1e5258;
        case 0x1e525cu: goto label_1e525c;
        case 0x1e5260u: goto label_1e5260;
        case 0x1e5264u: goto label_1e5264;
        case 0x1e5268u: goto label_1e5268;
        case 0x1e526cu: goto label_1e526c;
        case 0x1e5270u: goto label_1e5270;
        case 0x1e5274u: goto label_1e5274;
        case 0x1e5278u: goto label_1e5278;
        case 0x1e527cu: goto label_1e527c;
        case 0x1e5280u: goto label_1e5280;
        case 0x1e5284u: goto label_1e5284;
        case 0x1e5288u: goto label_1e5288;
        case 0x1e528cu: goto label_1e528c;
        case 0x1e5290u: goto label_1e5290;
        case 0x1e5294u: goto label_1e5294;
        case 0x1e5298u: goto label_1e5298;
        case 0x1e529cu: goto label_1e529c;
        case 0x1e52a0u: goto label_1e52a0;
        case 0x1e52a4u: goto label_1e52a4;
        case 0x1e52a8u: goto label_1e52a8;
        case 0x1e52acu: goto label_1e52ac;
        case 0x1e52b0u: goto label_1e52b0;
        case 0x1e52b4u: goto label_1e52b4;
        case 0x1e52b8u: goto label_1e52b8;
        case 0x1e52bcu: goto label_1e52bc;
        case 0x1e52c0u: goto label_1e52c0;
        case 0x1e52c4u: goto label_1e52c4;
        case 0x1e52c8u: goto label_1e52c8;
        case 0x1e52ccu: goto label_1e52cc;
        case 0x1e52d0u: goto label_1e52d0;
        case 0x1e52d4u: goto label_1e52d4;
        case 0x1e52d8u: goto label_1e52d8;
        case 0x1e52dcu: goto label_1e52dc;
        case 0x1e52e0u: goto label_1e52e0;
        case 0x1e52e4u: goto label_1e52e4;
        case 0x1e52e8u: goto label_1e52e8;
        case 0x1e52ecu: goto label_1e52ec;
        case 0x1e52f0u: goto label_1e52f0;
        case 0x1e52f4u: goto label_1e52f4;
        case 0x1e52f8u: goto label_1e52f8;
        case 0x1e52fcu: goto label_1e52fc;
        case 0x1e5300u: goto label_1e5300;
        case 0x1e5304u: goto label_1e5304;
        case 0x1e5308u: goto label_1e5308;
        case 0x1e530cu: goto label_1e530c;
        case 0x1e5310u: goto label_1e5310;
        case 0x1e5314u: goto label_1e5314;
        case 0x1e5318u: goto label_1e5318;
        case 0x1e531cu: goto label_1e531c;
        case 0x1e5320u: goto label_1e5320;
        case 0x1e5324u: goto label_1e5324;
        case 0x1e5328u: goto label_1e5328;
        case 0x1e532cu: goto label_1e532c;
        case 0x1e5330u: goto label_1e5330;
        case 0x1e5334u: goto label_1e5334;
        case 0x1e5338u: goto label_1e5338;
        case 0x1e533cu: goto label_1e533c;
        case 0x1e5340u: goto label_1e5340;
        case 0x1e5344u: goto label_1e5344;
        case 0x1e5348u: goto label_1e5348;
        case 0x1e534cu: goto label_1e534c;
        case 0x1e5350u: goto label_1e5350;
        case 0x1e5354u: goto label_1e5354;
        case 0x1e5358u: goto label_1e5358;
        case 0x1e535cu: goto label_1e535c;
        case 0x1e5360u: goto label_1e5360;
        case 0x1e5364u: goto label_1e5364;
        case 0x1e5368u: goto label_1e5368;
        case 0x1e536cu: goto label_1e536c;
        default: break;
    }

    ctx->pc = 0x1e5060u;

label_1e5060:
    // 0x1e5060: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1e5060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_1e5064:
    // 0x1e5064: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1e5064u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1e5068:
    // 0x1e5068: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1e5068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_1e506c:
    // 0x1e506c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1e506cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1e5070:
    // 0x1e5070: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1e5070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1e5074:
    // 0x1e5074: 0x120a82d  daddu       $s5, $t1, $zero
    ctx->pc = 0x1e5074u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_1e5078:
    // 0x1e5078: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1e5078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1e507c:
    // 0x1e507c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1e507cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e5080:
    // 0x1e5080: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e5080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1e5084:
    // 0x1e5084: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1e5084u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1e5088:
    // 0x1e5088: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e5088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1e508c:
    // 0x1e508c: 0x3c06006f  lui         $a2, 0x6F
    ctx->pc = 0x1e508cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)111 << 16));
label_1e5090:
    // 0x1e5090: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e5090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e5094:
    // 0x1e5094: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x1e5094u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1e5098:
    // 0x1e5098: 0x8c43ea64  lw          $v1, -0x159C($v0)
    ctx->pc = 0x1e5098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961764)));
label_1e509c:
    // 0x1e509c: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x1e509cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1e50a0:
    // 0x1e50a0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1e50a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1e50a4:
    // 0x1e50a4: 0x8c42ea6c  lw          $v0, -0x1594($v0)
    ctx->pc = 0x1e50a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961772)));
label_1e50a8:
    // 0x1e50a8: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x1e50a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1e50ac:
    // 0x1e50ac: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_1e50b0:
    if (ctx->pc == 0x1E50B0u) {
        ctx->pc = 0x1E50B0u;
            // 0x1e50b0: 0x24c6ea60  addiu       $a2, $a2, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961760));
        ctx->pc = 0x1E50B4u;
        goto label_1e50b4;
    }
    ctx->pc = 0x1E50ACu;
    {
        const bool branch_taken_0x1e50ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E50B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E50ACu;
            // 0x1e50b0: 0x24c6ea60  addiu       $a2, $a2, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e50ac) {
            ctx->pc = 0x1E50E8u;
            goto label_1e50e8;
        }
    }
    ctx->pc = 0x1E50B4u;
label_1e50b4:
    // 0x1e50b4: 0x8cc40004  lw          $a0, 0x4($a2)
    ctx->pc = 0x1e50b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_1e50b8:
    // 0x1e50b8: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1e50b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_1e50bc:
    // 0x1e50bc: 0x2463a940  addiu       $v1, $v1, -0x56C0
    ctx->pc = 0x1e50bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945088));
label_1e50c0:
    // 0x1e50c0: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1e50c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1e50c4:
    // 0x1e50c4: 0x2442a950  addiu       $v0, $v0, -0x56B0
    ctx->pc = 0x1e50c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945104));
label_1e50c8:
    // 0x1e50c8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1e50c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_1e50cc:
    // 0x1e50cc: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x1e50ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_1e50d0:
    // 0x1e50d0: 0x4002c801  .word       0x4002C801                   # mfc0        $v0, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1e50d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_perf);
label_1e50d4:
    // 0x1e50d4: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1e50d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_1e50d8:
    // 0x1e50d8: 0x4003c803  .word       0x4003C803                   # mfc0        $v1, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1e50d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_1e50dc:
    // 0x1e50dc: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x1e50dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_1e50e0:
    // 0x1e50e0: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x1e50e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
label_1e50e4:
    // 0x1e50e4: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x1e50e4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
label_1e50e8:
    // 0x1e50e8: 0x8cb00000  lw          $s0, 0x0($a1)
    ctx->pc = 0x1e50e8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1e50ec:
    // 0x1e50ec: 0x3c027f7f  lui         $v0, 0x7F7F
    ctx->pc = 0x1e50ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32639 << 16));
label_1e50f0:
    // 0x1e50f0: 0x3443ffee  ori         $v1, $v0, 0xFFEE
    ctx->pc = 0x1e50f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65518);
label_1e50f4:
    // 0x1e50f4: 0x27a80070  addiu       $t0, $sp, 0x70
    ctx->pc = 0x1e50f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1e50f8:
    // 0x1e50f8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1e50f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1e50fc:
    // 0x1e50fc: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1e50fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1e5100:
    // 0x1e5100: 0xafa500ac  sw          $a1, 0xAC($sp)
    ctx->pc = 0x1e5100u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 5));
label_1e5104:
    // 0x1e5104: 0x2442dfe0  addiu       $v0, $v0, -0x2020
    ctx->pc = 0x1e5104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959072));
label_1e5108:
    // 0x1e5108: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1e5108u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1e510c:
    // 0x1e510c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1e510cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1e5110:
    // 0x1e5110: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x1e5110u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1e5114:
    // 0x1e5114: 0xafa400a8  sw          $a0, 0xA8($sp)
    ctx->pc = 0x1e5114u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 4));
label_1e5118:
    // 0x1e5118: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x1e5118u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1e511c:
    // 0x1e511c: 0x8e0a0010  lw          $t2, 0x10($s0)
    ctx->pc = 0x1e511cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1e5120:
    // 0x1e5120: 0xafa400a4  sw          $a0, 0xA4($sp)
    ctx->pc = 0x1e5120u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 4));
label_1e5124:
    // 0x1e5124: 0xafaa00a0  sw          $t2, 0xA0($sp)
    ctx->pc = 0x1e5124u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 10));
label_1e5128:
    // 0x1e5128: 0xafa20070  sw          $v0, 0x70($sp)
    ctx->pc = 0x1e5128u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
label_1e512c:
    // 0x1e512c: 0xa3a00078  sb          $zero, 0x78($sp)
    ctx->pc = 0x1e512cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 120), (uint8_t)GPR_U32(ctx, 0));
label_1e5130:
    // 0x1e5130: 0xafa3009c  sw          $v1, 0x9C($sp)
    ctx->pc = 0x1e5130u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 3));
label_1e5134:
    // 0x1e5134: 0xafa30074  sw          $v1, 0x74($sp)
    ctx->pc = 0x1e5134u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 3));
label_1e5138:
    // 0x1e5138: 0x8e84000c  lw          $a0, 0xC($s4)
    ctx->pc = 0x1e5138u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_1e513c:
    // 0x1e513c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e513cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e5140:
    // 0x1e5140: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1e5140u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1e5144:
    // 0x1e5144: 0x320f809  jalr        $t9
label_1e5148:
    if (ctx->pc == 0x1E5148u) {
        ctx->pc = 0x1E5148u;
            // 0x1e5148: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x1E514Cu;
        goto label_1e514c;
    }
    ctx->pc = 0x1E5144u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E514Cu);
        ctx->pc = 0x1E5148u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5144u;
            // 0x1e5148: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E514Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E514Cu; }
            if (ctx->pc != 0x1E514Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1E514Cu;
label_1e514c:
    // 0x1e514c: 0x83a30078  lb          $v1, 0x78($sp)
    ctx->pc = 0x1e514cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 120)));
label_1e5150:
    // 0x1e5150: 0x1060003e  beqz        $v1, . + 4 + (0x3E << 2)
label_1e5154:
    if (ctx->pc == 0x1E5154u) {
        ctx->pc = 0x1E5158u;
        goto label_1e5158;
    }
    ctx->pc = 0x1E5150u;
    {
        const bool branch_taken_0x1e5150 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5150) {
            ctx->pc = 0x1E524Cu;
            goto label_1e524c;
        }
    }
    ctx->pc = 0x1E5158u;
label_1e5158:
    // 0x1e5158: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1e5158u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1e515c:
    // 0x1e515c: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x1e515cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_1e5160:
    // 0x1e5160: 0x8c43ea64  lw          $v1, -0x159C($v0)
    ctx->pc = 0x1e5160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961764)));
label_1e5164:
    // 0x1e5164: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1e5164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1e5168:
    // 0x1e5168: 0x8c42ea6c  lw          $v0, -0x1594($v0)
    ctx->pc = 0x1e5168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961772)));
label_1e516c:
    // 0x1e516c: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x1e516cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1e5170:
    // 0x1e5170: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1e5174:
    if (ctx->pc == 0x1E5174u) {
        ctx->pc = 0x1E5174u;
            // 0x1e5174: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->pc = 0x1E5178u;
        goto label_1e5178;
    }
    ctx->pc = 0x1E5170u;
    {
        const bool branch_taken_0x1e5170 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5174u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5170u;
            // 0x1e5174: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5170) {
            ctx->pc = 0x1E51A0u;
            goto label_1e51a0;
        }
    }
    ctx->pc = 0x1E5178u;
label_1e5178:
    // 0x1e5178: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1e5178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1e517c:
    // 0x1e517c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1e517cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1e5180:
    // 0x1e5180: 0x2442a960  addiu       $v0, $v0, -0x56A0
    ctx->pc = 0x1e5180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945120));
label_1e5184:
    // 0x1e5184: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1e5184u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1e5188:
    // 0x1e5188: 0x4002c801  .word       0x4002C801                   # mfc0        $v0, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1e5188u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_perf);
label_1e518c:
    // 0x1e518c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1e518cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_1e5190:
    // 0x1e5190: 0x4005c803  .word       0x4005C803                   # mfc0        $a1, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1e5190u;
    SET_GPR_S32(ctx, 5, (int32_t)ctx->cop0_perf);
label_1e5194:
    // 0x1e5194: 0x2462000c  addiu       $v0, $v1, 0xC
    ctx->pc = 0x1e5194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_1e5198:
    // 0x1e5198: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x1e5198u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
label_1e519c:
    // 0x1e519c: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1e519cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_1e51a0:
    // 0x1e51a0: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x1e51a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_1e51a4:
    // 0x1e51a4: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x1e51a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_1e51a8:
    // 0x1e51a8: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1e51a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1e51ac:
    // 0x1e51ac: 0xafa200a4  sw          $v0, 0xA4($sp)
    ctx->pc = 0x1e51acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 2));
label_1e51b0:
    // 0x1e51b0: 0xafa300a0  sw          $v1, 0xA0($sp)
    ctx->pc = 0x1e51b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 3));
label_1e51b4:
    // 0x1e51b4: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x1e51b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_1e51b8:
    // 0x1e51b8: 0x5440001c  bnel        $v0, $zero, . + 4 + (0x1C << 2)
label_1e51bc:
    if (ctx->pc == 0x1E51BCu) {
        ctx->pc = 0x1E51BCu;
            // 0x1e51bc: 0x8e840010  lw          $a0, 0x10($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
        ctx->pc = 0x1E51C0u;
        goto label_1e51c0;
    }
    ctx->pc = 0x1E51B8u;
    {
        const bool branch_taken_0x1e51b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e51b8) {
            ctx->pc = 0x1E51BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E51B8u;
            // 0x1e51bc: 0x8e840010  lw          $a0, 0x10($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E522Cu;
            goto label_1e522c;
        }
    }
    ctx->pc = 0x1E51C0u;
label_1e51c0:
    // 0x1e51c0: 0x8c6a000c  lw          $t2, 0xC($v1)
    ctx->pc = 0x1e51c0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_1e51c4:
    // 0x1e51c4: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1e51c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_1e51c8:
    // 0x1e51c8: 0x8e680000  lw          $t0, 0x0($s3)
    ctx->pc = 0x1e51c8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1e51cc:
    // 0x1e51cc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1e51ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1e51d0:
    // 0x1e51d0: 0x8e870008  lw          $a3, 0x8($s4)
    ctx->pc = 0x1e51d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_1e51d4:
    // 0x1e51d4: 0x82430010  lb          $v1, 0x10($s2)
    ctx->pc = 0x1e51d4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 16)));
label_1e51d8:
    // 0x1e51d8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1e51d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1e51dc:
    // 0x1e51dc: 0x8d09000c  lw          $t1, 0xC($t0)
    ctx->pc = 0x1e51dcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
label_1e51e0:
    // 0x1e51e0: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x1e51e0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1e51e4:
    // 0x1e51e4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1e51e8:
    if (ctx->pc == 0x1E51E8u) {
        ctx->pc = 0x1E51E8u;
            // 0x1e51e8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E51ECu;
        goto label_1e51ec;
    }
    ctx->pc = 0x1E51E4u;
    {
        const bool branch_taken_0x1e51e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E51E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E51E4u;
            // 0x1e51e8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e51e4) {
            ctx->pc = 0x1E51F4u;
            goto label_1e51f4;
        }
    }
    ctx->pc = 0x1E51ECu;
label_1e51ec:
    // 0x1e51ec: 0x10000002  b           . + 4 + (0x2 << 2)
label_1e51f0:
    if (ctx->pc == 0x1E51F0u) {
        ctx->pc = 0x1E51F0u;
            // 0x1e51f0: 0x244805a0  addiu       $t0, $v0, 0x5A0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 1440));
        ctx->pc = 0x1E51F4u;
        goto label_1e51f4;
    }
    ctx->pc = 0x1E51ECu;
    {
        const bool branch_taken_0x1e51ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E51F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E51ECu;
            // 0x1e51f0: 0x244805a0  addiu       $t0, $v0, 0x5A0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 1440));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e51ec) {
            ctx->pc = 0x1E51F8u;
            goto label_1e51f8;
        }
    }
    ctx->pc = 0x1E51F4u;
label_1e51f4:
    // 0x1e51f4: 0x244801a0  addiu       $t0, $v0, 0x1A0
    ctx->pc = 0x1e51f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 416));
label_1e51f8:
    // 0x1e51f8: 0xa1940  sll         $v1, $t2, 5
    ctx->pc = 0x1e51f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 5));
label_1e51fc:
    // 0x1e51fc: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x1e51fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_1e5200:
    // 0x1e5200: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x1e5200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_1e5204:
    // 0x1e5204: 0x90680000  lbu         $t0, 0x0($v1)
    ctx->pc = 0x1e5204u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1e5208:
    // 0x1e5208: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x1e5208u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_1e520c:
    // 0x1e520c: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x1e520cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_1e5210:
    // 0x1e5210: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1e5210u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1e5214:
    // 0x1e5214: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1e5214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1e5218:
    // 0x1e5218: 0x8c4209a0  lw          $v0, 0x9A0($v0)
    ctx->pc = 0x1e5218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2464)));
label_1e521c:
    // 0x1e521c: 0x40f809  jalr        $v0
label_1e5220:
    if (ctx->pc == 0x1E5220u) {
        ctx->pc = 0x1E5224u;
        goto label_1e5224;
    }
    ctx->pc = 0x1E521Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E5224u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E5224u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E5224u; }
            if (ctx->pc != 0x1E5224u) { return; }
        }
        }
    }
    ctx->pc = 0x1E5224u;
label_1e5224:
    // 0x1e5224: 0xae820010  sw          $v0, 0x10($s4)
    ctx->pc = 0x1e5224u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 2));
label_1e5228:
    // 0x1e5228: 0x8e840010  lw          $a0, 0x10($s4)
    ctx->pc = 0x1e5228u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_1e522c:
    // 0x1e522c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1e522cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1e5230:
    // 0x1e5230: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1e5230u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1e5234:
    // 0x1e5234: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x1e5234u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e5238:
    // 0x1e5238: 0x2a0482d  daddu       $t1, $s5, $zero
    ctx->pc = 0x1e5238u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1e523c:
    // 0x1e523c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e523cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e5240:
    // 0x1e5240: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1e5240u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1e5244:
    // 0x1e5244: 0x320f809  jalr        $t9
label_1e5248:
    if (ctx->pc == 0x1E5248u) {
        ctx->pc = 0x1E5248u;
            // 0x1e5248: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x1E524Cu;
        goto label_1e524c;
    }
    ctx->pc = 0x1E5244u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E524Cu);
        ctx->pc = 0x1E5248u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5244u;
            // 0x1e5248: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E524Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E524Cu; }
            if (ctx->pc != 0x1E524Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1E524Cu;
label_1e524c:
    // 0x1e524c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1e524cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_1e5250:
    // 0x1e5250: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x1e5250u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_1e5254:
    // 0x1e5254: 0x8c64ea64  lw          $a0, -0x159C($v1)
    ctx->pc = 0x1e5254u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961764)));
label_1e5258:
    // 0x1e5258: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1e5258u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_1e525c:
    // 0x1e525c: 0x8c63ea6c  lw          $v1, -0x1594($v1)
    ctx->pc = 0x1e525cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961772)));
label_1e5260:
    // 0x1e5260: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x1e5260u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1e5264:
    // 0x1e5264: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_1e5268:
    if (ctx->pc == 0x1E5268u) {
        ctx->pc = 0x1E5268u;
            // 0x1e5268: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->pc = 0x1E526Cu;
        goto label_1e526c;
    }
    ctx->pc = 0x1E5264u;
    {
        const bool branch_taken_0x1e5264 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5268u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5264u;
            // 0x1e5268: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5264) {
            ctx->pc = 0x1E5294u;
            goto label_1e5294;
        }
    }
    ctx->pc = 0x1E526Cu;
label_1e526c:
    // 0x1e526c: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x1e526cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1e5270:
    // 0x1e5270: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1e5270u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_1e5274:
    // 0x1e5274: 0x2463a968  addiu       $v1, $v1, -0x5698
    ctx->pc = 0x1e5274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945128));
label_1e5278:
    // 0x1e5278: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1e5278u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_1e527c:
    // 0x1e527c: 0x4003c801  .word       0x4003C801                   # mfc0        $v1, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1e527cu;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_1e5280:
    // 0x1e5280: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x1e5280u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_1e5284:
    // 0x1e5284: 0x4006c803  .word       0x4006C803                   # mfc0        $a2, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1e5284u;
    SET_GPR_S32(ctx, 6, (int32_t)ctx->cop0_perf);
label_1e5288:
    // 0x1e5288: 0x2483000c  addiu       $v1, $a0, 0xC
    ctx->pc = 0x1e5288u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_1e528c:
    // 0x1e528c: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x1e528cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
label_1e5290:
    // 0x1e5290: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x1e5290u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_1e5294:
    // 0x1e5294: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1e5294u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1e5298:
    // 0x1e5298: 0x2463d4e0  addiu       $v1, $v1, -0x2B20
    ctx->pc = 0x1e5298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956256));
label_1e529c:
    // 0x1e529c: 0xafa30070  sw          $v1, 0x70($sp)
    ctx->pc = 0x1e529cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 3));
label_1e52a0:
    // 0x1e52a0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1e52a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1e52a4:
    // 0x1e52a4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1e52a4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1e52a8:
    // 0x1e52a8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1e52a8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1e52ac:
    // 0x1e52ac: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1e52acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1e52b0:
    // 0x1e52b0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e52b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e52b4:
    // 0x1e52b4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e52b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e52b8:
    // 0x1e52b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e52b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e52bc:
    // 0x1e52bc: 0x3e00008  jr          $ra
label_1e52c0:
    if (ctx->pc == 0x1E52C0u) {
        ctx->pc = 0x1E52C0u;
            // 0x1e52c0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x1E52C4u;
        goto label_1e52c4;
    }
    ctx->pc = 0x1E52BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E52C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E52BCu;
            // 0x1e52c0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E52C4u;
label_1e52c4:
    // 0x1e52c4: 0x0  nop
    ctx->pc = 0x1e52c4u;
    // NOP
label_1e52c8:
    // 0x1e52c8: 0x0  nop
    ctx->pc = 0x1e52c8u;
    // NOP
label_1e52cc:
    // 0x1e52cc: 0x0  nop
    ctx->pc = 0x1e52ccu;
    // NOP
label_1e52d0:
    // 0x1e52d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e52d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1e52d4:
    // 0x1e52d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e52d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1e52d8:
    // 0x1e52d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e52d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1e52dc:
    // 0x1e52dc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e52dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e52e0:
    // 0x1e52e0: 0x1220001d  beqz        $s1, . + 4 + (0x1D << 2)
label_1e52e4:
    if (ctx->pc == 0x1E52E4u) {
        ctx->pc = 0x1E52E4u;
            // 0x1e52e4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x1E52E8u;
        goto label_1e52e8;
    }
    ctx->pc = 0x1E52E0u;
    {
        const bool branch_taken_0x1e52e0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E52E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E52E0u;
            // 0x1e52e4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e52e0) {
            ctx->pc = 0x1E5358u;
            goto label_1e5358;
        }
    }
    ctx->pc = 0x1E52E8u;
label_1e52e8:
    // 0x1e52e8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1e52e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1e52ec:
    // 0x1e52ec: 0x2442dfe0  addiu       $v0, $v0, -0x2020
    ctx->pc = 0x1e52ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959072));
label_1e52f0:
    // 0x1e52f0: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_1e52f4:
    if (ctx->pc == 0x1E52F4u) {
        ctx->pc = 0x1E52F4u;
            // 0x1e52f4: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1E52F8u;
        goto label_1e52f8;
    }
    ctx->pc = 0x1E52F0u;
    {
        const bool branch_taken_0x1e52f0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E52F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E52F0u;
            // 0x1e52f4: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e52f0) {
            ctx->pc = 0x1E5304u;
            goto label_1e5304;
        }
    }
    ctx->pc = 0x1E52F8u;
label_1e52f8:
    // 0x1e52f8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1e52f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1e52fc:
    // 0x1e52fc: 0x2442d4e0  addiu       $v0, $v0, -0x2B20
    ctx->pc = 0x1e52fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956256));
label_1e5300:
    // 0x1e5300: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1e5300u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1e5304:
    // 0x1e5304: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x1e5304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_1e5308:
    // 0x1e5308: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1e5308u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_1e530c:
    // 0x1e530c: 0x58400013  blezl       $v0, . + 4 + (0x13 << 2)
label_1e5310:
    if (ctx->pc == 0x1E5310u) {
        ctx->pc = 0x1E5310u;
            // 0x1e5310: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E5314u;
        goto label_1e5314;
    }
    ctx->pc = 0x1E530Cu;
    {
        const bool branch_taken_0x1e530c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1e530c) {
            ctx->pc = 0x1E5310u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E530Cu;
            // 0x1e5310: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E535Cu;
            goto label_1e535c;
        }
    }
    ctx->pc = 0x1E5314u;
label_1e5314:
    // 0x1e5314: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1e5314u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1e5318:
    // 0x1e5318: 0x8c50ea40  lw          $s0, -0x15C0($v0)
    ctx->pc = 0x1e5318u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_1e531c:
    // 0x1e531c: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x1e531cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_1e5320:
    // 0x1e5320: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x1e5320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1e5324:
    // 0x1e5324: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x1e5324u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1e5328:
    // 0x1e5328: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_1e532c:
    if (ctx->pc == 0x1E532Cu) {
        ctx->pc = 0x1E532Cu;
            // 0x1e532c: 0x8e020048  lw          $v0, 0x48($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
        ctx->pc = 0x1E5330u;
        goto label_1e5330;
    }
    ctx->pc = 0x1E5328u;
    {
        const bool branch_taken_0x1e5328 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e5328) {
            ctx->pc = 0x1E532Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5328u;
            // 0x1e532c: 0x8e020048  lw          $v0, 0x48($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E5344u;
            goto label_1e5344;
        }
    }
    ctx->pc = 0x1E5330u;
label_1e5330:
    // 0x1e5330: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e5330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e5334:
    // 0x1e5334: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1e5334u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1e5338:
    // 0x1e5338: 0xc0a79ec  jal         func_29E7B0
label_1e533c:
    if (ctx->pc == 0x1E533Cu) {
        ctx->pc = 0x1E533Cu;
            // 0x1e533c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E5340u;
        goto label_1e5340;
    }
    ctx->pc = 0x1E5338u;
    SET_GPR_U32(ctx, 31, 0x1E5340u);
    ctx->pc = 0x1E533Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5338u;
            // 0x1e533c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29E7B0u;
    if (runtime->hasFunction(0x29E7B0u)) {
        auto targetFn = runtime->lookupFunction(0x29E7B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5340u; }
        if (ctx->pc != 0x1E5340u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029E7B0_0x29e7b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5340u; }
        if (ctx->pc != 0x1E5340u) { return; }
    }
    ctx->pc = 0x1E5340u;
label_1e5340:
    // 0x1e5340: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x1e5340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_1e5344:
    // 0x1e5344: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e5344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1e5348:
    // 0x1e5348: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x1e5348u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
label_1e534c:
    // 0x1e534c: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x1e534cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_1e5350:
    // 0x1e5350: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1e5350u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1e5354:
    // 0x1e5354: 0xae110044  sw          $s1, 0x44($s0)
    ctx->pc = 0x1e5354u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 17));
label_1e5358:
    // 0x1e5358: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1e5358u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e535c:
    // 0x1e535c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e535cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1e5360:
    // 0x1e5360: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e5360u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e5364:
    // 0x1e5364: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e5364u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e5368:
    // 0x1e5368: 0x3e00008  jr          $ra
label_1e536c:
    if (ctx->pc == 0x1E536Cu) {
        ctx->pc = 0x1E536Cu;
            // 0x1e536c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1E5370u;
        goto label_fallthrough_0x1e5368;
    }
    ctx->pc = 0x1E5368u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E536Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5368u;
            // 0x1e536c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1e5368:
    ctx->pc = 0x1E5370u;
}
