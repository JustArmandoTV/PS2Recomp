#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003A8270
// Address: 0x3a8270 - 0x3a8410
void sub_003A8270_0x3a8270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A8270_0x3a8270");
#endif

    switch (ctx->pc) {
        case 0x3a8270u: goto label_3a8270;
        case 0x3a8274u: goto label_3a8274;
        case 0x3a8278u: goto label_3a8278;
        case 0x3a827cu: goto label_3a827c;
        case 0x3a8280u: goto label_3a8280;
        case 0x3a8284u: goto label_3a8284;
        case 0x3a8288u: goto label_3a8288;
        case 0x3a828cu: goto label_3a828c;
        case 0x3a8290u: goto label_3a8290;
        case 0x3a8294u: goto label_3a8294;
        case 0x3a8298u: goto label_3a8298;
        case 0x3a829cu: goto label_3a829c;
        case 0x3a82a0u: goto label_3a82a0;
        case 0x3a82a4u: goto label_3a82a4;
        case 0x3a82a8u: goto label_3a82a8;
        case 0x3a82acu: goto label_3a82ac;
        case 0x3a82b0u: goto label_3a82b0;
        case 0x3a82b4u: goto label_3a82b4;
        case 0x3a82b8u: goto label_3a82b8;
        case 0x3a82bcu: goto label_3a82bc;
        case 0x3a82c0u: goto label_3a82c0;
        case 0x3a82c4u: goto label_3a82c4;
        case 0x3a82c8u: goto label_3a82c8;
        case 0x3a82ccu: goto label_3a82cc;
        case 0x3a82d0u: goto label_3a82d0;
        case 0x3a82d4u: goto label_3a82d4;
        case 0x3a82d8u: goto label_3a82d8;
        case 0x3a82dcu: goto label_3a82dc;
        case 0x3a82e0u: goto label_3a82e0;
        case 0x3a82e4u: goto label_3a82e4;
        case 0x3a82e8u: goto label_3a82e8;
        case 0x3a82ecu: goto label_3a82ec;
        case 0x3a82f0u: goto label_3a82f0;
        case 0x3a82f4u: goto label_3a82f4;
        case 0x3a82f8u: goto label_3a82f8;
        case 0x3a82fcu: goto label_3a82fc;
        case 0x3a8300u: goto label_3a8300;
        case 0x3a8304u: goto label_3a8304;
        case 0x3a8308u: goto label_3a8308;
        case 0x3a830cu: goto label_3a830c;
        case 0x3a8310u: goto label_3a8310;
        case 0x3a8314u: goto label_3a8314;
        case 0x3a8318u: goto label_3a8318;
        case 0x3a831cu: goto label_3a831c;
        case 0x3a8320u: goto label_3a8320;
        case 0x3a8324u: goto label_3a8324;
        case 0x3a8328u: goto label_3a8328;
        case 0x3a832cu: goto label_3a832c;
        case 0x3a8330u: goto label_3a8330;
        case 0x3a8334u: goto label_3a8334;
        case 0x3a8338u: goto label_3a8338;
        case 0x3a833cu: goto label_3a833c;
        case 0x3a8340u: goto label_3a8340;
        case 0x3a8344u: goto label_3a8344;
        case 0x3a8348u: goto label_3a8348;
        case 0x3a834cu: goto label_3a834c;
        case 0x3a8350u: goto label_3a8350;
        case 0x3a8354u: goto label_3a8354;
        case 0x3a8358u: goto label_3a8358;
        case 0x3a835cu: goto label_3a835c;
        case 0x3a8360u: goto label_3a8360;
        case 0x3a8364u: goto label_3a8364;
        case 0x3a8368u: goto label_3a8368;
        case 0x3a836cu: goto label_3a836c;
        case 0x3a8370u: goto label_3a8370;
        case 0x3a8374u: goto label_3a8374;
        case 0x3a8378u: goto label_3a8378;
        case 0x3a837cu: goto label_3a837c;
        case 0x3a8380u: goto label_3a8380;
        case 0x3a8384u: goto label_3a8384;
        case 0x3a8388u: goto label_3a8388;
        case 0x3a838cu: goto label_3a838c;
        case 0x3a8390u: goto label_3a8390;
        case 0x3a8394u: goto label_3a8394;
        case 0x3a8398u: goto label_3a8398;
        case 0x3a839cu: goto label_3a839c;
        case 0x3a83a0u: goto label_3a83a0;
        case 0x3a83a4u: goto label_3a83a4;
        case 0x3a83a8u: goto label_3a83a8;
        case 0x3a83acu: goto label_3a83ac;
        case 0x3a83b0u: goto label_3a83b0;
        case 0x3a83b4u: goto label_3a83b4;
        case 0x3a83b8u: goto label_3a83b8;
        case 0x3a83bcu: goto label_3a83bc;
        case 0x3a83c0u: goto label_3a83c0;
        case 0x3a83c4u: goto label_3a83c4;
        case 0x3a83c8u: goto label_3a83c8;
        case 0x3a83ccu: goto label_3a83cc;
        case 0x3a83d0u: goto label_3a83d0;
        case 0x3a83d4u: goto label_3a83d4;
        case 0x3a83d8u: goto label_3a83d8;
        case 0x3a83dcu: goto label_3a83dc;
        case 0x3a83e0u: goto label_3a83e0;
        case 0x3a83e4u: goto label_3a83e4;
        case 0x3a83e8u: goto label_3a83e8;
        case 0x3a83ecu: goto label_3a83ec;
        case 0x3a83f0u: goto label_3a83f0;
        case 0x3a83f4u: goto label_3a83f4;
        case 0x3a83f8u: goto label_3a83f8;
        case 0x3a83fcu: goto label_3a83fc;
        case 0x3a8400u: goto label_3a8400;
        case 0x3a8404u: goto label_3a8404;
        case 0x3a8408u: goto label_3a8408;
        case 0x3a840cu: goto label_3a840c;
        default: break;
    }

    ctx->pc = 0x3a8270u;

label_3a8270:
    // 0x3a8270: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3a8270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_3a8274:
    // 0x3a8274: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x3a8274u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_3a8278:
    // 0x3a8278: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x3a8278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_3a827c:
    // 0x3a827c: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x3a827cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_3a8280:
    // 0x3a8280: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x3a8280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_3a8284:
    // 0x3a8284: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x3a8284u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_3a8288:
    // 0x3a8288: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3a8288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_3a828c:
    // 0x3a828c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x3a828cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3a8290:
    // 0x3a8290: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3a8290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_3a8294:
    // 0x3a8294: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x3a8294u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_3a8298:
    // 0x3a8298: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3a8298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3a829c:
    // 0x3a829c: 0x24840e84  addiu       $a0, $a0, 0xE84
    ctx->pc = 0x3a829cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3716));
label_3a82a0:
    // 0x3a82a0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3a82a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3a82a4:
    // 0x3a82a4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3a82a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3a82a8:
    // 0x3a82a8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3a82a8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_3a82ac:
    // 0x3a82ac: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x3a82acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_3a82b0:
    // 0x3a82b0: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x3a82b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3a82b4:
    // 0x3a82b4: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x3a82b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
label_3a82b8:
    // 0x3a82b8: 0x24710038  addiu       $s1, $v1, 0x38
    ctx->pc = 0x3a82b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 56));
label_3a82bc:
    // 0x3a82bc: 0x908311a1  lbu         $v1, 0x11A1($a0)
    ctx->pc = 0x3a82bcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4513)));
label_3a82c0:
    // 0x3a82c0: 0x10600049  beqz        $v1, . + 4 + (0x49 << 2)
label_3a82c4:
    if (ctx->pc == 0x3A82C4u) {
        ctx->pc = 0x3A82C4u;
            // 0x3a82c4: 0x26900008  addiu       $s0, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->pc = 0x3A82C8u;
        goto label_3a82c8;
    }
    ctx->pc = 0x3A82C0u;
    {
        const bool branch_taken_0x3a82c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A82C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A82C0u;
            // 0x3a82c4: 0x26900008  addiu       $s0, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a82c0) {
            ctx->pc = 0x3A83E8u;
            goto label_3a83e8;
        }
    }
    ctx->pc = 0x3A82C8u;
label_3a82c8:
    // 0x3a82c8: 0x8c830da0  lw          $v1, 0xDA0($a0)
    ctx->pc = 0x3a82c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3488)));
label_3a82cc:
    // 0x3a82cc: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x3a82ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
label_3a82d0:
    // 0x3a82d0: 0x54600046  bnel        $v1, $zero, . + 4 + (0x46 << 2)
label_3a82d4:
    if (ctx->pc == 0x3A82D4u) {
        ctx->pc = 0x3A82D4u;
            // 0x3a82d4: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->pc = 0x3A82D8u;
        goto label_3a82d8;
    }
    ctx->pc = 0x3A82D0u;
    {
        const bool branch_taken_0x3a82d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a82d0) {
            ctx->pc = 0x3A82D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A82D0u;
            // 0x3a82d4: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A83ECu;
            goto label_3a83ec;
        }
    }
    ctx->pc = 0x3A82D8u;
label_3a82d8:
    // 0x3a82d8: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x3a82d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_3a82dc:
    // 0x3a82dc: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x3a82dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_3a82e0:
    // 0x3a82e0: 0x906300e4  lbu         $v1, 0xE4($v1)
    ctx->pc = 0x3a82e0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 228)));
label_3a82e4:
    // 0x3a82e4: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x3a82e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_3a82e8:
    // 0x3a82e8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3a82e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_3a82ec:
    // 0x3a82ec: 0x1460003e  bnez        $v1, . + 4 + (0x3E << 2)
label_3a82f0:
    if (ctx->pc == 0x3A82F0u) {
        ctx->pc = 0x3A82F4u;
        goto label_3a82f4;
    }
    ctx->pc = 0x3A82ECu;
    {
        const bool branch_taken_0x3a82ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a82ec) {
            ctx->pc = 0x3A83E8u;
            goto label_3a83e8;
        }
    }
    ctx->pc = 0x3A82F4u;
label_3a82f4:
    // 0x3a82f4: 0xc6340024  lwc1        $f20, 0x24($s1)
    ctx->pc = 0x3a82f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3a82f8:
    // 0x3a82f8: 0xc0754b4  jal         func_1D52D0
label_3a82fc:
    if (ctx->pc == 0x3A82FCu) {
        ctx->pc = 0x3A82FCu;
            // 0x3a82fc: 0x24840440  addiu       $a0, $a0, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1088));
        ctx->pc = 0x3A8300u;
        goto label_3a8300;
    }
    ctx->pc = 0x3A82F8u;
    SET_GPR_U32(ctx, 31, 0x3A8300u);
    ctx->pc = 0x3A82FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A82F8u;
            // 0x3a82fc: 0x24840440  addiu       $a0, $a0, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D52D0u;
    if (runtime->hasFunction(0x1D52D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D52D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A8300u; }
        if (ctx->pc != 0x3A8300u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D52D0_0x1d52d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A8300u; }
        if (ctx->pc != 0x3A8300u) { return; }
    }
    ctx->pc = 0x3A8300u;
label_3a8300:
    // 0x3a8300: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3a8300u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3a8304:
    // 0x3a8304: 0x0  nop
    ctx->pc = 0x3a8304u;
    // NOP
label_3a8308:
    // 0x3a8308: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x3a8308u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3a830c:
    // 0x3a830c: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
label_3a8310:
    if (ctx->pc == 0x3A8310u) {
        ctx->pc = 0x3A8310u;
            // 0x3a8310: 0x3c0342c8  lui         $v1, 0x42C8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
        ctx->pc = 0x3A8314u;
        goto label_3a8314;
    }
    ctx->pc = 0x3A830Cu;
    {
        const bool branch_taken_0x3a830c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3a830c) {
            ctx->pc = 0x3A8310u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A830Cu;
            // 0x3a8310: 0x3c0342c8  lui         $v1, 0x42C8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A8320u;
            goto label_3a8320;
        }
    }
    ctx->pc = 0x3A8314u;
label_3a8314:
    // 0x3a8314: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3a8314u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_3a8318:
    // 0x3a8318: 0x4483a000  mtc1        $v1, $f20
    ctx->pc = 0x3a8318u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3a831c:
    // 0x3a831c: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x3a831cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
label_3a8320:
    // 0x3a8320: 0x86330008  lh          $s3, 0x8($s1)
    ctx->pc = 0x3a8320u;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
label_3a8324:
    // 0x3a8324: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3a8324u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3a8328:
    // 0x3a8328: 0x8632000a  lh          $s2, 0xA($s1)
    ctx->pc = 0x3a8328u;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
label_3a832c:
    // 0x3a832c: 0x4601a043  div.s       $f1, $f20, $f1
    ctx->pc = 0x3a832cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[1] = ctx->f[20] / ctx->f[1];
label_3a8330:
    // 0x3a8330: 0x92830005  lbu         $v1, 0x5($s4)
    ctx->pc = 0x3a8330u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 5)));
label_3a8334:
    // 0x3a8334: 0xc600001c  lwc1        $f0, 0x1C($s0)
    ctx->pc = 0x3a8334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a8338:
    // 0x3a8338: 0x8e30000c  lw          $s0, 0xC($s1)
    ctx->pc = 0x3a8338u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_3a833c:
    // 0x3a833c: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
label_3a8340:
    if (ctx->pc == 0x3A8340u) {
        ctx->pc = 0x3A8340u;
            // 0x3a8340: 0x46000d02  mul.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x3A8344u;
        goto label_3a8344;
    }
    ctx->pc = 0x3A833Cu;
    {
        const bool branch_taken_0x3a833c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A8340u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A833Cu;
            // 0x3a8340: 0x46000d02  mul.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a833c) {
            ctx->pc = 0x3A836Cu;
            goto label_3a836c;
        }
    }
    ctx->pc = 0x3A8344u;
label_3a8344:
    // 0x3a8344: 0xc05068c  jal         func_141A30
label_3a8348:
    if (ctx->pc == 0x3A8348u) {
        ctx->pc = 0x3A8348u;
            // 0x3a8348: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A834Cu;
        goto label_3a834c;
    }
    ctx->pc = 0x3A8344u;
    SET_GPR_U32(ctx, 31, 0x3A834Cu);
    ctx->pc = 0x3A8348u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A8344u;
            // 0x3a8348: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141A30u;
    if (runtime->hasFunction(0x141A30u)) {
        auto targetFn = runtime->lookupFunction(0x141A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A834Cu; }
        if (ctx->pc != 0x3A834Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141A30_0x141a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A834Cu; }
        if (ctx->pc != 0x3A834Cu) { return; }
    }
    ctx->pc = 0x3A834Cu;
label_3a834c:
    // 0x3a834c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3a834cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3a8350:
    // 0x3a8350: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x3a8350u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_3a8354:
    // 0x3a8354: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3a8354u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3a8358:
    // 0x3a8358: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x3a8358u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_3a835c:
    // 0x3a835c: 0x320f809  jalr        $t9
label_3a8360:
    if (ctx->pc == 0x3A8360u) {
        ctx->pc = 0x3A8360u;
            // 0x3a8360: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x3A8364u;
        goto label_3a8364;
    }
    ctx->pc = 0x3A835Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3A8364u);
        ctx->pc = 0x3A8360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A835Cu;
            // 0x3a8360: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3A8364u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3A8364u; }
            if (ctx->pc != 0x3A8364u) { return; }
        }
        }
    }
    ctx->pc = 0x3A8364u;
label_3a8364:
    // 0x3a8364: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3a8364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a8368:
    // 0x3a8368: 0xa2830005  sb          $v1, 0x5($s4)
    ctx->pc = 0x3a8368u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 5), (uint8_t)GPR_U32(ctx, 3));
label_3a836c:
    // 0x3a836c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3a836cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3a8370:
    // 0x3a8370: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x3a8370u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_3a8374:
    // 0x3a8374: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
label_3a8378:
    if (ctx->pc == 0x3A8378u) {
        ctx->pc = 0x3A8378u;
            // 0x3a8378: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x3A837Cu;
        goto label_3a837c;
    }
    ctx->pc = 0x3A8374u;
    {
        const bool branch_taken_0x3a8374 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a8374) {
            ctx->pc = 0x3A8378u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A8374u;
            // 0x3a8378: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A839Cu;
            goto label_3a839c;
        }
    }
    ctx->pc = 0x3A837Cu;
label_3a837c:
    // 0x3a837c: 0x92280011  lbu         $t0, 0x11($s1)
    ctx->pc = 0x3a837cu;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 17)));
label_3a8380:
    // 0x3a8380: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3a8380u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_3a8384:
    // 0x3a8384: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3a8384u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3a8388:
    // 0x3a8388: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3a8388u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3a838c:
    // 0x3a838c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3a838cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3a8390:
    // 0x3a8390: 0xc0ea6f8  jal         func_3A9BE0
label_3a8394:
    if (ctx->pc == 0x3A8394u) {
        ctx->pc = 0x3A8394u;
            // 0x3a8394: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A8398u;
        goto label_3a8398;
    }
    ctx->pc = 0x3A8390u;
    SET_GPR_U32(ctx, 31, 0x3A8398u);
    ctx->pc = 0x3A8394u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A8390u;
            // 0x3a8394: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3A9BE0u;
    if (runtime->hasFunction(0x3A9BE0u)) {
        auto targetFn = runtime->lookupFunction(0x3A9BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A8398u; }
        if (ctx->pc != 0x3A8398u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003A9BE0_0x3a9be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A8398u; }
        if (ctx->pc != 0x3A8398u) { return; }
    }
    ctx->pc = 0x3A8398u;
label_3a8398:
    // 0x3a8398: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x3a8398u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3a839c:
    // 0x3a839c: 0x30830004  andi        $v1, $a0, 0x4
    ctx->pc = 0x3a839cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
label_3a83a0:
    // 0x3a83a0: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
label_3a83a4:
    if (ctx->pc == 0x3A83A4u) {
        ctx->pc = 0x3A83A4u;
            // 0x3a83a4: 0x30830008  andi        $v1, $a0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8);
        ctx->pc = 0x3A83A8u;
        goto label_3a83a8;
    }
    ctx->pc = 0x3A83A0u;
    {
        const bool branch_taken_0x3a83a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a83a0) {
            ctx->pc = 0x3A83A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A83A0u;
            // 0x3a83a4: 0x30830008  andi        $v1, $a0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A83C8u;
            goto label_3a83c8;
        }
    }
    ctx->pc = 0x3A83A8u;
label_3a83a8:
    // 0x3a83a8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3a83a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3a83ac:
    // 0x3a83ac: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3a83acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3a83b0:
    // 0x3a83b0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3a83b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3a83b4:
    // 0x3a83b4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x3a83b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3a83b8:
    // 0x3a83b8: 0xc0ea688  jal         func_3A9A20
label_3a83bc:
    if (ctx->pc == 0x3A83BCu) {
        ctx->pc = 0x3A83BCu;
            // 0x3a83bc: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A83C0u;
        goto label_3a83c0;
    }
    ctx->pc = 0x3A83B8u;
    SET_GPR_U32(ctx, 31, 0x3A83C0u);
    ctx->pc = 0x3A83BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A83B8u;
            // 0x3a83bc: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3A9A20u;
    if (runtime->hasFunction(0x3A9A20u)) {
        auto targetFn = runtime->lookupFunction(0x3A9A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A83C0u; }
        if (ctx->pc != 0x3A83C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003A9A20_0x3a9a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A83C0u; }
        if (ctx->pc != 0x3A83C0u) { return; }
    }
    ctx->pc = 0x3A83C0u;
label_3a83c0:
    // 0x3a83c0: 0x10000009  b           . + 4 + (0x9 << 2)
label_3a83c4:
    if (ctx->pc == 0x3A83C4u) {
        ctx->pc = 0x3A83C8u;
        goto label_3a83c8;
    }
    ctx->pc = 0x3A83C0u;
    {
        const bool branch_taken_0x3a83c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a83c0) {
            ctx->pc = 0x3A83E8u;
            goto label_3a83e8;
        }
    }
    ctx->pc = 0x3A83C8u;
label_3a83c8:
    // 0x3a83c8: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_3a83cc:
    if (ctx->pc == 0x3A83CCu) {
        ctx->pc = 0x3A83D0u;
        goto label_3a83d0;
    }
    ctx->pc = 0x3A83C8u;
    {
        const bool branch_taken_0x3a83c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a83c8) {
            ctx->pc = 0x3A83E8u;
            goto label_3a83e8;
        }
    }
    ctx->pc = 0x3A83D0u;
label_3a83d0:
    // 0x3a83d0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3a83d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3a83d4:
    // 0x3a83d4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3a83d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3a83d8:
    // 0x3a83d8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3a83d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3a83dc:
    // 0x3a83dc: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x3a83dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3a83e0:
    // 0x3a83e0: 0xc0ea5c0  jal         func_3A9700
label_3a83e4:
    if (ctx->pc == 0x3A83E4u) {
        ctx->pc = 0x3A83E4u;
            // 0x3a83e4: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A83E8u;
        goto label_3a83e8;
    }
    ctx->pc = 0x3A83E0u;
    SET_GPR_U32(ctx, 31, 0x3A83E8u);
    ctx->pc = 0x3A83E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A83E0u;
            // 0x3a83e4: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3A9700u;
    if (runtime->hasFunction(0x3A9700u)) {
        auto targetFn = runtime->lookupFunction(0x3A9700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A83E8u; }
        if (ctx->pc != 0x3A83E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003A9700_0x3a9700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A83E8u; }
        if (ctx->pc != 0x3A83E8u) { return; }
    }
    ctx->pc = 0x3A83E8u;
label_3a83e8:
    // 0x3a83e8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x3a83e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_3a83ec:
    // 0x3a83ec: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3a83ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3a83f0:
    // 0x3a83f0: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x3a83f0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3a83f4:
    // 0x3a83f4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3a83f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3a83f8:
    // 0x3a83f8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3a83f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3a83fc:
    // 0x3a83fc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3a83fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3a8400:
    // 0x3a8400: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3a8400u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3a8404:
    // 0x3a8404: 0x3e00008  jr          $ra
label_3a8408:
    if (ctx->pc == 0x3A8408u) {
        ctx->pc = 0x3A8408u;
            // 0x3a8408: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x3A840Cu;
        goto label_3a840c;
    }
    ctx->pc = 0x3A8404u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A8408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A8404u;
            // 0x3a8408: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3A840Cu;
label_3a840c:
    // 0x3a840c: 0x0  nop
    ctx->pc = 0x3a840cu;
    // NOP
}
