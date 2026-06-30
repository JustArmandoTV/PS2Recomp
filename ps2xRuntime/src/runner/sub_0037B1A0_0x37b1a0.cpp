#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0037B1A0
// Address: 0x37b1a0 - 0x37b2f0
void sub_0037B1A0_0x37b1a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037B1A0_0x37b1a0");
#endif

    switch (ctx->pc) {
        case 0x37b1a0u: goto label_37b1a0;
        case 0x37b1a4u: goto label_37b1a4;
        case 0x37b1a8u: goto label_37b1a8;
        case 0x37b1acu: goto label_37b1ac;
        case 0x37b1b0u: goto label_37b1b0;
        case 0x37b1b4u: goto label_37b1b4;
        case 0x37b1b8u: goto label_37b1b8;
        case 0x37b1bcu: goto label_37b1bc;
        case 0x37b1c0u: goto label_37b1c0;
        case 0x37b1c4u: goto label_37b1c4;
        case 0x37b1c8u: goto label_37b1c8;
        case 0x37b1ccu: goto label_37b1cc;
        case 0x37b1d0u: goto label_37b1d0;
        case 0x37b1d4u: goto label_37b1d4;
        case 0x37b1d8u: goto label_37b1d8;
        case 0x37b1dcu: goto label_37b1dc;
        case 0x37b1e0u: goto label_37b1e0;
        case 0x37b1e4u: goto label_37b1e4;
        case 0x37b1e8u: goto label_37b1e8;
        case 0x37b1ecu: goto label_37b1ec;
        case 0x37b1f0u: goto label_37b1f0;
        case 0x37b1f4u: goto label_37b1f4;
        case 0x37b1f8u: goto label_37b1f8;
        case 0x37b1fcu: goto label_37b1fc;
        case 0x37b200u: goto label_37b200;
        case 0x37b204u: goto label_37b204;
        case 0x37b208u: goto label_37b208;
        case 0x37b20cu: goto label_37b20c;
        case 0x37b210u: goto label_37b210;
        case 0x37b214u: goto label_37b214;
        case 0x37b218u: goto label_37b218;
        case 0x37b21cu: goto label_37b21c;
        case 0x37b220u: goto label_37b220;
        case 0x37b224u: goto label_37b224;
        case 0x37b228u: goto label_37b228;
        case 0x37b22cu: goto label_37b22c;
        case 0x37b230u: goto label_37b230;
        case 0x37b234u: goto label_37b234;
        case 0x37b238u: goto label_37b238;
        case 0x37b23cu: goto label_37b23c;
        case 0x37b240u: goto label_37b240;
        case 0x37b244u: goto label_37b244;
        case 0x37b248u: goto label_37b248;
        case 0x37b24cu: goto label_37b24c;
        case 0x37b250u: goto label_37b250;
        case 0x37b254u: goto label_37b254;
        case 0x37b258u: goto label_37b258;
        case 0x37b25cu: goto label_37b25c;
        case 0x37b260u: goto label_37b260;
        case 0x37b264u: goto label_37b264;
        case 0x37b268u: goto label_37b268;
        case 0x37b26cu: goto label_37b26c;
        case 0x37b270u: goto label_37b270;
        case 0x37b274u: goto label_37b274;
        case 0x37b278u: goto label_37b278;
        case 0x37b27cu: goto label_37b27c;
        case 0x37b280u: goto label_37b280;
        case 0x37b284u: goto label_37b284;
        case 0x37b288u: goto label_37b288;
        case 0x37b28cu: goto label_37b28c;
        case 0x37b290u: goto label_37b290;
        case 0x37b294u: goto label_37b294;
        case 0x37b298u: goto label_37b298;
        case 0x37b29cu: goto label_37b29c;
        case 0x37b2a0u: goto label_37b2a0;
        case 0x37b2a4u: goto label_37b2a4;
        case 0x37b2a8u: goto label_37b2a8;
        case 0x37b2acu: goto label_37b2ac;
        case 0x37b2b0u: goto label_37b2b0;
        case 0x37b2b4u: goto label_37b2b4;
        case 0x37b2b8u: goto label_37b2b8;
        case 0x37b2bcu: goto label_37b2bc;
        case 0x37b2c0u: goto label_37b2c0;
        case 0x37b2c4u: goto label_37b2c4;
        case 0x37b2c8u: goto label_37b2c8;
        case 0x37b2ccu: goto label_37b2cc;
        case 0x37b2d0u: goto label_37b2d0;
        case 0x37b2d4u: goto label_37b2d4;
        case 0x37b2d8u: goto label_37b2d8;
        case 0x37b2dcu: goto label_37b2dc;
        case 0x37b2e0u: goto label_37b2e0;
        case 0x37b2e4u: goto label_37b2e4;
        case 0x37b2e8u: goto label_37b2e8;
        case 0x37b2ecu: goto label_37b2ec;
        default: break;
    }

    ctx->pc = 0x37b1a0u;

label_37b1a0:
    // 0x37b1a0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x37b1a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_37b1a4:
    // 0x37b1a4: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x37b1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_37b1a8:
    // 0x37b1a8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x37b1a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_37b1ac:
    // 0x37b1ac: 0x24425368  addiu       $v0, $v0, 0x5368
    ctx->pc = 0x37b1acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21352));
label_37b1b0:
    // 0x37b1b0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x37b1b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_37b1b4:
    // 0x37b1b4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x37b1b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37b1b8:
    // 0x37b1b8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x37b1b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_37b1bc:
    // 0x37b1bc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x37b1bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_37b1c0:
    // 0x37b1c0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x37b1c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_37b1c4:
    // 0x37b1c4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x37b1c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_37b1c8:
    // 0x37b1c8: 0x122080  sll         $a0, $s2, 2
    ctx->pc = 0x37b1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_37b1cc:
    // 0x37b1cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x37b1ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_37b1d0:
    // 0x37b1d0: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x37b1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_37b1d4:
    // 0x37b1d4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x37b1d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_37b1d8:
    // 0x37b1d8: 0x921021  addu        $v0, $a0, $s2
    ctx->pc = 0x37b1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
label_37b1dc:
    // 0x37b1dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x37b1dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37b1e0:
    // 0x37b1e0: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x37b1e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_37b1e4:
    // 0x37b1e4: 0x3c024336  lui         $v0, 0x4336
    ctx->pc = 0x37b1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17206 << 16));
label_37b1e8:
    // 0x37b1e8: 0x2642021  addu        $a0, $s3, $a0
    ctx->pc = 0x37b1e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
label_37b1ec:
    // 0x37b1ec: 0x34420b60  ori         $v0, $v0, 0xB60
    ctx->pc = 0x37b1ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2912);
label_37b1f0:
    // 0x37b1f0: 0x24900094  addiu       $s0, $a0, 0x94
    ctx->pc = 0x37b1f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 148));
label_37b1f4:
    // 0x37b1f4: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x37b1f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37b1f8:
    // 0x37b1f8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x37b1f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_37b1fc:
    // 0x37b1fc: 0x0  nop
    ctx->pc = 0x37b1fcu;
    // NOP
label_37b200:
    // 0x37b200: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x37b200u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_37b204:
    // 0x37b204: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x37b204u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_37b208:
    // 0x37b208: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x37b208u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_37b20c:
    // 0x37b20c: 0xc04ca18  jal         func_132860
label_37b210:
    if (ctx->pc == 0x37B210u) {
        ctx->pc = 0x37B210u;
            // 0x37b210: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x37B214u;
        goto label_37b214;
    }
    ctx->pc = 0x37B20Cu;
    SET_GPR_U32(ctx, 31, 0x37B214u);
    ctx->pc = 0x37B210u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37B20Cu;
            // 0x37b210: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132860u;
    if (runtime->hasFunction(0x132860u)) {
        auto targetFn = runtime->lookupFunction(0x132860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37B214u; }
        if (ctx->pc != 0x37B214u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132860_0x132860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37B214u; }
        if (ctx->pc != 0x37B214u) { return; }
    }
    ctx->pc = 0x37B214u;
label_37b214:
    // 0x37b214: 0x121840  sll         $v1, $s2, 1
    ctx->pc = 0x37b214u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
label_37b218:
    // 0x37b218: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x37b218u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_37b21c:
    // 0x37b21c: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x37b21cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_37b220:
    // 0x37b220: 0x8e670090  lw          $a3, 0x90($s3)
    ctx->pc = 0x37b220u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 144)));
label_37b224:
    // 0x37b224: 0x24425340  addiu       $v0, $v0, 0x5340
    ctx->pc = 0x37b224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21312));
label_37b228:
    // 0x37b228: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x37b228u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_37b22c:
    // 0x37b22c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37b22cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_37b230:
    // 0x37b230: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x37b230u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_37b234:
    // 0x37b234: 0xc0d37ec  jal         func_34DFB0
label_37b238:
    if (ctx->pc == 0x37B238u) {
        ctx->pc = 0x37B238u;
            // 0x37b238: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x37B23Cu;
        goto label_37b23c;
    }
    ctx->pc = 0x37B234u;
    SET_GPR_U32(ctx, 31, 0x37B23Cu);
    ctx->pc = 0x37B238u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37B234u;
            // 0x37b238: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34DFB0u;
    if (runtime->hasFunction(0x34DFB0u)) {
        auto targetFn = runtime->lookupFunction(0x34DFB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37B23Cu; }
        if (ctx->pc != 0x37B23Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034DFB0_0x34dfb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37B23Cu; }
        if (ctx->pc != 0x37B23Cu) { return; }
    }
    ctx->pc = 0x37B23Cu;
label_37b23c:
    // 0x37b23c: 0xae110008  sw          $s1, 0x8($s0)
    ctx->pc = 0x37b23cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 17));
label_37b240:
    // 0x37b240: 0xae13000c  sw          $s3, 0xC($s0)
    ctx->pc = 0x37b240u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 19));
label_37b244:
    // 0x37b244: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x37b244u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_37b248:
    // 0x37b248: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x37b248u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_37b24c:
    // 0x37b24c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x37b24cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_37b250:
    // 0x37b250: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x37b250u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_37b254:
    // 0x37b254: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x37b254u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_37b258:
    // 0x37b258: 0x3e00008  jr          $ra
label_37b25c:
    if (ctx->pc == 0x37B25Cu) {
        ctx->pc = 0x37B25Cu;
            // 0x37b25c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x37B260u;
        goto label_37b260;
    }
    ctx->pc = 0x37B258u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37B25Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37B258u;
            // 0x37b25c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x37B260u;
label_37b260:
    // 0x37b260: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x37b260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_37b264:
    // 0x37b264: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x37b264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_37b268:
    // 0x37b268: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x37b268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_37b26c:
    // 0x37b26c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x37b26cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_37b270:
    // 0x37b270: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x37b270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_37b274:
    // 0x37b274: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x37b274u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_37b278:
    // 0x37b278: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x37b278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_37b27c:
    // 0x37b27c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x37b27cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_37b280:
    // 0x37b280: 0xac8000d4  sw          $zero, 0xD4($a0)
    ctx->pc = 0x37b280u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 212), GPR_U32(ctx, 0));
label_37b284:
    // 0x37b284: 0xac8300d0  sw          $v1, 0xD0($a0)
    ctx->pc = 0x37b284u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 208), GPR_U32(ctx, 3));
label_37b288:
    // 0x37b288: 0x8c900070  lw          $s0, 0x70($a0)
    ctx->pc = 0x37b288u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_37b28c:
    // 0x37b28c: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_37b290:
    if (ctx->pc == 0x37B290u) {
        ctx->pc = 0x37B290u;
            // 0x37b290: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x37B294u;
        goto label_37b294;
    }
    ctx->pc = 0x37B28Cu;
    {
        const bool branch_taken_0x37b28c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x37B290u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37B28Cu;
            // 0x37b290: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37b28c) {
            ctx->pc = 0x37B2D0u;
            goto label_37b2d0;
        }
    }
    ctx->pc = 0x37B294u;
label_37b294:
    // 0x37b294: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x37b294u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37b298:
    // 0x37b298: 0x8e630074  lw          $v1, 0x74($s3)
    ctx->pc = 0x37b298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 116)));
label_37b29c:
    // 0x37b29c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x37b29cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_37b2a0:
    // 0x37b2a0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x37b2a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_37b2a4:
    // 0x37b2a4: 0x8c8300d0  lw          $v1, 0xD0($a0)
    ctx->pc = 0x37b2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 208)));
label_37b2a8:
    // 0x37b2a8: 0x18600005  blez        $v1, . + 4 + (0x5 << 2)
label_37b2ac:
    if (ctx->pc == 0x37B2ACu) {
        ctx->pc = 0x37B2B0u;
        goto label_37b2b0;
    }
    ctx->pc = 0x37B2A8u;
    {
        const bool branch_taken_0x37b2a8 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x37b2a8) {
            ctx->pc = 0x37B2C0u;
            goto label_37b2c0;
        }
    }
    ctx->pc = 0x37B2B0u;
label_37b2b0:
    // 0x37b2b0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x37b2b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_37b2b4:
    // 0x37b2b4: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x37b2b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_37b2b8:
    // 0x37b2b8: 0x320f809  jalr        $t9
label_37b2bc:
    if (ctx->pc == 0x37B2BCu) {
        ctx->pc = 0x37B2C0u;
        goto label_37b2c0;
    }
    ctx->pc = 0x37B2B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x37B2C0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x37B2C0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x37B2C0u; }
            if (ctx->pc != 0x37B2C0u) { return; }
        }
        }
    }
    ctx->pc = 0x37B2C0u;
label_37b2c0:
    // 0x37b2c0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x37b2c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_37b2c4:
    // 0x37b2c4: 0x250182b  sltu        $v1, $s2, $s0
    ctx->pc = 0x37b2c4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_37b2c8:
    // 0x37b2c8: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
label_37b2cc:
    if (ctx->pc == 0x37B2CCu) {
        ctx->pc = 0x37B2CCu;
            // 0x37b2cc: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x37B2D0u;
        goto label_37b2d0;
    }
    ctx->pc = 0x37B2C8u;
    {
        const bool branch_taken_0x37b2c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x37B2CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37B2C8u;
            // 0x37b2cc: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37b2c8) {
            ctx->pc = 0x37B298u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_37b298;
        }
    }
    ctx->pc = 0x37B2D0u;
label_37b2d0:
    // 0x37b2d0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x37b2d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_37b2d4:
    // 0x37b2d4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x37b2d4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_37b2d8:
    // 0x37b2d8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x37b2d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_37b2dc:
    // 0x37b2dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x37b2dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_37b2e0:
    // 0x37b2e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x37b2e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_37b2e4:
    // 0x37b2e4: 0x3e00008  jr          $ra
label_37b2e8:
    if (ctx->pc == 0x37B2E8u) {
        ctx->pc = 0x37B2E8u;
            // 0x37b2e8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x37B2ECu;
        goto label_37b2ec;
    }
    ctx->pc = 0x37B2E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37B2E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37B2E4u;
            // 0x37b2e8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x37B2ECu;
label_37b2ec:
    // 0x37b2ec: 0x0  nop
    ctx->pc = 0x37b2ecu;
    // NOP
}
