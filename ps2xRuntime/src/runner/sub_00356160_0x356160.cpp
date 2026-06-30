#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00356160
// Address: 0x356160 - 0x356430
void sub_00356160_0x356160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00356160_0x356160");
#endif

    switch (ctx->pc) {
        case 0x356160u: goto label_356160;
        case 0x356164u: goto label_356164;
        case 0x356168u: goto label_356168;
        case 0x35616cu: goto label_35616c;
        case 0x356170u: goto label_356170;
        case 0x356174u: goto label_356174;
        case 0x356178u: goto label_356178;
        case 0x35617cu: goto label_35617c;
        case 0x356180u: goto label_356180;
        case 0x356184u: goto label_356184;
        case 0x356188u: goto label_356188;
        case 0x35618cu: goto label_35618c;
        case 0x356190u: goto label_356190;
        case 0x356194u: goto label_356194;
        case 0x356198u: goto label_356198;
        case 0x35619cu: goto label_35619c;
        case 0x3561a0u: goto label_3561a0;
        case 0x3561a4u: goto label_3561a4;
        case 0x3561a8u: goto label_3561a8;
        case 0x3561acu: goto label_3561ac;
        case 0x3561b0u: goto label_3561b0;
        case 0x3561b4u: goto label_3561b4;
        case 0x3561b8u: goto label_3561b8;
        case 0x3561bcu: goto label_3561bc;
        case 0x3561c0u: goto label_3561c0;
        case 0x3561c4u: goto label_3561c4;
        case 0x3561c8u: goto label_3561c8;
        case 0x3561ccu: goto label_3561cc;
        case 0x3561d0u: goto label_3561d0;
        case 0x3561d4u: goto label_3561d4;
        case 0x3561d8u: goto label_3561d8;
        case 0x3561dcu: goto label_3561dc;
        case 0x3561e0u: goto label_3561e0;
        case 0x3561e4u: goto label_3561e4;
        case 0x3561e8u: goto label_3561e8;
        case 0x3561ecu: goto label_3561ec;
        case 0x3561f0u: goto label_3561f0;
        case 0x3561f4u: goto label_3561f4;
        case 0x3561f8u: goto label_3561f8;
        case 0x3561fcu: goto label_3561fc;
        case 0x356200u: goto label_356200;
        case 0x356204u: goto label_356204;
        case 0x356208u: goto label_356208;
        case 0x35620cu: goto label_35620c;
        case 0x356210u: goto label_356210;
        case 0x356214u: goto label_356214;
        case 0x356218u: goto label_356218;
        case 0x35621cu: goto label_35621c;
        case 0x356220u: goto label_356220;
        case 0x356224u: goto label_356224;
        case 0x356228u: goto label_356228;
        case 0x35622cu: goto label_35622c;
        case 0x356230u: goto label_356230;
        case 0x356234u: goto label_356234;
        case 0x356238u: goto label_356238;
        case 0x35623cu: goto label_35623c;
        case 0x356240u: goto label_356240;
        case 0x356244u: goto label_356244;
        case 0x356248u: goto label_356248;
        case 0x35624cu: goto label_35624c;
        case 0x356250u: goto label_356250;
        case 0x356254u: goto label_356254;
        case 0x356258u: goto label_356258;
        case 0x35625cu: goto label_35625c;
        case 0x356260u: goto label_356260;
        case 0x356264u: goto label_356264;
        case 0x356268u: goto label_356268;
        case 0x35626cu: goto label_35626c;
        case 0x356270u: goto label_356270;
        case 0x356274u: goto label_356274;
        case 0x356278u: goto label_356278;
        case 0x35627cu: goto label_35627c;
        case 0x356280u: goto label_356280;
        case 0x356284u: goto label_356284;
        case 0x356288u: goto label_356288;
        case 0x35628cu: goto label_35628c;
        case 0x356290u: goto label_356290;
        case 0x356294u: goto label_356294;
        case 0x356298u: goto label_356298;
        case 0x35629cu: goto label_35629c;
        case 0x3562a0u: goto label_3562a0;
        case 0x3562a4u: goto label_3562a4;
        case 0x3562a8u: goto label_3562a8;
        case 0x3562acu: goto label_3562ac;
        case 0x3562b0u: goto label_3562b0;
        case 0x3562b4u: goto label_3562b4;
        case 0x3562b8u: goto label_3562b8;
        case 0x3562bcu: goto label_3562bc;
        case 0x3562c0u: goto label_3562c0;
        case 0x3562c4u: goto label_3562c4;
        case 0x3562c8u: goto label_3562c8;
        case 0x3562ccu: goto label_3562cc;
        case 0x3562d0u: goto label_3562d0;
        case 0x3562d4u: goto label_3562d4;
        case 0x3562d8u: goto label_3562d8;
        case 0x3562dcu: goto label_3562dc;
        case 0x3562e0u: goto label_3562e0;
        case 0x3562e4u: goto label_3562e4;
        case 0x3562e8u: goto label_3562e8;
        case 0x3562ecu: goto label_3562ec;
        case 0x3562f0u: goto label_3562f0;
        case 0x3562f4u: goto label_3562f4;
        case 0x3562f8u: goto label_3562f8;
        case 0x3562fcu: goto label_3562fc;
        case 0x356300u: goto label_356300;
        case 0x356304u: goto label_356304;
        case 0x356308u: goto label_356308;
        case 0x35630cu: goto label_35630c;
        case 0x356310u: goto label_356310;
        case 0x356314u: goto label_356314;
        case 0x356318u: goto label_356318;
        case 0x35631cu: goto label_35631c;
        case 0x356320u: goto label_356320;
        case 0x356324u: goto label_356324;
        case 0x356328u: goto label_356328;
        case 0x35632cu: goto label_35632c;
        case 0x356330u: goto label_356330;
        case 0x356334u: goto label_356334;
        case 0x356338u: goto label_356338;
        case 0x35633cu: goto label_35633c;
        case 0x356340u: goto label_356340;
        case 0x356344u: goto label_356344;
        case 0x356348u: goto label_356348;
        case 0x35634cu: goto label_35634c;
        case 0x356350u: goto label_356350;
        case 0x356354u: goto label_356354;
        case 0x356358u: goto label_356358;
        case 0x35635cu: goto label_35635c;
        case 0x356360u: goto label_356360;
        case 0x356364u: goto label_356364;
        case 0x356368u: goto label_356368;
        case 0x35636cu: goto label_35636c;
        case 0x356370u: goto label_356370;
        case 0x356374u: goto label_356374;
        case 0x356378u: goto label_356378;
        case 0x35637cu: goto label_35637c;
        case 0x356380u: goto label_356380;
        case 0x356384u: goto label_356384;
        case 0x356388u: goto label_356388;
        case 0x35638cu: goto label_35638c;
        case 0x356390u: goto label_356390;
        case 0x356394u: goto label_356394;
        case 0x356398u: goto label_356398;
        case 0x35639cu: goto label_35639c;
        case 0x3563a0u: goto label_3563a0;
        case 0x3563a4u: goto label_3563a4;
        case 0x3563a8u: goto label_3563a8;
        case 0x3563acu: goto label_3563ac;
        case 0x3563b0u: goto label_3563b0;
        case 0x3563b4u: goto label_3563b4;
        case 0x3563b8u: goto label_3563b8;
        case 0x3563bcu: goto label_3563bc;
        case 0x3563c0u: goto label_3563c0;
        case 0x3563c4u: goto label_3563c4;
        case 0x3563c8u: goto label_3563c8;
        case 0x3563ccu: goto label_3563cc;
        case 0x3563d0u: goto label_3563d0;
        case 0x3563d4u: goto label_3563d4;
        case 0x3563d8u: goto label_3563d8;
        case 0x3563dcu: goto label_3563dc;
        case 0x3563e0u: goto label_3563e0;
        case 0x3563e4u: goto label_3563e4;
        case 0x3563e8u: goto label_3563e8;
        case 0x3563ecu: goto label_3563ec;
        case 0x3563f0u: goto label_3563f0;
        case 0x3563f4u: goto label_3563f4;
        case 0x3563f8u: goto label_3563f8;
        case 0x3563fcu: goto label_3563fc;
        case 0x356400u: goto label_356400;
        case 0x356404u: goto label_356404;
        case 0x356408u: goto label_356408;
        case 0x35640cu: goto label_35640c;
        case 0x356410u: goto label_356410;
        case 0x356414u: goto label_356414;
        case 0x356418u: goto label_356418;
        case 0x35641cu: goto label_35641c;
        case 0x356420u: goto label_356420;
        case 0x356424u: goto label_356424;
        case 0x356428u: goto label_356428;
        case 0x35642cu: goto label_35642c;
        default: break;
    }

    ctx->pc = 0x356160u;

label_356160:
    // 0x356160: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x356160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_356164:
    // 0x356164: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x356164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_356168:
    // 0x356168: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x356168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_35616c:
    // 0x35616c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x35616cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_356170:
    // 0x356170: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x356170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_356174:
    // 0x356174: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x356174u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_356178:
    // 0x356178: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x356178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_35617c:
    // 0x35617c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x35617cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_356180:
    // 0x356180: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x356180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_356184:
    // 0x356184: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x356184u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_356188:
    // 0x356188: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x356188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_35618c:
    // 0x35618c: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x35618cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_356190:
    // 0x356190: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x356190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_356194:
    // 0x356194: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x356194u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_356198:
    // 0x356198: 0x8c47d130  lw          $a3, -0x2ED0($v0)
    ctx->pc = 0x356198u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_35619c:
    // 0x35619c: 0x9083004d  lbu         $v1, 0x4D($a0)
    ctx->pc = 0x35619cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 77)));
label_3561a0:
    // 0x3561a0: 0x8ce70130  lw          $a3, 0x130($a3)
    ctx->pc = 0x3561a0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 304)));
label_3561a4:
    // 0x3561a4: 0xe63004  sllv        $a2, $a2, $a3
    ctx->pc = 0x3561a4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 7) & 0x1F));
label_3561a8:
    // 0x3561a8: 0xc03027  not         $a2, $a2
    ctx->pc = 0x3561a8u;
    SET_GPR_U64(ctx, 6, ~(GPR_U64(ctx, 6) | GPR_U64(ctx, 0)));
label_3561ac:
    // 0x3561ac: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x3561acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_3561b0:
    // 0x3561b0: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x3561b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
label_3561b4:
    // 0x3561b4: 0xa083004d  sb          $v1, 0x4D($a0)
    ctx->pc = 0x3561b4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 77), (uint8_t)GPR_U32(ctx, 3));
label_3561b8:
    // 0x3561b8: 0x90830090  lbu         $v1, 0x90($a0)
    ctx->pc = 0x3561b8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 144)));
label_3561bc:
    // 0x3561bc: 0x1060008f  beqz        $v1, . + 4 + (0x8F << 2)
label_3561c0:
    if (ctx->pc == 0x3561C0u) {
        ctx->pc = 0x3561C0u;
            // 0x3561c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3561C4u;
        goto label_3561c4;
    }
    ctx->pc = 0x3561BCu;
    {
        const bool branch_taken_0x3561bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3561C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3561BCu;
            // 0x3561c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3561bc) {
            ctx->pc = 0x3563FCu;
            goto label_3563fc;
        }
    }
    ctx->pc = 0x3561C4u;
label_3561c4:
    // 0x3561c4: 0x8ea400e0  lw          $a0, 0xE0($s5)
    ctx->pc = 0x3561c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 224)));
label_3561c8:
    // 0x3561c8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3561c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3561cc:
    // 0x3561cc: 0x1083008b  beq         $a0, $v1, . + 4 + (0x8B << 2)
label_3561d0:
    if (ctx->pc == 0x3561D0u) {
        ctx->pc = 0x3561D4u;
        goto label_3561d4;
    }
    ctx->pc = 0x3561CCu;
    {
        const bool branch_taken_0x3561cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3561cc) {
            ctx->pc = 0x3563FCu;
            goto label_3563fc;
        }
    }
    ctx->pc = 0x3561D4u;
label_3561d4:
    // 0x3561d4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3561d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3561d8:
    // 0x3561d8: 0x92b10279  lbu         $s1, 0x279($s5)
    ctx->pc = 0x3561d8u;
    SET_GPR_U32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 633)));
label_3561dc:
    // 0x3561dc: 0x8c503ff8  lw          $s0, 0x3FF8($v0)
    ctx->pc = 0x3561dcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16376)));
label_3561e0:
    // 0x3561e0: 0x8e030090  lw          $v1, 0x90($s0)
    ctx->pc = 0x3561e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
label_3561e4:
    // 0x3561e4: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x3561e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
label_3561e8:
    // 0x3561e8: 0x1071001a  beq         $v1, $s1, . + 4 + (0x1A << 2)
label_3561ec:
    if (ctx->pc == 0x3561ECu) {
        ctx->pc = 0x3561ECu;
            // 0x3561ec: 0xa29021  addu        $s2, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->pc = 0x3561F0u;
        goto label_3561f0;
    }
    ctx->pc = 0x3561E8u;
    {
        const bool branch_taken_0x3561e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        ctx->pc = 0x3561ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3561E8u;
            // 0x3561ec: 0xa29021  addu        $s2, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3561e8) {
            ctx->pc = 0x356254u;
            goto label_356254;
        }
    }
    ctx->pc = 0x3561F0u;
label_3561f0:
    // 0x3561f0: 0x8e020084  lw          $v0, 0x84($s0)
    ctx->pc = 0x3561f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_3561f4:
    // 0x3561f4: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x3561f4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3561f8:
    // 0x3561f8: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
label_3561fc:
    if (ctx->pc == 0x3561FCu) {
        ctx->pc = 0x356200u;
        goto label_356200;
    }
    ctx->pc = 0x3561F8u;
    {
        const bool branch_taken_0x3561f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3561f8) {
            ctx->pc = 0x356238u;
            goto label_356238;
        }
    }
    ctx->pc = 0x356200u;
label_356200:
    // 0x356200: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x356200u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_356204:
    // 0x356204: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x356204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_356208:
    // 0x356208: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x356208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_35620c:
    // 0x35620c: 0x8c49e3c0  lw          $t1, -0x1C40($v0)
    ctx->pc = 0x35620cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960064)));
label_356210:
    // 0x356210: 0x19200009  blez        $t1, . + 4 + (0x9 << 2)
label_356214:
    if (ctx->pc == 0x356214u) {
        ctx->pc = 0x356214u;
            // 0x356214: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->pc = 0x356218u;
        goto label_356218;
    }
    ctx->pc = 0x356210u;
    {
        const bool branch_taken_0x356210 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x356214u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x356210u;
            // 0x356214: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356210) {
            ctx->pc = 0x356238u;
            goto label_356238;
        }
    }
    ctx->pc = 0x356218u;
label_356218:
    // 0x356218: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x356218u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_35621c:
    // 0x35621c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x35621cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_356220:
    // 0x356220: 0x8c65e3b0  lw          $a1, -0x1C50($v1)
    ctx->pc = 0x356220u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
label_356224:
    // 0x356224: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x356224u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_356228:
    // 0x356228: 0x8c46e3b8  lw          $a2, -0x1C48($v0)
    ctx->pc = 0x356228u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960056)));
label_35622c:
    // 0x35622c: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x35622cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_356230:
    // 0x356230: 0xc055ea8  jal         func_157AA0
label_356234:
    if (ctx->pc == 0x356234u) {
        ctx->pc = 0x356234u;
            // 0x356234: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x356238u;
        goto label_356238;
    }
    ctx->pc = 0x356230u;
    SET_GPR_U32(ctx, 31, 0x356238u);
    ctx->pc = 0x356234u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x356230u;
            // 0x356234: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x157AA0u;
    if (runtime->hasFunction(0x157AA0u)) {
        auto targetFn = runtime->lookupFunction(0x157AA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x356238u; }
        if (ctx->pc != 0x356238u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00157AA0_0x157aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x356238u; }
        if (ctx->pc != 0x356238u) { return; }
    }
    ctx->pc = 0x356238u;
label_356238:
    // 0x356238: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x356238u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_35623c:
    // 0x35623c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x35623cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_356240:
    // 0x356240: 0xac60e3d8  sw          $zero, -0x1C28($v1)
    ctx->pc = 0x356240u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960088), GPR_U32(ctx, 0));
label_356244:
    // 0x356244: 0xac40e3c0  sw          $zero, -0x1C40($v0)
    ctx->pc = 0x356244u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960064), GPR_U32(ctx, 0));
label_356248:
    // 0x356248: 0xc04e738  jal         func_139CE0
label_35624c:
    if (ctx->pc == 0x35624Cu) {
        ctx->pc = 0x35624Cu;
            // 0x35624c: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->pc = 0x356250u;
        goto label_356250;
    }
    ctx->pc = 0x356248u;
    SET_GPR_U32(ctx, 31, 0x356250u);
    ctx->pc = 0x35624Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x356248u;
            // 0x35624c: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x356250u; }
        if (ctx->pc != 0x356250u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x356250u; }
        if (ctx->pc != 0x356250u) { return; }
    }
    ctx->pc = 0x356250u;
label_356250:
    // 0x356250: 0xae110090  sw          $s1, 0x90($s0)
    ctx->pc = 0x356250u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 17));
label_356254:
    // 0x356254: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x356254u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_356258:
    // 0x356258: 0xc04f278  jal         func_13C9E0
label_35625c:
    if (ctx->pc == 0x35625Cu) {
        ctx->pc = 0x35625Cu;
            // 0x35625c: 0x26a50020  addiu       $a1, $s5, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
        ctx->pc = 0x356260u;
        goto label_356260;
    }
    ctx->pc = 0x356258u;
    SET_GPR_U32(ctx, 31, 0x356260u);
    ctx->pc = 0x35625Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x356258u;
            // 0x35625c: 0x26a50020  addiu       $a1, $s5, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x356260u; }
        if (ctx->pc != 0x356260u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x356260u; }
        if (ctx->pc != 0x356260u) { return; }
    }
    ctx->pc = 0x356260u;
label_356260:
    // 0x356260: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x356260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_356264:
    // 0x356264: 0xc04ce80  jal         func_133A00
label_356268:
    if (ctx->pc == 0x356268u) {
        ctx->pc = 0x356268u;
            // 0x356268: 0x26a50010  addiu       $a1, $s5, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
        ctx->pc = 0x35626Cu;
        goto label_35626c;
    }
    ctx->pc = 0x356264u;
    SET_GPR_U32(ctx, 31, 0x35626Cu);
    ctx->pc = 0x356268u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x356264u;
            // 0x356268: 0x26a50010  addiu       $a1, $s5, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35626Cu; }
        if (ctx->pc != 0x35626Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35626Cu; }
        if (ctx->pc != 0x35626Cu) { return; }
    }
    ctx->pc = 0x35626Cu;
label_35626c:
    // 0x35626c: 0x26a40230  addiu       $a0, $s5, 0x230
    ctx->pc = 0x35626cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 560));
label_356270:
    // 0x356270: 0xc04cce8  jal         func_1333A0
label_356274:
    if (ctx->pc == 0x356274u) {
        ctx->pc = 0x356274u;
            // 0x356274: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x356278u;
        goto label_356278;
    }
    ctx->pc = 0x356270u;
    SET_GPR_U32(ctx, 31, 0x356278u);
    ctx->pc = 0x356274u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x356270u;
            // 0x356274: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x356278u; }
        if (ctx->pc != 0x356278u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x356278u; }
        if (ctx->pc != 0x356278u) { return; }
    }
    ctx->pc = 0x356278u;
label_356278:
    // 0x356278: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x356278u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_35627c:
    // 0x35627c: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x35627cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_356280:
    // 0x356280: 0x8c500130  lw          $s0, 0x130($v0)
    ctx->pc = 0x356280u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_356284:
    // 0x356284: 0xc0d4108  jal         func_350420
label_356288:
    if (ctx->pc == 0x356288u) {
        ctx->pc = 0x356288u;
            // 0x356288: 0x8e510000  lw          $s1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x35628Cu;
        goto label_35628c;
    }
    ctx->pc = 0x356284u;
    SET_GPR_U32(ctx, 31, 0x35628Cu);
    ctx->pc = 0x356288u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x356284u;
            // 0x356288: 0x8e510000  lw          $s1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x350420u;
    if (runtime->hasFunction(0x350420u)) {
        auto targetFn = runtime->lookupFunction(0x350420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35628Cu; }
        if (ctx->pc != 0x35628Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350420_0x350420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35628Cu; }
        if (ctx->pc != 0x35628Cu) { return; }
    }
    ctx->pc = 0x35628Cu;
label_35628c:
    // 0x35628c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x35628cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_356290:
    // 0x356290: 0xc0d4104  jal         func_350410
label_356294:
    if (ctx->pc == 0x356294u) {
        ctx->pc = 0x356294u;
            // 0x356294: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x356298u;
        goto label_356298;
    }
    ctx->pc = 0x356290u;
    SET_GPR_U32(ctx, 31, 0x356298u);
    ctx->pc = 0x356294u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x356290u;
            // 0x356294: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x350410u;
    if (runtime->hasFunction(0x350410u)) {
        auto targetFn = runtime->lookupFunction(0x350410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x356298u; }
        if (ctx->pc != 0x356298u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350410_0x350410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x356298u; }
        if (ctx->pc != 0x356298u) { return; }
    }
    ctx->pc = 0x356298u;
label_356298:
    // 0x356298: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x356298u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_35629c:
    // 0x35629c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x35629cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3562a0:
    // 0x3562a0: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x3562a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_3562a4:
    // 0x3562a4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3562a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3562a8:
    // 0x3562a8: 0xc44c42c0  lwc1        $f12, 0x42C0($v0)
    ctx->pc = 0x3562a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 17088)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3562ac:
    // 0x3562ac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3562acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3562b0:
    // 0x3562b0: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x3562b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3562b4:
    // 0x3562b4: 0xc0d40ac  jal         func_3502B0
label_3562b8:
    if (ctx->pc == 0x3562B8u) {
        ctx->pc = 0x3562B8u;
            // 0x3562b8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3562BCu;
        goto label_3562bc;
    }
    ctx->pc = 0x3562B4u;
    SET_GPR_U32(ctx, 31, 0x3562BCu);
    ctx->pc = 0x3562B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3562B4u;
            // 0x3562b8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3502B0u;
    if (runtime->hasFunction(0x3502B0u)) {
        auto targetFn = runtime->lookupFunction(0x3502B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3562BCu; }
        if (ctx->pc != 0x3562BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003502B0_0x3502b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3562BCu; }
        if (ctx->pc != 0x3562BCu) { return; }
    }
    ctx->pc = 0x3562BCu;
label_3562bc:
    // 0x3562bc: 0xaea20044  sw          $v0, 0x44($s5)
    ctx->pc = 0x3562bcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 68), GPR_U32(ctx, 2));
label_3562c0:
    // 0x3562c0: 0x28510002  slti        $s1, $v0, 0x2
    ctx->pc = 0x3562c0u;
    SET_GPR_U64(ctx, 17, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_3562c4:
    // 0x3562c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3562c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3562c8:
    // 0x3562c8: 0x26a4004d  addiu       $a0, $s5, 0x4D
    ctx->pc = 0x3562c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 77));
label_3562cc:
    // 0x3562cc: 0x2021004  sllv        $v0, $v0, $s0
    ctx->pc = 0x3562ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 16) & 0x1F));
label_3562d0:
    // 0x3562d0: 0x27a5008c  addiu       $a1, $sp, 0x8C
    ctx->pc = 0x3562d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
label_3562d4:
    // 0x3562d4: 0x511018  mult        $v0, $v0, $s1
    ctx->pc = 0x3562d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_3562d8:
    // 0x3562d8: 0xc0d590c  jal         func_356430
label_3562dc:
    if (ctx->pc == 0x3562DCu) {
        ctx->pc = 0x3562DCu;
            // 0x3562dc: 0xafa2008c  sw          $v0, 0x8C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 2));
        ctx->pc = 0x3562E0u;
        goto label_3562e0;
    }
    ctx->pc = 0x3562D8u;
    SET_GPR_U32(ctx, 31, 0x3562E0u);
    ctx->pc = 0x3562DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3562D8u;
            // 0x3562dc: 0xafa2008c  sw          $v0, 0x8C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x356430u;
    if (runtime->hasFunction(0x356430u)) {
        auto targetFn = runtime->lookupFunction(0x356430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3562E0u; }
        if (ctx->pc != 0x3562E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00356430_0x356430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3562E0u; }
        if (ctx->pc != 0x3562E0u) { return; }
    }
    ctx->pc = 0x3562E0u;
label_3562e0:
    // 0x3562e0: 0x56200003  bnel        $s1, $zero, . + 4 + (0x3 << 2)
label_3562e4:
    if (ctx->pc == 0x3562E4u) {
        ctx->pc = 0x3562E4u;
            // 0x3562e4: 0x8eae0270  lw          $t6, 0x270($s5) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 624)));
        ctx->pc = 0x3562E8u;
        goto label_3562e8;
    }
    ctx->pc = 0x3562E0u;
    {
        const bool branch_taken_0x3562e0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x3562e0) {
            ctx->pc = 0x3562E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3562E0u;
            // 0x3562e4: 0x8eae0270  lw          $t6, 0x270($s5) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 624)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3562F0u;
            goto label_3562f0;
        }
    }
    ctx->pc = 0x3562E8u;
label_3562e8:
    // 0x3562e8: 0x10000044  b           . + 4 + (0x44 << 2)
label_3562ec:
    if (ctx->pc == 0x3562ECu) {
        ctx->pc = 0x3562ECu;
            // 0x3562ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3562F0u;
        goto label_3562f0;
    }
    ctx->pc = 0x3562E8u;
    {
        const bool branch_taken_0x3562e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3562ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3562E8u;
            // 0x3562ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3562e8) {
            ctx->pc = 0x3563FCu;
            goto label_3563fc;
        }
    }
    ctx->pc = 0x3562F0u;
label_3562f0:
    // 0x3562f0: 0x3c0d006f  lui         $t5, 0x6F
    ctx->pc = 0x3562f0u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)111 << 16));
label_3562f4:
    // 0x3562f4: 0x3c0b006f  lui         $t3, 0x6F
    ctx->pc = 0x3562f4u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)111 << 16));
label_3562f8:
    // 0x3562f8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3562f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3562fc:
    // 0x3562fc: 0x3c0c006f  lui         $t4, 0x6F
    ctx->pc = 0x3562fcu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)111 << 16));
label_356300:
    // 0x356300: 0x3c0a006f  lui         $t2, 0x6F
    ctx->pc = 0x356300u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)111 << 16));
label_356304:
    // 0x356304: 0x95c30064  lhu         $v1, 0x64($t6)
    ctx->pc = 0x356304u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 100)));
label_356308:
    // 0x356308: 0x3c09006f  lui         $t1, 0x6F
    ctx->pc = 0x356308u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)111 << 16));
label_35630c:
    // 0x35630c: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x35630cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_356310:
    // 0x356310: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x356310u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_356314:
    // 0x356314: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x356314u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_356318:
    // 0x356318: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x356318u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
label_35631c:
    // 0x35631c: 0x3066feff  andi        $a2, $v1, 0xFEFF
    ctx->pc = 0x35631cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65279);
label_356320:
    // 0x356320: 0xa5c60064  sh          $a2, 0x64($t6)
    ctx->pc = 0x356320u;
    WRITE16(ADD32(GPR_U32(ctx, 14), 100), (uint16_t)GPR_U32(ctx, 6));
label_356324:
    // 0x356324: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x356324u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_356328:
    // 0x356328: 0x8eaf0274  lw          $t7, 0x274($s5)
    ctx->pc = 0x356328u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 628)));
label_35632c:
    // 0x35632c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35632cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_356330:
    // 0x356330: 0x95ee0064  lhu         $t6, 0x64($t7)
    ctx->pc = 0x356330u;
    SET_GPR_U32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 15), 100)));
label_356334:
    // 0x356334: 0x31cefeff  andi        $t6, $t6, 0xFEFF
    ctx->pc = 0x356334u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)65279);
label_356338:
    // 0x356338: 0xa5ee0064  sh          $t6, 0x64($t7)
    ctx->pc = 0x356338u;
    WRITE16(ADD32(GPR_U32(ctx, 15), 100), (uint16_t)GPR_U32(ctx, 14));
label_35633c:
    // 0x35633c: 0x8dafe3c0  lw          $t7, -0x1C40($t5)
    ctx->pc = 0x35633cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4294960064)));
label_356340:
    // 0x356340: 0x8d8ee3d8  lw          $t6, -0x1C28($t4)
    ctx->pc = 0x356340u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4294960088)));
label_356344:
    // 0x356344: 0x8d6de360  lw          $t5, -0x1CA0($t3)
    ctx->pc = 0x356344u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4294959968)));
label_356348:
    // 0x356348: 0xe7180  sll         $t6, $t6, 6
    ctx->pc = 0x356348u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 6));
label_35634c:
    // 0x35634c: 0xf6080  sll         $t4, $t7, 2
    ctx->pc = 0x35634cu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
label_356350:
    // 0x356350: 0x8c4be3b0  lw          $t3, -0x1C50($v0)
    ctx->pc = 0x356350u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960048)));
label_356354:
    // 0x356354: 0x1ae8821  addu        $s1, $t5, $t6
    ctx->pc = 0x356354u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 14)));
label_356358:
    // 0x356358: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x356358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_35635c:
    // 0x35635c: 0x16c5821  addu        $t3, $t3, $t4
    ctx->pc = 0x35635cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 12)));
label_356360:
    // 0x356360: 0xad710000  sw          $s1, 0x0($t3)
    ctx->pc = 0x356360u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 17));
label_356364:
    // 0x356364: 0x8d4ae3d8  lw          $t2, -0x1C28($t2)
    ctx->pc = 0x356364u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294960088)));
label_356368:
    // 0x356368: 0x8d29e378  lw          $t1, -0x1C88($t1)
    ctx->pc = 0x356368u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294959992)));
label_35636c:
    // 0x35636c: 0x8c84e3b8  lw          $a0, -0x1C48($a0)
    ctx->pc = 0x35636cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294960056)));
label_356370:
    // 0x356370: 0xa5080  sll         $t2, $t2, 2
    ctx->pc = 0x356370u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
label_356374:
    // 0x356374: 0x12a8021  addu        $s0, $t1, $t2
    ctx->pc = 0x356374u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
label_356378:
    // 0x356378: 0x8c4821  addu        $t1, $a0, $t4
    ctx->pc = 0x356378u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 12)));
label_35637c:
    // 0x35637c: 0xad300000  sw          $s0, 0x0($t1)
    ctx->pc = 0x35637cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 16));
label_356380:
    // 0x356380: 0x8c490028  lw          $t1, 0x28($v0)
    ctx->pc = 0x356380u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_356384:
    // 0x356384: 0x8d08e3d8  lw          $t0, -0x1C28($t0)
    ctx->pc = 0x356384u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294960088)));
label_356388:
    // 0x356388: 0x8ca2e3c0  lw          $v0, -0x1C40($a1)
    ctx->pc = 0x356388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294960064)));
label_35638c:
    // 0x35638c: 0x1092821  addu        $a1, $t0, $t1
    ctx->pc = 0x35638cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_356390:
    // 0x356390: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x356390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_356394:
    // 0x356394: 0xace5e3d8  sw          $a1, -0x1C28($a3)
    ctx->pc = 0x356394u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294960088), GPR_U32(ctx, 5));
label_356398:
    // 0x356398: 0xac62e3c0  sw          $v0, -0x1C40($v1)
    ctx->pc = 0x356398u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 2));
label_35639c:
    // 0x35639c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x35639cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3563a0:
    // 0x3563a0: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x3563a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_3563a4:
    // 0x3563a4: 0xc04e4a4  jal         func_139290
label_3563a8:
    if (ctx->pc == 0x3563A8u) {
        ctx->pc = 0x3563A8u;
            // 0x3563a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3563ACu;
        goto label_3563ac;
    }
    ctx->pc = 0x3563A4u;
    SET_GPR_U32(ctx, 31, 0x3563ACu);
    ctx->pc = 0x3563A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3563A4u;
            // 0x3563a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3563ACu; }
        if (ctx->pc != 0x3563ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3563ACu; }
        if (ctx->pc != 0x3563ACu) { return; }
    }
    ctx->pc = 0x3563ACu;
label_3563ac:
    // 0x3563ac: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3563acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3563b0:
    // 0x3563b0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3563b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3563b4:
    // 0x3563b4: 0xc04cd60  jal         func_133580
label_3563b8:
    if (ctx->pc == 0x3563B8u) {
        ctx->pc = 0x3563B8u;
            // 0x3563b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3563BCu;
        goto label_3563bc;
    }
    ctx->pc = 0x3563B4u;
    SET_GPR_U32(ctx, 31, 0x3563BCu);
    ctx->pc = 0x3563B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3563B4u;
            // 0x3563b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3563BCu; }
        if (ctx->pc != 0x3563BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3563BCu; }
        if (ctx->pc != 0x3563BCu) { return; }
    }
    ctx->pc = 0x3563BCu;
label_3563bc:
    // 0x3563bc: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x3563bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_3563c0:
    // 0x3563c0: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x3563c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_3563c4:
    // 0x3563c4: 0x320f809  jalr        $t9
label_3563c8:
    if (ctx->pc == 0x3563C8u) {
        ctx->pc = 0x3563C8u;
            // 0x3563c8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3563CCu;
        goto label_3563cc;
    }
    ctx->pc = 0x3563C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3563CCu);
        ctx->pc = 0x3563C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3563C4u;
            // 0x3563c8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3563CCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3563CCu; }
            if (ctx->pc != 0x3563CCu) { return; }
        }
        }
    }
    ctx->pc = 0x3563CCu;
label_3563cc:
    // 0x3563cc: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x3563ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3563d0:
    // 0x3563d0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x3563d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3563d4:
    // 0x3563d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3563d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3563d8:
    // 0x3563d8: 0xc054fd4  jal         func_153F50
label_3563dc:
    if (ctx->pc == 0x3563DCu) {
        ctx->pc = 0x3563DCu;
            // 0x3563dc: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3563E0u;
        goto label_3563e0;
    }
    ctx->pc = 0x3563D8u;
    SET_GPR_U32(ctx, 31, 0x3563E0u);
    ctx->pc = 0x3563DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3563D8u;
            // 0x3563dc: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153F50u;
    if (runtime->hasFunction(0x153F50u)) {
        auto targetFn = runtime->lookupFunction(0x153F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3563E0u; }
        if (ctx->pc != 0x3563E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00153F50_0x153f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3563E0u; }
        if (ctx->pc != 0x3563E0u) { return; }
    }
    ctx->pc = 0x3563E0u;
label_3563e0:
    // 0x3563e0: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x3563e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3563e4:
    // 0x3563e4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3563e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3563e8:
    // 0x3563e8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3563e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3563ec:
    // 0x3563ec: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x3563ecu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_3563f0:
    // 0x3563f0: 0xc0550f8  jal         func_1543E0
label_3563f4:
    if (ctx->pc == 0x3563F4u) {
        ctx->pc = 0x3563F4u;
            // 0x3563f4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3563F8u;
        goto label_3563f8;
    }
    ctx->pc = 0x3563F0u;
    SET_GPR_U32(ctx, 31, 0x3563F8u);
    ctx->pc = 0x3563F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3563F0u;
            // 0x3563f4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1543E0u;
    if (runtime->hasFunction(0x1543E0u)) {
        auto targetFn = runtime->lookupFunction(0x1543E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3563F8u; }
        if (ctx->pc != 0x3563F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001543E0_0x1543e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3563F8u; }
        if (ctx->pc != 0x3563F8u) { return; }
    }
    ctx->pc = 0x3563F8u;
label_3563f8:
    // 0x3563f8: 0x64020001  daddiu      $v0, $zero, 0x1
    ctx->pc = 0x3563f8u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_3563fc:
    // 0x3563fc: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x3563fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_356400:
    // 0x356400: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x356400u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_356404:
    // 0x356404: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x356404u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_356408:
    // 0x356408: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x356408u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_35640c:
    // 0x35640c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x35640cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_356410:
    // 0x356410: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x356410u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_356414:
    // 0x356414: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x356414u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_356418:
    // 0x356418: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x356418u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_35641c:
    // 0x35641c: 0x3e00008  jr          $ra
label_356420:
    if (ctx->pc == 0x356420u) {
        ctx->pc = 0x356420u;
            // 0x356420: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x356424u;
        goto label_356424;
    }
    ctx->pc = 0x35641Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x356420u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35641Cu;
            // 0x356420: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x356424u;
label_356424:
    // 0x356424: 0x0  nop
    ctx->pc = 0x356424u;
    // NOP
label_356428:
    // 0x356428: 0x0  nop
    ctx->pc = 0x356428u;
    // NOP
label_35642c:
    // 0x35642c: 0x0  nop
    ctx->pc = 0x35642cu;
    // NOP
}
