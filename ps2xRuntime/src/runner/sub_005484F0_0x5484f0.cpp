#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_005484F0
// Address: 0x5484f0 - 0x548c20
void sub_005484F0_0x5484f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005484F0_0x5484f0");
#endif

    switch (ctx->pc) {
        case 0x5485e4u: goto label_5485e4;
        case 0x54861cu: goto label_54861c;
        case 0x548728u: goto label_548728;
        case 0x5487d4u: goto label_5487d4;
        case 0x5488c0u: goto label_5488c0;
        case 0x54896cu: goto label_54896c;
        case 0x548a58u: goto label_548a58;
        case 0x548b04u: goto label_548b04;
        case 0x548bacu: goto label_548bac;
        default: break;
    }

    ctx->pc = 0x5484f0u;

    // 0x5484f0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x5484f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x5484f4: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x5484f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
    // 0x5484f8: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x5484f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x5484fc: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x5484fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x548500: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x548500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x548504: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x548504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x548508: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x548508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x54850c: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x54850cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x548510: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x548510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x548514: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x548514u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x548518: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x548518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x54851c: 0x32a5ffff  andi        $a1, $s5, 0xFFFF
    ctx->pc = 0x54851cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)65535);
    // 0x548520: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x548520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x548524: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x548524u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x548528: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x548528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x54852c: 0x3c120067  lui         $s2, 0x67
    ctx->pc = 0x54852cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)103 << 16));
    // 0x548530: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x548530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x548534: 0x3c060063  lui         $a2, 0x63
    ctx->pc = 0x548534u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)99 << 16));
    // 0x548538: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x548538u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x54853c: 0x54fc2  srl         $t1, $a1, 31
    ctx->pc = 0x54853cu;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x548540: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x548540u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x548544: 0x2652e790  addiu       $s2, $s2, -0x1870
    ctx->pc = 0x548544u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294961040));
    // 0x548548: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x548548u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x54854c: 0x24c6da20  addiu       $a2, $a2, -0x25E0
    ctx->pc = 0x54854cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957600));
    // 0x548550: 0x9471da18  lhu         $s1, -0x25E8($v1)
    ctx->pc = 0x548550u;
    SET_GPR_U32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294957592)));
    // 0x548554: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x548554u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x548558: 0x46006d06  mov.s       $f20, $f13
    ctx->pc = 0x548558u;
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
    // 0x54855c: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x54855cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
    // 0x548560: 0x9470da1a  lhu         $s0, -0x25E6($v1)
    ctx->pc = 0x548560u;
    SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294957594)));
    // 0x548564: 0x3c031062  lui         $v1, 0x1062
    ctx->pc = 0x548564u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4194 << 16));
    // 0x548568: 0x34644dd3  ori         $a0, $v1, 0x4DD3
    ctx->pc = 0x548568u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)19923);
    // 0x54856c: 0x850018  mult        $zero, $a0, $a1
    ctx->pc = 0x54856cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x548570: 0x3c0351eb  lui         $v1, 0x51EB
    ctx->pc = 0x548570u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20971 << 16));
    // 0x548574: 0x3463851f  ori         $v1, $v1, 0x851F
    ctx->pc = 0x548574u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34079);
    // 0x548578: 0x3810  mfhi        $a3
    ctx->pc = 0x548578u;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x54857c: 0x27a500b8  addiu       $a1, $sp, 0xB8
    ctx->pc = 0x54857cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x548580: 0x73983  sra         $a3, $a3, 6
    ctx->pc = 0x548580u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 6));
    // 0x548584: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x548584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x548588: 0xe94821  addu        $t1, $a3, $t1
    ctx->pc = 0x548588u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x54858c: 0x93940  sll         $a3, $t1, 5
    ctx->pc = 0x54858cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 9), 5));
    // 0x548590: 0xe93823  subu        $a3, $a3, $t1
    ctx->pc = 0x548590u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x548594: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x548594u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x548598: 0xe93821  addu        $a3, $a3, $t1
    ctx->pc = 0x548598u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x54859c: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x54859cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x5485a0: 0x30e7ffff  andi        $a3, $a3, 0xFFFF
    ctx->pc = 0x5485a0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x5485a4: 0x2a73823  subu        $a3, $s5, $a3
    ctx->pc = 0x5485a4u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 7)));
    // 0x5485a8: 0x30e9ffff  andi        $t1, $a3, 0xFFFF
    ctx->pc = 0x5485a8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x5485ac: 0x690018  mult        $zero, $v1, $t1
    ctx->pc = 0x5485acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x5485b0: 0x93fc2  srl         $a3, $t1, 31
    ctx->pc = 0x5485b0u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
    // 0x5485b4: 0x0  nop
    ctx->pc = 0x5485b4u;
    // NOP
    // 0x5485b8: 0x1810  mfhi        $v1
    ctx->pc = 0x5485b8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x5485bc: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x5485bcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
    // 0x5485c0: 0x673821  addu        $a3, $v1, $a3
    ctx->pc = 0x5485c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x5485c4: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x5485c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x5485c8: 0x673821  addu        $a3, $v1, $a3
    ctx->pc = 0x5485c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x5485cc: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x5485ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x5485d0: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x5485d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x5485d4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x5485d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x5485d8: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x5485d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x5485dc: 0x1231823  subu        $v1, $t1, $v1
    ctx->pc = 0x5485dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x5485e0: 0x3075ffff  andi        $s5, $v1, 0xFFFF
    ctx->pc = 0x5485e0u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_5485e4:
    // 0x5485e4: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x5485e4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x5485e8: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x5485e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x5485ec: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x5485ecu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x5485f0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x5485f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x5485f4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x5485f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x5485f8: 0x1c80fffa  bgtz        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x5485F8u;
    {
        const bool branch_taken_0x5485f8 = (GPR_S32(ctx, 4) > 0);
        if (branch_taken_0x5485f8) {
            ctx->pc = 0x5485E4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_5485e4;
        }
    }
    ctx->pc = 0x548600u;
    // 0x548600: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x548600u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x548604: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x548604u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x548608: 0x2463e920  addiu       $v1, $v1, -0x16E0
    ctx->pc = 0x548608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961440));
    // 0x54860c: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x54860cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x548610: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x548610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x548614: 0x27be00b8  addiu       $fp, $sp, 0xB8
    ctx->pc = 0x548614u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x548618: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x548618u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_54861c:
    // 0x54861c: 0x93c40000  lbu         $a0, 0x0($fp)
    ctx->pc = 0x54861cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x548620: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x548620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x548624: 0x1083013e  beq         $a0, $v1, . + 4 + (0x13E << 2)
    ctx->pc = 0x548624u;
    {
        const bool branch_taken_0x548624 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x548624) {
            ctx->pc = 0x548B20u;
            goto label_548b20;
        }
    }
    ctx->pc = 0x54862Cu;
    // 0x54862c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x54862cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x548630: 0x108300d5  beq         $a0, $v1, . + 4 + (0xD5 << 2)
    ctx->pc = 0x548630u;
    {
        const bool branch_taken_0x548630 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x548630) {
            ctx->pc = 0x548988u;
            goto label_548988;
        }
    }
    ctx->pc = 0x548638u;
    // 0x548638: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x548638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x54863c: 0x1083006c  beq         $a0, $v1, . + 4 + (0x6C << 2)
    ctx->pc = 0x54863Cu;
    {
        const bool branch_taken_0x54863c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x54863c) {
            ctx->pc = 0x5487F0u;
            goto label_5487f0;
        }
    }
    ctx->pc = 0x548644u;
    // 0x548644: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x548644u;
    {
        const bool branch_taken_0x548644 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x548644) {
            ctx->pc = 0x548658u;
            goto label_548658;
        }
    }
    ctx->pc = 0x54864Cu;
    // 0x54864c: 0x1000015e  b           . + 4 + (0x15E << 2)
    ctx->pc = 0x54864Cu;
    {
        const bool branch_taken_0x54864c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x54864c) {
            ctx->pc = 0x548BC8u;
            goto label_548bc8;
        }
    }
    ctx->pc = 0x548654u;
    // 0x548654: 0x0  nop
    ctx->pc = 0x548654u;
    // NOP
label_548658:
    // 0x548658: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x548658u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
    // 0x54865c: 0x32a4ffff  andi        $a0, $s5, 0xFFFF
    ctx->pc = 0x54865cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)65535);
    // 0x548660: 0x34426667  ori         $v0, $v0, 0x6667
    ctx->pc = 0x548660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
    // 0x548664: 0x440018  mult        $zero, $v0, $a0
    ctx->pc = 0x548664u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x548668: 0x41fc2  srl         $v1, $a0, 31
    ctx->pc = 0x548668u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x54866c: 0x0  nop
    ctx->pc = 0x54866cu;
    // NOP
    // 0x548670: 0x1010  mfhi        $v0
    ctx->pc = 0x548670u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x548674: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x548674u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x548678: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x548678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x54867c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x54867cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x548680: 0x24820019  addiu       $v0, $a0, 0x19
    ctx->pc = 0x548680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 25));
    // 0x548684: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x548684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x548688: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x548688u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x54868c: 0x2422821  addu        $a1, $s2, $v0
    ctx->pc = 0x54868cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x548690: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x548690u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x548694: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x548694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x548698: 0x2a21023  subu        $v0, $s5, $v0
    ctx->pc = 0x548698u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x54869c: 0xc4b60008  lwc1        $f22, 0x8($a1)
    ctx->pc = 0x54869cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x5486a0: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x5486a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x5486a4: 0x6200004  bltz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x5486A4u;
    {
        const bool branch_taken_0x5486a4 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x5486A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5486A4u;
            // 0x5486a8: 0x3055ffff  andi        $s5, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x5486a4) {
            ctx->pc = 0x5486B8u;
            goto label_5486b8;
        }
    }
    ctx->pc = 0x5486ACu;
    // 0x5486ac: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x5486acu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x5486b0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x5486B0u;
    {
        const bool branch_taken_0x5486b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5486B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5486B0u;
            // 0x5486b4: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x5486b0) {
            ctx->pc = 0x5486D4u;
            goto label_5486d4;
        }
    }
    ctx->pc = 0x5486B8u;
label_5486b8:
    // 0x5486b8: 0x111842  srl         $v1, $s1, 1
    ctx->pc = 0x5486b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
    // 0x5486bc: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x5486bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x5486c0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x5486c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x5486c4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x5486c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x5486c8: 0x0  nop
    ctx->pc = 0x5486c8u;
    // NOP
    // 0x5486cc: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x5486ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
    // 0x5486d0: 0x46108400  add.s       $f16, $f16, $f16
    ctx->pc = 0x5486d0u;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
label_5486d4:
    // 0x5486d4: 0x6020004  bltzl       $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x5486D4u;
    {
        const bool branch_taken_0x5486d4 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x5486d4) {
            ctx->pc = 0x5486D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5486D4u;
            // 0x5486d8: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5486E8u;
            goto label_5486e8;
        }
    }
    ctx->pc = 0x5486DCu;
    // 0x5486dc: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x5486dcu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x5486e0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x5486E0u;
    {
        const bool branch_taken_0x5486e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5486E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5486E0u;
            // 0x5486e4: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x5486e0) {
            ctx->pc = 0x548700u;
            goto label_548700;
        }
    }
    ctx->pc = 0x5486E8u;
label_5486e8:
    // 0x5486e8: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x5486e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x5486ec: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x5486ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x5486f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x5486f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x5486f4: 0x0  nop
    ctx->pc = 0x5486f4u;
    // NOP
    // 0x5486f8: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x5486f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
    // 0x5486fc: 0x46118c40  add.s       $f17, $f17, $f17
    ctx->pc = 0x5486fcu;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[17]);
label_548700:
    // 0x548700: 0x4601a3c0  add.s       $f15, $f20, $f1
    ctx->pc = 0x548700u;
    ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
    // 0x548704: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x548704u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x548708: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x548708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x54870c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x54870cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x548710: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x548710u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x548714: 0x4616ab80  add.s       $f14, $f21, $f22
    ctx->pc = 0x548714u;
    ctx->f[14] = FPU_ADD_S(ctx->f[21], ctx->f[22]);
    // 0x548718: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x548718u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x54871c: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x54871cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x548720: 0xc0bc284  jal         func_2F0A10
    ctx->pc = 0x548720u;
    SET_GPR_U32(ctx, 31, 0x548728u);
    ctx->pc = 0x548724u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x548720u;
            // 0x548724: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x548728u; }
        if (ctx->pc != 0x548728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x548728u; }
        if (ctx->pc != 0x548728u) { return; }
    }
    ctx->pc = 0x548728u;
label_548728:
    // 0x548728: 0x32a2ffff  andi        $v0, $s5, 0xFFFF
    ctx->pc = 0x548728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)65535);
    // 0x54872c: 0x3c033f40  lui         $v1, 0x3F40
    ctx->pc = 0x54872cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16192 << 16));
    // 0x548730: 0x24420019  addiu       $v0, $v0, 0x19
    ctx->pc = 0x548730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25));
    // 0x548734: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x548734u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x548738: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x548738u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x54873c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x54873cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x548740: 0x2422821  addu        $a1, $s2, $v0
    ctx->pc = 0x548740u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x548744: 0x46150018  adda.s      $f0, $f21
    ctx->pc = 0x548744u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x548748: 0x4601b55c  madd.s      $f21, $f22, $f1
    ctx->pc = 0x548748u;
    ctx->f[21] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[22], ctx->f[1]));
    // 0x54874c: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x54874cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x548750: 0x6200004  bltz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x548750u;
    {
        const bool branch_taken_0x548750 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x548754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x548750u;
            // 0x548754: 0xc4b60008  lwc1        $f22, 0x8($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x548750) {
            ctx->pc = 0x548764u;
            goto label_548764;
        }
    }
    ctx->pc = 0x548758u;
    // 0x548758: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x548758u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x54875c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x54875Cu;
    {
        const bool branch_taken_0x54875c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x548760u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54875Cu;
            // 0x548760: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x54875c) {
            ctx->pc = 0x548780u;
            goto label_548780;
        }
    }
    ctx->pc = 0x548764u;
label_548764:
    // 0x548764: 0x111842  srl         $v1, $s1, 1
    ctx->pc = 0x548764u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
    // 0x548768: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x548768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x54876c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x54876cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x548770: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x548770u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x548774: 0x0  nop
    ctx->pc = 0x548774u;
    // NOP
    // 0x548778: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x548778u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
    // 0x54877c: 0x46108400  add.s       $f16, $f16, $f16
    ctx->pc = 0x54877cu;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
label_548780:
    // 0x548780: 0x6020004  bltzl       $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x548780u;
    {
        const bool branch_taken_0x548780 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x548780) {
            ctx->pc = 0x548784u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x548780u;
            // 0x548784: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x548794u;
            goto label_548794;
        }
    }
    ctx->pc = 0x548788u;
    // 0x548788: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x548788u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x54878c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x54878Cu;
    {
        const bool branch_taken_0x54878c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x548790u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54878Cu;
            // 0x548790: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x54878c) {
            ctx->pc = 0x5487ACu;
            goto label_5487ac;
        }
    }
    ctx->pc = 0x548794u;
label_548794:
    // 0x548794: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x548794u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x548798: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x548798u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x54879c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54879cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x5487a0: 0x0  nop
    ctx->pc = 0x5487a0u;
    // NOP
    // 0x5487a4: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x5487a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
    // 0x5487a8: 0x46118c40  add.s       $f17, $f17, $f17
    ctx->pc = 0x5487a8u;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[17]);
label_5487ac:
    // 0x5487ac: 0x4601a3c0  add.s       $f15, $f20, $f1
    ctx->pc = 0x5487acu;
    ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
    // 0x5487b0: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x5487b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x5487b4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x5487b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x5487b8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x5487b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5487bc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x5487bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5487c0: 0x4616ab80  add.s       $f14, $f21, $f22
    ctx->pc = 0x5487c0u;
    ctx->f[14] = FPU_ADD_S(ctx->f[21], ctx->f[22]);
    // 0x5487c4: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x5487c4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x5487c8: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x5487c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x5487cc: 0xc0bc284  jal         func_2F0A10
    ctx->pc = 0x5487CCu;
    SET_GPR_U32(ctx, 31, 0x5487D4u);
    ctx->pc = 0x5487D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5487CCu;
            // 0x5487d0: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5487D4u; }
        if (ctx->pc != 0x5487D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5487D4u; }
        if (ctx->pc != 0x5487D4u) { return; }
    }
    ctx->pc = 0x5487D4u;
label_5487d4:
    // 0x5487d4: 0x3c033f40  lui         $v1, 0x3F40
    ctx->pc = 0x5487d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16192 << 16));
    // 0x5487d8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x5487d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x5487dc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x5487dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x5487e0: 0x0  nop
    ctx->pc = 0x5487e0u;
    // NOP
    // 0x5487e4: 0x46150018  adda.s      $f0, $f21
    ctx->pc = 0x5487e4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x5487e8: 0x100000f7  b           . + 4 + (0xF7 << 2)
    ctx->pc = 0x5487E8u;
    {
        const bool branch_taken_0x5487e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5487ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5487E8u;
            // 0x5487ec: 0x4601b55c  madd.s      $f21, $f22, $f1 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[22], ctx->f[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5487e8) {
            ctx->pc = 0x548BC8u;
            goto label_548bc8;
        }
    }
    ctx->pc = 0x5487F0u;
label_5487f0:
    // 0x5487f0: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x5487f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
    // 0x5487f4: 0x328400ff  andi        $a0, $s4, 0xFF
    ctx->pc = 0x5487f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x5487f8: 0x34426667  ori         $v0, $v0, 0x6667
    ctx->pc = 0x5487f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
    // 0x5487fc: 0x440018  mult        $zero, $v0, $a0
    ctx->pc = 0x5487fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x548800: 0x41fc2  srl         $v1, $a0, 31
    ctx->pc = 0x548800u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x548804: 0x0  nop
    ctx->pc = 0x548804u;
    // NOP
    // 0x548808: 0x1010  mfhi        $v0
    ctx->pc = 0x548808u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x54880c: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x54880cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x548810: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x548810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x548814: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x548814u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x548818: 0x24820019  addiu       $v0, $a0, 0x19
    ctx->pc = 0x548818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 25));
    // 0x54881c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x54881cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x548820: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x548820u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x548824: 0x2422821  addu        $a1, $s2, $v0
    ctx->pc = 0x548824u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x548828: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x548828u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x54882c: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x54882cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x548830: 0x2821023  subu        $v0, $s4, $v0
    ctx->pc = 0x548830u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x548834: 0xc4b60008  lwc1        $f22, 0x8($a1)
    ctx->pc = 0x548834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x548838: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x548838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x54883c: 0x6200004  bltz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x54883Cu;
    {
        const bool branch_taken_0x54883c = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x548840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54883Cu;
            // 0x548840: 0x305400ff  andi        $s4, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x54883c) {
            ctx->pc = 0x548850u;
            goto label_548850;
        }
    }
    ctx->pc = 0x548844u;
    // 0x548844: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x548844u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x548848: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x548848u;
    {
        const bool branch_taken_0x548848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54884Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x548848u;
            // 0x54884c: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x548848) {
            ctx->pc = 0x54886Cu;
            goto label_54886c;
        }
    }
    ctx->pc = 0x548850u;
label_548850:
    // 0x548850: 0x111842  srl         $v1, $s1, 1
    ctx->pc = 0x548850u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
    // 0x548854: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x548854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x548858: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x548858u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x54885c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54885cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x548860: 0x0  nop
    ctx->pc = 0x548860u;
    // NOP
    // 0x548864: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x548864u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
    // 0x548868: 0x46108400  add.s       $f16, $f16, $f16
    ctx->pc = 0x548868u;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
label_54886c:
    // 0x54886c: 0x6020004  bltzl       $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x54886Cu;
    {
        const bool branch_taken_0x54886c = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x54886c) {
            ctx->pc = 0x548870u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x54886Cu;
            // 0x548870: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x548880u;
            goto label_548880;
        }
    }
    ctx->pc = 0x548874u;
    // 0x548874: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x548874u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x548878: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x548878u;
    {
        const bool branch_taken_0x548878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54887Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x548878u;
            // 0x54887c: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x548878) {
            ctx->pc = 0x548898u;
            goto label_548898;
        }
    }
    ctx->pc = 0x548880u;
label_548880:
    // 0x548880: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x548880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x548884: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x548884u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x548888: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x548888u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x54888c: 0x0  nop
    ctx->pc = 0x54888cu;
    // NOP
    // 0x548890: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x548890u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
    // 0x548894: 0x46118c40  add.s       $f17, $f17, $f17
    ctx->pc = 0x548894u;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[17]);
label_548898:
    // 0x548898: 0x4601a3c0  add.s       $f15, $f20, $f1
    ctx->pc = 0x548898u;
    ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
    // 0x54889c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x54889cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x5488a0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x5488a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x5488a4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x5488a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5488a8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x5488a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5488ac: 0x4616ab80  add.s       $f14, $f21, $f22
    ctx->pc = 0x5488acu;
    ctx->f[14] = FPU_ADD_S(ctx->f[21], ctx->f[22]);
    // 0x5488b0: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x5488b0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x5488b4: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x5488b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x5488b8: 0xc0bc284  jal         func_2F0A10
    ctx->pc = 0x5488B8u;
    SET_GPR_U32(ctx, 31, 0x5488C0u);
    ctx->pc = 0x5488BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5488B8u;
            // 0x5488bc: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5488C0u; }
        if (ctx->pc != 0x5488C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5488C0u; }
        if (ctx->pc != 0x5488C0u) { return; }
    }
    ctx->pc = 0x5488C0u;
label_5488c0:
    // 0x5488c0: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x5488c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x5488c4: 0x3c033f40  lui         $v1, 0x3F40
    ctx->pc = 0x5488c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16192 << 16));
    // 0x5488c8: 0x24420019  addiu       $v0, $v0, 0x19
    ctx->pc = 0x5488c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25));
    // 0x5488cc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x5488ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x5488d0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x5488d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x5488d4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x5488d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x5488d8: 0x2422821  addu        $a1, $s2, $v0
    ctx->pc = 0x5488d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x5488dc: 0x46150018  adda.s      $f0, $f21
    ctx->pc = 0x5488dcu;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x5488e0: 0x4601b55c  madd.s      $f21, $f22, $f1
    ctx->pc = 0x5488e0u;
    ctx->f[21] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[22], ctx->f[1]));
    // 0x5488e4: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x5488e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x5488e8: 0x6200004  bltz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x5488E8u;
    {
        const bool branch_taken_0x5488e8 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x5488ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5488E8u;
            // 0x5488ec: 0xc4b60008  lwc1        $f22, 0x8($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x5488e8) {
            ctx->pc = 0x5488FCu;
            goto label_5488fc;
        }
    }
    ctx->pc = 0x5488F0u;
    // 0x5488f0: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x5488f0u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x5488f4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x5488F4u;
    {
        const bool branch_taken_0x5488f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5488F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5488F4u;
            // 0x5488f8: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x5488f4) {
            ctx->pc = 0x548918u;
            goto label_548918;
        }
    }
    ctx->pc = 0x5488FCu;
label_5488fc:
    // 0x5488fc: 0x111842  srl         $v1, $s1, 1
    ctx->pc = 0x5488fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
    // 0x548900: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x548900u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x548904: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x548904u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x548908: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x548908u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x54890c: 0x0  nop
    ctx->pc = 0x54890cu;
    // NOP
    // 0x548910: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x548910u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
    // 0x548914: 0x46108400  add.s       $f16, $f16, $f16
    ctx->pc = 0x548914u;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
label_548918:
    // 0x548918: 0x6020004  bltzl       $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x548918u;
    {
        const bool branch_taken_0x548918 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x548918) {
            ctx->pc = 0x54891Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x548918u;
            // 0x54891c: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x54892Cu;
            goto label_54892c;
        }
    }
    ctx->pc = 0x548920u;
    // 0x548920: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x548920u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x548924: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x548924u;
    {
        const bool branch_taken_0x548924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x548928u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x548924u;
            // 0x548928: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x548924) {
            ctx->pc = 0x548944u;
            goto label_548944;
        }
    }
    ctx->pc = 0x54892Cu;
label_54892c:
    // 0x54892c: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x54892cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x548930: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x548930u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x548934: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x548934u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x548938: 0x0  nop
    ctx->pc = 0x548938u;
    // NOP
    // 0x54893c: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x54893cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
    // 0x548940: 0x46118c40  add.s       $f17, $f17, $f17
    ctx->pc = 0x548940u;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[17]);
label_548944:
    // 0x548944: 0x4601a3c0  add.s       $f15, $f20, $f1
    ctx->pc = 0x548944u;
    ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
    // 0x548948: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x548948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x54894c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x54894cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x548950: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x548950u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x548954: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x548954u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x548958: 0x4616ab80  add.s       $f14, $f21, $f22
    ctx->pc = 0x548958u;
    ctx->f[14] = FPU_ADD_S(ctx->f[21], ctx->f[22]);
    // 0x54895c: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x54895cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x548960: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x548960u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x548964: 0xc0bc284  jal         func_2F0A10
    ctx->pc = 0x548964u;
    SET_GPR_U32(ctx, 31, 0x54896Cu);
    ctx->pc = 0x548968u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x548964u;
            // 0x548968: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54896Cu; }
        if (ctx->pc != 0x54896Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54896Cu; }
        if (ctx->pc != 0x54896Cu) { return; }
    }
    ctx->pc = 0x54896Cu;
label_54896c:
    // 0x54896c: 0x3c033f40  lui         $v1, 0x3F40
    ctx->pc = 0x54896cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16192 << 16));
    // 0x548970: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x548970u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x548974: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x548974u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x548978: 0x0  nop
    ctx->pc = 0x548978u;
    // NOP
    // 0x54897c: 0x46150018  adda.s      $f0, $f21
    ctx->pc = 0x54897cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x548980: 0x10000091  b           . + 4 + (0x91 << 2)
    ctx->pc = 0x548980u;
    {
        const bool branch_taken_0x548980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x548984u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x548980u;
            // 0x548984: 0x4601b55c  madd.s      $f21, $f22, $f1 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[22], ctx->f[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x548980) {
            ctx->pc = 0x548BC8u;
            goto label_548bc8;
        }
    }
    ctx->pc = 0x548988u;
label_548988:
    // 0x548988: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x548988u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
    // 0x54898c: 0x32c400ff  andi        $a0, $s6, 0xFF
    ctx->pc = 0x54898cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
    // 0x548990: 0x34426667  ori         $v0, $v0, 0x6667
    ctx->pc = 0x548990u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
    // 0x548994: 0x440018  mult        $zero, $v0, $a0
    ctx->pc = 0x548994u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x548998: 0x41fc2  srl         $v1, $a0, 31
    ctx->pc = 0x548998u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x54899c: 0x0  nop
    ctx->pc = 0x54899cu;
    // NOP
    // 0x5489a0: 0x1010  mfhi        $v0
    ctx->pc = 0x5489a0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x5489a4: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x5489a4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x5489a8: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x5489a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x5489ac: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x5489acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x5489b0: 0x24820019  addiu       $v0, $a0, 0x19
    ctx->pc = 0x5489b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 25));
    // 0x5489b4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x5489b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x5489b8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x5489b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x5489bc: 0x2422821  addu        $a1, $s2, $v0
    ctx->pc = 0x5489bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x5489c0: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x5489c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x5489c4: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x5489c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x5489c8: 0x2c21023  subu        $v0, $s6, $v0
    ctx->pc = 0x5489c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x5489cc: 0xc4b60008  lwc1        $f22, 0x8($a1)
    ctx->pc = 0x5489ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x5489d0: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x5489d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x5489d4: 0x6200004  bltz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x5489D4u;
    {
        const bool branch_taken_0x5489d4 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x5489D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5489D4u;
            // 0x5489d8: 0x305600ff  andi        $s6, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x5489d4) {
            ctx->pc = 0x5489E8u;
            goto label_5489e8;
        }
    }
    ctx->pc = 0x5489DCu;
    // 0x5489dc: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x5489dcu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x5489e0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x5489E0u;
    {
        const bool branch_taken_0x5489e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5489E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5489E0u;
            // 0x5489e4: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x5489e0) {
            ctx->pc = 0x548A04u;
            goto label_548a04;
        }
    }
    ctx->pc = 0x5489E8u;
label_5489e8:
    // 0x5489e8: 0x111842  srl         $v1, $s1, 1
    ctx->pc = 0x5489e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
    // 0x5489ec: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x5489ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x5489f0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x5489f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x5489f4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x5489f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x5489f8: 0x0  nop
    ctx->pc = 0x5489f8u;
    // NOP
    // 0x5489fc: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x5489fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
    // 0x548a00: 0x46108400  add.s       $f16, $f16, $f16
    ctx->pc = 0x548a00u;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
label_548a04:
    // 0x548a04: 0x6020004  bltzl       $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x548A04u;
    {
        const bool branch_taken_0x548a04 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x548a04) {
            ctx->pc = 0x548A08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x548A04u;
            // 0x548a08: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x548A18u;
            goto label_548a18;
        }
    }
    ctx->pc = 0x548A0Cu;
    // 0x548a0c: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x548a0cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x548a10: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x548A10u;
    {
        const bool branch_taken_0x548a10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x548A14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x548A10u;
            // 0x548a14: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x548a10) {
            ctx->pc = 0x548A30u;
            goto label_548a30;
        }
    }
    ctx->pc = 0x548A18u;
label_548a18:
    // 0x548a18: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x548a18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x548a1c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x548a1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x548a20: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x548a20u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x548a24: 0x0  nop
    ctx->pc = 0x548a24u;
    // NOP
    // 0x548a28: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x548a28u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
    // 0x548a2c: 0x46118c40  add.s       $f17, $f17, $f17
    ctx->pc = 0x548a2cu;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[17]);
label_548a30:
    // 0x548a30: 0x4601a3c0  add.s       $f15, $f20, $f1
    ctx->pc = 0x548a30u;
    ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
    // 0x548a34: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x548a34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x548a38: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x548a38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x548a3c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x548a3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x548a40: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x548a40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x548a44: 0x4616ab80  add.s       $f14, $f21, $f22
    ctx->pc = 0x548a44u;
    ctx->f[14] = FPU_ADD_S(ctx->f[21], ctx->f[22]);
    // 0x548a48: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x548a48u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x548a4c: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x548a4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x548a50: 0xc0bc284  jal         func_2F0A10
    ctx->pc = 0x548A50u;
    SET_GPR_U32(ctx, 31, 0x548A58u);
    ctx->pc = 0x548A54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x548A50u;
            // 0x548a54: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x548A58u; }
        if (ctx->pc != 0x548A58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x548A58u; }
        if (ctx->pc != 0x548A58u) { return; }
    }
    ctx->pc = 0x548A58u;
label_548a58:
    // 0x548a58: 0x32c200ff  andi        $v0, $s6, 0xFF
    ctx->pc = 0x548a58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
    // 0x548a5c: 0x3c033f40  lui         $v1, 0x3F40
    ctx->pc = 0x548a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16192 << 16));
    // 0x548a60: 0x24420019  addiu       $v0, $v0, 0x19
    ctx->pc = 0x548a60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25));
    // 0x548a64: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x548a64u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x548a68: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x548a68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x548a6c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x548a6cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x548a70: 0x2422821  addu        $a1, $s2, $v0
    ctx->pc = 0x548a70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x548a74: 0x46150018  adda.s      $f0, $f21
    ctx->pc = 0x548a74u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x548a78: 0x4601b55c  madd.s      $f21, $f22, $f1
    ctx->pc = 0x548a78u;
    ctx->f[21] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[22], ctx->f[1]));
    // 0x548a7c: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x548a7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x548a80: 0x6200004  bltz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x548A80u;
    {
        const bool branch_taken_0x548a80 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x548A84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x548A80u;
            // 0x548a84: 0xc4b60008  lwc1        $f22, 0x8($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x548a80) {
            ctx->pc = 0x548A94u;
            goto label_548a94;
        }
    }
    ctx->pc = 0x548A88u;
    // 0x548a88: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x548a88u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x548a8c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x548A8Cu;
    {
        const bool branch_taken_0x548a8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x548A90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x548A8Cu;
            // 0x548a90: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x548a8c) {
            ctx->pc = 0x548AB0u;
            goto label_548ab0;
        }
    }
    ctx->pc = 0x548A94u;
label_548a94:
    // 0x548a94: 0x111842  srl         $v1, $s1, 1
    ctx->pc = 0x548a94u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
    // 0x548a98: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x548a98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x548a9c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x548a9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x548aa0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x548aa0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x548aa4: 0x0  nop
    ctx->pc = 0x548aa4u;
    // NOP
    // 0x548aa8: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x548aa8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
    // 0x548aac: 0x46108400  add.s       $f16, $f16, $f16
    ctx->pc = 0x548aacu;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
label_548ab0:
    // 0x548ab0: 0x6020004  bltzl       $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x548AB0u;
    {
        const bool branch_taken_0x548ab0 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x548ab0) {
            ctx->pc = 0x548AB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x548AB0u;
            // 0x548ab4: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x548AC4u;
            goto label_548ac4;
        }
    }
    ctx->pc = 0x548AB8u;
    // 0x548ab8: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x548ab8u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x548abc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x548ABCu;
    {
        const bool branch_taken_0x548abc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x548AC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x548ABCu;
            // 0x548ac0: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x548abc) {
            ctx->pc = 0x548ADCu;
            goto label_548adc;
        }
    }
    ctx->pc = 0x548AC4u;
label_548ac4:
    // 0x548ac4: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x548ac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x548ac8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x548ac8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x548acc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x548accu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x548ad0: 0x0  nop
    ctx->pc = 0x548ad0u;
    // NOP
    // 0x548ad4: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x548ad4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
    // 0x548ad8: 0x46118c40  add.s       $f17, $f17, $f17
    ctx->pc = 0x548ad8u;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[17]);
label_548adc:
    // 0x548adc: 0x4601a3c0  add.s       $f15, $f20, $f1
    ctx->pc = 0x548adcu;
    ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
    // 0x548ae0: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x548ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x548ae4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x548ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x548ae8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x548ae8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x548aec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x548aecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x548af0: 0x4616ab80  add.s       $f14, $f21, $f22
    ctx->pc = 0x548af0u;
    ctx->f[14] = FPU_ADD_S(ctx->f[21], ctx->f[22]);
    // 0x548af4: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x548af4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x548af8: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x548af8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x548afc: 0xc0bc284  jal         func_2F0A10
    ctx->pc = 0x548AFCu;
    SET_GPR_U32(ctx, 31, 0x548B04u);
    ctx->pc = 0x548B00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x548AFCu;
            // 0x548b00: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x548B04u; }
        if (ctx->pc != 0x548B04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x548B04u; }
        if (ctx->pc != 0x548B04u) { return; }
    }
    ctx->pc = 0x548B04u;
label_548b04:
    // 0x548b04: 0x3c033f40  lui         $v1, 0x3F40
    ctx->pc = 0x548b04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16192 << 16));
    // 0x548b08: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x548b08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x548b0c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x548b0cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x548b10: 0x0  nop
    ctx->pc = 0x548b10u;
    // NOP
    // 0x548b14: 0x46150018  adda.s      $f0, $f21
    ctx->pc = 0x548b14u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x548b18: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x548B18u;
    {
        const bool branch_taken_0x548b18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x548B1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x548B18u;
            // 0x548b1c: 0x4601b55c  madd.s      $f21, $f22, $f1 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[22], ctx->f[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x548b18) {
            ctx->pc = 0x548BC8u;
            goto label_548bc8;
        }
    }
    ctx->pc = 0x548B20u;
label_548b20:
    // 0x548b20: 0xc6560238  lwc1        $f22, 0x238($s2)
    ctx->pc = 0x548b20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x548b24: 0xc641023c  lwc1        $f1, 0x23C($s2)
    ctx->pc = 0x548b24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x548b28: 0x6200004  bltz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x548B28u;
    {
        const bool branch_taken_0x548b28 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x548B2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x548B28u;
            // 0x548b2c: 0x26450230  addiu       $a1, $s2, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 560));
        ctx->in_delay_slot = false;
        if (branch_taken_0x548b28) {
            ctx->pc = 0x548B3Cu;
            goto label_548b3c;
        }
    }
    ctx->pc = 0x548B30u;
    // 0x548b30: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x548b30u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x548b34: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x548B34u;
    {
        const bool branch_taken_0x548b34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x548B38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x548B34u;
            // 0x548b38: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x548b34) {
            ctx->pc = 0x548B58u;
            goto label_548b58;
        }
    }
    ctx->pc = 0x548B3Cu;
label_548b3c:
    // 0x548b3c: 0x111842  srl         $v1, $s1, 1
    ctx->pc = 0x548b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
    // 0x548b40: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x548b40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x548b44: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x548b44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x548b48: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x548b48u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x548b4c: 0x0  nop
    ctx->pc = 0x548b4cu;
    // NOP
    // 0x548b50: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x548b50u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
    // 0x548b54: 0x46108400  add.s       $f16, $f16, $f16
    ctx->pc = 0x548b54u;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
label_548b58:
    // 0x548b58: 0x6020004  bltzl       $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x548B58u;
    {
        const bool branch_taken_0x548b58 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x548b58) {
            ctx->pc = 0x548B5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x548B58u;
            // 0x548b5c: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x548B6Cu;
            goto label_548b6c;
        }
    }
    ctx->pc = 0x548B60u;
    // 0x548b60: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x548b60u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x548b64: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x548B64u;
    {
        const bool branch_taken_0x548b64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x548B68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x548B64u;
            // 0x548b68: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x548b64) {
            ctx->pc = 0x548B84u;
            goto label_548b84;
        }
    }
    ctx->pc = 0x548B6Cu;
label_548b6c:
    // 0x548b6c: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x548b6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x548b70: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x548b70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x548b74: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x548b74u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x548b78: 0x0  nop
    ctx->pc = 0x548b78u;
    // NOP
    // 0x548b7c: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x548b7cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
    // 0x548b80: 0x46118c40  add.s       $f17, $f17, $f17
    ctx->pc = 0x548b80u;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[17]);
label_548b84:
    // 0x548b84: 0x4601a3c0  add.s       $f15, $f20, $f1
    ctx->pc = 0x548b84u;
    ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
    // 0x548b88: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x548b88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x548b8c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x548b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x548b90: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x548b90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x548b94: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x548b94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x548b98: 0x4616ab80  add.s       $f14, $f21, $f22
    ctx->pc = 0x548b98u;
    ctx->f[14] = FPU_ADD_S(ctx->f[21], ctx->f[22]);
    // 0x548b9c: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x548b9cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x548ba0: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x548ba0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x548ba4: 0xc0bc284  jal         func_2F0A10
    ctx->pc = 0x548BA4u;
    SET_GPR_U32(ctx, 31, 0x548BACu);
    ctx->pc = 0x548BA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x548BA4u;
            // 0x548ba8: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x548BACu; }
        if (ctx->pc != 0x548BACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x548BACu; }
        if (ctx->pc != 0x548BACu) { return; }
    }
    ctx->pc = 0x548BACu;
label_548bac:
    // 0x548bac: 0x3c033f40  lui         $v1, 0x3F40
    ctx->pc = 0x548bacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16192 << 16));
    // 0x548bb0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x548bb0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x548bb4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x548bb4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x548bb8: 0x0  nop
    ctx->pc = 0x548bb8u;
    // NOP
    // 0x548bbc: 0x46150018  adda.s      $f0, $f21
    ctx->pc = 0x548bbcu;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x548bc0: 0x4601b55c  madd.s      $f21, $f22, $f1
    ctx->pc = 0x548bc0u;
    ctx->f[21] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[22], ctx->f[1]));
    // 0x548bc4: 0x0  nop
    ctx->pc = 0x548bc4u;
    // NOP
label_548bc8:
    // 0x548bc8: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x548bc8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x548bcc: 0x2ae30005  slti        $v1, $s7, 0x5
    ctx->pc = 0x548bccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x548bd0: 0x1460fe92  bnez        $v1, . + 4 + (-0x16E << 2)
    ctx->pc = 0x548BD0u;
    {
        const bool branch_taken_0x548bd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x548BD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x548BD0u;
            // 0x548bd4: 0x27de0001  addiu       $fp, $fp, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x548bd0) {
            ctx->pc = 0x54861Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_54861c;
        }
    }
    ctx->pc = 0x548BD8u;
    // 0x548bd8: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x548bd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x548bdc: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x548bdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x548be0: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x548be0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x548be4: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x548be4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x548be8: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x548be8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x548bec: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x548becu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x548bf0: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x548bf0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x548bf4: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x548bf4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x548bf8: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x548bf8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x548bfc: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x548bfcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x548c00: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x548c00u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x548c04: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x548c04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x548c08: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x548c08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x548c0c: 0x3e00008  jr          $ra
    ctx->pc = 0x548C0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x548C10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x548C0Cu;
            // 0x548c10: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x548C14u;
    // 0x548c14: 0x0  nop
    ctx->pc = 0x548c14u;
    // NOP
    // 0x548c18: 0x0  nop
    ctx->pc = 0x548c18u;
    // NOP
    // 0x548c1c: 0x0  nop
    ctx->pc = 0x548c1cu;
    // NOP
}
