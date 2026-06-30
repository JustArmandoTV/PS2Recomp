#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003FF920
// Address: 0x3ff920 - 0x3ffc60
void sub_003FF920_0x3ff920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003FF920_0x3ff920");
#endif

    switch (ctx->pc) {
        case 0x3ff998u: goto label_3ff998;
        case 0x3ffa64u: goto label_3ffa64;
        case 0x3ffac8u: goto label_3ffac8;
        case 0x3ffb60u: goto label_3ffb60;
        case 0x3ffba0u: goto label_3ffba0;
        case 0x3ffc1cu: goto label_3ffc1c;
        default: break;
    }

    ctx->pc = 0x3ff920u;

    // 0x3ff920: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3ff920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3ff924: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3ff924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x3ff928: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3ff928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3ff92c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3ff92cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3ff930: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3ff930u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ff934: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3ff934u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3ff938: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3ff938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3ff93c: 0xa08000f8  sb          $zero, 0xF8($a0)
    ctx->pc = 0x3ff93cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 248), (uint8_t)GPR_U32(ctx, 0));
    // 0x3ff940: 0x8c850060  lw          $a1, 0x60($a0)
    ctx->pc = 0x3ff940u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x3ff944: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x3ff944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3ff948: 0x10a40092  beq         $a1, $a0, . + 4 + (0x92 << 2)
    ctx->pc = 0x3FF948u;
    {
        const bool branch_taken_0x3ff948 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x3FF94Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FF948u;
            // 0x3ff94c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ff948) {
            ctx->pc = 0x3FFB94u;
            goto label_3ffb94;
        }
    }
    ctx->pc = 0x3FF950u;
    // 0x3ff950: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x3ff950u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3ff954: 0x10a40057  beq         $a1, $a0, . + 4 + (0x57 << 2)
    ctx->pc = 0x3FF954u;
    {
        const bool branch_taken_0x3ff954 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x3ff954) {
            ctx->pc = 0x3FFAB4u;
            goto label_3ffab4;
        }
    }
    ctx->pc = 0x3FF95Cu;
    // 0x3ff95c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x3ff95cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3ff960: 0x10a40008  beq         $a1, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3FF960u;
    {
        const bool branch_taken_0x3ff960 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x3ff960) {
            ctx->pc = 0x3FF984u;
            goto label_3ff984;
        }
    }
    ctx->pc = 0x3FF968u;
    // 0x3ff968: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3ff968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ff96c: 0x50a300b6  beql        $a1, $v1, . + 4 + (0xB6 << 2)
    ctx->pc = 0x3FF96Cu;
    {
        const bool branch_taken_0x3ff96c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3ff96c) {
            ctx->pc = 0x3FF970u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3FF96Cu;
            // 0x3ff970: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3FFC48u;
            goto label_3ffc48;
        }
    }
    ctx->pc = 0x3FF974u;
    // 0x3ff974: 0x50a000b3  beql        $a1, $zero, . + 4 + (0xB3 << 2)
    ctx->pc = 0x3FF974u;
    {
        const bool branch_taken_0x3ff974 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ff974) {
            ctx->pc = 0x3FF978u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3FF974u;
            // 0x3ff978: 0xae630060  sw          $v1, 0x60($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3FFC44u;
            goto label_3ffc44;
        }
    }
    ctx->pc = 0x3FF97Cu;
    // 0x3ff97c: 0x100000b1  b           . + 4 + (0xB1 << 2)
    ctx->pc = 0x3FF97Cu;
    {
        const bool branch_taken_0x3ff97c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ff97c) {
            ctx->pc = 0x3FFC44u;
            goto label_3ffc44;
        }
    }
    ctx->pc = 0x3FF984u;
label_3ff984:
    // 0x3ff984: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x3ff984u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
    // 0x3ff988: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3ff988u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ff98c: 0xc482fb90  lwc1        $f2, -0x470($a0)
    ctx->pc = 0x3ff98cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294966160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3ff990: 0x3c04437f  lui         $a0, 0x437F
    ctx->pc = 0x3ff990u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17279 << 16));
    // 0x3ff994: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3ff994u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ff998:
    // 0x3ff998: 0x8e6400c4  lw          $a0, 0xC4($s3)
    ctx->pc = 0x3ff998u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 196)));
    // 0x3ff99c: 0x873021  addu        $a2, $a0, $a3
    ctx->pc = 0x3ff99cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x3ff9a0: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x3ff9a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3ff9a4: 0x2ca40002  sltiu       $a0, $a1, 0x2
    ctx->pc = 0x3ff9a4u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x3ff9a8: 0x14800015  bnez        $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x3FF9A8u;
    {
        const bool branch_taken_0x3ff9a8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ff9a8) {
            ctx->pc = 0x3FFA00u;
            goto label_3ffa00;
        }
    }
    ctx->pc = 0x3FF9B0u;
    // 0x3ff9b0: 0x24a40001  addiu       $a0, $a1, 0x1
    ctx->pc = 0x3ff9b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3ff9b4: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x3ff9b4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x3ff9b8: 0x8e6400c0  lw          $a0, 0xC0($s3)
    ctx->pc = 0x3ff9b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 192)));
    // 0x3ff9bc: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x3ff9bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x3ff9c0: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x3ff9c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3ff9c4: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x3ff9c4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x3ff9c8: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x3ff9c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x3ff9cc: 0x8e6400c0  lw          $a0, 0xC0($s3)
    ctx->pc = 0x3ff9ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 192)));
    // 0x3ff9d0: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x3ff9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x3ff9d4: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x3ff9d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3ff9d8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3ff9d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3ff9dc: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x3FF9DCu;
    {
        const bool branch_taken_0x3ff9dc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3ff9dc) {
            ctx->pc = 0x3FFA00u;
            goto label_3ffa00;
        }
    }
    ctx->pc = 0x3FF9E4u;
    // 0x3ff9e4: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x3ff9e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x3ff9e8: 0x8e6400c4  lw          $a0, 0xC4($s3)
    ctx->pc = 0x3ff9e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 196)));
    // 0x3ff9ec: 0x872821  addu        $a1, $a0, $a3
    ctx->pc = 0x3ff9ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x3ff9f0: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x3ff9f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3ff9f4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3ff9f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3ff9f8: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x3ff9f8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x3ff9fc: 0x0  nop
    ctx->pc = 0x3ff9fcu;
    // NOP
label_3ffa00:
    // 0x3ffa00: 0x8e6400c8  lw          $a0, 0xC8($s3)
    ctx->pc = 0x3ffa00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 200)));
    // 0x3ffa04: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3ffa04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3ffa08: 0x64202b  sltu        $a0, $v1, $a0
    ctx->pc = 0x3ffa08u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x3ffa0c: 0x1480ffe2  bnez        $a0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x3FFA0Cu;
    {
        const bool branch_taken_0x3ffa0c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3FFA10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FFA0Cu;
            // 0x3ffa10: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ffa0c) {
            ctx->pc = 0x3FF998u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3ff998;
        }
    }
    ctx->pc = 0x3FFA14u;
    // 0x3ffa14: 0x8e6300d8  lw          $v1, 0xD8($s3)
    ctx->pc = 0x3ffa14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 216)));
    // 0x3ffa18: 0x50600013  beql        $v1, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x3FFA18u;
    {
        const bool branch_taken_0x3ffa18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ffa18) {
            ctx->pc = 0x3FFA1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3FFA18u;
            // 0x3ffa1c: 0x8e6300dc  lw          $v1, 0xDC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 220)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3FFA68u;
            goto label_3ffa68;
        }
    }
    ctx->pc = 0x3FFA20u;
    // 0x3ffa20: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3ffa20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3ffa24: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x3FFA24u;
    {
        const bool branch_taken_0x3ffa24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3FFA28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FFA24u;
            // 0x3ffa28: 0xae6300d8  sw          $v1, 0xD8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 216), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ffa24) {
            ctx->pc = 0x3FFA64u;
            goto label_3ffa64;
        }
    }
    ctx->pc = 0x3FFA2Cu;
    // 0x3ffa2c: 0x8e6400b8  lw          $a0, 0xB8($s3)
    ctx->pc = 0x3ffa2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 184)));
    // 0x3ffa30: 0x24032000  addiu       $v1, $zero, 0x2000
    ctx->pc = 0x3ffa30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x3ffa34: 0x8e6500d4  lw          $a1, 0xD4($s3)
    ctx->pc = 0x3ffa34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 212)));
    // 0x3ffa38: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3ffa38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x3ffa3c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3ffa3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ffa40: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x3ffa40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3ffa44: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x3ffa44u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x3ffa48: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x3ffa48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3ffa4c: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x3ffa4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3ffa50: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x3ffa50u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
    // 0x3ffa54: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x3ffa54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
    // 0x3ffa58: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x3ffa58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x3ffa5c: 0xc08bff0  jal         func_22FFC0
    ctx->pc = 0x3FFA5Cu;
    SET_GPR_U32(ctx, 31, 0x3FFA64u);
    ctx->pc = 0x3FFA60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FFA5Cu;
            // 0x3ffa60: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FFA64u; }
        if (ctx->pc != 0x3FFA64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FFA64u; }
        if (ctx->pc != 0x3FFA64u) { return; }
    }
    ctx->pc = 0x3FFA64u;
label_3ffa64:
    // 0x3ffa64: 0x8e6300dc  lw          $v1, 0xDC($s3)
    ctx->pc = 0x3ffa64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 220)));
label_3ffa68:
    // 0x3ffa68: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3FFA68u;
    {
        const bool branch_taken_0x3ffa68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ffa68) {
            ctx->pc = 0x3FFA6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3FFA68u;
            // 0x3ffa6c: 0x8e6300dc  lw          $v1, 0xDC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 220)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3FFA7Cu;
            goto label_3ffa7c;
        }
    }
    ctx->pc = 0x3FFA70u;
    // 0x3ffa70: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3ffa70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3ffa74: 0xae6300dc  sw          $v1, 0xDC($s3)
    ctx->pc = 0x3ffa74u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 220), GPR_U32(ctx, 3));
    // 0x3ffa78: 0x8e6300dc  lw          $v1, 0xDC($s3)
    ctx->pc = 0x3ffa78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 220)));
label_3ffa7c:
    // 0x3ffa7c: 0x2c61001f  sltiu       $at, $v1, 0x1F
    ctx->pc = 0x3ffa7cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)31) ? 1 : 0);
    // 0x3ffa80: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x3FFA80u;
    {
        const bool branch_taken_0x3ffa80 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ffa80) {
            ctx->pc = 0x3FFA90u;
            goto label_3ffa90;
        }
    }
    ctx->pc = 0x3FFA88u;
    // 0x3ffa88: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x3ffa88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3ffa8c: 0xae630060  sw          $v1, 0x60($s3)
    ctx->pc = 0x3ffa8cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 3));
label_3ffa90:
    // 0x3ffa90: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3ffa90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x3ffa94: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3ffa94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3ffa98: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x3ffa98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
    // 0x3ffa9c: 0x8c630cb4  lw          $v1, 0xCB4($v1)
    ctx->pc = 0x3ffa9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3252)));
    // 0x3ffaa0: 0x14640068  bne         $v1, $a0, . + 4 + (0x68 << 2)
    ctx->pc = 0x3FFAA0u;
    {
        const bool branch_taken_0x3ffaa0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x3ffaa0) {
            ctx->pc = 0x3FFC44u;
            goto label_3ffc44;
        }
    }
    ctx->pc = 0x3FFAA8u;
    // 0x3ffaa8: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x3ffaa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3ffaac: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x3FFAACu;
    {
        const bool branch_taken_0x3ffaac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FFAB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FFAACu;
            // 0x3ffab0: 0xae630060  sw          $v1, 0x60($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ffaac) {
            ctx->pc = 0x3FFC44u;
            goto label_3ffc44;
        }
    }
    ctx->pc = 0x3FFAB4u;
label_3ffab4:
    // 0x3ffab4: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x3ffab4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
    // 0x3ffab8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3ffab8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ffabc: 0xc482fb90  lwc1        $f2, -0x470($a0)
    ctx->pc = 0x3ffabcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294966160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3ffac0: 0x3c04437f  lui         $a0, 0x437F
    ctx->pc = 0x3ffac0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17279 << 16));
    // 0x3ffac4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3ffac4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ffac8:
    // 0x3ffac8: 0x8e6400c4  lw          $a0, 0xC4($s3)
    ctx->pc = 0x3ffac8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 196)));
    // 0x3ffacc: 0x873021  addu        $a2, $a0, $a3
    ctx->pc = 0x3ffaccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x3ffad0: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x3ffad0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3ffad4: 0x2ca40002  sltiu       $a0, $a1, 0x2
    ctx->pc = 0x3ffad4u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x3ffad8: 0x14800015  bnez        $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x3FFAD8u;
    {
        const bool branch_taken_0x3ffad8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ffad8) {
            ctx->pc = 0x3FFB30u;
            goto label_3ffb30;
        }
    }
    ctx->pc = 0x3FFAE0u;
    // 0x3ffae0: 0x24a40001  addiu       $a0, $a1, 0x1
    ctx->pc = 0x3ffae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3ffae4: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x3ffae4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x3ffae8: 0x8e6400c0  lw          $a0, 0xC0($s3)
    ctx->pc = 0x3ffae8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 192)));
    // 0x3ffaec: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x3ffaecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x3ffaf0: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x3ffaf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3ffaf4: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x3ffaf4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x3ffaf8: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x3ffaf8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x3ffafc: 0x8e6400c0  lw          $a0, 0xC0($s3)
    ctx->pc = 0x3ffafcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 192)));
    // 0x3ffb00: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x3ffb00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x3ffb04: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x3ffb04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3ffb08: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3ffb08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3ffb0c: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x3FFB0Cu;
    {
        const bool branch_taken_0x3ffb0c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3ffb0c) {
            ctx->pc = 0x3FFB30u;
            goto label_3ffb30;
        }
    }
    ctx->pc = 0x3FFB14u;
    // 0x3ffb14: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x3ffb14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x3ffb18: 0x8e6400c4  lw          $a0, 0xC4($s3)
    ctx->pc = 0x3ffb18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 196)));
    // 0x3ffb1c: 0x872821  addu        $a1, $a0, $a3
    ctx->pc = 0x3ffb1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x3ffb20: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x3ffb20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3ffb24: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3ffb24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3ffb28: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x3ffb28u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x3ffb2c: 0x0  nop
    ctx->pc = 0x3ffb2cu;
    // NOP
label_3ffb30:
    // 0x3ffb30: 0x8e6400c8  lw          $a0, 0xC8($s3)
    ctx->pc = 0x3ffb30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 200)));
    // 0x3ffb34: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3ffb34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3ffb38: 0x64202b  sltu        $a0, $v1, $a0
    ctx->pc = 0x3ffb38u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x3ffb3c: 0x1480ffe2  bnez        $a0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x3FFB3Cu;
    {
        const bool branch_taken_0x3ffb3c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3FFB40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FFB3Cu;
            // 0x3ffb40: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ffb3c) {
            ctx->pc = 0x3FFAC8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3ffac8;
        }
    }
    ctx->pc = 0x3FFB44u;
    // 0x3ffb44: 0x8e6300dc  lw          $v1, 0xDC($s3)
    ctx->pc = 0x3ffb44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 220)));
    // 0x3ffb48: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3ffb48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3ffb4c: 0x2c6100f1  sltiu       $at, $v1, 0xF1
    ctx->pc = 0x3ffb4cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)241) ? 1 : 0);
    // 0x3ffb50: 0x1420003c  bnez        $at, . + 4 + (0x3C << 2)
    ctx->pc = 0x3FFB50u;
    {
        const bool branch_taken_0x3ffb50 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x3FFB54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FFB50u;
            // 0x3ffb54: 0xae6300dc  sw          $v1, 0xDC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 220), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ffb50) {
            ctx->pc = 0x3FFC44u;
            goto label_3ffc44;
        }
    }
    ctx->pc = 0x3FFB58u;
    // 0x3ffb58: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3ffb58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ffb5c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3ffb5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ffb60:
    // 0x3ffb60: 0x8e6300c4  lw          $v1, 0xC4($s3)
    ctx->pc = 0x3ffb60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 196)));
    // 0x3ffb64: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3ffb64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3ffb68: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3ffb68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3ffb6c: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x3ffb6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x3ffb70: 0x8e6300c8  lw          $v1, 0xC8($s3)
    ctx->pc = 0x3ffb70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 200)));
    // 0x3ffb74: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x3ffb74u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3ffb78: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3FFB78u;
    {
        const bool branch_taken_0x3ffb78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3FFB7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FFB78u;
            // 0x3ffb7c: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ffb78) {
            ctx->pc = 0x3FFB60u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3ffb60;
        }
    }
    ctx->pc = 0x3FFB80u;
    // 0x3ffb80: 0xae6000b0  sw          $zero, 0xB0($s3)
    ctx->pc = 0x3ffb80u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 176), GPR_U32(ctx, 0));
    // 0x3ffb84: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x3ffb84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3ffb88: 0xae630060  sw          $v1, 0x60($s3)
    ctx->pc = 0x3ffb88u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 3));
    // 0x3ffb8c: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x3FFB8Cu;
    {
        const bool branch_taken_0x3ffb8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FFB90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FFB8Cu;
            // 0x3ffb90: 0xae6000dc  sw          $zero, 0xDC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 220), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ffb8c) {
            ctx->pc = 0x3FFC44u;
            goto label_3ffc44;
        }
    }
    ctx->pc = 0x3FFB94u;
label_3ffb94:
    // 0x3ffb94: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3ffb94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ffb98: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3ffb98u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ffb9c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3ffb9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ffba0:
    // 0x3ffba0: 0x8e6300c0  lw          $v1, 0xC0($s3)
    ctx->pc = 0x3ffba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 192)));
    // 0x3ffba4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3ffba4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3ffba8: 0x712021  addu        $a0, $v1, $s1
    ctx->pc = 0x3ffba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x3ffbac: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x3ffbacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3ffbb0: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x3ffbb0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3ffbb4: 0x4501000e  bc1t        . + 4 + (0xE << 2)
    ctx->pc = 0x3FFBB4u;
    {
        const bool branch_taken_0x3ffbb4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3ffbb4) {
            ctx->pc = 0x3FFBF0u;
            goto label_3ffbf0;
        }
    }
    ctx->pc = 0x3FFBBCu;
    // 0x3ffbbc: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x3ffbbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x3ffbc0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3ffbc0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ffbc4: 0x0  nop
    ctx->pc = 0x3ffbc4u;
    // NOP
    // 0x3ffbc8: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x3ffbc8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x3ffbcc: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x3ffbccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x3ffbd0: 0x8e6300c0  lw          $v1, 0xC0($s3)
    ctx->pc = 0x3ffbd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 192)));
    // 0x3ffbd4: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x3ffbd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x3ffbd8: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x3ffbd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3ffbdc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3ffbdcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3ffbe0: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x3FFBE0u;
    {
        const bool branch_taken_0x3ffbe0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3ffbe0) {
            ctx->pc = 0x3FFC20u;
            goto label_3ffc20;
        }
    }
    ctx->pc = 0x3FFBE8u;
    // 0x3ffbe8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x3FFBE8u;
    {
        const bool branch_taken_0x3ffbe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FFBECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FFBE8u;
            // 0x3ffbec: 0xe4610000  swc1        $f1, 0x0($v1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ffbe8) {
            ctx->pc = 0x3FFC20u;
            goto label_3ffc20;
        }
    }
    ctx->pc = 0x3FFBF0u;
label_3ffbf0:
    // 0x3ffbf0: 0x8e6300b8  lw          $v1, 0xB8($s3)
    ctx->pc = 0x3ffbf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 184)));
    // 0x3ffbf4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3ffbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x3ffbf8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3ffbf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ffbfc: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x3ffbfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x3ffc00: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x3ffc00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x3ffc04: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x3ffc04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3ffc08: 0xaca0002c  sw          $zero, 0x2C($a1)
    ctx->pc = 0x3ffc08u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 0));
    // 0x3ffc0c: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x3ffc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
    // 0x3ffc10: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x3ffc10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x3ffc14: 0xc08bff0  jal         func_22FFC0
    ctx->pc = 0x3FFC14u;
    SET_GPR_U32(ctx, 31, 0x3FFC1Cu);
    ctx->pc = 0x3FFC18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FFC14u;
            // 0x3ffc18: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FFC1Cu; }
        if (ctx->pc != 0x3FFC1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FFC1Cu; }
        if (ctx->pc != 0x3FFC1Cu) { return; }
    }
    ctx->pc = 0x3FFC1Cu;
label_3ffc1c:
    // 0x3ffc1c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3ffc1cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_3ffc20:
    // 0x3ffc20: 0x8e6400c8  lw          $a0, 0xC8($s3)
    ctx->pc = 0x3ffc20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 200)));
    // 0x3ffc24: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3ffc24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3ffc28: 0x204182b  sltu        $v1, $s0, $a0
    ctx->pc = 0x3ffc28u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x3ffc2c: 0x1460ffdc  bnez        $v1, . + 4 + (-0x24 << 2)
    ctx->pc = 0x3FFC2Cu;
    {
        const bool branch_taken_0x3ffc2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3FFC30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FFC2Cu;
            // 0x3ffc30: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ffc2c) {
            ctx->pc = 0x3FFBA0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3ffba0;
        }
    }
    ctx->pc = 0x3FFC34u;
    // 0x3ffc34: 0x16440003  bne         $s2, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3FFC34u;
    {
        const bool branch_taken_0x3ffc34 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 4));
        if (branch_taken_0x3ffc34) {
            ctx->pc = 0x3FFC44u;
            goto label_3ffc44;
        }
    }
    ctx->pc = 0x3FFC3Cu;
    // 0x3ffc3c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3ffc3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ffc40: 0xae630060  sw          $v1, 0x60($s3)
    ctx->pc = 0x3ffc40u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 3));
label_3ffc44:
    // 0x3ffc44: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3ffc44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3ffc48:
    // 0x3ffc48: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3ffc48u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3ffc4c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3ffc4cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3ffc50: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3ffc50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ffc54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3ffc54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ffc58: 0x3e00008  jr          $ra
    ctx->pc = 0x3FFC58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3FFC5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FFC58u;
            // 0x3ffc5c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3FFC60u;
}
