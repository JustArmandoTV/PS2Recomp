#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004A7190
// Address: 0x4a7190 - 0x4a72d0
void sub_004A7190_0x4a7190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A7190_0x4a7190");
#endif

    switch (ctx->pc) {
        case 0x4a7210u: goto label_4a7210;
        case 0x4a7270u: goto label_4a7270;
        case 0x4a72c0u: goto label_4a72c0;
        default: break;
    }

    ctx->pc = 0x4a7190u;

    // 0x4a7190: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4a7190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4a7194: 0x3c060067  lui         $a2, 0x67
    ctx->pc = 0x4a7194u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)103 << 16));
    // 0x4a7198: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4a7198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4a719c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4a719cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4a71a0: 0x46007406  mov.s       $f16, $f14
    ctx->pc = 0x4a71a0u;
    ctx->f[16] = FPU_MOV_S(ctx->f[14]);
    // 0x4a71a4: 0x10a30034  beq         $a1, $v1, . + 4 + (0x34 << 2)
    ctx->pc = 0x4A71A4u;
    {
        const bool branch_taken_0x4a71a4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x4A71A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A71A4u;
            // 0x4a71a8: 0x24c6f780  addiu       $a2, $a2, -0x880 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294965120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a71a4) {
            ctx->pc = 0x4A7278u;
            goto label_4a7278;
        }
    }
    ctx->pc = 0x4A71ACu;
    // 0x4a71ac: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x4a71acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4a71b0: 0x10a80019  beq         $a1, $t0, . + 4 + (0x19 << 2)
    ctx->pc = 0x4A71B0u;
    {
        const bool branch_taken_0x4a71b0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 8));
        if (branch_taken_0x4a71b0) {
            ctx->pc = 0x4A7218u;
            goto label_4a7218;
        }
    }
    ctx->pc = 0x4A71B8u;
    // 0x4a71b8: 0x10a00017  beqz        $a1, . + 4 + (0x17 << 2)
    ctx->pc = 0x4A71B8u;
    {
        const bool branch_taken_0x4a71b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a71b8) {
            ctx->pc = 0x4A7218u;
            goto label_4a7218;
        }
    }
    ctx->pc = 0x4A71C0u;
    // 0x4a71c0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x4a71c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4a71c4: 0x50a30003  beql        $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4A71C4u;
    {
        const bool branch_taken_0x4a71c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4a71c4) {
            ctx->pc = 0x4A71C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A71C4u;
            // 0x4a71c8: 0x3c0243b7  lui         $v0, 0x43B7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17335 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A71D4u;
            goto label_4a71d4;
        }
    }
    ctx->pc = 0x4A71CCu;
    // 0x4a71cc: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x4A71CCu;
    {
        const bool branch_taken_0x4a71cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A71D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A71CCu;
            // 0x4a71d0: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a71cc) {
            ctx->pc = 0x4A72C4u;
            goto label_4a72c4;
        }
    }
    ctx->pc = 0x4A71D4u;
label_4a71d4:
    // 0x4a71d4: 0xffa50000  sd          $a1, 0x0($sp)
    ctx->pc = 0x4a71d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 5));
    // 0x4a71d8: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x4a71d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x4a71dc: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4a71dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4a71e0: 0x3c0242ac  lui         $v0, 0x42AC
    ctx->pc = 0x4a71e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17068 << 16));
    // 0x4a71e4: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x4a71e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
    // 0x4a71e8: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x4a71e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x4a71ec: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x4a71ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x4a71f0: 0xffa30010  sd          $v1, 0x10($sp)
    ctx->pc = 0x4a71f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 3));
    // 0x4a71f4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4a71f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x4a71f8: 0x8c470eb8  lw          $a3, 0xEB8($v0)
    ctx->pc = 0x4a71f8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3768)));
    // 0x4a71fc: 0x24a5f790  addiu       $a1, $a1, -0x870
    ctx->pc = 0x4a71fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965136));
    // 0x4a7200: 0x24090006  addiu       $t1, $zero, 0x6
    ctx->pc = 0x4a7200u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x4a7204: 0x240a0007  addiu       $t2, $zero, 0x7
    ctx->pc = 0x4a7204u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x4a7208: 0xc129cfc  jal         func_4A73F0
    ctx->pc = 0x4A7208u;
    SET_GPR_U32(ctx, 31, 0x4A7210u);
    ctx->pc = 0x4A720Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A7208u;
            // 0x4a720c: 0x240b0008  addiu       $t3, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A73F0u;
    if (runtime->hasFunction(0x4A73F0u)) {
        auto targetFn = runtime->lookupFunction(0x4A73F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A7210u; }
        if (ctx->pc != 0x4A7210u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A73F0_0x4a73f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A7210u; }
        if (ctx->pc != 0x4A7210u) { return; }
    }
    ctx->pc = 0x4A7210u;
label_4a7210:
    // 0x4a7210: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x4A7210u;
    {
        const bool branch_taken_0x4a7210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a7210) {
            ctx->pc = 0x4A72C0u;
            goto label_4a72c0;
        }
    }
    ctx->pc = 0x4A7218u;
label_4a7218:
    // 0x4a7218: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4a7218u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x4a721c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x4a721cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x4a7220: 0x244250a0  addiu       $v0, $v0, 0x50A0
    ctx->pc = 0x4a7220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20640));
    // 0x4a7224: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x4a7224u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x4a7228: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4a7228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4a722c: 0x24a5f790  addiu       $a1, $a1, -0x870
    ctx->pc = 0x4a722cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965136));
    // 0x4a7230: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x4a7230u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4a7234: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4a7234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4a7238: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x4a7238u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4a723c: 0x24090006  addiu       $t1, $zero, 0x6
    ctx->pc = 0x4a723cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x4a7240: 0x240a0007  addiu       $t2, $zero, 0x7
    ctx->pc = 0x4a7240u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x4a7244: 0x3c0243b7  lui         $v0, 0x43B7
    ctx->pc = 0x4a7244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17335 << 16));
    // 0x4a7248: 0xffa70000  sd          $a3, 0x0($sp)
    ctx->pc = 0x4a7248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 7));
    // 0x4a724c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x4a724cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x4a7250: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x4a7250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
    // 0x4a7254: 0x3c0242ac  lui         $v0, 0x42AC
    ctx->pc = 0x4a7254u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17068 << 16));
    // 0x4a7258: 0xffa30010  sd          $v1, 0x10($sp)
    ctx->pc = 0x4a7258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 3));
    // 0x4a725c: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x4a725cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x4a7260: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4a7260u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x4a7264: 0x8c470eb8  lw          $a3, 0xEB8($v0)
    ctx->pc = 0x4a7264u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3768)));
    // 0x4a7268: 0xc129cfc  jal         func_4A73F0
    ctx->pc = 0x4A7268u;
    SET_GPR_U32(ctx, 31, 0x4A7270u);
    ctx->pc = 0x4A726Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A7268u;
            // 0x4a726c: 0x240b0008  addiu       $t3, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A73F0u;
    if (runtime->hasFunction(0x4A73F0u)) {
        auto targetFn = runtime->lookupFunction(0x4A73F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A7270u; }
        if (ctx->pc != 0x4A7270u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A73F0_0x4a73f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A7270u; }
        if (ctx->pc != 0x4A7270u) { return; }
    }
    ctx->pc = 0x4A7270u;
label_4a7270:
    // 0x4a7270: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x4A7270u;
    {
        const bool branch_taken_0x4a7270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a7270) {
            ctx->pc = 0x4A72C0u;
            goto label_4a72c0;
        }
    }
    ctx->pc = 0x4A7278u;
label_4a7278:
    // 0x4a7278: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x4a7278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x4a727c: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x4a727cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x4a7280: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x4a7280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x4a7284: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4a7284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4a7288: 0x3c0243b7  lui         $v0, 0x43B7
    ctx->pc = 0x4a7288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17335 << 16));
    // 0x4a728c: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x4a728cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
    // 0x4a7290: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x4a7290u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x4a7294: 0xffa30010  sd          $v1, 0x10($sp)
    ctx->pc = 0x4a7294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 3));
    // 0x4a7298: 0x3c0242ac  lui         $v0, 0x42AC
    ctx->pc = 0x4a7298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17068 << 16));
    // 0x4a729c: 0x24a5f790  addiu       $a1, $a1, -0x870
    ctx->pc = 0x4a729cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965136));
    // 0x4a72a0: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x4a72a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x4a72a4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x4a72a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4a72a8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4a72a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x4a72ac: 0x2409000b  addiu       $t1, $zero, 0xB
    ctx->pc = 0x4a72acu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x4a72b0: 0x8c470eb8  lw          $a3, 0xEB8($v0)
    ctx->pc = 0x4a72b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3768)));
    // 0x4a72b4: 0x240a000c  addiu       $t2, $zero, 0xC
    ctx->pc = 0x4a72b4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x4a72b8: 0xc129cfc  jal         func_4A73F0
    ctx->pc = 0x4A72B8u;
    SET_GPR_U32(ctx, 31, 0x4A72C0u);
    ctx->pc = 0x4A72BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A72B8u;
            // 0x4a72bc: 0x240b000d  addiu       $t3, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A73F0u;
    if (runtime->hasFunction(0x4A73F0u)) {
        auto targetFn = runtime->lookupFunction(0x4A73F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A72C0u; }
        if (ctx->pc != 0x4A72C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A73F0_0x4a73f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A72C0u; }
        if (ctx->pc != 0x4A72C0u) { return; }
    }
    ctx->pc = 0x4A72C0u;
label_4a72c0:
    // 0x4a72c0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4a72c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4a72c4:
    // 0x4a72c4: 0x3e00008  jr          $ra
    ctx->pc = 0x4A72C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A72C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A72C4u;
            // 0x4a72c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4A72CCu;
    // 0x4a72cc: 0x0  nop
    ctx->pc = 0x4a72ccu;
    // NOP
}
