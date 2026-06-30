#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004A8100
// Address: 0x4a8100 - 0x4a8780
void sub_004A8100_0x4a8100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A8100_0x4a8100");
#endif

    switch (ctx->pc) {
        case 0x4a8268u: goto label_4a8268;
        case 0x4a8278u: goto label_4a8278;
        case 0x4a8294u: goto label_4a8294;
        case 0x4a82a0u: goto label_4a82a0;
        case 0x4a8418u: goto label_4a8418;
        case 0x4a8434u: goto label_4a8434;
        case 0x4a8440u: goto label_4a8440;
        case 0x4a8470u: goto label_4a8470;
        case 0x4a8488u: goto label_4a8488;
        case 0x4a8494u: goto label_4a8494;
        case 0x4a8608u: goto label_4a8608;
        case 0x4a8624u: goto label_4a8624;
        case 0x4a8630u: goto label_4a8630;
        case 0x4a8660u: goto label_4a8660;
        case 0x4a867cu: goto label_4a867c;
        case 0x4a8688u: goto label_4a8688;
        default: break;
    }

    ctx->pc = 0x4a8100u;

    // 0x4a8100: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x4a8100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x4a8104: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4a8104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x4a8108: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4a8108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x4a810c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4a810cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4a8110: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4a8110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4a8114: 0x8c870068  lw          $a3, 0x68($a0)
    ctx->pc = 0x4a8114u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
    // 0x4a8118: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4a8118u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a811c: 0x4e10003  bgez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x4A811Cu;
    {
        const bool branch_taken_0x4a811c = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x4A8120u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A811Cu;
            // 0x4a8120: 0x72843  sra         $a1, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a811c) {
            ctx->pc = 0x4A812Cu;
            goto label_4a812c;
        }
    }
    ctx->pc = 0x4A8124u;
    // 0x4a8124: 0x24e30001  addiu       $v1, $a3, 0x1
    ctx->pc = 0x4a8124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x4a8128: 0x32843  sra         $a1, $v1, 1
    ctx->pc = 0x4a8128u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 1));
label_4a812c:
    // 0x4a812c: 0x8e04006c  lw          $a0, 0x6C($s0)
    ctx->pc = 0x4a812cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x4a8130: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4A8130u;
    {
        const bool branch_taken_0x4a8130 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x4A8134u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A8130u;
            // 0x4a8134: 0x41843  sra         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a8130) {
            ctx->pc = 0x4A8140u;
            goto label_4a8140;
        }
    }
    ctx->pc = 0x4A8138u;
    // 0x4a8138: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x4a8138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x4a813c: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x4a813cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
label_4a8140:
    // 0x4a8140: 0x8e060078  lw          $a2, 0x78($s0)
    ctx->pc = 0x4a8140u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x4a8144: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x4a8144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4a8148: 0x50c400dd  beql        $a2, $a0, . + 4 + (0xDD << 2)
    ctx->pc = 0x4A8148u;
    {
        const bool branch_taken_0x4a8148 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        if (branch_taken_0x4a8148) {
            ctx->pc = 0x4A814Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A8148u;
            // 0x4a814c: 0x82020094  lb          $v0, 0x94($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 148)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A84C0u;
            goto label_4a84c0;
        }
    }
    ctx->pc = 0x4A8150u;
    // 0x4a8150: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x4a8150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x4a8154: 0x10c400d9  beq         $a2, $a0, . + 4 + (0xD9 << 2)
    ctx->pc = 0x4A8154u;
    {
        const bool branch_taken_0x4a8154 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        if (branch_taken_0x4a8154) {
            ctx->pc = 0x4A84BCu;
            goto label_4a84bc;
        }
    }
    ctx->pc = 0x4A815Cu;
    // 0x4a815c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x4a815cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4a8160: 0x50c40068  beql        $a2, $a0, . + 4 + (0x68 << 2)
    ctx->pc = 0x4A8160u;
    {
        const bool branch_taken_0x4a8160 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        if (branch_taken_0x4a8160) {
            ctx->pc = 0x4A8164u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A8160u;
            // 0x4a8164: 0x82020094  lb          $v0, 0x94($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 148)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A8304u;
            goto label_4a8304;
        }
    }
    ctx->pc = 0x4A8168u;
    // 0x4a8168: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4a8168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4a816c: 0x50c30003  beql        $a2, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4A816Cu;
    {
        const bool branch_taken_0x4a816c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x4a816c) {
            ctx->pc = 0x4A8170u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A816Cu;
            // 0x4a8170: 0x8e040058  lw          $a0, 0x58($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A817Cu;
            goto label_4a817c;
        }
    }
    ctx->pc = 0x4A8174u;
    // 0x4a8174: 0x1000014f  b           . + 4 + (0x14F << 2)
    ctx->pc = 0x4A8174u;
    {
        const bool branch_taken_0x4a8174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A8178u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A8174u;
            // 0x4a8178: 0x8e040078  lw          $a0, 0x78($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a8174) {
            ctx->pc = 0x4A86B4u;
            goto label_4a86b4;
        }
    }
    ctx->pc = 0x4A817Cu;
label_4a817c:
    // 0x4a817c: 0x3c034220  lui         $v1, 0x4220
    ctx->pc = 0x4a817cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16928 << 16));
    // 0x4a8180: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x4a8180u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x4a8184: 0x8c830080  lw          $v1, 0x80($a0)
    ctx->pc = 0x4a8184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x4a8188: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x4a8188u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x4a818c: 0x2463ffec  addiu       $v1, $v1, -0x14
    ctx->pc = 0x4a818cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x4a8190: 0xa603005c  sh          $v1, 0x5C($s0)
    ctx->pc = 0x4a8190u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 92), (uint16_t)GPR_U32(ctx, 3));
    // 0x4a8194: 0x8e040058  lw          $a0, 0x58($s0)
    ctx->pc = 0x4a8194u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x4a8198: 0x8e03006c  lw          $v1, 0x6C($s0)
    ctx->pc = 0x4a8198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x4a819c: 0x8c840084  lw          $a0, 0x84($a0)
    ctx->pc = 0x4a819cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
    // 0x4a81a0: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x4a81a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x4a81a4: 0x2463fffb  addiu       $v1, $v1, -0x5
    ctx->pc = 0x4a81a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967291));
    // 0x4a81a8: 0xa603005e  sh          $v1, 0x5E($s0)
    ctx->pc = 0x4a81a8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 94), (uint16_t)GPR_U32(ctx, 3));
    // 0x4a81ac: 0x8604005c  lh          $a0, 0x5C($s0)
    ctx->pc = 0x4a81acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x4a81b0: 0xc6020084  lwc1        $f2, 0x84($s0)
    ctx->pc = 0x4a81b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4a81b4: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x4a81b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x4a81b8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x4a81b8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x4a81bc: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x4a81bcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4a81c0: 0x0  nop
    ctx->pc = 0x4a81c0u;
    // NOP
    // 0x4a81c4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x4a81c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x4a81c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4a81c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4a81cc: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x4a81ccu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x4a81d0: 0x9203008f  lbu         $v1, 0x8F($s0)
    ctx->pc = 0x4a81d0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 143)));
    // 0x4a81d4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4a81d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x4a81d8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x4a81d8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x4a81dc: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x4a81dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x4a81e0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4a81e0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x4a81e4: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x4a81e4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x4a81e8: 0x0  nop
    ctx->pc = 0x4a81e8u;
    // NOP
    // 0x4a81ec: 0x4343c  dsll32      $a2, $a0, 16
    ctx->pc = 0x4a81ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 16));
    // 0x4a81f0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4a81f0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x4a81f4: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x4a81f4u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x4a81f8: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x4a81f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x4a81fc: 0x0  nop
    ctx->pc = 0x4a81fcu;
    // NOP
    // 0x4a8200: 0x42c3c  dsll32      $a1, $a0, 16
    ctx->pc = 0x4a8200u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 16));
    // 0x4a8204: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x4A8204u;
    {
        const bool branch_taken_0x4a8204 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A8208u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A8204u;
            // 0x4a8208: 0x52c3f  dsra32      $a1, $a1, 16 (Delay Slot)
        SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a8204) {
            ctx->pc = 0x4A8220u;
            goto label_4a8220;
        }
    }
    ctx->pc = 0x4A820Cu;
    // 0x4a820c: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x4a820cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x4a8210: 0x8c630060  lw          $v1, 0x60($v1)
    ctx->pc = 0x4a8210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
    // 0x4a8214: 0xa6030060  sh          $v1, 0x60($s0)
    ctx->pc = 0x4a8214u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 96), (uint16_t)GPR_U32(ctx, 3));
    // 0x4a8218: 0xa6050062  sh          $a1, 0x62($s0)
    ctx->pc = 0x4a8218u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 98), (uint16_t)GPR_U32(ctx, 5));
    // 0x4a821c: 0xa200008f  sb          $zero, 0x8F($s0)
    ctx->pc = 0x4a821cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 143), (uint8_t)GPR_U32(ctx, 0));
label_4a8220:
    // 0x4a8220: 0x86030060  lh          $v1, 0x60($s0)
    ctx->pc = 0x4a8220u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x4a8224: 0x6243c  dsll32      $a0, $a2, 16
    ctx->pc = 0x4a8224u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) << (32 + 16));
    // 0x4a8228: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x4a8228u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x4a822c: 0x5064000c  beql        $v1, $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x4A822Cu;
    {
        const bool branch_taken_0x4a822c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x4a822c) {
            ctx->pc = 0x4A8230u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A822Cu;
            // 0x4a8230: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A8260u;
            goto label_4a8260;
        }
    }
    ctx->pc = 0x4A8234u;
    // 0x4a8234: 0x2463fffb  addiu       $v1, $v1, -0x5
    ctx->pc = 0x4a8234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967291));
    // 0x4a8238: 0xa6030060  sh          $v1, 0x60($s0)
    ctx->pc = 0x4a8238u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 96), (uint16_t)GPR_U32(ctx, 3));
    // 0x4a823c: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x4a823cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x4a8240: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x4a8240u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x4a8244: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x4a8244u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x4a8248: 0x50200003  beql        $at, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x4A8248u;
    {
        const bool branch_taken_0x4a8248 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a8248) {
            ctx->pc = 0x4A824Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A8248u;
            // 0x4a824c: 0xa6060064  sh          $a2, 0x64($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 100), (uint16_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A8258u;
            goto label_4a8258;
        }
    }
    ctx->pc = 0x4A8250u;
    // 0x4a8250: 0xa6060060  sh          $a2, 0x60($s0)
    ctx->pc = 0x4a8250u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 96), (uint16_t)GPR_U32(ctx, 6));
    // 0x4a8254: 0xa6060064  sh          $a2, 0x64($s0)
    ctx->pc = 0x4a8254u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 100), (uint16_t)GPR_U32(ctx, 6));
label_4a8258:
    // 0x4a8258: 0x10000115  b           . + 4 + (0x115 << 2)
    ctx->pc = 0x4A8258u;
    {
        const bool branch_taken_0x4a8258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A825Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A8258u;
            // 0x4a825c: 0xa6050066  sh          $a1, 0x66($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 102), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a8258) {
            ctx->pc = 0x4A86B0u;
            goto label_4a86b0;
        }
    }
    ctx->pc = 0x4A8260u;
label_4a8260:
    // 0x4a8260: 0xc04f26c  jal         func_13C9B0
    ctx->pc = 0x4A8260u;
    SET_GPR_U32(ctx, 31, 0x4A8268u);
    ctx->pc = 0x13C9B0u;
    if (runtime->hasFunction(0x13C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A8268u; }
        if (ctx->pc != 0x4A8268u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9B0_0x13c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A8268u; }
        if (ctx->pc != 0x4A8268u) { return; }
    }
    ctx->pc = 0x4A8268u;
label_4a8268:
    // 0x4a8268: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x4a8268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x4a826c: 0x24060e38  addiu       $a2, $zero, 0xE38
    ctx->pc = 0x4a826cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3640));
    // 0x4a8270: 0xc04cdf0  jal         func_1337C0
    ctx->pc = 0x4A8270u;
    SET_GPR_U32(ctx, 31, 0x4A8278u);
    ctx->pc = 0x4A8274u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A8270u;
            // 0x4a8274: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1337C0u;
    if (runtime->hasFunction(0x1337C0u)) {
        auto targetFn = runtime->lookupFunction(0x1337C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A8278u; }
        if (ctx->pc != 0x4A8278u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001337C0_0x1337c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A8278u; }
        if (ctx->pc != 0x4A8278u) { return; }
    }
    ctx->pc = 0x4A8278u;
label_4a8278:
    // 0x4a8278: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x4a8278u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x4a827c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x4a827cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x4a8280: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x4a8280u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x4a8284: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x4a8284u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a8288: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x4a8288u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x4a828c: 0xc04ce64  jal         func_133990
    ctx->pc = 0x4A828Cu;
    SET_GPR_U32(ctx, 31, 0x4A8294u);
    ctx->pc = 0x4A8290u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A828Cu;
            // 0x4a8290: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133990u;
    if (runtime->hasFunction(0x133990u)) {
        auto targetFn = runtime->lookupFunction(0x133990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A8294u; }
        if (ctx->pc != 0x4A8294u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133990_0x133990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A8294u; }
        if (ctx->pc != 0x4A8294u) { return; }
    }
    ctx->pc = 0x4A8294u;
label_4a8294:
    // 0x4a8294: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x4a8294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x4a8298: 0xc04cce4  jal         func_133390
    ctx->pc = 0x4A8298u;
    SET_GPR_U32(ctx, 31, 0x4A82A0u);
    ctx->pc = 0x4A829Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A8298u;
            // 0x4a829c: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133390u;
    if (runtime->hasFunction(0x133390u)) {
        auto targetFn = runtime->lookupFunction(0x133390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A82A0u; }
        if (ctx->pc != 0x4A82A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133390_0x133390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A82A0u; }
        if (ctx->pc != 0x4A82A0u) { return; }
    }
    ctx->pc = 0x4A82A0u;
label_4a82a0:
    // 0x4a82a0: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x4a82a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4a82a4: 0x86040064  lh          $a0, 0x64($s0)
    ctx->pc = 0x4a82a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x4a82a8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4a82a8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x4a82ac: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x4a82acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x4a82b0: 0x0  nop
    ctx->pc = 0x4a82b0u;
    // NOP
    // 0x4a82b4: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x4a82b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x4a82b8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x4a82b8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x4a82bc: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x4a82bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x4a82c0: 0xa6030064  sh          $v1, 0x64($s0)
    ctx->pc = 0x4a82c0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 100), (uint16_t)GPR_U32(ctx, 3));
    // 0x4a82c4: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x4a82c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4a82c8: 0x86040066  lh          $a0, 0x66($s0)
    ctx->pc = 0x4a82c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 102)));
    // 0x4a82cc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4a82ccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x4a82d0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x4a82d0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x4a82d4: 0x0  nop
    ctx->pc = 0x4a82d4u;
    // NOP
    // 0x4a82d8: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x4a82d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x4a82dc: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x4a82dcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x4a82e0: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x4a82e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x4a82e4: 0xa6030066  sh          $v1, 0x66($s0)
    ctx->pc = 0x4a82e4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 102), (uint16_t)GPR_U32(ctx, 3));
    // 0x4a82e8: 0x8e030090  lw          $v1, 0x90($s0)
    ctx->pc = 0x4a82e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x4a82ec: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4a82ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x4a82f0: 0x2c610015  sltiu       $at, $v1, 0x15
    ctx->pc = 0x4a82f0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)21) ? 1 : 0);
    // 0x4a82f4: 0x142000ee  bnez        $at, . + 4 + (0xEE << 2)
    ctx->pc = 0x4A82F4u;
    {
        const bool branch_taken_0x4a82f4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A82F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A82F4u;
            // 0x4a82f8: 0xae030090  sw          $v1, 0x90($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a82f4) {
            ctx->pc = 0x4A86B0u;
            goto label_4a86b0;
        }
    }
    ctx->pc = 0x4A82FCu;
    // 0x4a82fc: 0x100000ec  b           . + 4 + (0xEC << 2)
    ctx->pc = 0x4A82FCu;
    {
        const bool branch_taken_0x4a82fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A8300u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A82FCu;
            // 0x4a8300: 0xa200008e  sb          $zero, 0x8E($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 142), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a82fc) {
            ctx->pc = 0x4A86B0u;
            goto label_4a86b0;
        }
    }
    ctx->pc = 0x4A8304u;
label_4a8304:
    // 0x4a8304: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4A8304u;
    {
        const bool branch_taken_0x4a8304 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x4a8304) {
            ctx->pc = 0x4A8308u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A8304u;
            // 0x4a8308: 0x22080  sll         $a0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A8314u;
            goto label_4a8314;
        }
    }
    ctx->pc = 0x4A830Cu;
    // 0x4a830c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x4A830Cu;
    {
        const bool branch_taken_0x4a830c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A8310u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A830Cu;
            // 0x4a8310: 0x2404005a  addiu       $a0, $zero, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a830c) {
            ctx->pc = 0x4A8324u;
            goto label_4a8324;
        }
    }
    ctx->pc = 0x4A8314u;
label_4a8314:
    // 0x4a8314: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4a8314u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x4a8318: 0x24425130  addiu       $v0, $v0, 0x5130
    ctx->pc = 0x4a8318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20784));
    // 0x4a831c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x4a831cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4a8320: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4a8320u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4a8324:
    // 0x4a8324: 0x8e020070  lw          $v0, 0x70($s0)
    ctx->pc = 0x4a8324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x4a8328: 0x4430004  bgezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4A8328u;
    {
        const bool branch_taken_0x4a8328 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x4a8328) {
            ctx->pc = 0x4A832Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A8328u;
            // 0x4a832c: 0x28410169  slti        $at, $v0, 0x169 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)361) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A833Cu;
            goto label_4a833c;
        }
    }
    ctx->pc = 0x4A8330u;
    // 0x4a8330: 0x24420168  addiu       $v0, $v0, 0x168
    ctx->pc = 0x4a8330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 360));
    // 0x4a8334: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x4A8334u;
    {
        const bool branch_taken_0x4a8334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A8338u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A8334u;
            // 0x4a8338: 0xae020070  sw          $v0, 0x70($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a8334) {
            ctx->pc = 0x4A834Cu;
            goto label_4a834c;
        }
    }
    ctx->pc = 0x4A833Cu;
label_4a833c:
    // 0x4a833c: 0x54200004  bnel        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x4A833Cu;
    {
        const bool branch_taken_0x4a833c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a833c) {
            ctx->pc = 0x4A8340u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A833Cu;
            // 0x4a8340: 0x8e020070  lw          $v0, 0x70($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A8350u;
            goto label_4a8350;
        }
    }
    ctx->pc = 0x4A8344u;
    // 0x4a8344: 0x2442fe98  addiu       $v0, $v0, -0x168
    ctx->pc = 0x4a8344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966936));
    // 0x4a8348: 0xae020070  sw          $v0, 0x70($s0)
    ctx->pc = 0x4a8348u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 2));
label_4a834c:
    // 0x4a834c: 0x8e020070  lw          $v0, 0x70($s0)
    ctx->pc = 0x4a834cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_4a8350:
    // 0x4a8350: 0x5044001a  beql        $v0, $a0, . + 4 + (0x1A << 2)
    ctx->pc = 0x4A8350u;
    {
        const bool branch_taken_0x4a8350 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x4a8350) {
            ctx->pc = 0x4A8354u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A8350u;
            // 0x4a8354: 0x9204008c  lbu         $a0, 0x8C($s0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 140)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A83BCu;
            goto label_4a83bc;
        }
    }
    ctx->pc = 0x4A8358u;
    // 0x4a8358: 0x823023  subu        $a2, $a0, $v0
    ctx->pc = 0x4a8358u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4a835c: 0x4c30003  bgezl       $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x4A835Cu;
    {
        const bool branch_taken_0x4a835c = (GPR_S32(ctx, 6) >= 0);
        if (branch_taken_0x4a835c) {
            ctx->pc = 0x4A8360u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A835Cu;
            // 0x4a8360: 0x44082a  slt         $at, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A836Cu;
            goto label_4a836c;
        }
    }
    ctx->pc = 0x4A8364u;
    // 0x4a8364: 0x63023  negu        $a2, $a2
    ctx->pc = 0x4a8364u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
    // 0x4a8368: 0x44082a  slt         $at, $v0, $a0
    ctx->pc = 0x4a8368u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_4a836c:
    // 0x4a836c: 0x50200008  beql        $at, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x4A836Cu;
    {
        const bool branch_taken_0x4a836c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a836c) {
            ctx->pc = 0x4A8370u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A836Cu;
            // 0x4a8370: 0x28c10005  slti        $at, $a2, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A8390u;
            goto label_4a8390;
        }
    }
    ctx->pc = 0x4A8374u;
    // 0x4a8374: 0x28c10005  slti        $at, $a2, 0x5
    ctx->pc = 0x4a8374u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x4a8378: 0x50200003  beql        $at, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x4A8378u;
    {
        const bool branch_taken_0x4a8378 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a8378) {
            ctx->pc = 0x4A837Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A8378u;
            // 0x4a837c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A8388u;
            goto label_4a8388;
        }
    }
    ctx->pc = 0x4A8380u;
    // 0x4a8380: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x4A8380u;
    {
        const bool branch_taken_0x4a8380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A8384u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A8380u;
            // 0x4a8384: 0xae060074  sw          $a2, 0x74($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a8380) {
            ctx->pc = 0x4A83A8u;
            goto label_4a83a8;
        }
    }
    ctx->pc = 0x4A8388u;
label_4a8388:
    // 0x4a8388: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x4A8388u;
    {
        const bool branch_taken_0x4a8388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A838Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A8388u;
            // 0x4a838c: 0xae020074  sw          $v0, 0x74($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a8388) {
            ctx->pc = 0x4A83A8u;
            goto label_4a83a8;
        }
    }
    ctx->pc = 0x4A8390u;
label_4a8390:
    // 0x4a8390: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x4A8390u;
    {
        const bool branch_taken_0x4a8390 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a8390) {
            ctx->pc = 0x4A8394u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A8390u;
            // 0x4a8394: 0x2402fffb  addiu       $v0, $zero, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A83A4u;
            goto label_4a83a4;
        }
    }
    ctx->pc = 0x4A8398u;
    // 0x4a8398: 0x61023  negu        $v0, $a2
    ctx->pc = 0x4a8398u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
    // 0x4a839c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4A839Cu;
    {
        const bool branch_taken_0x4a839c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A83A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A839Cu;
            // 0x4a83a0: 0xae020074  sw          $v0, 0x74($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a839c) {
            ctx->pc = 0x4A83A8u;
            goto label_4a83a8;
        }
    }
    ctx->pc = 0x4A83A4u;
label_4a83a4:
    // 0x4a83a4: 0xae020074  sw          $v0, 0x74($s0)
    ctx->pc = 0x4a83a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
label_4a83a8:
    // 0x4a83a8: 0x8e040070  lw          $a0, 0x70($s0)
    ctx->pc = 0x4a83a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x4a83ac: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x4a83acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x4a83b0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x4a83b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4a83b4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x4A83B4u;
    {
        const bool branch_taken_0x4a83b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A83B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A83B4u;
            // 0x4a83b8: 0xae020070  sw          $v0, 0x70($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a83b4) {
            ctx->pc = 0x4A83CCu;
            goto label_4a83cc;
        }
    }
    ctx->pc = 0x4A83BCu;
label_4a83bc:
    // 0x4a83bc: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x4a83bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x4a83c0: 0x14820002  bne         $a0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x4A83C0u;
    {
        const bool branch_taken_0x4a83c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x4a83c0) {
            ctx->pc = 0x4A83CCu;
            goto label_4a83cc;
        }
    }
    ctx->pc = 0x4A83C8u;
    // 0x4a83c8: 0xa200008e  sb          $zero, 0x8E($s0)
    ctx->pc = 0x4a83c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 142), (uint8_t)GPR_U32(ctx, 0));
label_4a83cc:
    // 0x4a83cc: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x4a83ccu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4a83d0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x4a83d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x4a83d4: 0x8e050058  lw          $a1, 0x58($s0)
    ctx->pc = 0x4a83d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x4a83d8: 0xc601007c  lwc1        $f1, 0x7C($s0)
    ctx->pc = 0x4a83d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4a83dc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4a83dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x4a83e0: 0x8ca2008c  lw          $v0, 0x8C($a1)
    ctx->pc = 0x4a83e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 140)));
    // 0x4a83e4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x4a83e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4a83e8: 0xc4a20080  lwc1        $f2, 0x80($a1)
    ctx->pc = 0x4a83e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4a83ec: 0x28c3c  dsll32      $s1, $v0, 16
    ctx->pc = 0x4a83ecu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 16));
    // 0x4a83f0: 0x118c3f  dsra32      $s1, $s1, 16
    ctx->pc = 0x4a83f0u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
    // 0x4a83f4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x4a83f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x4a83f8: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x4a83f8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x4a83fc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x4a83fcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x4a8400: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4a8400u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x4a8404: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x4a8404u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x4a8408: 0x0  nop
    ctx->pc = 0x4a8408u;
    // NOP
    // 0x4a840c: 0x2943c  dsll32      $s2, $v0, 16
    ctx->pc = 0x4a840cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) << (32 + 16));
    // 0x4a8410: 0xc04f26c  jal         func_13C9B0
    ctx->pc = 0x4A8410u;
    SET_GPR_U32(ctx, 31, 0x4A8418u);
    ctx->pc = 0x4A8414u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A8410u;
            // 0x4a8414: 0x12943f  dsra32      $s2, $s2, 16 (Delay Slot)
        SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9B0u;
    if (runtime->hasFunction(0x13C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A8418u; }
        if (ctx->pc != 0x4A8418u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9B0_0x13c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A8418u; }
        if (ctx->pc != 0x4A8418u) { return; }
    }
    ctx->pc = 0x4A8418u;
label_4a8418:
    // 0x4a8418: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x4a8418u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4a841c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x4a841cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x4a8420: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x4a8420u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x4a8424: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x4a8424u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4a8428: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x4a8428u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x4a842c: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x4A842Cu;
    SET_GPR_U32(ctx, 31, 0x4A8434u);
    ctx->pc = 0x4A8430u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A842Cu;
            // 0x4a8430: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A8434u; }
        if (ctx->pc != 0x4A8434u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A8434u; }
        if (ctx->pc != 0x4A8434u) { return; }
    }
    ctx->pc = 0x4A8434u;
label_4a8434:
    // 0x4a8434: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x4a8434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x4a8438: 0xc04ce80  jal         func_133A00
    ctx->pc = 0x4A8438u;
    SET_GPR_U32(ctx, 31, 0x4A8440u);
    ctx->pc = 0x4A843Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A8438u;
            // 0x4a843c: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A8440u; }
        if (ctx->pc != 0x4A8440u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A8440u; }
        if (ctx->pc != 0x4A8440u) { return; }
    }
    ctx->pc = 0x4A8440u;
label_4a8440:
    // 0x4a8440: 0xc6010070  lwc1        $f1, 0x70($s0)
    ctx->pc = 0x4a8440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4a8444: 0x3c024336  lui         $v0, 0x4336
    ctx->pc = 0x4a8444u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17206 << 16));
    // 0x4a8448: 0x34420b60  ori         $v0, $v0, 0xB60
    ctx->pc = 0x4a8448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2912);
    // 0x4a844c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x4a844cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x4a8450: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4a8450u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4a8454: 0x0  nop
    ctx->pc = 0x4a8454u;
    // NOP
    // 0x4a8458: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x4a8458u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x4a845c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x4a845cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x4a8460: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4a8460u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x4a8464: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x4a8464u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x4a8468: 0xc04cdf0  jal         func_1337C0
    ctx->pc = 0x4A8468u;
    SET_GPR_U32(ctx, 31, 0x4A8470u);
    ctx->pc = 0x4A846Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A8468u;
            // 0x4a846c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1337C0u;
    if (runtime->hasFunction(0x1337C0u)) {
        auto targetFn = runtime->lookupFunction(0x1337C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A8470u; }
        if (ctx->pc != 0x4A8470u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001337C0_0x1337c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A8470u; }
        if (ctx->pc != 0x4A8470u) { return; }
    }
    ctx->pc = 0x4A8470u;
label_4a8470:
    // 0x4a8470: 0xc60d0080  lwc1        $f13, 0x80($s0)
    ctx->pc = 0x4a8470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x4a8474: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x4a8474u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x4a8478: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4a8478u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x4a847c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x4a847cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a8480: 0xc04ce64  jal         func_133990
    ctx->pc = 0x4A8480u;
    SET_GPR_U32(ctx, 31, 0x4A8488u);
    ctx->pc = 0x4A8484u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A8480u;
            // 0x4a8484: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133990u;
    if (runtime->hasFunction(0x133990u)) {
        auto targetFn = runtime->lookupFunction(0x133990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A8488u; }
        if (ctx->pc != 0x4A8488u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133990_0x133990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A8488u; }
        if (ctx->pc != 0x4A8488u) { return; }
    }
    ctx->pc = 0x4A8488u;
label_4a8488:
    // 0x4a8488: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x4a8488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x4a848c: 0xc04cce4  jal         func_133390
    ctx->pc = 0x4A848Cu;
    SET_GPR_U32(ctx, 31, 0x4A8494u);
    ctx->pc = 0x4A8490u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A848Cu;
            // 0x4a8490: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133390u;
    if (runtime->hasFunction(0x133390u)) {
        auto targetFn = runtime->lookupFunction(0x133390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A8494u; }
        if (ctx->pc != 0x4A8494u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133390_0x133390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A8494u; }
        if (ctx->pc != 0x4A8494u) { return; }
    }
    ctx->pc = 0x4A8494u;
label_4a8494:
    // 0x4a8494: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x4a8494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4a8498: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4a8498u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x4a849c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x4a849cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x4a84a0: 0x0  nop
    ctx->pc = 0x4a84a0u;
    // NOP
    // 0x4a84a4: 0xa603005c  sh          $v1, 0x5C($s0)
    ctx->pc = 0x4a84a4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 92), (uint16_t)GPR_U32(ctx, 3));
    // 0x4a84a8: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x4a84a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4a84ac: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4a84acu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x4a84b0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x4a84b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x4a84b4: 0x1000007e  b           . + 4 + (0x7E << 2)
    ctx->pc = 0x4A84B4u;
    {
        const bool branch_taken_0x4a84b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A84B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A84B4u;
            // 0x4a84b8: 0xa603005e  sh          $v1, 0x5E($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 94), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a84b4) {
            ctx->pc = 0x4A86B0u;
            goto label_4a86b0;
        }
    }
    ctx->pc = 0x4A84BCu;
label_4a84bc:
    // 0x4a84bc: 0x82020094  lb          $v0, 0x94($s0)
    ctx->pc = 0x4a84bcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 148)));
label_4a84c0:
    // 0x4a84c0: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4A84C0u;
    {
        const bool branch_taken_0x4a84c0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x4a84c0) {
            ctx->pc = 0x4A84C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A84C0u;
            // 0x4a84c4: 0x22080  sll         $a0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A84D0u;
            goto label_4a84d0;
        }
    }
    ctx->pc = 0x4A84C8u;
    // 0x4a84c8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x4A84C8u;
    {
        const bool branch_taken_0x4a84c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A84CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A84C8u;
            // 0x4a84cc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a84c8) {
            ctx->pc = 0x4A84E0u;
            goto label_4a84e0;
        }
    }
    ctx->pc = 0x4A84D0u;
label_4a84d0:
    // 0x4a84d0: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4a84d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x4a84d4: 0x24425140  addiu       $v0, $v0, 0x5140
    ctx->pc = 0x4a84d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20800));
    // 0x4a84d8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x4a84d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4a84dc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4a84dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4a84e0:
    // 0x4a84e0: 0x8e020070  lw          $v0, 0x70($s0)
    ctx->pc = 0x4a84e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x4a84e4: 0x4430004  bgezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4A84E4u;
    {
        const bool branch_taken_0x4a84e4 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x4a84e4) {
            ctx->pc = 0x4A84E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A84E4u;
            // 0x4a84e8: 0x28410169  slti        $at, $v0, 0x169 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)361) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A84F8u;
            goto label_4a84f8;
        }
    }
    ctx->pc = 0x4A84ECu;
    // 0x4a84ec: 0x24420168  addiu       $v0, $v0, 0x168
    ctx->pc = 0x4a84ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 360));
    // 0x4a84f0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x4A84F0u;
    {
        const bool branch_taken_0x4a84f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A84F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A84F0u;
            // 0x4a84f4: 0xae020070  sw          $v0, 0x70($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a84f0) {
            ctx->pc = 0x4A8508u;
            goto label_4a8508;
        }
    }
    ctx->pc = 0x4A84F8u;
label_4a84f8:
    // 0x4a84f8: 0x54200004  bnel        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x4A84F8u;
    {
        const bool branch_taken_0x4a84f8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a84f8) {
            ctx->pc = 0x4A84FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A84F8u;
            // 0x4a84fc: 0x8e020070  lw          $v0, 0x70($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A850Cu;
            goto label_4a850c;
        }
    }
    ctx->pc = 0x4A8500u;
    // 0x4a8500: 0x2442fe98  addiu       $v0, $v0, -0x168
    ctx->pc = 0x4a8500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966936));
    // 0x4a8504: 0xae020070  sw          $v0, 0x70($s0)
    ctx->pc = 0x4a8504u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 2));
label_4a8508:
    // 0x4a8508: 0x8e020070  lw          $v0, 0x70($s0)
    ctx->pc = 0x4a8508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_4a850c:
    // 0x4a850c: 0x5044002f  beql        $v0, $a0, . + 4 + (0x2F << 2)
    ctx->pc = 0x4A850Cu;
    {
        const bool branch_taken_0x4a850c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x4a850c) {
            ctx->pc = 0x4A8510u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A850Cu;
            // 0x4a8510: 0x9204008c  lbu         $a0, 0x8C($s0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 140)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A85CCu;
            goto label_4a85cc;
        }
    }
    ctx->pc = 0x4A8514u;
    // 0x4a8514: 0x823023  subu        $a2, $a0, $v0
    ctx->pc = 0x4a8514u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4a8518: 0x4c30003  bgezl       $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x4A8518u;
    {
        const bool branch_taken_0x4a8518 = (GPR_S32(ctx, 6) >= 0);
        if (branch_taken_0x4a8518) {
            ctx->pc = 0x4A851Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A8518u;
            // 0x4a851c: 0x44082a  slt         $at, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A8528u;
            goto label_4a8528;
        }
    }
    ctx->pc = 0x4A8520u;
    // 0x4a8520: 0x63023  negu        $a2, $a2
    ctx->pc = 0x4a8520u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
    // 0x4a8524: 0x44082a  slt         $at, $v0, $a0
    ctx->pc = 0x4a8524u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_4a8528:
    // 0x4a8528: 0x50200013  beql        $at, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x4A8528u;
    {
        const bool branch_taken_0x4a8528 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a8528) {
            ctx->pc = 0x4A852Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A8528u;
            // 0x4a852c: 0x28c100b5  slti        $at, $a2, 0xB5 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)181) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A8578u;
            goto label_4a8578;
        }
    }
    ctx->pc = 0x4A8530u;
    // 0x4a8530: 0x28c100b5  slti        $at, $a2, 0xB5
    ctx->pc = 0x4a8530u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)181) ? 1 : 0);
    // 0x4a8534: 0x5420000a  bnel        $at, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x4A8534u;
    {
        const bool branch_taken_0x4a8534 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a8534) {
            ctx->pc = 0x4A8538u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A8534u;
            // 0x4a8538: 0x28c10005  slti        $at, $a2, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A8560u;
            goto label_4a8560;
        }
    }
    ctx->pc = 0x4A853Cu;
    // 0x4a853c: 0x24c2ff4c  addiu       $v0, $a2, -0xB4
    ctx->pc = 0x4a853cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967116));
    // 0x4a8540: 0x28410005  slti        $at, $v0, 0x5
    ctx->pc = 0x4a8540u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x4a8544: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x4A8544u;
    {
        const bool branch_taken_0x4a8544 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a8544) {
            ctx->pc = 0x4A8548u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A8544u;
            // 0x4a8548: 0x2402fffb  addiu       $v0, $zero, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A8558u;
            goto label_4a8558;
        }
    }
    ctx->pc = 0x4A854Cu;
    // 0x4a854c: 0x21023  negu        $v0, $v0
    ctx->pc = 0x4a854cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x4a8550: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x4A8550u;
    {
        const bool branch_taken_0x4a8550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A8554u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A8550u;
            // 0x4a8554: 0xae020074  sw          $v0, 0x74($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a8550) {
            ctx->pc = 0x4A85B8u;
            goto label_4a85b8;
        }
    }
    ctx->pc = 0x4A8558u;
label_4a8558:
    // 0x4a8558: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x4A8558u;
    {
        const bool branch_taken_0x4a8558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A855Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A8558u;
            // 0x4a855c: 0xae020074  sw          $v0, 0x74($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a8558) {
            ctx->pc = 0x4A85B8u;
            goto label_4a85b8;
        }
    }
    ctx->pc = 0x4A8560u;
label_4a8560:
    // 0x4a8560: 0x50200003  beql        $at, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x4A8560u;
    {
        const bool branch_taken_0x4a8560 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a8560) {
            ctx->pc = 0x4A8564u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A8560u;
            // 0x4a8564: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A8570u;
            goto label_4a8570;
        }
    }
    ctx->pc = 0x4A8568u;
    // 0x4a8568: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x4A8568u;
    {
        const bool branch_taken_0x4a8568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A856Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A8568u;
            // 0x4a856c: 0xae060074  sw          $a2, 0x74($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a8568) {
            ctx->pc = 0x4A85B8u;
            goto label_4a85b8;
        }
    }
    ctx->pc = 0x4A8570u;
label_4a8570:
    // 0x4a8570: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x4A8570u;
    {
        const bool branch_taken_0x4a8570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A8574u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A8570u;
            // 0x4a8574: 0xae020074  sw          $v0, 0x74($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a8570) {
            ctx->pc = 0x4A85B8u;
            goto label_4a85b8;
        }
    }
    ctx->pc = 0x4A8578u;
label_4a8578:
    // 0x4a8578: 0x54200009  bnel        $at, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x4A8578u;
    {
        const bool branch_taken_0x4a8578 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a8578) {
            ctx->pc = 0x4A857Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A8578u;
            // 0x4a857c: 0x28c10005  slti        $at, $a2, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A85A0u;
            goto label_4a85a0;
        }
    }
    ctx->pc = 0x4A8580u;
    // 0x4a8580: 0x24c2ff4c  addiu       $v0, $a2, -0xB4
    ctx->pc = 0x4a8580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967116));
    // 0x4a8584: 0x28410005  slti        $at, $v0, 0x5
    ctx->pc = 0x4a8584u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x4a8588: 0x50200003  beql        $at, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x4A8588u;
    {
        const bool branch_taken_0x4a8588 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a8588) {
            ctx->pc = 0x4A858Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A8588u;
            // 0x4a858c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A8598u;
            goto label_4a8598;
        }
    }
    ctx->pc = 0x4A8590u;
    // 0x4a8590: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x4A8590u;
    {
        const bool branch_taken_0x4a8590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A8594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A8590u;
            // 0x4a8594: 0xae020074  sw          $v0, 0x74($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a8590) {
            ctx->pc = 0x4A85B8u;
            goto label_4a85b8;
        }
    }
    ctx->pc = 0x4A8598u;
label_4a8598:
    // 0x4a8598: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x4A8598u;
    {
        const bool branch_taken_0x4a8598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A859Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A8598u;
            // 0x4a859c: 0xae020074  sw          $v0, 0x74($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a8598) {
            ctx->pc = 0x4A85B8u;
            goto label_4a85b8;
        }
    }
    ctx->pc = 0x4A85A0u;
label_4a85a0:
    // 0x4a85a0: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x4A85A0u;
    {
        const bool branch_taken_0x4a85a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a85a0) {
            ctx->pc = 0x4A85A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A85A0u;
            // 0x4a85a4: 0x2402fffb  addiu       $v0, $zero, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A85B4u;
            goto label_4a85b4;
        }
    }
    ctx->pc = 0x4A85A8u;
    // 0x4a85a8: 0x61023  negu        $v0, $a2
    ctx->pc = 0x4a85a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
    // 0x4a85ac: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4A85ACu;
    {
        const bool branch_taken_0x4a85ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A85B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A85ACu;
            // 0x4a85b0: 0xae020074  sw          $v0, 0x74($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a85ac) {
            ctx->pc = 0x4A85B8u;
            goto label_4a85b8;
        }
    }
    ctx->pc = 0x4A85B4u;
label_4a85b4:
    // 0x4a85b4: 0xae020074  sw          $v0, 0x74($s0)
    ctx->pc = 0x4a85b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
label_4a85b8:
    // 0x4a85b8: 0x8e040070  lw          $a0, 0x70($s0)
    ctx->pc = 0x4a85b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x4a85bc: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x4a85bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x4a85c0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x4a85c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4a85c4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x4A85C4u;
    {
        const bool branch_taken_0x4a85c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A85C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A85C4u;
            // 0x4a85c8: 0xae020070  sw          $v0, 0x70($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a85c4) {
            ctx->pc = 0x4A85DCu;
            goto label_4a85dc;
        }
    }
    ctx->pc = 0x4A85CCu;
label_4a85cc:
    // 0x4a85cc: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x4a85ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x4a85d0: 0x54820003  bnel        $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4A85D0u;
    {
        const bool branch_taken_0x4a85d0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x4a85d0) {
            ctx->pc = 0x4A85D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A85D0u;
            // 0x4a85d4: 0x8e020058  lw          $v0, 0x58($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A85E0u;
            goto label_4a85e0;
        }
    }
    ctx->pc = 0x4A85D8u;
    // 0x4a85d8: 0xa200008e  sb          $zero, 0x8E($s0)
    ctx->pc = 0x4a85d8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 142), (uint8_t)GPR_U32(ctx, 0));
label_4a85dc:
    // 0x4a85dc: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x4a85dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_4a85e0:
    // 0x4a85e0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x4a85e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x4a85e4: 0x8c460088  lw          $a2, 0x88($v0)
    ctx->pc = 0x4a85e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x4a85e8: 0x8c42008c  lw          $v0, 0x8C($v0)
    ctx->pc = 0x4a85e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x4a85ec: 0xc52823  subu        $a1, $a2, $a1
    ctx->pc = 0x4a85ecu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x4a85f0: 0x5943c  dsll32      $s2, $a1, 16
    ctx->pc = 0x4a85f0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) << (32 + 16));
    // 0x4a85f4: 0x12943f  dsra32      $s2, $s2, 16
    ctx->pc = 0x4a85f4u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 16));
    // 0x4a85f8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x4a85f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4a85fc: 0x28c3c  dsll32      $s1, $v0, 16
    ctx->pc = 0x4a85fcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 16));
    // 0x4a8600: 0xc04f26c  jal         func_13C9B0
    ctx->pc = 0x4A8600u;
    SET_GPR_U32(ctx, 31, 0x4A8608u);
    ctx->pc = 0x4A8604u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A8600u;
            // 0x4a8604: 0x118c3f  dsra32      $s1, $s1, 16 (Delay Slot)
        SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9B0u;
    if (runtime->hasFunction(0x13C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A8608u; }
        if (ctx->pc != 0x4A8608u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9B0_0x13c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A8608u; }
        if (ctx->pc != 0x4A8608u) { return; }
    }
    ctx->pc = 0x4A8608u;
label_4a8608:
    // 0x4a8608: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x4a8608u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4a860c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x4a860cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x4a8610: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x4a8610u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x4a8614: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x4a8614u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4a8618: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x4a8618u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x4a861c: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x4A861Cu;
    SET_GPR_U32(ctx, 31, 0x4A8624u);
    ctx->pc = 0x4A8620u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A861Cu;
            // 0x4a8620: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A8624u; }
        if (ctx->pc != 0x4A8624u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A8624u; }
        if (ctx->pc != 0x4A8624u) { return; }
    }
    ctx->pc = 0x4A8624u;
label_4a8624:
    // 0x4a8624: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x4a8624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x4a8628: 0xc04ce80  jal         func_133A00
    ctx->pc = 0x4A8628u;
    SET_GPR_U32(ctx, 31, 0x4A8630u);
    ctx->pc = 0x4A862Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A8628u;
            // 0x4a862c: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A8630u; }
        if (ctx->pc != 0x4A8630u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A8630u; }
        if (ctx->pc != 0x4A8630u) { return; }
    }
    ctx->pc = 0x4A8630u;
label_4a8630:
    // 0x4a8630: 0xc6010070  lwc1        $f1, 0x70($s0)
    ctx->pc = 0x4a8630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4a8634: 0x3c024336  lui         $v0, 0x4336
    ctx->pc = 0x4a8634u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17206 << 16));
    // 0x4a8638: 0x34420b60  ori         $v0, $v0, 0xB60
    ctx->pc = 0x4a8638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2912);
    // 0x4a863c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x4a863cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x4a8640: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4a8640u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4a8644: 0x0  nop
    ctx->pc = 0x4a8644u;
    // NOP
    // 0x4a8648: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x4a8648u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x4a864c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x4a864cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x4a8650: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4a8650u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x4a8654: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x4a8654u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x4a8658: 0xc04cdf0  jal         func_1337C0
    ctx->pc = 0x4A8658u;
    SET_GPR_U32(ctx, 31, 0x4A8660u);
    ctx->pc = 0x4A865Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A8658u;
            // 0x4a865c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1337C0u;
    if (runtime->hasFunction(0x1337C0u)) {
        auto targetFn = runtime->lookupFunction(0x1337C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A8660u; }
        if (ctx->pc != 0x4A8660u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001337C0_0x1337c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A8660u; }
        if (ctx->pc != 0x4A8660u) { return; }
    }
    ctx->pc = 0x4A8660u;
label_4a8660:
    // 0x4a8660: 0xc6000080  lwc1        $f0, 0x80($s0)
    ctx->pc = 0x4a8660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4a8664: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x4a8664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x4a8668: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4a8668u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x4a866c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x4a866cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a8670: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x4a8670u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x4a8674: 0xc04ce64  jal         func_133990
    ctx->pc = 0x4A8674u;
    SET_GPR_U32(ctx, 31, 0x4A867Cu);
    ctx->pc = 0x4A8678u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A8674u;
            // 0x4a8678: 0x46000347  neg.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133990u;
    if (runtime->hasFunction(0x133990u)) {
        auto targetFn = runtime->lookupFunction(0x133990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A867Cu; }
        if (ctx->pc != 0x4A867Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133990_0x133990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A867Cu; }
        if (ctx->pc != 0x4A867Cu) { return; }
    }
    ctx->pc = 0x4A867Cu;
label_4a867c:
    // 0x4a867c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x4a867cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x4a8680: 0xc04cce4  jal         func_133390
    ctx->pc = 0x4A8680u;
    SET_GPR_U32(ctx, 31, 0x4A8688u);
    ctx->pc = 0x4A8684u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A8680u;
            // 0x4a8684: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133390u;
    if (runtime->hasFunction(0x133390u)) {
        auto targetFn = runtime->lookupFunction(0x133390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A8688u; }
        if (ctx->pc != 0x4A8688u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133390_0x133390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A8688u; }
        if (ctx->pc != 0x4A8688u) { return; }
    }
    ctx->pc = 0x4A8688u;
label_4a8688:
    // 0x4a8688: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x4a8688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4a868c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4a868cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x4a8690: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x4a8690u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x4a8694: 0x0  nop
    ctx->pc = 0x4a8694u;
    // NOP
    // 0x4a8698: 0xa603005c  sh          $v1, 0x5C($s0)
    ctx->pc = 0x4a8698u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 92), (uint16_t)GPR_U32(ctx, 3));
    // 0x4a869c: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x4a869cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4a86a0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4a86a0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x4a86a4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x4a86a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x4a86a8: 0x0  nop
    ctx->pc = 0x4a86a8u;
    // NOP
    // 0x4a86ac: 0xa603005e  sh          $v1, 0x5E($s0)
    ctx->pc = 0x4a86acu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 94), (uint16_t)GPR_U32(ctx, 3));
label_4a86b0:
    // 0x4a86b0: 0x8e040078  lw          $a0, 0x78($s0)
    ctx->pc = 0x4a86b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
label_4a86b4:
    // 0x4a86b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4a86b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4a86b8: 0x50830029  beql        $a0, $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x4A86B8u;
    {
        const bool branch_taken_0x4a86b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x4a86b8) {
            ctx->pc = 0x4A86BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A86B8u;
            // 0x4a86bc: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A8760u;
            goto label_4a8760;
        }
    }
    ctx->pc = 0x4A86C0u;
    // 0x4a86c0: 0x8604005c  lh          $a0, 0x5C($s0)
    ctx->pc = 0x4a86c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x4a86c4: 0x3c034220  lui         $v1, 0x4220
    ctx->pc = 0x4a86c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16928 << 16));
    // 0x4a86c8: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x4a86c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x4a86cc: 0xc6010084  lwc1        $f1, 0x84($s0)
    ctx->pc = 0x4a86ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4a86d0: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x4a86d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x4a86d4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x4a86d4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4a86d8: 0x0  nop
    ctx->pc = 0x4a86d8u;
    // NOP
    // 0x4a86dc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4a86dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x4a86e0: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x4a86e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x4a86e4: 0x0  nop
    ctx->pc = 0x4a86e4u;
    // NOP
    // 0x4a86e8: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x4a86e8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x4a86ec: 0x4601181c  madd.s      $f0, $f3, $f1
    ctx->pc = 0x4a86ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[1]));
    // 0x4a86f0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4a86f0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x4a86f4: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x4a86f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x4a86f8: 0x0  nop
    ctx->pc = 0x4a86f8u;
    // NOP
    // 0x4a86fc: 0xa6040060  sh          $a0, 0x60($s0)
    ctx->pc = 0x4a86fcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 96), (uint16_t)GPR_U32(ctx, 4));
    // 0x4a8700: 0x8604005e  lh          $a0, 0x5E($s0)
    ctx->pc = 0x4a8700u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 94)));
    // 0x4a8704: 0xc6010084  lwc1        $f1, 0x84($s0)
    ctx->pc = 0x4a8704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4a8708: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x4a8708u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4a870c: 0x0  nop
    ctx->pc = 0x4a870cu;
    // NOP
    // 0x4a8710: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4a8710u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x4a8714: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x4a8714u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x4a8718: 0x4601181c  madd.s      $f0, $f3, $f1
    ctx->pc = 0x4a8718u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[1]));
    // 0x4a871c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4a871cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x4a8720: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x4a8720u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x4a8724: 0x0  nop
    ctx->pc = 0x4a8724u;
    // NOP
    // 0x4a8728: 0xa6040062  sh          $a0, 0x62($s0)
    ctx->pc = 0x4a8728u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 98), (uint16_t)GPR_U32(ctx, 4));
    // 0x4a872c: 0x86040060  lh          $a0, 0x60($s0)
    ctx->pc = 0x4a872cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x4a8730: 0xa6040064  sh          $a0, 0x64($s0)
    ctx->pc = 0x4a8730u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 100), (uint16_t)GPR_U32(ctx, 4));
    // 0x4a8734: 0x86040062  lh          $a0, 0x62($s0)
    ctx->pc = 0x4a8734u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 98)));
    // 0x4a8738: 0xa6040066  sh          $a0, 0x66($s0)
    ctx->pc = 0x4a8738u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 102), (uint16_t)GPR_U32(ctx, 4));
    // 0x4a873c: 0x9204008c  lbu         $a0, 0x8C($s0)
    ctx->pc = 0x4a873cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x4a8740: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x4A8740u;
    {
        const bool branch_taken_0x4a8740 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x4a8740) {
            ctx->pc = 0x4A875Cu;
            goto label_4a875c;
        }
    }
    ctx->pc = 0x4A8748u;
    // 0x4a8748: 0x2483000f  addiu       $v1, $a0, 0xF
    ctx->pc = 0x4a8748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x4a874c: 0xa203008c  sb          $v1, 0x8C($s0)
    ctx->pc = 0x4a874cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 140), (uint8_t)GPR_U32(ctx, 3));
    // 0x4a8750: 0x9203008d  lbu         $v1, 0x8D($s0)
    ctx->pc = 0x4a8750u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 141)));
    // 0x4a8754: 0x2463fff1  addiu       $v1, $v1, -0xF
    ctx->pc = 0x4a8754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967281));
    // 0x4a8758: 0xa203008d  sb          $v1, 0x8D($s0)
    ctx->pc = 0x4a8758u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 141), (uint8_t)GPR_U32(ctx, 3));
label_4a875c:
    // 0x4a875c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4a875cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_4a8760:
    // 0x4a8760: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4a8760u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4a8764: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4a8764u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a8768: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4a8768u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a876c: 0x3e00008  jr          $ra
    ctx->pc = 0x4A876Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A8770u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A876Cu;
            // 0x4a8770: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4A8774u;
    // 0x4a8774: 0x0  nop
    ctx->pc = 0x4a8774u;
    // NOP
    // 0x4a8778: 0x0  nop
    ctx->pc = 0x4a8778u;
    // NOP
    // 0x4a877c: 0x0  nop
    ctx->pc = 0x4a877cu;
    // NOP
}
