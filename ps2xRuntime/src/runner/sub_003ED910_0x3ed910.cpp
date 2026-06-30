#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003ED910
// Address: 0x3ed910 - 0x3eda10
void sub_003ED910_0x3ed910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003ED910_0x3ed910");
#endif

    switch (ctx->pc) {
        case 0x3ed910u: goto label_3ed910;
        case 0x3ed914u: goto label_3ed914;
        case 0x3ed918u: goto label_3ed918;
        case 0x3ed91cu: goto label_3ed91c;
        case 0x3ed920u: goto label_3ed920;
        case 0x3ed924u: goto label_3ed924;
        case 0x3ed928u: goto label_3ed928;
        case 0x3ed92cu: goto label_3ed92c;
        case 0x3ed930u: goto label_3ed930;
        case 0x3ed934u: goto label_3ed934;
        case 0x3ed938u: goto label_3ed938;
        case 0x3ed93cu: goto label_3ed93c;
        case 0x3ed940u: goto label_3ed940;
        case 0x3ed944u: goto label_3ed944;
        case 0x3ed948u: goto label_3ed948;
        case 0x3ed94cu: goto label_3ed94c;
        case 0x3ed950u: goto label_3ed950;
        case 0x3ed954u: goto label_3ed954;
        case 0x3ed958u: goto label_3ed958;
        case 0x3ed95cu: goto label_3ed95c;
        case 0x3ed960u: goto label_3ed960;
        case 0x3ed964u: goto label_3ed964;
        case 0x3ed968u: goto label_3ed968;
        case 0x3ed96cu: goto label_3ed96c;
        case 0x3ed970u: goto label_3ed970;
        case 0x3ed974u: goto label_3ed974;
        case 0x3ed978u: goto label_3ed978;
        case 0x3ed97cu: goto label_3ed97c;
        case 0x3ed980u: goto label_3ed980;
        case 0x3ed984u: goto label_3ed984;
        case 0x3ed988u: goto label_3ed988;
        case 0x3ed98cu: goto label_3ed98c;
        case 0x3ed990u: goto label_3ed990;
        case 0x3ed994u: goto label_3ed994;
        case 0x3ed998u: goto label_3ed998;
        case 0x3ed99cu: goto label_3ed99c;
        case 0x3ed9a0u: goto label_3ed9a0;
        case 0x3ed9a4u: goto label_3ed9a4;
        case 0x3ed9a8u: goto label_3ed9a8;
        case 0x3ed9acu: goto label_3ed9ac;
        case 0x3ed9b0u: goto label_3ed9b0;
        case 0x3ed9b4u: goto label_3ed9b4;
        case 0x3ed9b8u: goto label_3ed9b8;
        case 0x3ed9bcu: goto label_3ed9bc;
        case 0x3ed9c0u: goto label_3ed9c0;
        case 0x3ed9c4u: goto label_3ed9c4;
        case 0x3ed9c8u: goto label_3ed9c8;
        case 0x3ed9ccu: goto label_3ed9cc;
        case 0x3ed9d0u: goto label_3ed9d0;
        case 0x3ed9d4u: goto label_3ed9d4;
        case 0x3ed9d8u: goto label_3ed9d8;
        case 0x3ed9dcu: goto label_3ed9dc;
        case 0x3ed9e0u: goto label_3ed9e0;
        case 0x3ed9e4u: goto label_3ed9e4;
        case 0x3ed9e8u: goto label_3ed9e8;
        case 0x3ed9ecu: goto label_3ed9ec;
        case 0x3ed9f0u: goto label_3ed9f0;
        case 0x3ed9f4u: goto label_3ed9f4;
        case 0x3ed9f8u: goto label_3ed9f8;
        case 0x3ed9fcu: goto label_3ed9fc;
        case 0x3eda00u: goto label_3eda00;
        case 0x3eda04u: goto label_3eda04;
        case 0x3eda08u: goto label_3eda08;
        case 0x3eda0cu: goto label_3eda0c;
        default: break;
    }

    ctx->pc = 0x3ed910u;

label_3ed910:
    // 0x3ed910: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3ed910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_3ed914:
    // 0x3ed914: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x3ed914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_3ed918:
    // 0x3ed918: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x3ed918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_3ed91c:
    // 0x3ed91c: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x3ed91cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_3ed920:
    // 0x3ed920: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x3ed920u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3ed924:
    // 0x3ed924: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x3ed924u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_3ed928:
    // 0x3ed928: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x3ed928u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3ed92c:
    // 0x3ed92c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3ed92cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_3ed930:
    // 0x3ed930: 0x326200ff  andi        $v0, $s3, 0xFF
    ctx->pc = 0x3ed930u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
label_3ed934:
    // 0x3ed934: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3ed934u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_3ed938:
    // 0x3ed938: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3ed938u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3ed93c:
    // 0x3ed93c: 0xe7b90014  swc1        $f25, 0x14($sp)
    ctx->pc = 0x3ed93cu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_3ed940:
    // 0x3ed940: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x3ed940u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3ed944:
    // 0x3ed944: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x3ed944u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_3ed948:
    // 0x3ed948: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x3ed948u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_3ed94c:
    // 0x3ed94c: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x3ed94cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_3ed950:
    // 0x3ed950: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x3ed950u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_3ed954:
    // 0x3ed954: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x3ed954u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_3ed958:
    // 0x3ed958: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3ed958u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_3ed95c:
    // 0x3ed95c: 0x46006646  mov.s       $f25, $f12
    ctx->pc = 0x3ed95cu;
    ctx->f[25] = FPU_MOV_S(ctx->f[12]);
label_3ed960:
    // 0x3ed960: 0x46006e06  mov.s       $f24, $f13
    ctx->pc = 0x3ed960u;
    ctx->f[24] = FPU_MOV_S(ctx->f[13]);
label_3ed964:
    // 0x3ed964: 0x460075c6  mov.s       $f23, $f14
    ctx->pc = 0x3ed964u;
    ctx->f[23] = FPU_MOV_S(ctx->f[14]);
label_3ed968:
    // 0x3ed968: 0x46007d86  mov.s       $f22, $f15
    ctx->pc = 0x3ed968u;
    ctx->f[22] = FPU_MOV_S(ctx->f[15]);
label_3ed96c:
    // 0x3ed96c: 0x46008546  mov.s       $f21, $f16
    ctx->pc = 0x3ed96cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[16]);
label_3ed970:
    // 0x3ed970: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_3ed974:
    if (ctx->pc == 0x3ED974u) {
        ctx->pc = 0x3ED974u;
            // 0x3ed974: 0x46008d06  mov.s       $f20, $f17 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[17]);
        ctx->pc = 0x3ED978u;
        goto label_3ed978;
    }
    ctx->pc = 0x3ED970u;
    {
        const bool branch_taken_0x3ed970 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3ED974u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3ED970u;
            // 0x3ed974: 0x46008d06  mov.s       $f20, $f17 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[17]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ed970) {
            ctx->pc = 0x3ED990u;
            goto label_3ed990;
        }
    }
    ctx->pc = 0x3ED978u;
label_3ed978:
    // 0x3ed978: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3ed978u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3ed97c:
    // 0x3ed97c: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3ed97cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3ed980:
    // 0x3ed980: 0x320f809  jalr        $t9
label_3ed984:
    if (ctx->pc == 0x3ED984u) {
        ctx->pc = 0x3ED984u;
            // 0x3ed984: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3ED988u;
        goto label_3ed988;
    }
    ctx->pc = 0x3ED980u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3ED988u);
        ctx->pc = 0x3ED984u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3ED980u;
            // 0x3ed984: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3ED988u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3ED988u; }
            if (ctx->pc != 0x3ED988u) { return; }
        }
        }
    }
    ctx->pc = 0x3ED988u;
label_3ed988:
    // 0x3ed988: 0x10000006  b           . + 4 + (0x6 << 2)
label_3ed98c:
    if (ctx->pc == 0x3ED98Cu) {
        ctx->pc = 0x3ED98Cu;
            // 0x3ed98c: 0xe6980060  swc1        $f24, 0x60($s4) (Delay Slot)
        { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 96), bits); }
        ctx->pc = 0x3ED990u;
        goto label_3ed990;
    }
    ctx->pc = 0x3ED988u;
    {
        const bool branch_taken_0x3ed988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ED98Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3ED988u;
            // 0x3ed98c: 0xe6980060  swc1        $f24, 0x60($s4) (Delay Slot)
        { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 96), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ed988) {
            ctx->pc = 0x3ED9A4u;
            goto label_3ed9a4;
        }
    }
    ctx->pc = 0x3ED990u;
label_3ed990:
    // 0x3ed990: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3ed990u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3ed994:
    // 0x3ed994: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3ed994u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3ed998:
    // 0x3ed998: 0x320f809  jalr        $t9
label_3ed99c:
    if (ctx->pc == 0x3ED99Cu) {
        ctx->pc = 0x3ED99Cu;
            // 0x3ed99c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x3ED9A0u;
        goto label_3ed9a0;
    }
    ctx->pc = 0x3ED998u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3ED9A0u);
        ctx->pc = 0x3ED99Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3ED998u;
            // 0x3ed99c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3ED9A0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3ED9A0u; }
            if (ctx->pc != 0x3ED9A0u) { return; }
        }
        }
    }
    ctx->pc = 0x3ED9A0u;
label_3ed9a0:
    // 0x3ed9a0: 0xe6980060  swc1        $f24, 0x60($s4)
    ctx->pc = 0x3ed9a0u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 96), bits); }
label_3ed9a4:
    // 0x3ed9a4: 0xe698005c  swc1        $f24, 0x5C($s4)
    ctx->pc = 0x3ed9a4u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 92), bits); }
label_3ed9a8:
    // 0x3ed9a8: 0xe6980058  swc1        $f24, 0x58($s4)
    ctx->pc = 0x3ed9a8u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 88), bits); }
label_3ed9ac:
    // 0x3ed9ac: 0xe6980054  swc1        $f24, 0x54($s4)
    ctx->pc = 0x3ed9acu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 84), bits); }
label_3ed9b0:
    // 0x3ed9b0: 0xa293007c  sb          $s3, 0x7C($s4)
    ctx->pc = 0x3ed9b0u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 124), (uint8_t)GPR_U32(ctx, 19));
label_3ed9b4:
    // 0x3ed9b4: 0xa292007d  sb          $s2, 0x7D($s4)
    ctx->pc = 0x3ed9b4u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 125), (uint8_t)GPR_U32(ctx, 18));
label_3ed9b8:
    // 0x3ed9b8: 0xe6990088  swc1        $f25, 0x88($s4)
    ctx->pc = 0x3ed9b8u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 136), bits); }
label_3ed9bc:
    // 0x3ed9bc: 0xe6970084  swc1        $f23, 0x84($s4)
    ctx->pc = 0x3ed9bcu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 132), bits); }
label_3ed9c0:
    // 0x3ed9c0: 0xa291007e  sb          $s1, 0x7E($s4)
    ctx->pc = 0x3ed9c0u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 126), (uint8_t)GPR_U32(ctx, 17));
label_3ed9c4:
    // 0x3ed9c4: 0xa290007f  sb          $s0, 0x7F($s4)
    ctx->pc = 0x3ed9c4u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 127), (uint8_t)GPR_U32(ctx, 16));
label_3ed9c8:
    // 0x3ed9c8: 0xe6960094  swc1        $f22, 0x94($s4)
    ctx->pc = 0x3ed9c8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 148), bits); }
label_3ed9cc:
    // 0x3ed9cc: 0xe6950098  swc1        $f21, 0x98($s4)
    ctx->pc = 0x3ed9ccu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 152), bits); }
label_3ed9d0:
    // 0x3ed9d0: 0xae80008c  sw          $zero, 0x8C($s4)
    ctx->pc = 0x3ed9d0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 140), GPR_U32(ctx, 0));
label_3ed9d4:
    // 0x3ed9d4: 0xe6940090  swc1        $f20, 0x90($s4)
    ctx->pc = 0x3ed9d4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 144), bits); }
label_3ed9d8:
    // 0x3ed9d8: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x3ed9d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_3ed9dc:
    // 0x3ed9dc: 0xc7b90014  lwc1        $f25, 0x14($sp)
    ctx->pc = 0x3ed9dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_3ed9e0:
    // 0x3ed9e0: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x3ed9e0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3ed9e4:
    // 0x3ed9e4: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x3ed9e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_3ed9e8:
    // 0x3ed9e8: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x3ed9e8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3ed9ec:
    // 0x3ed9ec: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x3ed9ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_3ed9f0:
    // 0x3ed9f0: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x3ed9f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3ed9f4:
    // 0x3ed9f4: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x3ed9f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_3ed9f8:
    // 0x3ed9f8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3ed9f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3ed9fc:
    // 0x3ed9fc: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x3ed9fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3eda00:
    // 0x3eda00: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3eda00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3eda04:
    // 0x3eda04: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3eda04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3eda08:
    // 0x3eda08: 0x3e00008  jr          $ra
label_3eda0c:
    if (ctx->pc == 0x3EDA0Cu) {
        ctx->pc = 0x3EDA0Cu;
            // 0x3eda0c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x3EDA10u;
        goto label_fallthrough_0x3eda08;
    }
    ctx->pc = 0x3EDA08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EDA0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EDA08u;
            // 0x3eda0c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x3eda08:
    ctx->pc = 0x3EDA10u;
}
